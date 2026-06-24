#pragma once

#include <QString>

namespace Bawo {

class SeedStyle {
public:
    SeedStyle();
    SeedStyle(QString id, QString name, QString assetPath);

    QString id() const;
    QString name() const;
    QString texturePath() const;
    bool isPurchased() const;
    float price() const;

    void setPurchased(bool isPurchased);

private:
    QString m_id;
    QString m_name;
    QString m_texturePath;
    bool m_isPurchased;
    float m_price;
};

}
