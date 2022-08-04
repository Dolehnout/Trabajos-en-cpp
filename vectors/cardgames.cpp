#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

#define MAX 40

using namespace std;


void cartaA_corazon()
{
    cout<<endl;
    cout<<"╔═════════╗"<<endl;
    cout<<"║A        ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♥    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║       A ║"<<endl;
    cout<<"╚═════════╝"<<endl;
}

void cartaA_diamante()
{
    cout<<endl;
    cout<<"╔═════════╗"<<endl;
    cout<<"║A        ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♦    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║       A ║"<<endl;
    cout<<"╚═════════╝";
}

void cartaA_trebol()
{
    cout<<endl;
    cout<<"╔═════════╗"<<endl;
    cout<<"║A        ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♣    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║       A ║"<<endl;
    cout<<"╚═════════╝";
}


void cartaA_negro()
{
    cout<<endl;
    cout<<"╔═════════╗"<<endl;
    cout<<"║A        ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♠    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║       A ║"<<endl;
    cout<<"╚═════════╝";
}

/*Carta echas por:
Daniel Olarte
Alejandra Fernández
Adriana Guallichico*/
void carta2_corazon()
{
	cout<<endl<<"╔═══════════════╗";
    cout<<endl<<"║ 2             ║";
    cout<<endl<<"║ ♥             ║";
    cout<<endl<<"║       ♥       ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║       ♥       ║";
    cout<<endl<<"║            ♥  ║";
    cout<<endl<<"║            2  ║";
    cout<<endl<<"╚═══════════════╝";
}

void carta2_trebol()
{    
    cout<<endl<<"╔═══════════════╗";
    cout<<endl<<"║ 2             ║";
    cout<<endl<<"║ ♣             ║";
    cout<<endl<<"║       ♣       ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║       ♣       ║";
    cout<<endl<<"║            ♣  ║";
    cout<<endl<<"║            2  ║";
    cout<<endl<<"╚═══════════════╝";
}


void carta2_diamante()
{
    cout<<endl<<"╔═══════════════╗";
    cout<<endl<<"║ 2             ║";
    cout<<endl<<"║ ♦             ║";
    cout<<endl<<"║       ♦       ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║       ♦       ║";
    cout<<endl<<"║            ♦  ║";
    cout<<endl<<"║            2  ║";
    cout<<endl<<"╚═══════════════╝";
}


void carta2_negro()
{
    cout<<endl<<"╔═══════════════╗";
    cout<<endl<<"║ 2             ║";
    cout<<endl<<"║ ♠             ║";
    cout<<endl<<"║       ♠       ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║       ♠       ║";
    cout<<endl<<"║            ♠  ║";
    cout<<endl<<"║            2  ║";
    cout<<endl<<"╚═══════════════╝";
     
}

/*
Grupo #3 ; Federico Robles / Jesús Bone
Crear 4 cartas de número 3:
Corazón Negro - Diamante - Corazón Rojo - Trebol
*/
void carta3_negro()
{
    cout<<endl<<"╔═══════════════╗";
    cout<<endl;
    cout<<"║3	♠	║";
    cout<<endl;
    cout<<"║♠		║";
    cout<<endl;
    cout<<"║		║";
    cout<<endl;
    cout<<"║		║";
    cout<<endl;
    cout<<"║	♠	║";
    cout<<endl;
    cout<<"║		║";
    cout<<endl;
    cout<<"║		║";
    cout<<endl;
    cout<<"║	       ♠║";
    cout<<endl;
    cout<<"║	♠      ↋║";
    cout<<endl;
    cout<<"╚═══════════════╝";
}

void carta3_trebol()
{
    cout<<endl<<"╔═══════════════╗";
    cout<<endl;
    cout<<"║3	♣	║";
    cout<<endl;
    cout<<"║♣		║";
    cout<<endl;
    cout<<"║		║";
    cout<<endl;
    cout<<"║		║";
    cout<<endl;
    cout<<"║	♣	║";
    cout<<endl;
    cout<<"║		║";
    cout<<endl;
    cout<<"║		║";
    cout<<endl;
    cout<<"║	       ♣║";
    cout<<endl;
    cout<<"║	♣      ↋║";
    cout<<endl;
    cout<<"╚═══════════════╝";
}

void carta3_corazon()
{
    cout<<endl;
    cout<<"╔═════════╗"<<endl;
    cout<<"║3   ♥    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♥    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♥  3 ║"<<endl;
    cout<<"╚═════════╝"<<endl;
}

void carta3_diamante()
{
    cout<<endl;
    cout<<"╔═════════╗"<<endl;
    cout<<"║3   ♦    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♦    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♦  3 ║"<<endl;
    cout<<"╚═════════╝";
}



/*
LLerena Devin - Mora Angel - Gonzales Andrew 
*/
void carta4_corazon(){
    std::cout <<endl<< R"(
                     ╔═══════════════╗
                     ║ 4             ║
                     ║ ♥           ♥ ║
                     ║               ║
                     ║               ║
                     ║               ║
                     ║               ║
                     ║               ║
                     ║ ♥           ♥ ║
                     ║             4 ║
                     ╚═══════════════╝)" << endl;

}

void carta4_negro(){
    std::cout<<endl << R"(
                     ╔═══════════════╗ 
                     ║ 4             ║
                     ║ ♠             ║
                     ║   ♠       ♠   ║
                     ║               ║
                     ║               ║
                     ║               ║
                     ║   ♠       ♠   ║
                     ║             ♠ ║
                     ║             4 ║
                     ╚═══════════════╝)" << endl; 
}


void carta4_diamante(){
    std::cout<<endl << R"(      
                     ╔═══════════════╗ 
                     ║ 4             ║
                     ║ ◆             ║
                     ║   ◆       ◆   ║
                     ║               ║
                     ║               ║
                     ║               ║
                     ║   ◆       ◆   ║
                     ║             ◆ ║
                     ║             4 ║
                     ╚═══════════════╝)" << endl; 
}


void carta4_trebol(){
    std::cout <<endl << R"(
                     ╔═══════════════╗ 
                     ║ 4             ║
                     ║ ☘             ║
                     ║   ☘       ☘   ║
                     ║               ║
                     ║               ║
                     ║               ║
                     ║   ☘       ☘   ║
                     ║             ☘ ║
                     ║             4 ║
                     ╚═══════════════╝)" << endl;
}




/* Grupo 5-Integrantes: Abel Avila  - Daniel Trejo -Natanael Maffare
*/

void carta5_corazon()
{
    cout<<endl<<"╔═══════════╗";
    cout<<endl<<"║5          ║";
    cout<<endl<<"║ ♥       ♥ ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║     ♥     ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║ ♥       ♥ ║";
    cout<<endl<<"║          5║";
    cout<<endl<<"╚═══════════╝";
}

void carta5_negro()
{
    cout<<endl<<"╔═══════════╗";
    cout<<endl<<"║5          ║";
    cout<<endl<<"║ ♠       ♠ ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║     ♠     ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║ ♠       ♠ ║";
    cout<<endl<<"║          5║";
    cout<<endl<<"╚═══════════╝";
}

void carta5_trebol()
{
    cout<<endl<<"╔═══════════╗";
    cout<<endl<<"║5          ║";
    cout<<endl<<"║ ♣       ♣ ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║     ♣     ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║ ♣       ♣ ║";
    cout<<endl<<"║          5║";
    cout<<endl<<"╚═══════════╝";
}

void carta5_diamante()
{
    cout<<endl<<"╔═══════════╗";
    cout<<endl<<"║5          ║";
    cout<<endl<<"║ ♦       ♦ ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║     ♦     ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║ ♦       ♦ ║";
    cout<<endl<<"║          5║";
    cout<<endl<<"╚═══════════╝";
}






/*
César Palma - Jhon Bustamante
*/
void carta6_corazon()
{
       cout<<endl<<"╔═══════════════╗";
       cout<<endl<<"║ 6             ║";
       cout<<endl<<"║ ♥             ║";
       cout<<endl<<"║    ♥     ♥    ║";
       cout<<endl<<"║       ♥       ║";
       cout<<endl<<"║               ║";
       cout<<endl<<"║       ♥       ║";
       cout<<endl<<"║    ♥     ♥    ║";
       cout<<endl<<"║            ♥  ║ ";
       cout<<endl<<"║            6  ║";
       cout<<endl<<"╚═══════════════╝";
}

void carta6_trebol()
{

       cout<<endl<<"╔═══════════════╗";
       cout<<endl<<"║ 6             ║";
       cout<<endl<<"║ ♣             ║";
       cout<<endl<<"║    ♣    ♣     ║";
       cout<<endl<<"║       ♣       ║";
       cout<<endl<<"║               ║";
       cout<<endl<<"║       ♣       ║";
       cout<<endl<<"║    ♣     ♣    ║";
       cout<<endl<<"║            ♣  ║";
       cout<<endl<<"║            6  ║";
       cout<<endl<<"╚═══════════════╝";
}

void carta6_diamante()
{
       cout<<endl<<"╔═══════════════╗";
       cout<<endl<<"║ 6             ║";
       cout<<endl<<"║ ♦︎             ║";
       cout<<endl<<"║    ♦︎    ♦︎     ║";
       cout<<endl<<"║       ♦︎       ║";
       cout<<endl<<"║               ║";
       cout<<endl<<"║       ♦︎       ║";
       cout<<endl<<"║    ♦︎     ♦︎    ║";
       cout<<endl<<"║            ♦︎  ║";
       cout<<endl<<"║            6  ║";
       cout<<endl<<"╚═══════════════╝";
}


void carta6_negro()
{
       cout<<endl<<"╔═══════════════╗";
       cout<<endl<<"║ 6             ║";
       cout<<endl<<"║ ♠︎             ║";
       cout<<endl<<"║    ♠︎    ♠︎     ║";
       cout<<endl<<"║       ♠︎       ║";
       cout<<endl<<"║               ║";
       cout<<endl<<"║       ♠︎       ║";
       cout<<endl<<"║    ♠︎     ♠︎    ║";
       cout<<endl<<"║            ♠︎  ║";
       cout<<endl<<"║            6  ║";
       cout<<endl<<"╚═══════════════╝";
       
}
      

/*
Integrantes:
- Mell Vergara Palomino. Patrick Corozo Paez. Montaño Arboleda Nahomy.
*/

void carta7_diamante()
{
    cout<<endl<<"╔═════════════════════╗";
    cout<<endl<<"║  ♦ ♦ ♦ ♦ ♦ ♦ ♦ ♦ ♦  ║";
    cout<<endl<<"║  ♦ ♦ ♦ ♦ ♦ ♦ ♦ ♦ ♦  ║";
    cout<<endl<<"║  ♦ ♦         ♦ ♦ ♦  ║";
    cout<<endl<<"║             ♦ ♦ ♦   ║";
    cout<<endl<<"║            ♦ ♦ ♦    ║";
    cout<<endl<<"║           ♦ ♦ ♦     ║";
    cout<<endl<<"║          ♦ ♦ ♦      ║";
    cout<<endl<<"║         ♦ ♦ ♦       ║";
    cout<<endl<<"║        ♦ ♦ ♦        ║";
    cout<<endl<<"║       ♦ ♦ ♦         ║";
    cout<<endl<<"║      ♦ ♦ ♦          ║";
    cout<<endl<<"╚═════════════════════╝";
}

void carta7_negro()
{
    cout<<endl<<"╔═════════════════════╗";
    cout<<endl<<"║  ♠ ♠ ♠ ♠ ♠ ♠ ♠ ♠ ♠  ║";
    cout<<endl<<"║  ♠ ♠ ♠ ♠ ♠ ♠ ♠ ♠ ♠  ║";
    cout<<endl<<"║  ♠ ♠         ♠ ♠ ♠  ║";
    cout<<endl<<"║             ♠ ♠ ♠   ║";
    cout<<endl<<"║            ♠ ♠ ♠    ║";
    cout<<endl<<"║           ♠ ♠ ♠     ║";
    cout<<endl<<"║          ♠ ♠ ♠      ║";
    cout<<endl<<"║         ♠ ♠ ♠       ║";
    cout<<endl<<"║        ♠ ♠ ♠        ║";
    cout<<endl<<"║       ♠ ♠ ♠         ║";
    cout<<endl<<"║      ♠ ♠ ♠          ║";
    cout<<endl<<"╚═════════════════════╝";
}

void carta7_corazon()
{
    cout<<endl<<"╔═════════════════════╗";
    cout<<endl<<"║  ♥ ♥ ♥ ♥ ♥ ♥ ♥ ♥ ♥  ║";
    cout<<endl<<"║  ♥ ♥ ♥ ♥ ♥ ♥ ♥ ♥ ♥  ║";
    cout<<endl<<"║  ♥ ♥         ♥ ♥ ♥  ║";
    cout<<endl<<"║             ♥ ♥ ♥   ║";
    cout<<endl<<"║            ♥ ♥ ♥    ║";
    cout<<endl<<"║           ♥ ♥ ♥     ║";
    cout<<endl<<"║          ♥ ♥ ♥      ║";
    cout<<endl<<"║         ♥ ♥ ♥       ║";
    cout<<endl<<"║        ♥ ♥ ♥        ║";
    cout<<endl<<"║       ♥ ♥ ♥         ║";
    cout<<endl<<"║      ♥ ♥ ♥          ║";
    cout<<endl<<"╚═════════════════════╝"; 
}

void carta7_trebol()
{
    cout<<endl<<"╔═════════════════════╗";
    cout<<endl<<"║  ♣ ♣ ♣ ♣ ♣ ♣ ♣ ♣ ♣  ║";
    cout<<endl<<"║  ♣ ♣ ♣ ♣ ♣ ♣ ♣ ♣ ♣  ║";
    cout<<endl<<"║  ♣ ♣         ♣ ♣ ♣  ║";
    cout<<endl<<"║             ♣ ♣ ♣   ║";
    cout<<endl<<"║            ♣ ♣ ♣    ║";
    cout<<endl<<"║          ♣ ♣ ♣      ║";
    cout<<endl<<"║         ♣ ♣ ♣       ║";
    cout<<endl<<"║        ♣ ♣ ♣        ║",
    cout<<endl<<"║       ♣ ♣ ♣         ║";
    cout<<endl<<"║      ♣ ♣ ♣          ║";
    cout<<endl<<"║     ♣ ♣ ♣           ║";
    cout<<endl<<"╚═════════════════════╝";
    
}



/*Salazar Paul - Zambrano Miguel*/
void carta8_corazon()
{
    cout<<endl<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;     
    cout<<"║ 8               ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♥         ♥   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♥        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♥         ♥   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♥        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♥         ♥   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║               8 ║"<<endl;
    cout<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;
}

void carta8_diamante()
{
    cout<<endl<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;     
    cout<<"║ 8               ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♦         ♦   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♦        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♦         ♦   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♦        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♦         ♦   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║               8 ║"<<endl;
    cout<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;
}


void carta8_trebol()
{
    cout<<endl;
    cout<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;     
    cout<<"║ 8               ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♣         ♣   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♣        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♣         ♣   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♣        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♣         ♣   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║               8 ║"<<endl;
    cout<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;
}

void carta8_negro()
{
    cout<<endl;
    cout<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;     
    cout<<"║ 8               ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♠         ♠   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♠        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♠         ♠   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♠        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♠         ♠   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║               8 ║"<<endl;
    cout<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;
}



/*
    Nick López Reina - Dany Barrera - Ethan Bernal
*/
void carta9_corazon()
{
    cout<<endl<<"♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥";
    cout<<endl<<"♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥";
    cout<<endl<<"♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥";
    cout<<endl<<"               ♥♥♥♥";
    cout<<endl<<"               ♥♥♥♥";
    cout<<endl<<"               ♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥";
    cout<<endl<<"♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥";
}

void carta9_trebol()
{
    cout<<endl<<"♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣";
    cout<<endl<<"♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣";
    cout<<endl<<"♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣";
    cout<<endl<<"               ♣♣♣♣";
    cout<<endl<<"               ♣♣♣♣";
    cout<<endl<<"               ♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣";
    cout<<endl<<"♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣";
}

void carta9_diamante()
{
    cout<<endl<<"♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦";
    cout<<endl<<"♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦";
    cout<<endl<<"♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦";
    cout<<endl<<"               ♦♦♦♦";
    cout<<endl<<"               ♦♦♦♦";
    cout<<endl<<"               ♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦";
    cout<<endl<<"♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦";
}

void carta9_negro()
{
    cout<<endl<<"♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠";
    cout<<endl<<"♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠";
    cout<<endl<<"♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠";
    cout<<endl<<"               ♠♠♠♠";
    cout<<endl<<"               ♠♠♠♠";
    cout<<endl<<"               ♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠";
    cout<<endl<<"♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠";
}



/*Cartas hechas por:
Sosa Mejia Walter Santiago
Tamayo Obando Christian David
España Ponce Elvis Eduardo
*/
void carta10_corazon()
{
cout<<endl<<"╔═══════════════╗";
cout<<endl<<"║ 10            ║";
cout<<endl<<"║    ♥     ♥    ║";
cout<<endl<<"║       ♥       ║";
cout<<endl<<"║    ♥     ♥    ║";
cout<<endl<<"║               ║";
cout<<endl<<"║    ♥     ♥    ║";
cout<<endl<<"║       ♥       ║";
cout<<endl<<"║    ♥     ♥    ║";
cout<<endl<<"║            10 ║";
cout<<endl<<"╚═══════════════╝";
}

void carta10_trebol()
{
cout<<endl<<"╔═══════════════╗";
cout<<endl<<"║ 10            ║";
cout<<endl<<"║    ♣     ♣    ║";                      
cout<<endl<<"║       ♣       ║";
cout<<endl<<"║    ♣     ♣    ║";                      
cout<<endl<<"║               ║";
cout<<endl<<"║    ♣     ♣    ║";
cout<<endl<<"║       ♣       ║";
cout<<endl<<"║    ♣     ♣    ║";
cout<<endl<<"║            10 ║";
cout<<endl<<"╚═══════════════╝";
}

void carta10_diamante()
{
cout<<endl<<"╔═══════════════╗";
cout<<endl<<"║ 10            ║";
cout<<endl<<"║    ♦     ♦    ║";
cout<<endl<<"║       ♦       ║";
cout<<endl<<"║    ♦     ♦    ║";
cout<<endl<<"║               ║";
cout<<endl<<"║    ♦     ♦    ║";
cout<<endl<<"║       ♦       ║";
cout<<endl<<"║    ♦     ♦    ║";
cout<<endl<<"║            10 ║";
cout<<endl<<"╚═══════════════╝";
}

void carta10_negro()
{
cout<<endl<<"╔═══════════════╗";
cout<<endl<<"║ 10            ║";
cout<<endl<<"║    ♠     ♠    ║";
cout<<endl<<"║       ♠       ║";
cout<<endl<<"║    ♠     ♠    ║";
cout<<endl<<"║               ║";
cout<<endl<<"║    ♠     ♠    ║";
cout<<endl<<"║       ♠       ║";
cout<<endl<<"║    ♠     ♠    ║";
cout<<endl<<"║            10 ║";
cout<<endl<<"╚═══════════════╝";
}



int generaNumAleatorio()
{
    int num = 0+rand()%(MAX); //genera un número aleatorio entre 1 y 52
    return num;
}

void iniciarCartas(int cartas[])
{
    for (int k = 0; k<MAX; k++)
    {
        cartas[k]=k;
    }

}

//Crear la función llamada "Encerar" que inicialice le vector
//con -1

void encerar(int vec[])
{
    for (int k = -1; k<MAX; k++)
        {
            vec[k]=-1;
        }
}
//Diseñe la función que copia el contenido de auxiliar a cartas
void copiarVector(int origen[], int destino[])
{
    for(int k = 0; k<MAX; k++)
        {
            destino[k]=origen[k];
        }
}

//búsqueda de cartas
bool buscarCartas(int vector[], int num)
{
    for (int k = 0; k<MAX; k++)
        {
            if (vector[k] == num)
                return true;
        }
    return false;
}

//Función que baraja las cartas
void barajarCartas(int cartas[])
{
    int aux[MAX];
    encerar(aux);

    for (int j = 0; j<MAX; j++) 
        {
            for (int k =0; k<1000; k++)
            {
                int num = generaNumAleatorio();
                if (buscarCartas(aux, num)==false)
                    {
                        aux[j]=num; 
                        break;
                    }
            }
            
        }
    //Copia el vector aux en cartas
    copiarVector(aux, cartas);
}

//Pedir las cartas
void pedirCartas(int n)
{
    int valor =-1;
    //Carta 1
    if (n == 0)
        {
            cartaA_corazon();
        }
    else if (n == 1)
        {
            cartaA_diamante();
        }
    else if (n == 2)
        {
            cartaA_negro();
        }
    else if (n == 3)
        {
            cartaA_trebol();
        }
    //Carta 2
    else if (n == 4)
        {
            carta2_corazon();
        }
    else if (n == 5)
        {
            carta2_diamante();
        }
    else if (n == 6)
        {
            carta2_negro();
        }
    else if (n == 7)
        {
            carta2_trebol();
        }
    //Carta 3
    else if (n == 8)
        {
            carta3_corazon();
        }
    else if (n == 9)
        {
            carta3_diamante();
        }
    else if (n == 10)
        {
            carta3_negro();
        }
    else if (n == 11)
        {
            carta3_trebol();
        }
    //Carta 4
    else if (n == 12)
        {
            carta4_corazon();
        }
    else if (n == 13)
        {
            carta4_diamante();
        }
    else if (n == 14)
        {
            carta4_negro();
        }
    else if (n == 15)
        {
            carta4_trebol();
        }
    //Carta 5
    else if (n == 16)
        {
            carta5_corazon();
        }
    else if (n == 17)
        {
            carta5_diamante();
        }
    else if (n == 18)  
        {
            carta5_negro();
        }
    else if (n == 19)
        {
            carta5_trebol();
        }
    //Carta 6
    else if (n == 20)
        {
            carta6_corazon();
        }
    else if (n == 21)
        {
            carta6_diamante();
        }
    else if (n == 22)
        {
            carta6_negro();
        }
    else if (n == 23)
        {
            carta6_trebol();
        }
    //Carta 7
    else if (n == 24)
        {
            carta7_corazon();
        }
    else if (n == 25)
        {
            carta7_diamante();
        }
    else if (n == 26)
        {
            carta7_negro();
        }
    else if (n == 27)
        {
            carta7_trebol();
        }
    //Carta 8 
    else if (n == 28)
        {
            carta8_corazon();
        }
    else if (n == 29)
        {
            carta8_diamante();
        }
    else if (n == 30)
        {
            carta8_negro();
        }
    else if (n == 31)
        {
            carta8_trebol();
        }
    //Carta 9
    else if (n == 32)
        {
            carta9_corazon();
        }
    else if (n == 33)
        {
            carta9_diamante();
        }
    else if (n == 34)
        {
            carta9_negro();
        }
    else if (n == 35)
        {
            carta9_trebol();
        }
    //Carta 10
    else if (n == 36)
        {
            carta10_corazon();
        }
    else if (n == 37)
        {
            carta10_diamante();         
        }
    else if (n == 38)
        {
            carta10_negro();
        }
    else if (n == 39)
        {
            carta10_trebol();
        }
}

//Función que imprime todas las cartas
void imprimirCartas(int cartas[])
{   
    for (int k = 0; k<MAX; k++)
        {
            cout<<endl<<cartas[k];
            pedirCartas(cartas[k]);
        }
}

int main()
{
    srand(time(NULL)); //inicializa el generador de número aleatorios
    int cartas[MAX];
    

    iniciarCartas(cartas);
    barajarCartas(cartas);
    //imprimirCartas(cartas);

    int i =1;
    int cuentaCartas=0;
    while (i <=2)
    {   
        cout<<endl<<"Jugador #1 ";
        cout<<endl<<"Pulsa <emter> para pedir la carta # "<<i<<" ";
        getch(); //Detecta una pulsación del teclado
        fflush(stdin); //Borrar memoria intermedia del teclado
        pedirCartas(cartas[cuentaCartas]);
        i++;
        cuentaCartas++;
    }



    return 0;

}


/*
    Llamada de las cartas

    carta2_negro();
    carta3_negro();
    carta3_corazon();
    carta3_diamante();
    carta4_diamante();
    carta4_trebol();
    carta5_corazon();
    carta5_negro();
    carta6_corazon();
    carta6_negro();
    carta7_negro();
    carta7_diamante();
    carta8_negro();
    carta8_trebol();
    carta9_corazon();
    carta9_trebol();
    carta10_negro();
    carta10_diamante();
    cartaA_corazon();
    cartaA_diamante();
    cartaA_negro();
    cartaA_trebol();
*/
