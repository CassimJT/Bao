#include "players/LocalPlayer.h"

namespace Bawo {

LocalPlayer::LocalPlayer() = default;
LocalPlayer::LocalPlayer(QString id, QString name)
    : Player(std::move(id), std::move(name), PlayerType::Local)
{
}

void LocalPlayer::startTurn(const GameState &state) {
    Q_UNUSED(state);
}

}
