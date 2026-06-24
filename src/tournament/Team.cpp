#include "tournament/Team.h"

namespace Bawo {

Team::Team()
    : m_points(0)
{
}

QString Team::id() const {
    return m_id;
}
QString Team::name() const {
    return m_name;
}
QVector<Player *> Team::players() const {
    return m_players;
}
int Team::points() const {
    return m_points;
}
void Team::setName(const QString &name) {
    m_name = name;
}
void Team::addPlayer(Player *player) {
    Q_UNUSED(player);
}
void Team::addPoints(int points) {
    Q_UNUSED(points);
}

}
