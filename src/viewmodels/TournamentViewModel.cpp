#include "viewmodels/TournamentViewModel.h"

namespace Bawo {

TournamentViewModel::TournamentViewModel(QObject *parent)
    : QObject(parent),
      m_controller(nullptr)
{
}

void TournamentViewModel::startTournament(GameType gameType) {
    Q_UNUSED(gameType);
}
void TournamentViewModel::joinTournament(const QString &teamName) {
    Q_UNUSED(teamName);
}
QVariant TournamentViewModel::currentBracket() const {
    return {};
}
QVariant TournamentViewModel::leaderboard() const {
    return {};
}
GameType TournamentViewModel::tournamentGameType() const {
    return GameType::House;
}
}
