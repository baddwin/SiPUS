#ifndef DATAPEMINJAMAN_H
#define DATAPEMINJAMAN_H

#include <QDialog>
#include <QSqlQuery>
#include <QStandardItemModel>
#include <modul/anggota/Anggota.h>
#include <QSqlQuery>
#include <modul/buku/buku.h>
#include <QMessageBox>
#include <QDate>

namespace Ui {
class DataPeminjaman;
}

class DataPeminjaman : public QDialog
{
    Q_OBJECT

public:
    explicit DataPeminjaman(QWidget *parent = 0, QString no = "0");
    void setNoAnggota(QString no);
    ~DataPeminjaman();

private slots:
    void on_bClose_clicked();

    void on_bKembali_clicked();

    void on_bKembaliAll_clicked();

private:
    void setTabel();
    void refreshData();
    Ui::DataPeminjaman *ui;
    QStandardItemModel *model;
    QString noAnggota;
    Anggota *peminjam;
    Buku *buku;
};

#endif // DATAPEMINJAMAN_H
