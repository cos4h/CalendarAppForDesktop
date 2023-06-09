#ifndef WIDGET_H
#define WIDGET_H

#include <QDateTime>
#include <QWidget>
#include <QSqlDatabase>

class QSqlTableModel;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();





signals:

private slots:
    void on_crearEvento_clicked();
    void on_spinBoxAnio_valueChanged(int arg1);
    void on_buttonExit_clicked();
    void on_mesNow_activated(int index);
    void updateCalendar(int year,int month );
    void on_buttonAtras_clicked();
    void on_buttonNextMonth_clicked();
    void interfazResposive();
    QDateTime transforToDateTime(int,int,int,int,int,int);
    void openAndUpdateSQL();



private:
    void populateDatabase(QString nombreEvento,QDateTime fechaTimeBegin, QDateTime fechaTimeEnd, QString);
    void insertEvent(const QString , QDateTime, QDateTime, const QString)const;
    Ui::Widget *ui;
    QSqlDatabase m_db;
    QSqlTableModel *m_model;
    bool m_exists;

};
#endif // WIDGET_H
