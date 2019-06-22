#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QEventLoop>
#include <QtDebug>

using namespace std;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_obsXValue_valueChanged(double arg1);

    void on_obsYValue_valueChanged(double arg1);

    void on_obsZValue_valueChanged(double arg1);

    void on_lightingXValue_valueChanged(double arg1);

    void on_lightingYValue_valueChanged(double arg1);

    void on_lightingZValue_valueChanged(double arg1);

    void on_xMinValue_valueChanged(double arg1);

    void on_xMaxValue_valueChanged(double arg1);

    void on_yMinValue_valueChanged(double arg1);

    void on_yMaxValue_valueChanged(double arg1);

    void on_nearValue_valueChanged(double arg1);

    void on_farValue_valueChanged(double arg1);

    void on_fovyValue_valueChanged(double arg1);

    void on_isPerspective_stateChanged(int arg1);

    void on_drawingRValue_valueChanged(double arg1);

    void on_drawingGValue_valueChanged(double arg1);

    void on_drawingBValue_valueChanged(double arg1);

    void on_drawingZValue_valueChanged(double arg1);

    void on_drawingCheckBox_stateChanged(int arg1);

    void on_undo_clicked();

    void on_confirm_clicked();

    void on_toningValue_currentIndexChanged(int index);

    void on_clear_clicked();


    void on_reset_clicked();

private:
    Ui::MainWindow *ui;

private slots:
    void updateStatusBar (QString message);
    void clearStatusBar ();
};

#endif // MAINWINDOW_H
