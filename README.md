# travador
Um pequeno vírus programado para a disciplina de Tópicos Especiais em Segurança 2017.1 da UFRJ, consiste num programa que começa a gerar um grande número de processos de maneira exponencial, com cada processo tentando alocar 1GB de memória, no intuito de esgotar rapidamente os recursos da máquina, causando uma pane geral. O programa conta ainda com meios de bloquear o sinal SIGINT, que é quando a pessoa aperta CTRL + C no terminal para matar o programa.

```
$ git clone https://github.com/fogodev/travador.git
$ cd travador
$ gcc -o travador travador.c
$ ./travador
```
