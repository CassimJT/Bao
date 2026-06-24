#pragma once

#include <QString>

namespace Bawo {

class BoardStyle {
public:
    BoardStyle();
    BoardStyle(QString id, QString name, QString assetPath);

    QString id() const;
    QString name() const;
    QString texturePath() const;
    QString woodType() const;
    bool isPurchased() const;
    float price() const;

    void setPurchased(bool isPurchased);

private:
    QString m_id;
    QString m_name;
    QString m_texturePath;
    QString m_woodType;
    bool m_isPurchased;
    float m_price;
};

}
