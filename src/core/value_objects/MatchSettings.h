#pragma once

#include "core/enums/AIDifficulty.h"
#include "core/enums/GameType.h"

namespace Bawo {

class RuleSet;

class MatchSettings {
public:
    MatchSettings();

    GameType gameType() const;
    RuleSet *ruleSet() const;
    AIDifficulty aiDifficulty() const;
    bool enableUndo() const;
    int timeLimitPerMove() const;

    void setGameType(GameType gameType);
    void setRuleSet(RuleSet *ruleSet);
    void setAIDifficulty(AIDifficulty difficulty);
    void setEnableUndo(bool enableUndo);
    void setTimeLimitPerMove(int timeLimitPerMove);

private:
    GameType m_gameType;
    RuleSet *m_ruleSet;
    AIDifficulty m_aiDifficulty;
    bool m_enableUndo;
    int m_timeLimitPerMove;
};

}
