#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QFile>
#include <QStandardPaths>
#include <QMessageBox>

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
    void on_bt_Add_clicked();

    void on_bt_Remove_clicked();

    void on_bt_Rm_all_clicked();


private:
    Ui::MainWindow *ui;
    QString path = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "\\toDoFile.txt";
};
#endif // MAINWINDOW_H
