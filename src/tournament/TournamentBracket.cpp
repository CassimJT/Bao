#include "tournament/TournamentBracket.h"

namespace Bawo {

TournamentBracket::TournamentBracket() = default;
void TournamentBracket::generate(const QVector<Team> &teams) {
    Q_UNUSED(teams);
}
void TournamentBracket::update() {
}
QVector<TournamentMatch *> TournamentBracket::currentMatches() const {
    return {};
}

}
