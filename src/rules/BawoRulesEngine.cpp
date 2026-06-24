#include "rules/BawoRulesEngine.h"

namespace Bawo {

BawoRulesEngine::BawoRulesEngine(QObject *parent)
    : QObject(parent),
      m_gameType(GameType::House)
{
}

void BawoRulesEngine::setGameType(GameType gameType) {
    m_gameType = gameType;
}
bool BawoRulesEngine::isValidMove(const GameState &state, const Move &move) const {
    Q_UNUSED(state); Q_UNUSED(move); return false;
}
QVector<Move> BawoRulesEngine::generateLegalMoves(const GameState &state) const {
    Q_UNUSED(state); return {};
}
MoveResult BawoRulesEngine::applyMove(GameState &state, const Move &move) {
    Q_UNUSED(state); Q_UNUSED(move); return {};
}
bool BawoRulesEngine::checkVictory(const GameState &state) const {
    Q_UNUSED(state); return false;
}
bool BawoRulesEngine::canEat(const GameState &state) const {
    Q_UNUSED(state); return false;
}
bool BawoRulesEngine::hasTarg(const GameState &state, int player) const {
    Q_UNUSED(state); Q_UNUSED(player); return false;
}
void BawoRulesEngine::distributeSeeds(Board &board, const Move &move) {
    Q_UNUSED(board); Q_UNUSED(move);
}
void BawoRulesEngine::captureSeeds(Board &board, int pitIndex, Direction direction)
{ Q_UNUSED(board); Q_UNUSED(pitIndex); Q_UNUSED(direction);
}
Direction BawoRulesEngine::reverseDirectionAtSpecialPositions(int pitIndex, Direction direction) {
    Q_UNUSED(pitIndex); return direction;
}
void BawoRulesEngine::switchTurn(GameState &state) {
    Q_UNUSED(state);
}
void BawoRulesEngine::handleEatAtPosition2or7(Board &board, int pitIndex, Direction direction) {
    Q_UNUSED(board); Q_UNUSED(pitIndex); Q_UNUSED(direction);
}
bool BawoRulesEngine::handleHouseRules(GameState &state, const Move &move) {
    Q_UNUSED(state); Q_UNUSED(move); return false;
}
bool BawoRulesEngine::handleFreeMatchingRules(GameState &state, const Move &move) {
    Q_UNUSED(state); Q_UNUSED(move); return false;
}

}
