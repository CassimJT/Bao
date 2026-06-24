#pragma once

#include "rules/RuleSet.h"

namespace Bawo {

class FreeMatchingRuleSet : public RuleSet {
public:
    FreeMatchingRuleSet();

    GameType gameType() const override;
    QVector<int> initialSeedLayout() const override;
    int maxHouseSeeds() const override;
    bool hasTrapPhase() const override;
    bool hasDefensePhase() const override;
    bool hasMatchPhase() const override;
};

}
