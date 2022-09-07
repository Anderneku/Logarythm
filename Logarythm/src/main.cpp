#include "example.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    example w;
    w.show();

    return app.exec();
}

