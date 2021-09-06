# Questão problema 1

## Tema: Algoritimos gulosos

## Contextualizando o problema:

João trabalha junto com seu pai, em um armazem, no caso joão ficou responsavel para cuidar do caixa, assim o joão passa horas e horas fazendo a mesma coisa, recebndo dinheiro e passando troco. Ultimamente joão está tendo alguns problemas em relação a troco, as vezes joão acaba ficando sem troco e isso é bem ruim. Em um certo dia da sua folga, joão estava bem entendiado e pensou um pouco sobre seu problema, logo logo depois de algumas pesquisas no google o joão achou algumas provaveis soluções, entre elas esta um tal de algoritimo guloso, joão ficou bem curioso sobre esse tipo de algoritimo e decidiu estudar o dia todo, depois disso joão pediu ajudar o seu amigo que estuda na UNG-fgq, que no caso é você, joão ficou sabendo que você usou algo do tipo na materia de Trabalho de algoritmos e pediu sua ajuda, ajude o joão resolver esse problema.


## Porque é um problema de algoritimos guloso?

Vamos lista algumas caracteristicas da nossa questão.

1- A cada passo é escolhido o maior valor possível da moeda.
2- Um novo subproblema aparece, com um valor de troco cada vez menor, que é crianda a cada nova interação.
3- Uma vez que um valor de uma moeda é selecionada, não se retira mais este valor do conjunto solução.

Com esses aspectos, podemos ver que se tratar de uma algoritimo guloso.


## Sequência de decisões:

No primeiro momento precisamos escolher o valor da primeira cédula, depois o da segunda cédula e assim por diante, até completar o valor do troco. O valor total do troco vai diminuindo e ficando cada vez menor, até chegar a zero, no final retornamos quais cédulas precisamos para fornecer o troco para o cliente, sempre o usando o maximo possivel as cedulas de alto valor primeiro. 


## Como funciona o codigo na pratica? e realmente funciona?

Aqui vamos discutir passo a passo de uma caso base, para entender melhor a nossa solução.

No primeiro passo do nosso codigo, precisamos definir um vetor, que no caso possui os valores de cédulas diferentes que temos na maquina registradora. Na iamgem abaixo podemos ver um vetor com tamanho [7], que é quantas cédulas diferentes temos em nossa caixa registradora.

![](/images/1.png)
[Imagem 1](/images/1.png)

OK, depois de feito esse primeiro passo vamos mostra um exemplo.

Imagine  a seguinte situação, queriamos devolver um troco no valor de 30 reais, e para isso temos diponíves as seguintes cédulas. [100, 50, 10, 1].

Usando o nosso aloritimo guloso ele vai retorna a seguinte saida. [25, 1, 1, 1, 1, 1].

Mas será que é a melhor solçao? Já respondo a pergunta não! A melhor solução seria, [10, 10, 10], para esse caso talvez usar esse tipo de algoritimo não seria a melhor opção, conseguiriamos resolver isso com outros métodos, como programação dinamica.

Conslusão: Nesses tipos de problemas precisamos identificar se o problema que vocês está resolvendo tem todas as características que se encaixem nas estratégias de algoritmos gulosos. 



## Entradas X Saídas

As entradas consiste em 2 inputs, o valor da compra e quanto que o cliente pagou. Nesse exemplo o cliente comprou um item da loja de no valor de 70 reais, e no momento do pagamento ele usou uma cédula de 10 reais.

![](/images/2.png)

A saída consiste de um output que seria, os valores das cedulas a serem devolvidas para o cliente nesse formato abaixo.

![](/images/3.png)

## Considerações FInais
O grande objetivo desse projeto é tentar mostrar o raciocionio por trás de um algoritimos guloso, do problema até a solução final. Escrever agoritimos é uma parte do processo muito importante, mais o aprendizado de um raciocionio é oque você vai levar da materia de projeto de algoritimo para o resto da sua carreira! :p 




