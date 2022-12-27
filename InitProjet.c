#include "base.h"
#include <stdio.h>
#include <stdlib.h>


#include "nokia3310.c"

              

#use delay(crystal=20MHz) 
#use i2c(master, fast, sda=PIN_C4, scl=PIN_C3) 
#use rs232(baud=9600, xmit=PIN_C6, rcv=PIN_C7,ERRORS)



/////////////////////////////////////////////////////////////////////////
////                 Variables et constantes                         ////
////                                                                 ////
/////////////////////////////////////////////////////////////////////////
#define LED1 PIN_A0
#define LED2 PIN_A1
#define SWITCH1 PIN_A5



char text1[16]= "Veuillez";
char text2[20]= "scanner votre badge";


// VARIABLES **********************************************



/*****************************************************************************
 Nom             :  Accueil 
 Objet           :  sous programme affichage d'un ecran
       
******************************************************************************/

  void Accueil()
    {
 LcdInit();    //Initialisation controleur Lcd
 ImageLcd();   //Ecran d'accueil
 delay_ms(2000);
 

     Fill_Lcd(Blanc);

    } 


/*****************************************************************************
 Nom             :  init
 Objet           :  sous programme initialisation materielle
                     Init PIC
                     Init Afficheur
          
******************************************************************************/
void init_pic()
{



 set_tris_a(0xF3);            //  Port A->
 set_tris_b(0xDF);            //  Port B -> 1101 1111
 set_tris_c(0x98);            //  Port C -> 1001 1000

 
 
}



/*****************************************************************************
 Nom             :  
 Objet           :  
 
                  
 Paramètres      :
  - d'appel      :  
  - de retour    :              
******************************************************************************/







/*****************************************************************************
                        Boucle programme
******************************************************************************/


void main()
{

    init_pic();
    Accueil();
   
		LcdString(0,1,text1);  // affiche le texte stocker dans la variable definie text1 a l'emplacement indiquer
		LcdString(0,2,text2);  // meme fonction que la precedente



    delay_ms(3000);

Fill_Lcd(Blanc); // remove later
    




/////////////////////////////////////////

   while(1)
   {
		delay_us(1);
   }


} //fin - main() 
   


 
