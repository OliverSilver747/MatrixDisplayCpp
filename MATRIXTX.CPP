# include <dos.h>//contiene las funciones del DOS
# include <fstream.h>//libreria para POO
# include <graphics.h>//libreria grafica
# include <conio.h>//libreria para funciones especiales

void intro();
void main(void){
	clrscr();
	intro();
}

void intro(void){
textmode(BW80);
char a[]="Despliegue de Matriz de Caracteres";
char b[]="Modo de video aplicado BW80";
char c[]="LENGUAJE DE PROGRAMACION C++";
char d[]="Funciones especiales del modo Texto ";
char e[]="Creado por CARLOS ARIZMENDI 2003";
char f[]="Prueba para Github 2018";
char g[]="PRESIONE ENTER PARA CONTINUAR...";

	  textcolor(14);gotoxy(25,3);cout<<"";
	  for(int i=0;i<=34;i++){cprintf("%c",a[i]);delay(50);}
	  textcolor(12);gotoxy(25,6);cout<<"";
	  for(i=0;i<=27;i++){cprintf("%c",b[i]);delay(50);}
	  textcolor(10);gotoxy(27,9);cout<<"";
	  for(i=0;i<=27;i++){cprintf("%c",c[i]);delay(50);}
	  textcolor(14);gotoxy(20,15);cout<<"";
	  for(i=0;i<=36;i++){cprintf("%c",d[i]);delay(50);}
	  textcolor(12);gotoxy(20,19);cout<<"";
	  for(i=0;i<=33;i++){cprintf("%c",e[i]);delay(50);}
	  textcolor(10);gotoxy(20,23);cout<<"";
	  for(i=0;i<=22;i++){cprintf("%c",f[i]);delay(50);}
	  textcolor(BLINK+15);gotoxy(23,12);cout<<"  ";
	  for(i=0;i<=31;i++){cprintf("%c",g[i]);delay(50);}
	  cin.get();
}
