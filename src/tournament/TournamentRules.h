#pragma once

#include <QString>
#include <QVector>

#include "core/enums/GameType.h"

namespace Bawo {

class RuleSet;

class TournamentRules {
public:
    TournamentRules();

    int maxPlayers() const;
    RuleSet *ruleSet() const;
    int pointsPerWin() const;
    int pointsPerDraw() const;
    QVector<GameType> allowedGameTypes() const;

private:
    int m_maxPlayers;
    RuleSet *m_ruleSet;
    int m_pointsPerWin;
    int m_pointsPerDraw;
    QVector<GameType> m_allowedGameTypes;
};

}
