#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_suma_clicked();

    void on_resta_clicked();

    void on_mult_clicked();

    void on_div_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
