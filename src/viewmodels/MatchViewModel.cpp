#include "viewmodels/MatchViewModel.h"

namespace Bawo {

MatchViewModel::MatchViewModel()
    : m_controller(nullptr),
      m_styleManager(nullptr)
{
}

void MatchViewModel::createMatch(GameType gameType) {
    Q_UNUSED(gameType);
}
void MatchViewModel::makeMove(int pitIndex, Direction direction) {
    Q_UNUSED(pitIndex); Q_UNUSED(direction);
}
QVariantList MatchViewModel::boardState() const {
    return {};
}
QString MatchViewModel::currentPlayerName() const {
    return {};
}
bool MatchViewModel::isGameOver() const {
    return false;
}
GamePhase MatchViewModel::currentPhase() const {
    return GamePhase::Setup;
}
GameType MatchViewModel::currentGameType() const {
    return GameType::House;
}
bool MatchViewModel::useSpecialMove() {
    return false;
}
QVector<GameType> MatchViewModel::availableGameTypes() const {
    return {};
}
void MatchViewModel::boardChanged() {
}
void MatchViewModel::matchEnded(const QString &winnerName) {
    Q_UNUSED(winnerName);
}
void MatchViewModel::errorOccurred(const QString &error) {
    Q_UNUSED(error);
}
void MatchViewModel::phaseChanged(const QString &phase) {
    Q_UNUSED(phase);
}
void MatchViewModel::gameTypeChanged(GameType gameType) {
    Q_UNUSED(gameType);
}
void MatchViewModel::onStateChanged(const GameState &state) {
    Q_UNUSED(state);
}
void MatchViewModel::onMoveApplied(const Move &move, const MoveResult &result) {
    Q_UNUSED(move); Q_UNUSED(result);
}
void MatchViewModel::onPhaseChanged(GamePhase phase) {
    Q_UNUSED(phase);
}

}
