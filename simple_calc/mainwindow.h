#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_add_clicked();

    void on_btn_sub_clicked();

    void on_btn_mult_clicked();

    void on_btn_div_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
