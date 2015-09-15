#include <iostream>
#include <stdlib.h>
#include<conio.h>
#include <time.h> 
#include <string>
using namespace std;
void delay(int secs) {
  for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}
void menu();
void tutorial(){
	system("pause");
}
void nivel1(){
	system("pause");
}
void nivel2(){
	system("pause");
}
void nivel3(){
	system("pause");
}
void nivel4(){
	system("pause");
}
void nivel5(){
	system("pause");
}
void nivel6(){
	system("pause");
}
void nivel7(){
	system("pause");
}
void logo(){
	system("cls");
	cout<<"     "<<endl;
	cout<<"          ______        ______        ___       _______  "<<endl;
	cout<<"         |   _  \      /  __  \      /   \     |       \ "<<endl;
	cout<<"         |  |_)  |    |  |  |  |    /  ^  \    |  .--.  |"<<endl;
	cout<<"         |      /     |  |  |  |   /  /_\  \   |  |  |  |"<<endl;
	cout<<"         |  |\  \----.|  `--'  |  /  _____  \  |  '--'  |"<<endl;
	cout<<"         | _| `._____| \______/  /__/     \__\ |_______/ "<<endl;
	cout<<"     "												<<endl;
	cout<<"          ______    __        ______     ______  __  ___      _______."<<endl;
	cout<<"         |   _  \  |  |      /  __  \   /      ||  |/  /     /       |"<<endl;
	cout<<"         |  |_)  | |  |     |  |  |  | |  ,----'|  '  /     |   (----`"<<endl;
	cout<<"         |   _  <  |  |     |  |  |  | |  |     |    <       \   \    "<<endl;
	cout<<"         |  |_)  | |  `----.|  `--'  | |  `----.|  .  \  .----)   |   "<<endl;
	cout<<"         |______/  |_______| \______/   \______||__|\__\ |_______/    "<<endl;
	for(int j=0;j<4;j++){
		cout<<" "<<endl;
	}
}

void tuto(){
	logo();
	string a23;
	cout<<" You wanna play the tutorial: "<<endl;
	cin>>a23;
	a23=tolower(a23);
	if (a23=="si" or a23=="yes")
		tutorial();
	else if (a23=="no")
		nivel1();
	else:
		cout<<" That is not a valid option"<<endl;
		delay(2);
		tuto();
}

void levels(int AVICCI){
	logo();
	cout<<"Choose a level: "<<endl;
	cout<<" "<<endl;
	cout<<"0.-TUTORIAL"<<endl;
	cout<<"1.-Choose a level: "<<endl;
	cout<<"2.-Choose a level: "<<endl;
	cout<<"3.-Choose a level: "<<endl;
	cout<<"4.-Choose a level: "<<endl;
	cout<<"5.-Choose a level: "<<endl;
	cout<<"6.-Choose a level: "<<endl;
	cout<<"7.-Choose a level: "<<endl;
	cout<<"8.-BACK TO MENU"<<endl;	
	cout<<" "<<endl;
	int n;
	cout<<"Choose a level: "<<endl;
	cin>>n;
	if (n==0){
		tutorial();}
	else if (n==1){
		nivel1();}
	else if (n==2){
		nivel2();}
	else if (n==3){
		nivel3();}
	else if (n==4){
		nivel4();}
	else if (n==5){
		nivel5();}
	else if (n==6){
		nivel6();}
	else if (n==7){
		nivel7();}
	else if (n==8){
		menu();}
}

void creditos(){
	system("cls");
	for(int i=0;i<30;i++){
	
		cout<<" "<<endl;
		cout<<"          ______        ______        ___       _______  "<<endl;
		cout<<"         |   _  \      /  __  \      /   \     |       \ "<<endl;
		cout<<"         |  |_)  |    |  |  |  |    /  ^  \    |  .--.  |"<<endl;
		cout<<"         |      /     |  |  |  |   /  /_\  \   |  |  |  |"<<endl;
		cout<<"         |  |\  \----.|  `--'  |  /  _____  \  |  '--'  |"<<endl;
		cout<<"         | _| `._____| \______/  /__/     \__\ |_______/ "<<endl;
		cout<<"     "												<<endl;
		cout<<"          ______    __        ______     ______  __  ___      _______."<<endl;
		cout<<"         |   _  \  |  |      /  __  \   /      ||  |/  /     /       |"<<endl;
		cout<<"         |  |_)  | |  |     |  |  |  | |  ,----'|  '  /     |   (----`"<<endl;
		cout<<"         |   _  <  |  |     |  |  |  | |  |     |    <       \   \    "<<endl;
		cout<<"         |  |_)  | |  `----.|  `--'  | |  `----.|  .  \  .----)   |   "<<endl;
		cout<<"         |______/  |_______| \______/   \______||__|\__\ |_______/    "<<endl;
		cout<<" "<<endl;
		for(int j=0;j<i;j++){
			cout<<" "<<endl;
		}
			
		cout<<" Created by :"<<endl;
		cout<<"				Alfred Chavez Urday"<<endl;
		cout<<"				Gonzalo Coayla Zuniga"<<endl;
		cout<<"				Rodrigo Sanchez Pinto"<<endl;
		cout<<"				Juan Flores Huanqui"<<endl;
		cout<<" Company :"<<endl;
		cout<<"				ACM1PT.INC"<<endl;
		delay(1);
		system("cls");
	}
	menu();
	
}
void menu(){														
	logo();
	cout<<" 1_NEW GAME"<<endl;
	cout<<" 2_LEVELS"<<endl;
	cout<<" 3_EXIT"<<endl;
	cout<<" 4_CREDITS"<<endl;
	cout<<" "<<endl;
	cout<<"							Created by: ACM1PT.INC"<<endl;
	cout<<" "<<endl;
	int n;
	cout<<" Welcome, Enter the option you wanna get in to: "<<endl;
	cin>>n;
	
	if (n==1){
		tuto();
	}
	else if (n==2){
		int AVICII=7;
		system("cls");
		levels(AVICII);
	}
	else if (n==3){
		system("cls");
		cout<<"BYE"<<endl;
	}
	else if (n==4){
		system("cls");
		creditos();
	}
	else{
		cout<<" "<<endl;
		cout<<" This not a valid option"<<endl;
		delay(2);
		menu();
	}
}










int main (){
	menu();
}
