#ifndef PRACTICEMAIN_H
#define PRACTICEMAIN_H

#include <QMainWindow>

namespace Ui {
class PracticeMain;
}

class PracticeMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit PracticeMain(QWidget *parent = nullptr);
    ~PracticeMain();

private slots:
    void on_testButton_clicked();

private:
    Ui::PracticeMain *ui;
};

#endif // PRACTICEMAIN_H
