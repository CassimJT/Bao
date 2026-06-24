#include "core/serialization/GameStateSerializer.h"

namespace Bawo {

GameStateSerializer::GameStateSerializer() = default;
QByteArray GameStateSerializer::serialize(const GameState &state) const {
    Q_UNUSED(state); return {};
}
GameState GameStateSerializer::deserialize(const QByteArray &data) const {
    Q_UNUSED(data); return {};
}
QByteArray GameStateSerializer::serializeMatch(const MatchController &matchController) const {
    Q_UNUSED(matchController); return {};
}
QByteArray GameStateSerializer::serializeGameType(GameType gameType) const {
    Q_UNUSED(gameType); return {};
}
GameType GameStateSerializer::deserializeGameType(const QByteArray &data) const {
    Q_UNUSED(data); return GameType::House;
}

}
