#pragma once

#include "tournament/TournamentMatch.h"

#include <QVector>

namespace Bawo {

class TournamentBracket {
public:
    TournamentBracket();

    void generate(const QVector<Team> &teams);
    void update();
    QVector<TournamentMatch *> currentMatches() const;

private:
    QVector<QVector<TournamentMatch *>> m_rounds;
};

}
