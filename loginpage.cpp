//
// Created by danmattila on 5/24/22.
//

// You may need to build the project (run Qt uic code generator) to get "ui_loginpage.h" resolved

#include "loginpage.h"
#include "ui_loginpage.h"


loginpage::loginpage(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::loginpage) {
    ui->setupUi(this);
}

loginpage::~loginpage() {
    delete ui;
}
