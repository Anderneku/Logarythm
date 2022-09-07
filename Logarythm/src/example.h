#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QMainWindow>
#include <QScopedPointer>

namespace Ui {
class example;
}

class example : public QMainWindow
{
    Q_OBJECT

public:
    explicit example(QWidget *parent = nullptr);
    ~example() override;

private:
    QScopedPointer<Ui::example> m_ui;

private slots:
    void on_clicking();
    void on_clicking2();
};

#endif // EXAMPLE_H
