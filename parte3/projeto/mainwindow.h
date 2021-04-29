#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
/**
 * @brief A classe MainWindow é a janela principal da aplicação.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief MainWindow é o construtor da classe.
     */
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    /**
     * @brief capturaAcao é a função que guarda o que foi acionado na toolbar.
     */
    void capturaAcao(bool);

signals:
    /**
     * @brief nomeAcao é a função que emite um sinal com o nome guardada na função capturaAcao.
     */
    void nomeAcao(QString);

private:
    Ui::MainWindow *ui;
    QString ultimaAcao;
};

#endif // MAINWINDOW_H
