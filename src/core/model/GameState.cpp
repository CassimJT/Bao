#include "core/model/GameState.h"

namespace Bawo {

GameState::GameState()
    : m_currentPlayer(0),
      m_moveCount(0),
      m_matchState(MatchState::Waiting),
      m_phase(GamePhase::Setup),
      m_gameType(GameType::House),
      m_winner(-1),
      m_houseSeedCount{0, 0},
      m_trapSeedCount{0, 0},
      m_reserveSeedCount{0, 0}
{
}

Board &GameState::board() {
    return m_board;
}
const Board &GameState::board() const {
    return m_board;
}
int GameState::currentPlayer() const {
    return m_currentPlayer;
}
int GameState::moveCount() const {
    return m_moveCount;
}
MatchState GameState::matchState() const {
    return m_matchState;
}
GamePhase GameState::phase() const {
    return m_phase;
}
GameType GameState::gameType() const {
    return m_gameType;
}
int GameState::winner() const {
    return m_winner;
}
bool GameState::isGameOver() const {
    return false;
}
int GameState::houseSeeds(int player) const {
    Q_UNUSED(player); return 0;
}
int GameState::trapSeeds(int player) const {
    Q_UNUSED(player); return 0;
}
int GameState::reserveSeeds(int player) const {
    Q_UNUSED(player); return 0;
}
void GameState::setPhase(GamePhase phase) {
    m_phase = phase;
}
void GameState::setCurrentPlayer(int player) {
    m_currentPlayer = player;
}
void GameState::setGameType(GameType gameType) {
    m_gameType = gameType;
}
void GameState::setWinner(int winner) {
    m_winner = winner;
}
void GameState::incrementMoveCount() {

}
bool GameState::buildHouse(int player, int count) {
    Q_UNUSED(player); Q_UNUSED(count); return false;
}
bool GameState::buildTrap(int player, int count) {
    Q_UNUSED(player); Q_UNUSED(count); return false;
}

}
