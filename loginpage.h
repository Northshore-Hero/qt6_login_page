//
// Created by danmattila on 5/24/22.
//

#ifndef QT6_LOGINPAGE_LOGINPAGE_H
#define QT6_LOGINPAGE_LOGINPAGE_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class loginpage; }
QT_END_NAMESPACE

class loginpage : public QMainWindow {
Q_OBJECT

public:
    explicit loginpage(QWidget *parent = nullptr);

    ~loginpage() override;

private:
    Ui::loginpage *ui;
};


#endif //QT6_LOGINPAGE_LOGINPAGE_H
