#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int ascii (char letra){
	
	int valorascii = letra;
	
	return valorascii;	
	
}

void fin(){
		
		cout<<"\n\n1.- Volver a menu:"<<endl;
		cout<<"2.- Salir"<<endl;
		cout<<"\nIndique su respuesta  1/2: ";	
			
	}

void Clear(){
    system("cls");
}

void opc1(){
	cout<<"\t\tNumero a binario."<<endl;
	
	cout<<"\nIndique el numero decimal a traducir: ";
}

void opc2(){
	cout<<"\t\tBinario a numero."<<endl;
	
	cout<<"\nIndique el numero binario a traducir: ";
}

void opc3(){
	cout<<"\t\tBinario a letra."<<endl;
	
	cout<<"\nIndique el numero binario a traducir: ";
}

void opc4(){
	cout<<"\t\tTexto a ascii."<<endl;
	
	cout<<"\nIndique el texto o letra a traducir: ";
}

void opc5(){
	cout<<"\t\tTexto a binario"<<endl;

	cout<<"\nIndique el texto o letra a traducir: ";
}

void Menu(){
	cout<<"\t\tCreado Por Jakob Wnek."<<endl;
	cout<<"\t\tBienvenido al Traductor Binario"<<endl;
	
	cout<<"\n1.- Numero a binario."<<endl;
	cout<<"2.- Binario a numero."<<endl;
	cout<<"3.- Binario a letra."<<endl;
	cout<<"4.- Texto a ascii."<<endl;
	cout<<"5.- Texto a binario."<<endl;
	cout<<"6.- Abandonar Programa."<<endl;
	
	cout<<"\nIndica el numero 1/2/3/4/5/6: ";
	
}

int main() {
	
	int dec2 = 0;
	int dec = 0;
	int num;
	int byte[8];
	char letra;

		Menu();
		cin>>dec;
		
		Clear();
		
		if(dec == 1){
			
			int i; 
			opc1();                                      
			cin>>num;
			
			for(int j=0;j<8;j++){
			
				byte[i]	= num%2; 
				num = num/2;
				i++;
	
			}
			
			cout<<"\nBinario correspondiente: ";
			
			for(int j=7;j>=0;j--){
			
				cout<<byte[j];
	
			}			
			
			fin();
			cin>>dec2;
		
			if (dec2 == 1){
				Clear();
				return main();
			}
			else{
				return 0;
			}
			
		}
		
		else if(dec == 2){
			
			int decimal = 0;
			int aux;
			opc2();
			cin>>num;
			
			for(int i=0;i<8;i++){
				byte[i] = num%10;
				num = num/10;
			}
			
			for(int i=0;i<8;i++){
				
				aux = (byte[i]*pow(2,i));
				decimal += aux;
			
				}
			
			cout<<"\nDecimal correspondiente: "<<decimal;
			
			fin();
			cin>>dec2;
		
			if (dec2 == 1){
				Clear();
				return main();
			}
			else{
				return 0;
			}
			
		}
		
		else  if(dec == 3){
			
			opc3();
			cin>>num;
			
			int decimal = 0;
			int aux;
			int bin;
			char caracter;

			bin = num;
			
			for(int i=0;i<8;i++){
				byte[i] = num%10;
				num = num/10;
			}
			
			for(int i=0;i<8;i++){
				
				aux = (byte[i]*pow(2,i));
				decimal += aux;
			}
				
			caracter = decimal;
			
			
			cout<<"Numero binario: "<<bin<<" --> Letra correspondiente: "<<caracter<<endl;
		
			fin();
			cin>>dec2;
		
			if (dec2 == 1){
				Clear();
				return main();
			}
			else {
				return 0;
			}
			
			
		}
			
		else  if(dec == 4){
			
				fflush(stdin);
				
			char letra[100];
			int n;
			
			opc4();
			cin.getline(letra,100,'\n');   
			
			n = strlen(letra);
		
			cout<<"\n"<<endl;
				
			for(int i=0;i<n;i++){
					
				cout<<"Letra: "<<letra[i]<<" --> Codigo ascii correspondiente: "<<ascii(letra[i])<<endl;

			}
			
			fin();
			cin>>dec2;
		
			if (dec2 == 1){
				Clear();
				return main();
			}
			else {
				return 0;
			}
			
		}
			
		
		else if (dec == 5){
				
			char letra[100];
			int n = 0;
			int k = 0;    
			int num[100]; 
			int aux;
			char texto[100];
			
			fflush(stdin);
			opc5();
			cin.getline(letra,100,'\n');   
			
			n = strlen(letra);
		
			cout<<"\n"<<endl;
			
			for(int x=0;x<n;x++){
			
				texto[x] = letra[x];
	
			}
			
			for(int x=0;x<n;x++){
			
				num[x] = ascii(letra[x]);
	
			}	
			
			for(int x=0;x<n;x++){
					
					k = 0;
					aux = num[x];
					
				cout<<"Letra: "<<texto[x]<<" --> Codigo binario correspondiente: ";
					
				for(int j=0;j<8;j++){
				
					fflush(stdin);
					byte[k]	= aux%2;
					aux = aux/2;
					k++;
				
				}
				
				for(int j=7;j>=0;j--){
					
					cout<<byte[j];
			
				}
				cout<<endl;
			}
			
			fflush(stdin);

			
			
			fin();
			cin>>dec2;
		
			if (dec2 == 1){
				Clear();
				return main();
			}
			else {
				return 0;
			}	
		}
		
		else  if(dec == 6){
		
			cout<<"Fin del Programa"<<endl;
			cout<<"\n\n\t\tCreado Por Jakob Wnek."<<endl;
			system("pause");
			return 0;
			}
		
		else if(dec > 6){
			return main();
		}
		
}

//Creado por Jakob Wnek 16 Años 

