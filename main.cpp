#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QTcpSocket>

int main(int argc, char *argv[])
{
    //созд. экземп. класса QApplication
    QApplication a(argc, argv);

    //созд. экземп. главного окна
    MainWindow w;
    w.show();

    // Созд экземп базы данных
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    // Созд экземп сокета для работы с сетью
        QTcpSocket socket;

    //вызывается метод exec();бесаонечный цикл обраб событий
    //заканчивает работу когда закр послед окно приложения
    return a.exec();
}
