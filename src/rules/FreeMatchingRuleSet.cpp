#include "rules/FreeMatchingRuleSet.h"

namespace Bawo {

FreeMatchingRuleSet::FreeMatchingRuleSet() = default;
GameType FreeMatchingRuleSet::gameType() const {
    return GameType::FreeMatching;
}
QVector<int> FreeMatchingRuleSet::initialSeedLayout() const {
    return {};
}
int FreeMatchingRuleSet::maxHouseSeeds() const {
    return 0;
}
bool FreeMatchingRuleSet::hasTrapPhase() const {
    return false;
}
bool FreeMatchingRuleSet::hasDefensePhase() const {
    return false;
}
bool FreeMatchingRuleSet::hasMatchPhase() const {
    return false;
}

}
