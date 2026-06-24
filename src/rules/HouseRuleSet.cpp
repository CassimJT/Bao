#include "rules/HouseRuleSet.h"

namespace Bawo {

HouseRuleSet::HouseRuleSet() = default;
GameType HouseRuleSet::gameType() const {
    return GameType::House;
}
QVector<int> HouseRuleSet::initialSeedLayout() const {
    return {};
}
int HouseRuleSet::maxHouseSeeds() const {
    return 0;
}
int HouseRuleSet::maxTrapSeeds() const {
    return 0;
}
int HouseRuleSet::totalSeedsPerPlayer() const {
    return 0;
}
bool HouseRuleSet::hasTrapPhase() const {
    return false;
}
bool HouseRuleSet::hasDefensePhase() const {
    return false;
}
bool HouseRuleSet::hasMatchPhase() const {
    return false;
}

}
