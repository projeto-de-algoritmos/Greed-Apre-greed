# Questão problema 1

## Tema: algoritmos gulosos

## Contextualizando o problema:

<p style="text-indent: 20px; text-align: justify">
&emsp;&emsp;João trabalha junto com seu pai, em um armazém, no caso joão ficou responsável para cuidar do caixa, assim o joão passa horas e horas fazendo a mesma coisa, recebendo dinheiro e passando troco. Ultimamente joão está tendo alguns problemas em relação a troco, ás vezes joão acaba ficando sem troco e isso é bem ruim. Em um certo dia da sua folga, joão estava bem entendiado e pensou um pouco sobre seu problema, logo depois de algumas pesquisas no google o joão achou algumas prováveis soluções, entre elas esta um tal de algoritmo guloso, joão ficou bem curioso sobre esse tipo de algoritmo e decidiu estudar o dia todo, depois disso joão pediu ajudar o seu amigo que estuda na UNG-fgq, que no caso é você, joão ficou sabendo que você usou algo do tipo na matéria de Trabalho de algoritmos e pediu sua ajuda, ajude o joão resolver esse problema.</p>


## Porque é um problema de algoritmos guloso?

<p style="text-indent: 20px; text-align: justify">
&emsp;&emsp;Vamos lista algumas características da nossa questão. </p>

* A cada passo é escolhido o maior valor possível da moeda.
* Um novo subproblema aparece, com um valor de troco cada vez menor, que é crianda a cada nova interação.
* Uma vez que um valor de uma moeda é selecionada, não se retira mais este valor do conjunto solução.


<p style="text-indent: 20px; text-align: justify">
&emsp;&emsp;Com esses aspectos, podemos ver que se tratar de uma algoritmo guloso.</p>


## Sequência de decisões:

<p style="text-indent: 20px; text-align: justify">
&emsp;&emsp;No primeiro momento precisamos escolher o valor da primeira cédula, depois o da segunda cédula e assim por diante, até completar o valor do troco. O valor total do troco vai diminuindo e ficando cada vez menor, até chegar a zero, no final retornamos quais cédulas precisamos para fornecer o troco para o cliente, sempre o usando o maximo possivel as cedulas de alto valor primeiro. </p>


## Como funciona o codigo na pratica? e realmente funciona?

<p style="text-indent: 20px; text-align: justify">
&emsp;&emsp;Aqui vamos discutir passo a passo de uma caso base, para entender melhor a nossa solução.</p>

<p style="text-indent: 20px; text-align: justify">
&emsp;&emsp;No primeiro passo do nosso codigo, precisamos definir um vetor, que no caso possui os valores de cédulas diferentes que temos na maquina registradora. Na iamgem abaixo podemos ver um vetor com tamanho [7], que é quantas cédulas diferentes temos em nossa caixa registradora. </p>

![](/images/1.png)


<p style="text-indent: 20px; text-align: justify">
&emsp;&emsp;Depois de feito esse primeiro passo vamos mostra um exemplo. Imagine  a seguinte situação, queriamos devolver um troco no valor de 30 reais, e para isso temos diponíves as seguintes cédulas. [100, 50, 10, 1]. </p>

<p style="text-indent: 20px; text-align: justify">
&emsp;&emsp;Usando o nosso aloritimo guloso ele vai retorna a seguinte saida. [25, 1, 1, 1, 1, 1]. Mas será que é a melhor solçao? Já respondo a pergunta não! A melhor solução seria, [10, 10, 10], para esse caso talvez usar esse tipo de algoritmo não seria a melhor opção, conseguiriamos resolver isso com outros métodos, como programação dinamica. </p>

<p style="text-indent: 20px; text-align: justify">
&emsp;&emsp;Conslusão: Nesses tipos de problemas precisamos identificar se o problema que vocês está resolvendo tem todas as características que se encaixem nas estratégias de algoritmos gulosos. </p>



## Entradas X Saídas

<p style="text-indent: 20px; text-align: justify">
&emsp;&emsp;As entradas consiste em 2 inputs, o valor da compra e quanto que o cliente pagou. Nesse exemplo o cliente comprou um item da loja de no valor de 70 reais, e no momento do pagamento ele usou uma cédula de 10 reais.</p>

![](/images/2.png)

<p style="text-indent: 20px; text-align: justify">
&emsp;&emsp;A saída consiste de um output que seria, os valores das cedulas a serem devolvidas para o cliente nesse formato abaixo.</p>

![](/images/3.png)

## Considerações FInais
<p style="text-indent: 20px; text-align: justify">
&emsp;&emsp; O grande objetivo desse projeto é tentar mostrar o raciocínio por trás de um algoritmos guloso, do problema até a solução final. Escrever algoritmos é uma parte do processo muito importante, mais o aprendizado de um raciocínio é oque você vai levar da matéria de projeto de algoritmo para o resto da sua carreira! </p> :p 




