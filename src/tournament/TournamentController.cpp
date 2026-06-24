#include "tournament/TournamentController.h"

namespace Bawo {

TournamentController::TournamentController(QObject *parent)
    : QObject(parent),
      m_state(TournamentState::Created),
      m_currentRound(0),
      m_bracket(nullptr),
      m_tournamentGameType(GameType::House)
{
}

TournamentState TournamentController::state() const {
    return m_state;
}
void TournamentController::createTournament(const QVector<Team> &teams, GameType gameType) {
    Q_UNUSED(teams); Q_UNUSED(gameType);
}
void TournamentController::startTournament() {

}
void TournamentController::advanceRound() {
}
void TournamentController::finishTournament() {
}
void TournamentController::registerMatch(TournamentMatch *match) {
    if (match) {
        m_matches.append(match);
    }
}
QMap<QString, int> TournamentController::currentLeaderboard() const {
    return {};
}
GameType TournamentController::tournamentGameType() const {
    return m_tournamentGameType;
}
}
