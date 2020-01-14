#include "practicemain.h"
#include "ui_practicemain.h"

PracticeMain::PracticeMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PracticeMain)
{
    ui->setupUi(this);
}

PracticeMain::~PracticeMain()
{
    delete ui;
}

void PracticeMain::on_testButton_clicked()
{
    ui->testLabel->setText("Hello World");
}
