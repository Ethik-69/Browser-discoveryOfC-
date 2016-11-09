#include <QToolButton>
#include "extendedQToolButton.h"
#include "main.cpp"

extendedQToolButton::extendedQToolButton() {
};

void extendedQToolButton::setUrl(QString givenUrl) {
    url = givenUrl;
};

QString extendedQToolButton::getUrl() {
    return url;
};

void extendedQToolButton::whenClicked() {
    mainWindow->newOnglet(url);
};
