#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

//aleatoriedade 
int aleatorio (int min, int max) {
    srand(time(0));
    int num = (rand() % (max - min + 1)) + min;
    return num;
}
void frases (int numero = aleatorio(1,     10)){
        
        if (numero == 1){
            printf("Voce acerta um golpe na direcao do olho esquerdo arrancando metade do cranio");
        }
        else if (numero == 2){
            printf("Imposivel !!! Voce acerta um golpe poderoso na parte lateral do pesço do mostro fazendo um corte diagonal ate a cintura perfeitamente");
        }
        else if (numero == 3){
            printf("Como voce vez isso aventureiro ? Nem sabia que voce podia efetuar um ataque tão perfeito !Voce rasgou o monstro ao meio!!");
        }
        else if (numero == 4){
            printf("Voce cortou os braços do monstro com um colpe so !! Ele morre de emorragia ");
        }
        else if (numero == 5){
            printf("Voce vé uma possivel abertura para atacar mas esta muito loge entao vc arremeça sua espada acertando na garganta !!");
        }
        else if (numero == 6){
            printf("Os papeis foram trocados ?! Voce foi monstruoso !! Matou o monstro arrancando o coração dele !!  ");
        }
        else if (numero == 7){
            printf("Sorte ? Ou habilidade? Voce coneguiu acertar o ponto fraco do monstro de primeira !!");
        }
        else if (numero == 8){
            printf("O monstro cospe um bola de fogo em sua direção e logo voce a rebate com sua espada e o acerta no peito queimando-o");
        }
        else if (numero == 9){
            printf("Sorte ?! Voce joga sua espada e o acerta com o cabo e da um tralmatismo craniano e o mata");
        }
        else if (numero == 10){
            printf("Isso ja foi longe de mais voce n acha ? Voce joga sua espada no chao e desafia o monstro para uma batalha de dança , quando chega a vez do monstro voce pega a espada , descretamente e o-apunhala nas costas na hora que ele estava fazendo quadradinho ");
        }
}
//gera aleatoriedade no resultado das lutas
void resultado_luta (int numero) {
    if ((numero == 1) or (numero == 2)) {
        char intro1[] ="Voce escorrega e erra o ataque\n Boa sorte na proxima\n";
        int i = 0 ;
        while(intro1[i]!='\0') {
            Sleep(60);
            printf("%c",intro1[i]);
            i++;
        }            
    }
    else if ((numero == 3) or (numero == 4) or (numero == 5)) {
        char intro1[] ="Voce acertou o ataque!\n";
        int i = 0 ;
        while(intro1[i]!='\0') {
            Sleep(60);
            printf("%c",intro1[i]);
            i++;
        }        
    }
    else if (numero == 6) {
        char intro1[] ="incrivel, você acertou um baita de um ataque (critico)\n";
        int i = 0 ;
        while(intro1[i]!='\0') {
            Sleep(60);
            printf("%c",intro1[i]);
            i++;
        }        
    }      
}        
//voids de informções a serem impressas na tela
void info_inimigo(int inimigo){
    printf(" \n----------------------------\n   ainda restam: %d inimigos\n",inimigo);
}
void info_vida(int vida_jogador){
    printf(" ----------------------------\n   Vida: %d\n",vida_jogador);
}
void info_fase(int fase){
    printf("   Fase: %d\n",fase);
}
void info_nome(char nome[11]){
    printf("   Nome: %s\n",nome);
}
void info_ouro(int ouro){
    printf("   Ouro: %d\n ----------------------------\n",ouro);
}
 
void mensagem_porta(){
    printf("\n   Você atravessa a porta e perante seus olhos estão  te aguardando ... ");
}   
void mensagem_intro(){
    char intro1 [] ="   BEM VINDO A CAVE KNIGHT\n ----------------------------\n   Lá estava você sentado em um bar conversando com os amigos...\n   até que você sente uma pancada na cabeça e perde a consciência...\n   aos poucos você começa a escutar os gritos de seus amigos e desmaia...\n   horas depois do ocorrido você abre os olhos, ainda com a visão um pouco embaçada, aparenta estar em uma caverna...\n   logo depois uma voz estranha ecoa em sua mente ''ainda lembra seu nome??''\n\n";
    int i = 0 ;
    while(intro1[i]!='\0') {
        Sleep(40);
        printf("%c",intro1[i]);
        i++;
    //texto de intro
    }            
}
void tempo(int demora = 0){
    Sleep(demora);
}
int main() {
    int porta , inimigo=0,bau=0,caso,caso2,ouro=0,contador_inimigo= 0,contador_bau = 0,contador_dano=0,contador_ouro=0,dano,vida_inimigo= 100,vida_jogador=100,conta_vida,fase=0 , mod,numero,conta_vida_inimigo;
    int result_dado = aleatorio(3, 6),demora = 350, compra;
    char nome[11];
    
    setlocale(LC_ALL,"Portuguese");//Linguagem
    system("pause");
    system("cls");
    info_vida(vida_jogador);
    info_fase(fase);
    info_ouro(contador_ouro);
    tempo(demora);
    mensagem_intro();
    tempo(demora);
    printf("  digite seu nome: ");
    tempo(demora);
    scanf("  %s",&nome);
    system("cls");
    tempo(demora);
    printf("  %s, bom te conhecer aventureiro! Agora pegue essa espada e se vire hahahahahaha.....\n  talvez algum dia você consiga descansar novamente.\n",nome);
    tempo(demora);
    printf("  Faça sua escolha:\n");
    tempo(demora);
    for(vida_jogador==100;vida_jogador>0;vida_jogador){
        if(vida_jogador > 0){
            fase++;
            printf("\n -------------------------\n\n   [1] Abrir a porta\n   [2] Não abrir a porta\n\n -------------------------\n\n");
            scanf("%d",&porta);
            system("cls");
            if(mod == 0){
                printf("   Voce enconta um feiticeiro ambulante !!\n   Ele pode te vender :\n\n   ==> Poção grande de vida( +50 de vida -50 moedas )\n   ==> Poção pequena de vida (+25 de vida -25 moedas)\n");
                printf("   [1] Poção grande\n   [2] Poção pequena\n   [3] Abrir a porta\n");
                info_vida(vida_jogador);
                info_ouro(contador_ouro);
                scanf("%d",&compra);
                    
                if((compra == 1)&&(contador_ouro >=50)){
                    vida_jogador = vida_jogador + 50;
                    contador_ouro = contador_ouro - 50;
                    printf("   Você comprou a Poção grande!!\n");
                    printf("   ");
                    system("pause");
                    system("cls");
                }
                else if((compra == 1)&&(contador_ouro <50)){
                    contador_ouro = contador_ouro - 5;
                    printf("   Você não possui ouro suficiente para comprar esse item!\n");
                    printf("   O vendedor ficou irritado, roubou 5 ouros e fugiu!\n");  
                    printf("   ");
                    system("pause");
                    system("cls");  
                }  
                else if ((compra == 2) && (contador_ouro >=  25)){
                    vida_jogador = vida_jogador + 20;
                    contador_ouro = contador_ouro - 25;
                    printf("   Você comprou a Poção pequena!!\n");
                    printf("   ");
                    system("pause");
                    system("cls");
                }
                else if((compra == 2)&&(contador_ouro <25)){
                    contador_ouro = contador_ouro - 5;
                    printf("   Você não possui ouro suficiente para comprar esse item!\n");
                    printf("   O vendedor ficou irritado, roubou 5 ouros e fugiu!\n"); 
                    printf("   ");
                    system("pause");
                    system("cls");
                }
                else if(compra==3){
                    printf("   Você avançou de fase!\n");
                    system("pause");
                    system("cls");
                }
            }
                
            //porta
            if(porta == 1) {
                porta = 0;
                info_vida(vida_jogador);
                info_nome(nome);
                info_fase(fase);
                info_ouro(contador_ouro);
                mod = fase%5;
                mensagem_porta();
                 
                //aleatorio aplicado
                porta = 0;
                inimigo = aleatorio(0,5) ;
                bau = aleatorio(0,5) ;
                contador_inimigo = 0 + inimigo ;
                contador_bau = contador_bau + bau ;
                //inimigos e baus funcionamento
                
                
                printf("  %d inimigo(s) e %d bau(s)!!\n", inimigo, bau);
                //possibilidades de spawn das salas
                while(inimigo > 0 && vida_jogador > 0){
                
                       
                    if ((inimigo >= 1) || (bau >= 1)) {//evita erro na logica caso algum valor seja igual a 0
                        if((inimigo >= 1) && (bau == 0)){//quando spawna so inimigos e nenhum bau
                            printf("   Escolha entre Enfrentar o inimigo ou fugir:\n\n -------------------------\n\n   [1] Enfrentar o inimigo\n   [2] Fugir\n\n -------------------------\n\n");
                            scanf("%d",&caso);
                            system("cls");
                            porta ==0;
                            info_vida(vida_jogador);
                            tempo(demora);
                            info_nome(nome);
                            info_fase(fase);
                            info_ouro(contador_ouro);
                            if(caso == 1){//se o jogador escolher a op??o 1 ele ataca o inimigo
                                resultado_luta(result_dado);//resultado alï¿½atorio do ataque se sera bem executado ou nï¿½o
                                if((result_dado == 2)||(result_dado == 1)){//remove a vida do jogador de acordo com o dano
                                    demora = 90;
                                    dano = 10;
                                    conta_vida = vida_jogador - dano;
                                    vida_jogador = vida_jogador - dano;
                                    char intro2[] ="Sua vida foi reduzida a  ";
                                    info_inimigo(inimigo);
                                    int i = 0 ;
                                    while(intro2[i]!='\0') {
                                        Sleep(50);
                                        printf("%c",intro2[i]);
                                        i++;
                                    }    
                                    printf(" %d\n",conta_vida);     
                                }
                        
                                else if((result_dado == 3)||(result_dado == 4)||(result_dado == 5)){ //remove o dano base que o jogador desfere contra o inimigo
                                    demora = 90;
                                    dano = 100;
                                    conta_vida_inimigo = vida_inimigo - dano;
                                    char intro2[] ="A vida do inimigo foi reduzida a ";
                                    int i = 0 ;
                                    while(intro2[i]!='\0') {
                                        Sleep(50);
                                        printf("%c",intro2[i]);
                                        i++;
                                    }      
                                    printf(" %d, \n\n",conta_vida_inimigo);
                                    inimigo--;
                                    demora = 90;
                                    info_inimigo(inimigo); 
                                    if(conta_vida_inimigo <= 0){
                                        demora = 90;
                                        ouro = aleatorio(0,5);
                                        contador_ouro = contador_ouro + ouro;
                                        if(ouro == 0){
                                            printf("   'Ué vazio ahhhhh aqueles malditos me pagam'\n");
                                        }
                                        else{
                                            printf("   Como recompensa por derrotar o inimigo, você ganhou %d ouro(s)!\n",ouro);
                                        }   
                                    }   
                                }
                            
                                else{//remove o dano critico que o jogador desfere contra o inimigo
                                    dano = 500;
                                    conta_vida_inimigo = vida_inimigo - dano;
                                    char intro2[] ="A vida do inimigo foi reduzida a ";
                                    int i = 0 ;
                                     while(intro2[i]!='\0') {
                                        Sleep(50);
                                        printf("%c",intro2[i]);
                                        i++;
                                    }    
                                    printf(" %d\n",conta_vida_inimigo);
                                    frases();
                                    inimigo--;
                                    info_inimigo(inimigo);
                                    if(conta_vida_inimigo <= 0){
                                        demora = 90;
                                        tempo(demora);
                                        ouro = aleatorio(0,5);
                                        contador_ouro = contador_ouro + ouro;
                                        if(ouro == 0){
                                            printf("   'Ué vazio ahhhhh aqueles malditos me pagam'\n");
                                        }
                                        else{
                                            printf("   Como recompensa por derrotar o inimigo, você ganhou %d ouro(s)!\n",ouro);
                                        }   
                                    }
                                }               
                            }
                            
                            else if(caso == 2){//se o jogador escolher a opção 2 ele ira tentar fugir
                                numero = aleatorio(1,6);
                                if((numero==1)||(numero==5)){
                                    printf("Você conseguiu fugir!\n");
                                }
                                else if(numero==2){
                                    dano = 10;
                                    conta_vida = vida_jogador - dano;
                                    vida_jogador = vida_jogador - dano;
                                    printf("   Você conseguiu fugir... Mas o inimigo te acertou um ataque e sua vida foi reduzida para %d!\n",conta_vida);
                                }
                                else{
                                    printf("Você não conseguiu fugir... O inimigo està se aproximando e você vai ter que enfrenta-lo!\n");
                                    printf("\n\n -------------------------\n\n   [1] Atacar o inimigo\n\n -------------------------\n\n");
                                    scanf("%d",&caso);
                                    system("cls");
                                    if(caso==1){
                                        resultado_luta(result_dado);//resultado aleatorio do ataque se sera bem executado ou não
                                        if((result_dado == 2)||(result_dado == 1)){//remove a vida do jogador de acordo com o dano
                                            dano = 10;
                                            conta_vida = vida_jogador - dano;
                                            vida_jogador = vida_jogador - dano;
                                            printf("Sua vida foi reduzida a %d\n",conta_vida);
                                            info_inimigo(inimigo);
                                        }
                                        else if((result_dado == 3)||(result_dado == 4)||(result_dado == 5)){ //remove o dano base que o jogador desfere contra o inimigo
                                            dano = 100;
                                            conta_vida_inimigo = vida_inimigo - dano;
                                            printf("A vida do inimigo foi reduzida a %d\n", inimigo);
                                            inimigo--;
                                            info_inimigo(inimigo);
                                            if(conta_vida_inimigo <= 0){
                                                ouro = aleatorio(0,5);
                                                contador_ouro = contador_ouro + ouro;
                                                if(ouro == 0){
                                                    printf("   'Ué vazio ahhhhh aqueles malditos me pagam'\n");
                                                }
                                                else{
                                                    printf("   Como recompensa por derrotar o inimigo, você ganhou %d ouro(s)!\n",ouro);
                                                }   
                                            }
                                        }
                                        else{//remove o dano critico que o jogador desfere contra o inimigo
                                            dano = 500;
                                            conta_vida_inimigo = vida_inimigo - dano;
                                            frases();
                                            inimigo--;
                                            info_inimigo(inimigo);
                                            if(conta_vida_inimigo <= 0){
                                                ouro = aleatorio(0,5);
                                                contador_ouro = contador_ouro + ouro;
                                                if(ouro == 0){
                                                    printf("   'Ué vazio ahhhhh aqueles malditos me pagam'\n");
                                                }
                                                else{
                                                    printf("   Como recompensa por derrotar o inimigo, você ganhou %d ouro(s)!\n",ouro);
                                                }   
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if((inimigo == 0) && (bau >= 1)){//quando spawna 1 ou mais baus e nenhum inimigo
                            printf("   Escolha entre abrir o ba? ou ir para a proxima sala:\n\n -------------------------\n\n   [1] Abrir o ba?\n   [2] Abrir a porta e avan?ar de sala\n\n -------------------------\n\n");
                            scanf("%d",&caso);
                            system("cls");
                
                            if(caso == 1){//se o jogador abrir o bau ele recebe uma quantia aleatoria de ouro
                                ouro = aleatorio(0,5);
                                contador_ouro = contador_ouro + ouro;
                                printf("Você encontrou %d ouro(s) no bau",ouro,inimigo);
                                numero=aleatorio(1,6);
                                bau--;
                                if(((numero==1)||(numero==2)||(numero==4))){
                                    inimigo = (aleatorio(1,3));
                                    printf("... mas havia uma armadilha no bau e %d inimigo(s) apareceram!!\n",inimigo);
                                    printf("\n\n -------------------------\n\n   [1] Atacar o inimigo\n\n -------------------------\n\n");
                                    scanf("%d",&caso);
                                    bau--;
                                    if(caso==1){
                                        resultado_luta(result_dado);//resultado aleaatorio do ataque se sera bem executado ou nï¿½o
                                        if((result_dado == 2)||(result_dado == 1)){//remove a vida do jogador de acordo com o dano
                                            dano = 10;
                                            conta_vida = vida_jogador - dano;
                                            vida_jogador = vida_jogador - dano;
                                            printf("Sua vida foi reduzida a %d.\n",conta_vida);
                                            info_inimigo(inimigo);
                                        }
                        
                                        else if((result_dado == 3)||(result_dado == 4)||(result_dado == 5)){ //remove o dano base que o jogador desfere contra o inimigo
                                            dano = 100;
                                            conta_vida_inimigo = vida_inimigo - dano;
                                            printf("A vida do inimigo foi reduzida a %d.",conta_vida_inimigo);
                                            inimigo--;
                                            info_inimigo(inimigo); 
                                            if(conta_vida_inimigo <= 0){
                                                ouro = aleatorio(0,5);
                                                contador_ouro = contador_ouro + ouro;
                                                if(ouro == 0){
                                                    printf("   'Ué vazio ahhhhh aqueles malditos me pagam'\n");
                                                }
                                                else{
                                                    printf("   Como recompensa por derrotar o inimigo, você ganhou %d ouro(s)!\n",ouro);
                                                }   
                                            }
                                        }
                                        else{//remove o dano critico que o jogador desfere contra o inimigo
                                            dano = 500;
                                            conta_vida_inimigo = vida_inimigo - dano;
                                            info_inimigo(inimigo);
                                            frases();
                                            inimigo--;
                                            info_inimigo(inimigo);
                                            if(conta_vida_inimigo <= 0){
                                                ouro = aleatorio(0,5);
                                                contador_ouro = contador_ouro + ouro;
                                                if(ouro == 0){
                                                    printf("   'Ué vazio ahhhhh aqueles malditos me pagam'\n");
                                                }
                                                else{
                                                    printf("   Como recompensa por derrotar o inimigo, você ganhou %d ouro(s)!\n",ouro);
                                                }   
                                            }
                                        }
                                    }    
                                }
                                else{
                                    printf("e avança para proxima sala!\n");
                                }
                            }
                            else{
                                printf("Você ignorou o baú e avançou de sala!\n");
                            }        
                        }               
                        else if((inimigo >= 1) && (bau >= 1)){//quando spawnar 1 ou mais inimigos e 1 ou mais baus na mesma sala
                            printf("   Escolha entre enfrentar o inimigo ou abrir o baú:\n\n -------------------------\n\n   [1] Enfrentar o inimigo\n   [2] Abrir o baú\n\n -------------------------\n\n");
                            scanf("%d",&caso);
                            system("cls");
                            if(caso==1){//se o jogador escolher a opção 1 ele ataca o inimigo
                                int result_dado = aleatorio(1, 6);
                                resultado_luta(result_dado);
                                if((result_dado == 2)||(result_dado == 1)){
                                    dano = 10;
                                    conta_vida = vida_jogador - dano;
                                    vida_jogador = vida_jogador - dano;
                                    printf("Sua vida foi reduzida a %d\n",conta_vida);
                                    info_inimigo(inimigo);
                                }
                                else if((result_dado == 3)||(result_dado == 4)||(result_dado == 5)){
                                    dano = 100;  
                                    conta_vida_inimigo = vida_inimigo - dano;
                                    printf("A vida do inimigo foi reduzida a %d",conta_vida_inimigo);
                                    inimigo--;
                                    info_inimigo(inimigo);
                                    if(conta_vida_inimigo <= 0){
                                        ouro = aleatorio(0,5);
                                        contador_ouro = contador_ouro + ouro;
                                        if(ouro == 0){
                                            printf("   'Ué vazio ahhhhh aqueles malditos me pagam'\n");
                                        }
                                        else{
                                            printf("   Como recompensa por derrotar o inimigo, você ganhou %d ouro(s)!\n",ouro);
                                        }   
                                    }
                                }
                                else{
                                    dano = 500;
                                    conta_vida_inimigo = vida_inimigo - dano;
                                    frases();
                                    inimigo--;
                                    info_inimigo(inimigo);
                                    if(conta_vida_inimigo <= 0){
                                        ouro = aleatorio(0,5);
                                        contador_ouro = contador_ouro + ouro;
                                        if(ouro == 0){
                                            printf("   'Ué vazio ahhhhh aqueles malditos me pagam'\n");
                                        }
                                        else{
                                            printf("   Como recompensa por derrotar o inimigo, você ganhou %d ouro(s)!\n",ouro);
                                        }   
                                    }
                                }
                            }     
                            else if(caso == 2){//se a escolher a opção 2 você abre o baï¿½
                                ouro = aleatorio(0,5);
                                contador_ouro = contador_ouro + ouro;
                                bau--;
                                printf(" -------------------------\n\n   Você ahou %d ouro(s) no baú...\n",ouro);
                                printf("   mas para avançar precisa enfrentar os inimigos desta sala!\n");
                                printf("\n -------------------------\n\n   [1] Atacar o inimigo\n\n -------------------------\n\n");
                                scanf("%d",&caso);
                                if(caso==1){
                                    resultado_luta(result_dado);//resultado aleatorio do ataque se sera bem executado ou não
                                    if((result_dado == 2)||(result_dado == 1)){//remove a vida do jogador de acordo com o dano
                                        dano = 10;
                                        conta_vida = vida_jogador - dano;
                                        vida_jogador = vida_jogador - dano;
                                        printf("e sua vida foi reduzida a %d\n",conta_vida);
                                        info_inimigo(inimigo);
                                    }
                                    else if((result_dado == 3)||(result_dado == 4)||(result_dado == 5)){ //remove o dano base que o jogador desfere contra o inimigo
                                        dano = 100;
                                        conta_vida_inimigo = vida_inimigo - dano;
                                        printf("e a vida do inimigo foi reduzida a %d",conta_vida_inimigo);
                                        inimigo--;
                                        info_inimigo(inimigo);
                                        if(conta_vida_inimigo <= 0){
                                            ouro = aleatorio(0,5);
                                            contador_ouro = contador_ouro + ouro;
                                            if(ouro == 0){
                                                printf("   'Ué vazio ahhhhh aqueles malditos me pagam'\n");
                                            }
                                            else{
                                                printf("   Como recompensa por derrotar o inimigo, você ganhou %d ouro(s)!\n",ouro);
                                            }   
                                        }
                                    }
                                    else{//remove o dano critico que o jogador desfere contra o inimigo
                                        dano = 500;
                                        conta_vida_inimigo = vida_inimigo - dano;
                                        frases();
                                        inimigo--;
                                        info_inimigo(inimigo);
                                        if(conta_vida_inimigo <= 0){
                                            ouro = aleatorio(0,5);
                                            contador_ouro = contador_ouro + ouro;
                                            if(ouro == 0){
                                                printf("   'Ué vazio ahhhhh aqueles malditos me pagam'\n");
                                            }
                                            else{
                                                printf("   Como recompensa por derrotar o inimigo, você ganhou %d ouro(s)!\n",ouro);
                                            }   
                                        }
                                    }
                                } 
                            }
                        }
                        else{
                            printf("A sala está vazia... ");
                            printf("Abra a porta!\n");
                            printf("-------------------------\n\n   [1] Abrir a porta\n -------------------------\n\n");
                            scanf("%d",&caso);
                            if(caso == 1){
                                //o jogador avanca de sala(nao precisa de codigo porque a repetição do jogo ja conta +1 na fase)  
                            }
                        }
                    }
                    }
                }          
            }
                    
            else{ 
                if(vida_jogador>0){
                porta ==0;
                info_vida(vida_jogador);
                info_nome(nome);
                info_fase(fase);
                info_ouro(contador_ouro);
                printf("   Volte la  e abra essa porta!!\n\n"); //feito para caso inimigo e baú == 0
                fase--;
                }
            }
            if(inimigo <= 0){
            	 printf("   Que sorte, sem inimigos por ai... vá para o proximo cenenário.\n");
            }
        }    
    
    if(vida_jogador<=0){
        printf("Voce morreu e perdeu a partida:\n");
        info_nome(nome);
        printf("\n");
        info_fase(fase);
        printf("\n");
        info_ouro(contador_ouro);     
    }   


    system("PAUSE");
    return 0;
}
