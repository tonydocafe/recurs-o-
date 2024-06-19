# Recursão 
Este repositório contém uma coleção de códigos simples em C que abordam conceitos básicos de recursão. O objetivo é proporcionar um entendimento claro e acessível sobre este tópico fundamental na programação.
A recursão é uma técnica essencial que permite que uma função chame a si mesma para resolver problemas que podem ser decompostos em subproblemas menores.
Os códigos fornecidos são projetados para serem de fácil entendimento, mesmo para aqueles que estão iniciando seus estudos na área da programação. 

## bibliotecas
- stdio.h
- stdlib.h
- string.h

## contrario.c
O programa imprime os caracteres da string em ordem inversa. 
A função recursiva decrescente é chamada repetidamente, cada vez com o índice diminuído, até que o índice se torne negativo, momento em que a recursão para.
### funções
- decrescente
A função decrescente recebe uma string e um índice. Se o índice for maior ou igual a zero, 
a função imprime o caractere na posição n da string e, em seguida, chama a si mesma com o índice decrementado em 1. 
Este processo se repete até que n seja menor que zero, momento em que a recursão termina.

- main
No main, uma string palavra é definida com os caracteres 'a', 'b', 'c', 'd', 'e', 'f'. 
A função strlen é utilizada para obter o comprimento da string. 
Note que o comprimento retornado inclui o caractere nulo \0, por isso subtrai-se 1 para obter o índice correto do último caractere válido. 
A função decrescente é então chamada com o índice do último caractere. 
Por fim, uma nova linha é impressa para finalizar a saída.

## crescente_descrescente.c
- A função decrescente imprime números de n até 1, em ordem decrescente.
- A função crescente imprime números de 1 até n, em ordem crescente.
### funções
- descrescente
A função decrescente recebe um inteiro n. Se n for maior que zero, a função imprime o valor de n e chama a si mesma com o valor de n decrementado em 1.
Este processo se repete até que n seja igual ou menor que zero, momento em que a recursão termina.

- crescente
A função crescente também recebe um inteiro n. Se n for maior que zero, a função chama a si mesma com o valor de n decrementado em 1. 
Após retornar da chamada recursiva, a função imprime o valor de n. 
Este processo se repete até que n seja igual ou menor que zero, momento em que a recursão termina. 
A diferença crucial aqui é que a impressão ocorre após a chamada recursiva, resultando em uma ordem crescente.

- main 
No main, a função decrescente é chamada com o valor 5, que imprime os números de 5 a 1. 
Em seguida, a função crescente é chamada com o valor 5, que imprime os números de 1 a 5. 
Finalmente, novas linhas são impressas para separar as saídas das duas funções.

## multiplicacao_recursiva
- O usuário insere dois números.
- A função recursiva multiplicar calcula o produto dos dois números utilizando adição repetida, lidando corretamente com casos onde o multiplicador é zero ou negativo.
- O resultado é exibido ao usuário.
### funçoes
- multiplicar 
A função multiplicar recebe dois inteiros, multiplicando e multiplicador. A lógica da função é:
Caso base 1: Se o multiplicador for zero, a função retorna 0, pois qualquer número multiplicado por zero é zero.
Caso base 2: Se o multiplicador for positivo, a função retorna o multiplicando somado ao resultado da chamada recursiva com o multiplicador decrementado em 1.
Caso base 3: Se o multiplicador for negativo, a função retorna o negativo do multiplicando somado ao resultado da chamada recursiva com o multiplicador incrementado em 1. Isso lida com a multiplicação por números negativos.

- main
No main, dois inteiros, maior e menor, são declarados. O programa solicita ao usuário que insira dois números usando printf e scanf. 
Esses números são então passados para a função multiplicar, e o resultado da multiplicação é impresso na tela.

## preenche_vetor_recursivo.c 
- O usuário especifica o tamanho do vetor.
- O usuário preenche o vetor com valores.
- O vetor é impresso em ordem crescente.
- O vetor é impresso em ordem decrescente.

### funções 
- preencher_vetor
A função preencher_vetor preenche um vetor de inteiros de tamanho n. 
Se n for maior que zero, a função chama a si mesma com n - 1 e, após a chamada recursiva, lê um valor do usuário e o armazena na posição n - 1 do vetor. 
Este processo se repete até que n seja igual a zero, momento em que a recursão termina.

- decrescente
A função decrescente imprime os elementos de um vetor de inteiros em ordem decrescente.
Se n for maior que zero, a função imprime o elemento na posição n - 1 do vetor e chama a si mesma com n - 1. 
Este processo se repete até que n seja igual a zero.

- crescente
A função crescente imprime os elementos de um vetor de inteiros em ordem crescente. 
Se n for maior que zero, a função chama a si mesma com n - 1 e, após a chamada recursiva, imprime o elemento na posição n - 1 do vetor. 
Este processo se repete até que n seja igual a zero.

-main
No main, o programa solicita ao usuário que insira o tamanho do vetor. Em seguida, um vetor de inteiros com o tamanho especificado é declarado. 
A função preencher_vetor é chamada para preencher o vetor com valores fornecidos pelo usuário. 
Em seguida, o vetor é impresso em ordem crescente e decrescente utilizando as funções crescente e decrescente, respectivamente.

## soma_do_maior
- O usuário insere dois números: o maior e o menor.
- O código verifica se o maior número é realmente maior ou igual ao menor número.
- A função recursiva intervalo calcula a soma de todos os números no intervalo entre maior e menor, inclusive.
- O resultado é exibido ao usuário ou uma mensagem de erro é exibida se o maior número for menor que o menor número.
  
### funções
- intervalo 
Caso base: Se maior for igual a menor, a função retorna menor, pois não há mais números a somar.
Caso recursivo: Se maior for diferente de menor, a função retorna o valor de maior somado ao resultado da chamada recursiva à própria função intervalo com o valor de maior decrementado em 1.
Este processo se repete até que maior seja igual a menor.

-main
No main, dois inteiros, maior e menor, são declarados. O programa solicita ao usuário que insira dois números usando printf e scanf. 
Se maior for menor que menor, o programa imprime uma mensagem de erro. 
Caso contrário, os números são passados para a função intervalo, e o resultado da soma do intervalo é impresso na tela.

### execução
para executar qualquer um dos scripts o padrão é o mesmo 
gcc nome_do_programa.c -o nome_executavel


./nome_executavel
