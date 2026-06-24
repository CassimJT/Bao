#include "monetization/BoardStyle.h"

namespace Bawo {

BoardStyle::BoardStyle()
    : m_isPurchased(false),
      m_price(0.0F)
{
}

BoardStyle::BoardStyle(QString id, QString name, QString assetPath)
    : m_id(std::move(id)),
    m_name(std::move(name)),
    m_texturePath(std::move(assetPath)),
    m_isPurchased(false),
    m_price(0.0F)
{

}

QString BoardStyle::id() const {
    return m_id;
}
QString BoardStyle::name() const {
    return m_name;
}
QString BoardStyle::texturePath() const {
    return m_texturePath;
}
QString BoardStyle::woodType() const {
    return m_woodType;
}
bool BoardStyle::isPurchased() const {
    return m_isPurchased;
}
float BoardStyle::price() const {
    return m_price;
}
void BoardStyle::setPurchased(bool isPurchased) {
    m_isPurchased = isPurchased;
}

}
