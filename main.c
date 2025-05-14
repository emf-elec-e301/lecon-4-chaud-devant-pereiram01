 /*
 * MAIN Application File
 * @file main.c
 * @defgroup main MAIN
 * @brief Application MAIN file to test the buzzer
*/

//----------------------------------------------------------
// INCLUDE FILES
//----------------------------------------------------------
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/timer/delay.h"
#include "junoke_song_commande.h"
#include "junoke_eye_commande.h"

//----------------------------------------------------------
// MAIN APPLICATION
//----------------------------------------------------------
int main(void)
{
    //----------------------------------------------------------
    // initialisation du microcontroleur
    SYSTEM_Initialize(); // NE PAS SUPPIRMER CETTE LIGNE DE CODE
    //----------------------------------------------------------
    // VOTRE CODE CI-DESSOUS
    // INSTRUCTIONS EXECUTEES UNE SEULE FOIS AU DEMARRAGE
    //----------------------------------------------------------
    unsigned int distance; //cr�e une variable pour la distance
    while(1){
        //----------------------------------------------------------
        // VOTRE CODE CI-DESSOUS
        // INSTRUCTIONS EXECUTEES EN BOUCLE INDEFINIMENT
        //----------------------------------------------------------
        distance = ultrason_distance(); //verifie la distance en cm
        printf(distance);
    }
}
//----------------------------------------------------------
// FIN DU CODE
//----------------------------------------------------------
