#pragma once

#include "core/enums/GameType.h"

#include <QVector>

namespace Bawo {

class GameTypeSelectorViewModel {
public:
    GameTypeSelectorViewModel();

    void selectGameType(GameType gameType);
    GameType selectedGameType() const;
    QString getRuleDescription(GameType gameType) const;
    QString getPhaseDescription(GameType gameType) const;

    void gameTypeSelected(GameType gameType);

private:
    GameType m_selectedType;
    QVector<GameType> m_availableTypes;
};

}
