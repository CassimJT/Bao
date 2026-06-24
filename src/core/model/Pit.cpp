#include "core/model/Pit.h"

#include <QtGlobal>

namespace Bawo {

Pit::Pit()
    : m_seedCount(0), m_isHouse(false), m_isTrap(false), m_isReserve(false)
{
}

Pit::Pit(int seedCount)
    : m_seedCount(seedCount), m_isHouse(false), m_isTrap(false), m_isReserve(false)
{
}

int Pit::seedCount() const {
    return m_seedCount;
}
void Pit::addSeeds(int seedCount) {
    m_seedCount += seedCount;
}
void Pit::removeSeeds(int seedCount) {
    Q_UNUSED(seedCount);
}
int Pit::removeAllSeeds() {
    return 0;
}
bool Pit::isEmpty() const {
    return false;
}
bool Pit::isTarg() const {
    return false;
}
bool Pit::isHouse() const {
    return m_isHouse;
}
bool Pit::isTrap() const {
    return m_isTrap;
}
void Pit::setHouse(bool isHouse) {
    m_isHouse = isHouse;
}
void Pit::setTrap(bool isTrap) {
    m_isTrap = isTrap;
}

}
