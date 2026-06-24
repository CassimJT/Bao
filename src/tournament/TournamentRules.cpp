#include "tournament/TournamentRules.h"

namespace Bawo {

TournamentRules::TournamentRules()
    : m_maxPlayers(0),
      m_ruleSet(nullptr),
      m_pointsPerWin(0),
      m_pointsPerDraw(0)
{
}

int TournamentRules::maxPlayers() const {
    return m_maxPlayers;
}
RuleSet *TournamentRules::ruleSet() const {
    return m_ruleSet;
}
int TournamentRules::pointsPerWin() const {
    return m_pointsPerWin;
}
int TournamentRules::pointsPerDraw() const {
    return m_pointsPerDraw;
}
QVector<GameType> TournamentRules::allowedGameTypes() const {
    return m_allowedGameTypes;
}

}
