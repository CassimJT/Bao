#pragma once

#include "core/model/GameState.h"
#include "core/enums/GameType.h"
#include "core/value_objects/MatchSettings.h"
#include "core/value_objects/Move.h"
#include "core/value_objects/MoveResult.h"
#include "players/Player.h"
#include "rules/BawoRulesEngine.h"
#include <QObject>
#include <QTimer>

namespace Bawo {

class MatchController : public QObject {
    Q_OBJECT
public:
    MatchController(QObject *parent = nullptr);

    void startMatch(GameType gameType);
    void pauseMatch();
    void resumeMatch();
    void resetMatch();
    MoveResult submitMove(const Move &move);
    Player *currentPlayer() const;
    GameState &state();
    QVector<Move> moveHistory() const;
    GameType currentGameType() const;

public slots:
    void onPlayerMoveReady(const Bawo::Move &move);
    void onPlayerDisconnected();
    void onTimerTimeout();

signals:
    void matchStarted();
    void matchPaused();
    void matchResumed();
    void moveApplied(const Bawo::Move &move, const Bawo::MoveResult &result);
    void turnChanged(int player);
    void invalidMove(const QString &message);
    void gameOver(int winner);
    void stateChanged(const Bawo::GameState &state);
    void phaseChanged(Bawo::GamePhase phase);
    void timeoutOccurred();
    void gameTypeChanged(Bawo::GameType gameType);

private:
    GameState m_state;
    BawoRulesEngine m_engine;
    MatchSettings m_settings;
    Player *m_playerOne;
    Player *m_playerTwo;
    QVector<Move> m_moveHistory;
    QTimer *m_timer;
};

}
