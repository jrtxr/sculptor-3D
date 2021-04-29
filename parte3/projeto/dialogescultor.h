#ifndef DIALOGESCULTOR_H
#define DIALOGESCULTOR_H

#include <QDialog>

namespace Ui {
class DialogEscultor;
}
/**
 * @brief A classe DialogEscultor representa a caixa de diálogo onde são inseridas as dimensões da matriz sculptor.
 */
class DialogEscultor : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief DialogEscultor é o construtor da classe.
     */
    explicit DialogEscultor(QWidget *parent = nullptr);
    ~DialogEscultor();
    /**
     * @brief getNumLinhas é a função que retorna o número de linhas da matriz sculptor.
     */
    int getNumLinhas();
    /**
     * @brief getNumColunas é a função que retorna o número de colunas da matriz sculptor.
     */
    int getNumColunas();
    /**
     * @brief getNumPlanos é a função que retorna o número de planos da matriz sculptor.
     */
    int getNumPlanos();

private:
    Ui::DialogEscultor *ui;
};

#endif // DIALOGESCULTOR_H
