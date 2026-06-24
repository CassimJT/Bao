#include "monetization/SeedStyle.h"

namespace Bawo {

SeedStyle::SeedStyle()
    : m_isPurchased(false),
      m_price(0.0F)
{
}

SeedStyle::SeedStyle(QString id, QString name, QString assetPath)
    : m_id(std::move(id)),
    m_name(std::move(name)),
    m_texturePath(std::move(assetPath)),
    m_isPurchased(false),
    m_price(0.0F)
{
}

QString SeedStyle::id() const {
    return m_id;
}
QString SeedStyle::name() const {
    return m_name;
}
QString SeedStyle::texturePath() const {
    return m_texturePath;
}
bool SeedStyle::isPurchased() const {
    return m_isPurchased;
}
float SeedStyle::price() const {
    return m_price;
}
void SeedStyle::setPurchased(bool isPurchased) {
    m_isPurchased = isPurchased;
}

}
