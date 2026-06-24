#pragma once

#include "players/Player.h"

namespace Bawo {

class LocalPlayer : public Player {
public:
    LocalPlayer();
    LocalPlayer(QString id, QString name);

    void startTurn(const GameState &state) override;
};

}
