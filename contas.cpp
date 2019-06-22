
#include "contas.h"


using namespace std;


//TRABALHO ERICK BOLADAO NAQUELE PIQUE
	
void inicializa1(char nome[150] ,char endereco[100] ,	char bairro[50] ,char nascimento[10] ,	float saldo,tipoitem item,tipolistadupla *lista,int i)
{

 item.ID =i;
 strcpy(item.nome,nome);
 strcpy(item.endereco,endereco);
 strcpy(item.bairro,bairro);
 strcpy(item.nascimento,nascimento);
 item.saldo = saldo;
 
 
 insereprimeiro(item,lista);
}

/*void inicializa(tipoitem *item,tipolistadupla *lista)
{


 strcpy(item->nome,nome);
 strcpy(item->endereco,endereco);
 strcpy(item->bairro,bairro);
 strcpy(item->nascimento,nascimento);
 c->numero = numero;
 c->saldo = saldo;
}














//TRABALHO ERICK BOLADAO NAQUELE PIQUE
void imprime (contas c)
{
	

	cout<<"\nNome:";
	puts(c.nome);
	cout<<"\nEndereco:" ;
	puts(c.endereco);	
	cout<<"\nBairro: ";
	puts(c.bairro);
	cout<<"\nNascimento:";
	puts(c.nascimento);
	cout<< "\nNumero:"<<c.numero;	
	printf("\nSaldo:%.2f ",c.saldo);
	
}//TRABALHO ERICK BOLADAO NAQUELE PIQUE
*/
void deposito (int i, double saldo,tipolistadupla *lista)
{
	  apontador p;
    p = lista->primeiro; 
    while( p->prox != NULL ) {
    	if(p->item.ID == i){
    	
    		p->item.saldo += saldo;
    		cout<<"\nOperacao realiza com Sucesso\n\n";
    		cout<<"Seu saldo atual e :"<<p->item.saldo<<endl;
    		
    		cout<<"Pressione algo para continuar\n";
		
    		return ;
		}else{
						p = p->prox;			
		   }
		}
        
  
  p = lista->ultimo;
  while(p->ant != NULL){
  			   if(p->item.ID == i){  			   
    		p->item.saldo += saldo;
    		cout<<"\nOperacao realiza com Sucesso\n\n";
    		cout<<"Seu saldo atual e :"<<p->item.saldo<<endl;
    		
    		cout<<"Pressione algo para continuar\n";
			
    		return ;
				 }else{			
			p = p->ant;			
			if( p->ant == NULL )	{
   			printf("\nConta nao escontrada\n");	
   			return;
				 }  	
  } 	
}
}

int saque(int z,int y,tipolistadupla *lista,tipoitem *item)
{
		int c;
		  apontador p;
    p = lista->primeiro; 
    while( p->prox != NULL ) {
    	if(p->item.ID == y){
    				
    				
    			   if(z<= p->item.saldo){
					 	p->item.saldo -= z;
				   cout<<"Seu saldo atual e :"<<p->item.saldo<<endl;
    		cout<<"\nOperacao realiza com Sucesso\n\n";
    		cout<<"Pressione algo para continuar\n";
		
    		return 1;
					   }else{
					   	cout<<"Voce nao possui saldo suficiente"<<endl;
					   
					   	return 0;
						 }
    	
    	
		
		}else{
						p = p->prox;
							
							
		   }
		}
	
        
  
  p = lista->ultimo;
  while(p->ant != NULL){
  			   if(p->item.ID == y){  
				 			   
					   if(z<=p->item.saldo){
					   	
					   	p->item.saldo -= z;
				    cout<<"Seu saldo atual e :"<<p->item.saldo<<endl;
    		cout<<"\nOperacao realiza com Sucesso\n\n";
    		cout<<"Pressione algo para continuar\n";
			
    		return 1;
					   }else{
					   	cout<<"Voce nao possui saldo suficiente"<<endl;
					   	
					   	return 0;
						 }
    		
				 }else{			
			p = p->ant;			
			if( p->ant == NULL )	{
   			printf("\nConta nao escontrada\nTente Novamente Depois\n");	
   			
   			return 0;
				 }  	
  } 	
}


	
	
	
	
	
	
	
}


/*
void tranferencia1 (contas &c,double saldo)
{
	c.saldo -= saldo;
	
}

void tranferencia2 (contas &c,double saldo)
{
	c.saldo += saldo;
	
}
//TRABALHO ERICK BOLADAO NAQUELE PIQUE
*/

int testint(int i){
int y=0;
do
{
scanf("%i", &y);
fflush(stdin);
if( y > 0 and y<i-1)
{
	system("cls");

}
else {
	system("cls");
printf("Conta nao encontrada! \nDigite Novamente\n");
}
}while (!(y>0)or y>i-1);
return y;
}

float testint1(){
float w=0;
do
{
scanf("%f", &w);
fflush(stdin);
if( w > 0 and w < 9000000)
{
	system("cls");

}
else {
	system("cls");
printf("\nQuantia invalida\nDigite Novamente\n");
}
}while (!(w>0) or w>9000000);
return w;	
}

int testint3(){
int y=0;
do
{
scanf("%i", &y);
fflush(stdin);
if( y > 0 and y < 8)
{
	
//TRABALHO ERICK BOLADAO NAQUELE PIQUE
}
else {
system("cls");	
printf("\nOperacao nao encontrada! \n");
printf("\n****************************************************************************************************************************************************************")	;
	printf("***** BANCO \n***** ESCOLHA A OPERACAO DESEJADA \n***** 1-DEPOSITAR \n***** 2-SACAR\n***** 3-TRANSFERIR \n***** 4-SALDO UNICO \n***** 5-SALDO GERAL\n***** 6- INFO\n***** 7- CRIAR CONTA\n");
	printf("****************************************************************************************************************************************************************")	;
}
}while (!(y>0)or y>7);
return y;	
}//TRABALHO ERICK BOLADAO NAQUELE PIQUE



void flvazia(tipolistadupla *lista)
{
	lista->primeiro = (apontador)malloc(sizeof(celula));
	lista->ultimo = lista->primeiro;
	lista->primeiro->ant = NULL;
	lista->primeiro->prox = NULL;
}

int vazia(tipolistadupla lista)
{
	return (lista.primeiro == lista.ultimo);
}
void insereultimo (tipoitem x, tipolistadupla *lista)
{
     apontador novo;
 	 novo = (apontador) malloc(sizeof(celula));
     novo->ant = lista->ultimo;
     novo->prox = NULL;  
     novo->item = x;
  
	 lista->ultimo->prox = novo;
	 lista->ultimo = novo;
}
void insereprimeiro(tipoitem x, tipolistadupla *lista)
{
 	apontador novo = (apontador)malloc(sizeof(celula));
	novo->ant  = lista->primeiro;
	novo->prox = lista->primeiro->prox;
	novo->item = x;
	
	if ( lista->primeiro->prox != NULL ) //se a lista não está vazia
	{ 
	  lista->primeiro->prox->ant = novo;
	  lista->primeiro->prox = novo;
     }
	else //se a lista está vazia, o próximo inserido é o último
	{
	  lista->primeiro->prox = novo;
	  lista->ultimo = novo;
    } 
}
void retiraultimo(tipolistadupla *lista, tipoitem*item) 
{
  apontador temp;
  if ( vazia( *lista ) ) {
    cout << "\n erro: lista vazia!";
    return;
  }
  temp = lista->ultimo;
  *item = temp->item;
  lista->ultimo = lista->ultimo->ant;
  lista->ultimo->prox = NULL; 
  free(temp);   
}
void retiraprimeiro(tipolistadupla *lista, tipoitem *item) 
{
	apontador temp;
	if ( vazia(*lista) )  {
		printf(" erro: lista vazia! posicao nao existe!");
		return;  
      }
	temp = lista->primeiro->prox;
	*item = temp->item;
	lista->primeiro->prox = temp->prox;
	if (lista->primeiro->prox == NULL)
		lista->ultimo = lista->primeiro;
      else
		temp->prox->ant = lista->primeiro;
	free(temp);
}
void mostralista (tipolistadupla lista)
{
  apontador p;
  
  if ( vazia( lista ) ) {
    cout << "\n erro: lista vazia!";
    return;
  }
 
  p = lista.primeiro; 
  while( p->prox != NULL ) {
    p = p->prox;
    
    cout << "NOME:"<<p->item.nome <<endl;
    cout << "SALDO:"<<p->item.saldo<< " DOLARES"<<endl;
    cout <<"COD.CLIENTE : "<<p->item.ID <<endl<<" ************************************************\n";

    
  }
}

void mostraunica(int y,tipolistadupla lista){
 apontador p;
 p = lista.primeiro; 
    while( p->prox != NULL ) {
    	if(p->item.ID == y){
    		cout<<"Boa dia "<<p->item.nome<<endl<<"Seu saldo e :" <<p->item.saldo<<" DOLARES"<<endl;
    				  return ;   	    		
		}else{
						p = p->prox;
						if(p->item.ID == y){
    		cout<<"Boa dia "<<p->item.nome<<endl<<"Seu saldo e :" <<p->item.saldo<<endl;	
				return;	
    				 	   	  				}	
							
		   }
		}
		return;
}

void mostrapessoal(int y,tipolistadupla lista){
 apontador p;
 p = lista.primeiro; 
    while( p->prox != NULL ) {
    	if(p->item.ID == y){
    		cout<<"NOME:"<<p->item.nome <<endl;
    		cout<<"COD.CLIENTE:"<<p->item.ID<<endl;				
				cout<<"ENDERECO:"<<p->item.endereco ;                  
				cout<<" BAIRRO:"<<p->item.bairro <<endl;
				cout<<"DATA.NASC:"<<p->item.nascimento<<endl ;
				cout<<"SALDO:"<<p->item.saldo<<" DOLARES"<<endl;
    		
    				  return ;   	    		
		}else{
						p = p->prox;
						if(p->item.ID == y){
				cout<<"NOME:"<<p->item.nome <<endl;
    		cout<<"COD.CLIENTE:"<<p->item.ID<<endl;				
				cout<<"ENDERECO:"<<p->item.endereco ;                  
				cout<<" BAIRRO:"<<p->item.bairro <<endl;
				cout<<"DATA.NASC:"<<p->item.nascimento<<endl ;
				cout<<"SALDO:"<<p->item.saldo<<" DOLARES"<<endl;
					
				return;	
    				 	   	  				}	
							
		   }
		}
		return;
}

