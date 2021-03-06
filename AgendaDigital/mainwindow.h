#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

    //BLOCO QUE GERA ERRO DOIS
#include "pessoa.h"
#include "ldde.h"

#include "checklogin.h"
#include <string.h>
#include "registro.h"
#include "lds.h"
#include <iostream>
#include <cstdlib>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnEntrar_clicked();
    void on_btnCadastro_clicked();
    void on_btnSalvar_clicked();

    void on_btnSair_clicked();

    void on_btnBuscar_clicked();


    void on_btnDeletar_clicked();

    void on_tblExibir_doubleClicked(const QModelIndex &index);



private:
    Ui::MainWindow *ui;
    int id;
    Lds<Pessoa> Cadastrados;
    void atualizaExibir(bool entrando);
};

#endif // MAINWINDOW_H
