#include "core/value_objects/MatchSettings.h"

namespace Bawo {

MatchSettings::MatchSettings()
    : m_gameType(GameType::House),
      m_ruleSet(nullptr),
      m_aiDifficulty(AIDifficulty::Easy),
      m_enableUndo(false),
      m_timeLimitPerMove(0)
{
}

GameType MatchSettings::gameType() const {
    return m_gameType;
}
RuleSet *MatchSettings::ruleSet() const {
    return m_ruleSet;
}
AIDifficulty MatchSettings::aiDifficulty() const {
    return m_aiDifficulty;
}
bool MatchSettings::enableUndo() const {
    return m_enableUndo;
}
int MatchSettings::timeLimitPerMove() const {
    return m_timeLimitPerMove;
}
void MatchSettings::setGameType(GameType gameType) {
    m_gameType = gameType;
}
void MatchSettings::setRuleSet(RuleSet *ruleSet) {
    m_ruleSet = ruleSet;
}
void MatchSettings::setAIDifficulty(AIDifficulty difficulty) {
    m_aiDifficulty = difficulty;
}
void MatchSettings::setEnableUndo(bool enableUndo) {
    m_enableUndo = enableUndo;
}
void MatchSettings::setTimeLimitPerMove(int timeLimitPerMove) {
    m_timeLimitPerMove = timeLimitPerMove;
}

}
