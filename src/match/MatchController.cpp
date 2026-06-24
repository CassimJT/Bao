#include "match/MatchController.h"

namespace Bawo {

MatchController::MatchController(QObject *parent)
    :QObject(parent),
      m_playerOne(nullptr),
      m_playerTwo(nullptr),
      m_timer(nullptr)
{

}

void MatchController::startMatch(GameType gameType) {
    Q_UNUSED(gameType);
}
void MatchController::pauseMatch() {

}
void MatchController::resumeMatch() {
}
void MatchController::resetMatch() {

}
MoveResult MatchController::submitMove(const Move &move) {
    Q_UNUSED(move); return {};
}
Player *MatchController::currentPlayer() const {
    return nullptr;
}
GameState &MatchController::state() {
    return m_state;
}
QVector<Move> MatchController::moveHistory() const {
    return m_moveHistory;
}
GameType MatchController::currentGameType() const {
    return GameType::House;
}

}