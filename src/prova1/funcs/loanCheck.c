#include "../headers/loanCheck.h"

void loanCheck(float salary, float loan, float portion, const char* analysisArray[2]) {
    if ((portion < loan * 0.01) || (portion > salary * 0.15) || (loan > salary * 10)) {
        // Se o valor da prestação for menor que 1% do valor do empréstimo
        // Se o valor da prestação for maior que 15% do salário
        // Se o valor do empréstimo for maior que 10x o salário do cliente
        analysisArray[0] = "Empréstimo não concedido";
        analysisArray[1] = "\0";
        return;
    } else {
        analysisArray[0] = "Empréstimo concedido";
    }

    if (portion < salary * 0.05 || loan < salary * 5) {
        // Se o valor da prestação for menor que 5% do salário do cliente ou o valor do empréstimo for menor que 5x o salário do cliente
        analysisArray[1] = "Perfil VIP";
    } else if ((portion > salary * 0.05 && portion < salary * 0.1) || (loan >= salary * 5 && loan <= salary * 8)) {
        // Se o valor da prestação for maior que 5% do salário do cliente e menor que 10% do salário ou o valor do empréstimo for entre 5x e 8x o salário do cliente
        analysisArray[1] = "Perfil Normal";
    } else {
        analysisArray[1] = "Perfil de Risco";
    }

    return;
};
