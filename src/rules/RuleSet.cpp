#include "rules/RuleSet.h"

namespace Bawo {

RuleSet::RuleSet() = default;
RuleSet::~RuleSet() = default;
QString RuleSet::name() const {
    return {};
}
bool RuleSet::isCaptureAllowed() const {
    return false;
}
bool RuleSet::allowsReverseMove() const {
    return false;
}
bool RuleSet::hasHousePit() const {
    return false;
}
int RuleSet::housePitIndex() const {
    return -1;
}
int RuleSet::maxTrapSeeds() const {
    return 0;
}
int RuleSet::totalSeedsPerPlayer() const {
    return 0;
}

}
