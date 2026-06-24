#pragma once

#include "core/enums/GameType.h"
#include "core/model/GameState.h"

namespace Bawo {

class BoardEvaluator {
public:
    BoardEvaluator();

    int evaluate(const GameState &state, int playerIndex) const;
    int evaluateSeeds(const GameState &state, int playerIndex) const;
    int evaluateTargs(const GameState &state, int playerIndex) const;
    int evaluateHouseProtection(const GameState &state, int playerIndex) const;
    int evaluateFrontLine(const GameState &state, int playerIndex) const;
    int evaluateForGameType(const GameState &state, int playerIndex, GameType gameType) const;
};

}
