#include <QApplication>
#include <QTranslator>
#include<QMainWindow>
#include "MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString locale = QLocale::system().name();

    QTranslator translator;
    if(translator.load(QString("../translations/openImu_") + locale))
    {
            a.installTranslator(&translator);
    }

    //specify a new font.
    QFont newFont("Helvetica",12, QFont::Light, false);
    //set font of application
    QApplication::setFont(newFont);

    MainWindow window ;
    window.showFullScreen();
    return a.exec();
}



