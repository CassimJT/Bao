#include "players/Player.h"

namespace Bawo {

Player::Player(QObject *parent)
    : QObject(parent),
      m_type(PlayerType::Local),
      m_purchasedSpecialMoves(0)
{
}

Player::Player(QString id, QString name, PlayerType type, QObject *parent)
    : QObject(parent), m_id(std::move(id)), m_name(std::move(name)), m_type(type), m_purchasedSpecialMoves(0)
{
}

Player::~Player() = default;
QString Player::id() const {
    return m_id;
}
QString Player::name() const {
    return m_name;
}
PlayerType Player::type() const {
    return m_type;
}
int Player::purchasedSpecialMoves() const {
    return m_purchasedSpecialMoves;
}
bool Player::useSpecialMove() {
    return false;
}
void Player::addSpecialMove() {

}
void Player::startTurn(const GameState &state) {
    Q_UNUSED(state);
}
}
