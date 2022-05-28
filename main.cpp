#include "loginpage.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    loginpage w;
    w.setWindowIcon(QIcon("/usr/share/qt6_login_page/logo.png"));
    w.show();
    return QApplication::exec();
}
