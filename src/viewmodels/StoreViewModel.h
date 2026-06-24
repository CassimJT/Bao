#pragma once

#include "monetization/IAPManager.h"
#include "monetization/StyleManager.h"

#include <QVariantList>

namespace Bawo {

class StoreViewModel {
public:
    StoreViewModel();

    void purchaseSeedStyle(const QString &styleId);
    void purchaseBoardStyle(const QString &styleId);
    void watchAdForMove();
    QVariantList seedStyles() const;
    QVariantList boardStyles() const;

    void purchaseSuccessful();
    void purchaseFailed(const QString &message);
    void adCompleted();

private:
    IAPManager *m_iapManager;
    StyleManager *m_styleManager;
};

}
