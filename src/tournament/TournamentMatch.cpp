#include "tournament/TournamentMatch.h"

namespace Bawo {

TournamentMatch::TournamentMatch(QObject *parent)
    : QObject(parent),
      m_match(nullptr),
      m_winner(nullptr),
      m_gameType(GameType::House)
{
}

void TournamentMatch::start() { }
MoveResult TournamentMatch::result() const {
    return {};
}
Team *TournamentMatch::winner() const {
    return m_winner;
}
Team TournamentMatch::teamA() const {
    return m_teamA;
}
Team TournamentMatch::teamB() const {
    return m_teamB;
}
GameType TournamentMatch::gameType() const {
    return m_gameType;
}
}
