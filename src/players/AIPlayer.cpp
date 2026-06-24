#include "players/AIPlayer.h"

namespace Bawo {

AIPlayer::AIPlayer()
    : m_difficulty(AIDifficulty::Easy),
      m_evaluator(nullptr)
{
}

AIPlayer::AIPlayer(QString id, QString name, AIDifficulty difficulty)
    : Player(std::move(id), std::move(name), PlayerType::AI),
      m_difficulty(difficulty),
      m_evaluator(nullptr)
{
}

void AIPlayer::setDifficulty(AIDifficulty difficulty) {
    m_difficulty = difficulty;
}
int AIPlayer::evaluateBoard(const GameState &state) const {
    Q_UNUSED(state); return 0;
}
void AIPlayer::calculateMove(const GameState &state) {
    Q_UNUSED(state);
}
int AIPlayer::minimax(const GameState &state, int depth, bool isMaximizing) const {
    Q_UNUSED(state); Q_UNUSED(depth); Q_UNUSED(isMaximizing); return 0;
}
}
