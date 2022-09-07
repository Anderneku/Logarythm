#include "example.h"
#include "ui_example.h"
#include <math.h>
#include <QLabel>
#include <QPushButton>
#include <string>
using namespace std;
example::example(QWidget *parent) : 
    QMainWindow(parent),
    m_ui(new Ui::example)
{
    m_ui->setupUi(this);
    connect(m_ui->btn, SIGNAL(clicked()), this, SLOT(on_clicking()));
    connect(m_ui->btn2, SIGNAL(clicked()), this, SLOT(on_clicking2()));
    QCursor c = QCursor(Qt::IBeamCursor);
    m_ui->enter->setCursor(c);
    setWindowIcon(QIcon("/home/bossmans/projects/example/src/bitmap.png"));
}

void example::on_clicking(){
    m_ui->display->setStyleSheet("font-size:26pt; font-weight:bold; font-family:\"Cantarell\";");
    m_ui->display->setAlignment(Qt::AlignCenter);
    QString something = m_ui->enter->text();
    double some = log10(something.toDouble());
    m_ui->display->setText(QString::number(some));
}

void example::on_clicking2(){
    m_ui->display->setStyleSheet("font-size:26pt; font-weight:bold; font-family:\"Cantarell\";");
    QString another = m_ui->enter->text();
    m_ui->display->setAlignment(Qt::AlignCenter);
    double ting = pow(10, another.toDouble());
    QString first = "10^";
    if (ting < 0){
        m_ui->display->setText(first.append(another));
    } else{
        m_ui->display->setText(QString::number(ting));
        
    }
}

example::~example() = default;
