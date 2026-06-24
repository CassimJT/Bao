#pragma once

#include <QObject>
#include <QString>

namespace Bawo {

class AdsManager : public QObject {
    Q_OBJECT
public:
    AdsManager(QObject *parent = nullptr);

    void showInterstitialAd();
    void showRewardedAd();
    bool isAdReady() const;
signals:
    void adLoaded();
    void adFailedToLoad();
    void adOpened();
    void adClosed();
    void rewardEarned();
};

}
