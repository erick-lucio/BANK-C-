#include "contas.h"


int main(int argc, char** argv) 
{
	tipolistadupla lista;
	tipoitem item;
	flvazia(&lista);
	int a =1;	
	int retorno,test7=0;

	
	
	  //AREA DE TESTE     nome,endereco,bairro,nascime,numero,saldo
	inicializa1("erick bolado","dubai india","nobre castelo","30/04/1999" ,50000.70,item,&lista,a); 
	a++;                       
	inicializa1("WAGNER BRONZODIA","Disney","pedrinhas","15/05/1996",25544.50,item,&lista,a);
	a++;  
	inicializa1("Neymar","MACEIO","morro alto","20/06/1964",70000.70,item,&lista,a);
	a++;  
	inicializa1("DRAVEN AUGUSTO","litte italy","grand canyon","25/07/1914" ,15845.37,item,&lista,a);
	a++;  
	inicializa1("NARUTO UZUMAKI","RAJA","miami beach","19/09/2015" ,74397.96,item,&lista,a);
	a++;  

//itens//	nome[150]	 endereco[100] 	      	 bairro[50] 	nascimento[10]	


	
						       
                  
//ARRUMAR BAGULHO DO ISDIGIT	
//adicionar uma Sexta opcao no Menu pra ter o imprime


	
	
	
	
	
	
	
	
	                    //AREA TESTE
	while(0<1){
	system("cls");

	int j = 0;
	int w=0;
	float z=0;
	int y=0;	
	int x=0;
	printf("\n****************************************************************************************************************************************************************")	;
	printf("***** BANCO \n***** ESCOLHA A OPERACAO DESEJADA \n***** 1-DEPOSITAR \n***** 2-SACAR\n***** 3-TRANSFERIR \n***** 4-SALDO UNICO \n***** 5-SALDO GERAL\n***** 6- INFO\n***** 7- CRIAR CONTA\n");
	printf("****************************************************************************************************************************************************************")	;
	
	
		x = testint3();
	//TRABALHO ERICK BOLADAO NAQUELE PIQUE
	
	system("cls");           
	switch(x){
		case 1:            //if deposito
		printf("\nVOCE ESCOLHEU DEPOSITO\n");
		cout<<"ESCOLHA O NUMERO DA SUA CONTA\nCONTA N:1\nCONTA N:2\nCONTA N:3\nCONTA N:4\nCONTA N:5\n\n\n";
		y = testint( a);                           //VERIFICA SE O NUMERO E VALIDO
		cout<<"Digite a quantia a ser depositada\n";
		z = testint1();                           //VERIFICA SE O NUMERO E VALIDO quantia
		system("cls");
	
		
		deposito(y,z,&lista);
		getch();
	
	
	
		break;	
		case 2:           //if saque
		printf("\nVOCE ESCOLHEU SAQUE\n");
		cout<<"ESCOLHA O NUMERO DA SUA CONTA\nCONTA N:1\nCONTA N:2\nCONTA N:3\nCONTA N:4\nCONTA N:5\n\n\n";
		y = testint(a);                           //VERIFICA SE O CONTA E VALIDO
		cout<<"\nDigite a quantia a ser sacada\n";
		z = testint1();                           //VERIFICA SE O NUMERO E VALIDO quantia
		
		saque(z,y,&lista,&item);
		getch();
		//TRABALHO ERICK BOLADAO NAQUELE PIQUE	
		break;	
		
		
		case 3:           //if tranferencia
			
		retorno = 0;
		printf("\nVOCE ESCOLHEU TRANFERENCIA");	
		while(y==w){
		
		cout<<"\nESCOLHA O NUMERO DA SUA CONTA\nCONTA N:1\nCONTA N:2\nCONTA N:3\nCONTA N:4\nCONTA N:5\n\n\n";
		y = testint(a);                           //VERIFICA SE O NUMERO E VALIDO conta
		cout<<"\nDigite o numero da conta que recebera a tranferencia \nCONTA N:1\nCONTA N:2\nCONTA N:3\nCONTA N:4\nCONTA N:5\n\n\n";
		w = testint(a);//VERIFICA SE O NUMERO E VALIDO conta
		if(y==w){ 
		cout <<"Impossivel tranferir para a mesma conta\nEscolha Novamente\n\n";
	}
	}
		
		cout<<"\nDigite a quantia a ser tranferida\n";
		z = testint1();                           //VERIFICA SE O NUMERO E VALIDO quantia 
		
		retorno = saque(z,y,&lista,&item);
		
	if(retorno == 1){
		deposito(w,z,&lista);
		system("cls");
		cout<<"Operacao realizada com sucesso\n"<<endl;
	}
	
		getch();


		
		break;	
		
		case 4:          //if saldo unico
		printf("\nVOCE ESCOLHEU SALDO UNICO\n");
		cout<<"\nEscolha o numero da conta\nCONTA N:1\nCONTA N:2\nCONTA N:3\nCONTA N:4\nCONTA N:5\n";
		y = testint(a);                           //VERIFICA SE O CONTA E VALIDO
		mostraunica(y,lista);
		getch();
		system("cls");
		
		
		//TRABALHO ERICK BOLADAO NAQUELE PIQUE
		
		break;
		case 5:          //if saldo geral
		
	
			mostralista(lista);
			getch();
		
		break;
		case 6:
             
             cout<<"DIGITE O NUMERO SUA CONTA\n\n\n";
 y = testint(a);                           //VERIFICA SE O NUMERO E VALIDO conta
system("cls");
mostrapessoal(y,lista);
getch();
   break;
	 case 7:
	 	test7=0;
	 	system("cls");
	 	printf("Por Favor informe seus dados          \n");
	 	while(test7 !=1 ){
		 
	 	
	 		printf("Nome :");
	 	gets(item.nome);
	 	printf("Bairro : ");
	 	gets(item.bairro);
	 	printf("Endereco :");
	 	gets(item.endereco);
	 	printf("Data-Nascimento -DD/MM/YYYY  :");
	 	gets(item.nascimento);
	 	item.ID = a;
	 	system("cls");
	 	
	 	printf("Verifique se seus dados estao corretos\n\n");
	 	
	 	printf("Nome :");
	 	puts(item.nome);
	 	printf("Bairro :");
	 	puts(item.bairro);
	 	printf("Endereco :");
	 	puts(item.endereco);
	 	printf("Data-nascimento :");
	 	puts(item.nascimento);
	 	
	 	printf("Seus dados estao Corretos?\n1- SIM\n2- NAO \n");
	 	scanf("%i",&test7);
	 	system("cls");
	 	fflush(stdin);
	 
	switch(test7){
		case 1:
			insereprimeiro(item,&lista);
	 		a++;
			break;
			default:
				 	printf("Digite novamente\n");
				 	
				break;
	}
	 			 		 		 		 	
	 			 	
	 }
	 	
	 	
	 	/*
	 POR UNS GETS E SCANF PRA RECEBER O ITEM E JOGAR ELE NA LISTA
	 E ARRUMAR TB OS TESTINT OS 3
	 
	 */
	 break;
	 default:
	 cout<<"OPCAO INVALIDA"<<endl;
	 break;                                                    
                                                                 
	}
//	cout <<"\nPressione Enter para realizar outra operacao";
//	getch();
	system("cls");
	
	}

	//TRABALHO ERICK BOLADAO NAQUELE PIQUE
	//case pedir p sair return 0;
}

