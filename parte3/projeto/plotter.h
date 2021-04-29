#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <vector>
#include <QColor>
#include <QString>
#include "dialogescultor.h"
#include "sculptor.h"

using namespace std;
/**
 * @brief A classe Plotter representa a área onde serão feitos os desenhos na matriz sculptor.
 */
class Plotter : public QWidget
{
    Q_OBJECT

private:
    int num_linhas, num_colunas, num_planos;
    vector<vector<vector<Voxel>>> painter_sculptor;
    vector<vector<Voxel>> plano_atual;
    Sculptor* sculptor;
    int id_plano, id_linha, id_coluna;
    double h_altura, h_largura;
    QString acao;
    int x_caixa, y_caixa, z_caixa;
    int raioEsfera;
    int raioXEllipsoid, raioYEllipsoid, raioZEllipsoid;
    QColor cor;

    void ativaVoxel(Voxel &v, QColor cor);
    void desativaVoxel(Voxel &v);
    bool dentroDosLimites(int linha, int coluna, int plano);


public:
    /**
     * @brief Plotter é o construtor da ação.
     */
    explicit Plotter(QWidget *parent = nullptr);
    /**
     * @brief paintEvent é a função que desenha a área de desenho.
     */
    void paintEvent(QPaintEvent *event);
    /**
     * @brief mousePressEvent é a função que captura a posição do mouse.
     */
    void mousePressEvent(QMouseEvent *event);

signals:
    /**
     * @brief alteraSlidersX é o sinal que altera os valores referentes ao Plano X do sculptor.
     */
    void alteraSlidersX(int,int);
    /**
     * @brief alteraSlidersY é o sinal que altera os valores referentes ao Plano Y do sculptor.
     */
    void alteraSlidersY(int,int);
    /**
     * @brief alteraSlidersZ é o sinal que altera os valores referentes ao Plano Z do sculptor.
     */
    void alteraSlidersZ(int,int);
    /**
     * @brief alteraSliderRaioEsfera é o sinal que altera o raio da esfera.
     */
    void alteraSliderRaioEsfera(int,int);
    /**
     * @brief alteraSliderR é o sinal que altera o valor R das cores.
     */
    void alteraSliderR(int);
    /**
     * @brief alteraSliderG é o sinal que altera o valor G das cores.
     */
    void alteraSliderG(int);
    /**
     * @brief alteraSliderB é o sinal que altera o valor B das cores.
     */
    void alteraSliderB(int);


public slots:
    /**
     * @brief abreDialogEscultor é a função que abre a caixa de diálogo.
     */
    void abreDialogEscultor();
    /**
     * @brief salvaEscultor é a função que cria e salva o arquivo OFF;
     */
    void salvaEscultor();
    /**
     * @brief mudaPlanoZ é a função que altera o plano Z do sculptor.
     */
    void mudaPlanoZ(int planoZ);
    /**
     * @brief acaoSelecionada é a função que guarda a ação selecionada pelo usuário.
     */
    void acaoSelecionada(QString _acao);
    /**
     * @brief mudaXCaixa é a função que atualiza a dimensão X da caixa.
     */
    void mudaXCaixa(int _x);
    /**
     * @brief mudaYCaixa é a função que atualiza a dimensão Y da caixa.
     */
    void mudaYCaixa(int _y);
    /**
     * @brief mudaZCaixa é a função que atualiza a dimensão Z da caixa.
     */
    void mudaZCaixa(int _z);
    /**
     * @brief mudaRaioEsfera é a função que atualiza o raio da esfera.
     */
    void mudaRaioEsfera(int _re);
    /**
     * @brief mudaRaioXEllipsoid é a função que atualiza o raio X da elipsoide.
     */
    void mudaRaioXEllipsoid(int _rx);
    /**
     * @brief mudaRaioYEllipsoid é a função que atualiza o raio Y da elipsoide.
     */
    void mudaRaioYEllipsoid(int _ry);
    /**
     * @brief mudaRaioZEllipsoid é a função que atualiza o raio Z da elipsoide.
     */
    void mudaRaioZEllipsoid(int _rz);
    /**
     * @brief mudaR é a função que atualiza a cor R a ser desenhada.
     */
    void mudaR(int _r);
    /**
     * @brief mudaB é a função que atualiza a cor G a ser desenhada.
     */
    void mudaB(int _b);
    /**
     * @brief mudaG é a função que atualiza a cor B a ser desenhada.
     */
    void mudaG(int _g);

};

#endif // PLOTTER_H
