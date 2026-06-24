#include "players/ai/BoardEvaluator.h"

namespace Bawo {

BoardEvaluator::BoardEvaluator() = default;
int BoardEvaluator::evaluate(const GameState &state, int playerIndex) const {
    Q_UNUSED(state); Q_UNUSED(playerIndex); return 0;
}
int BoardEvaluator::evaluateSeeds(const GameState &state, int playerIndex) const {
    Q_UNUSED(state); Q_UNUSED(playerIndex); return 0;
}
int BoardEvaluator::evaluateTargs(const GameState &state, int playerIndex) const {
    Q_UNUSED(state); Q_UNUSED(playerIndex); return 0;
}
int BoardEvaluator::evaluateHouseProtection(const GameState &state, int playerIndex) const {
    Q_UNUSED(state); Q_UNUSED(playerIndex); return 0;
}
int BoardEvaluator::evaluateFrontLine(const GameState &state, int playerIndex) const {
    Q_UNUSED(state); Q_UNUSED(playerIndex); return 0;
}
int BoardEvaluator::evaluateForGameType(const GameState &state, int playerIndex, GameType gameType) const {
    Q_UNUSED(state); Q_UNUSED(playerIndex); Q_UNUSED(gameType); return 0;
}

}
