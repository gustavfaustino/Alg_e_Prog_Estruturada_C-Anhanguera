#include <stdio.h>
#include <locale.h>

/*Você precisa criar um sistema que gerencia o número de alunos matriculados em cada disciplina da instituição. Nesse cenário, o programa deve permitir que o administrador insira o número de disciplinas disponíveis e, em seguida, para cada disciplina, o número de alunos matriculados. O programa deve estar preparado para controlar a entrada de dados e interromper a contagem de disciplinas se o número total de alunos matriculados atingir um certo limite.*/

int main(void){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int alunos_totais = 0, limite_alunos = 500, disciplinas;

    printf("Bem-vindo(a) o sistema de contagem de alunos matriculados!\n");
    printf("Insira o total de disciplinas disponíveis: ");
    scanf("%d", &disciplinas);

    for(int i = 1; i <= disciplinas; i++){
        int alunos_matriculados;

        printf("Insira o total de alunos matriculados na disciplina: ");
        scanf("%d", &alunos_matriculados);

        // Verificação
        if(alunos_matriculados<0){
            printf("\nNúmero de alunos inválidos! Tente novamente...");
            i--;
            continue;
        }

        alunos_totais += alunos_matriculados;

        // Limite
        if(alunos_matriculados >= limite_alunos){
            printf("\nLimite de alunos (%d) excedido!\nEncerrando contagem...", limite_alunos);
            break;
        }
    }

    printf("Total de disciplinas: %d\n", disciplinas);
    printf("Total de alunos matriculados: %d\n", alunos_totais);

    return 0;
}