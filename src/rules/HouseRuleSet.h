#pragma once

#include "rules/RuleSet.h"

namespace Bawo {

class HouseRuleSet : public RuleSet {
public:
    HouseRuleSet();

    GameType gameType() const override;
    QVector<int> initialSeedLayout() const override;
    int maxHouseSeeds() const override;
    int maxTrapSeeds() const override;
    int totalSeedsPerPlayer() const override;
    bool hasTrapPhase() const override;
    bool hasDefensePhase() const override;
    bool hasMatchPhase() const override;
};

}
