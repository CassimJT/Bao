#pragma once

#include "core/model/GameState.h"
#include "core/enums/GameType.h"

#include <QByteArray>

namespace Bawo {

class MatchController;

class GameStateSerializer {
public:
    GameStateSerializer();

    QByteArray serialize(const GameState &state) const;
    GameState deserialize(const QByteArray &data) const;
    QByteArray serializeMatch(const MatchController &matchController) const;
    QByteArray serializeGameType(GameType gameType) const;
    GameType deserializeGameType(const QByteArray &data) const;
};

}
