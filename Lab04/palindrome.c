#include <stdio.h>
#include <stdbool.h>
//NOT WORKING

bool verificaPalindroma(char *indiceInizio, char *indiceFine);

int main(void){
    /*
    int i = 0;
    int j = 0;
    int w = i++;
    int z = ++j;
    */
    printf("inserisci una parola per verificare se è palindroma : ");
    char parola[100], c;
    int i = 0;
    while((c = getchar()) != '\n'){
        parola[i] = c;
        i++;
    }
    parola[i] = '\0';
    printf("%s\n", parola);
    char *indiceFine = &parola[i-1];
    /*if(verificaPalindroma(parola, &indiceFine) == true){
        printf("La parola inserita è palindroma");
    }else{
        printf("La parola non è palindroma");
    }*/
    printf("%d", verificaPalindroma(parola, indiceFine));

}

bool verificaPalindroma(char *indiceInizio, char *indiceFine){
    bool palindroma = true;
    if(indiceInizio >= indiceFine){
        return true;
    }else{
        if(*indiceInizio == *indiceFine){
            return verificaPalindroma(indiceInizio+1, indiceFine-1);
        }else{
            return false;
        }
    }
}
    
    
    /*
    if(indiceInizio != (len(parola) - 1)/2 && palindroma == true){
        if(parola[indiceInizio] == parola[indiceFine]){
            return(verificaPalindroma(parola, *indiceInizio+1, *indiceFine + 1));
        }else{
            return false;
        }
    }else{
        if (palindroma == false){
            return false;
        }else{
            return true;
        }
    }*/

