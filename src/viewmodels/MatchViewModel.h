#pragma once

#include "match/MatchController.h"
#include "monetization/StyleManager.h"

#include <QVariantList>

namespace Bawo {

class MatchViewModel {
public:
    MatchViewModel();

    void createMatch(GameType gameType);
    void makeMove(int pitIndex, Direction direction);
    QVariantList boardState() const;
    QString currentPlayerName() const;
    bool isGameOver() const;
    GamePhase currentPhase() const;
    GameType currentGameType() const;
    bool useSpecialMove();
    QVector<GameType> availableGameTypes() const;

    void boardChanged();
    void matchEnded(const QString &winnerName);
    void errorOccurred(const QString &error);
    void phaseChanged(const QString &phase);
    void gameTypeChanged(GameType gameType);

    void onStateChanged(const GameState &state);
    void onMoveApplied(const Move &move, const MoveResult &result);
    void onPhaseChanged(GamePhase phase);

private:
    MatchController *m_controller;
    StyleManager *m_styleManager;
};

}
