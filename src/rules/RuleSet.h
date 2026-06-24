#pragma once

#include "core/enums/GameType.h"

#include <QString>
#include <QVector>

namespace Bawo {

class RuleSet {
public:
    RuleSet();
    virtual ~RuleSet();

    virtual QString name() const;
    virtual GameType gameType() const = 0;
    virtual QVector<int> initialSeedLayout() const = 0;
    virtual bool isCaptureAllowed() const;
    virtual bool allowsReverseMove() const;
    virtual bool hasHousePit() const;
    virtual int housePitIndex() const;
    virtual int maxHouseSeeds() const = 0;
    virtual int maxTrapSeeds() const;
    virtual int totalSeedsPerPlayer() const;
    virtual bool hasTrapPhase() const = 0;
    virtual bool hasDefensePhase() const = 0;
    virtual bool hasMatchPhase() const = 0;
};

}
