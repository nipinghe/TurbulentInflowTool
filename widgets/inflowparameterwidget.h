#ifndef INFLOWPARAMETERWIDGET_H
#define INFLOWPARAMETERWIDGET_H

#include <QFrame>

namespace Ui {
class InflowParameterWidget;
}

class InflowParameterWidget : public QFrame
{
    Q_OBJECT

public:
    explicit InflowParameterWidget(QWidget *parent = nullptr);
    ~InflowParameterWidget();
    void selectSourceLocation(void);

private slots:
    void on_btnNormalize_clicked();
    void on_PHI21_valueChanged(double arg1);
    void on_PHI31_valueChanged(double arg1);
    void on_PHI32_valueChanged(double arg1);
    void setDefaultParameters();
    void on_resetButton_clicked();
    void on_comboBox_currentIndexChanged(int index);
    void on_sourceLocateBtn_clicked();

private:
    void setLinearLaminar(void);
    void setExponentialLaminar(void);
    void setLinearTurbulent(void);
    void setExponentialTurbulent(void);

    Ui::InflowParameterWidget *ui;
};

#endif // INFLOWPARAMETERWIDGET_H
