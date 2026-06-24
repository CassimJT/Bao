#pragma once

#include "core/model/GameState.h"
#include "core/value_objects/Move.h"
#include "core/value_objects/MoveResult.h"

#include <QObject>

namespace Bawo {

class BawoRulesEngine : public QObject {
    Q_OBJECT
public:
    BawoRulesEngine(QObject *parent = nullptr);

    void setGameType(GameType gameType);
    bool isValidMove(const GameState &state, const Move &move) const;
    QVector<Move> generateLegalMoves(const GameState &state) const;
    MoveResult applyMove(GameState &state, const Move &move);
    bool checkVictory(const GameState &state) const;
    bool canEat(const GameState &state) const;
    bool hasTarg(const GameState &state, int player) const;
signals:
    void phaseChanged(Bawo::GamePhase phase);
    void captureHappened(int player, int pitIndex);

private:
    void distributeSeeds(Board &board, const Move &move);
    void captureSeeds(Board &board, int pitIndex, Direction direction);
    Direction reverseDirectionAtSpecialPositions(int pitIndex, Direction direction);
    void switchTurn(GameState &state);
    void handleEatAtPosition2or7(Board &board, int pitIndex, Direction direction);
    bool handleHouseRules(GameState &state, const Move &move);
    bool handleFreeMatchingRules(GameState &state, const Move &move);

    GameType m_gameType;
};

}
