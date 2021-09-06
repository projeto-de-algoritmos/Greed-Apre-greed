#include <stdio.h>

void Calcular_Troco_Guloso(int* valor, int troco){
    int i, tamanho =7;

    printf("O melhor troco processado pelo algoritmo são ultilizados as cedulas: ");

    for(i=0; i<tamanho; i++){
        //Escolhe sempre o menor valor
        while(valor[i] <= troco){
            troco -= valor[i];
            printf("%d ", valor[i]);
        }
        
        if(troco == 0) // Otimizar tempo
            break;
    }
    printf("\n");

    if(troco > 0){
        printf("Não foi possivel passar todo o troco. Está faltando %d\n", troco);
    }

}

int Troco_final (int valorTotalCompra, int dinheiroPago){
    int troco =0;
    troco = dinheiroPago - valorTotalCompra;

    return troco;
}

int main(){

    int valores[7] = {100, 50,20,10,5,2,1}; // Cedulas disponivel no caixa
    int troco, compra, dinheiro, err1, err2; // Valor do troco final

    printf("Digite o valor da compra\n");
    scanf("%d", &compra);

    printf("Digite o valor recebido\n");
    scanf("%d", &dinheiro);

    if(compra > dinheiro){
        err1 = compra - dinheiro;
        printf("O valor da compra foi maior que o dinheiro recebido. Está faltando %d reais!\n",err1);
        return 0;
    }
    if(compra == dinheiro){
        printf("O valor pago foi exato ao da compra, Obrigado pela compra e volte sempre!\n");
        return 0;
    }
    
    troco = Troco_final(compra, dinheiro);


    Calcular_Troco_Guloso(valores, troco);

    return 0;
}