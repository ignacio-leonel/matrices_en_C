#include <stdio.h>
#include <stdlib.h>
#define COL 3
#define FIL 3


int cargamatriza();
int cargamatrizb();
int multiplicarmatrices();
int mostrarmatriz3();



int matriza[FIL][COL];
int matrizb[FIL][COL];
int matrizc[FIL][COL];



int main(){
int opcion;

 printf(" examen recuperatorio\n 1- cargar matriz 1\n 2-cargar matriz 2\n 3- multiplicar matrices\n 4- mostrar matriz 3\n");
 scanf("%d", &opcion);

 
 switch(opcion){

 case 1: cargamatriza();
 case 2: cargamatrizb();
 case 3: multiplicarmatrices();
 case 4: mostrarmatriz3();

 }

}


cargamatriza(){

int i,j;

     srand(time(NULL)); 
     for (i=0;i<FIL;i++) 
     for (j=0;j<COL;j++)
        {
          matriza[i][j]=rand()%10+1;
        }

        printf("se cargo correctamente");
        return main();

        }

cargamatrizb() {

      int i,j;
       srand(time(NULL)); 

     for (i=0;i<FIL;i++) 
     for (j=0;j<COL;j++)

        {
          matrizb[i][j]=rand()%10+1;

        }

        
        printf("se cargo correctamente");
        system('cls');
        return main();

} 

multiplicarmatrices(){

     int i,j;


     for (i=0;i<FIL;i++){
     for (j=0;j<COL;j++){

          matrizc[i][j]=matrizb[i][j]*matriza[i][j];

        }}

         system('cls');
         return main();


}     

mostrarmatriz3(){

     int i,j;
    int impares=0;

      

      

    for (i=0;i<FIL;i++){
     for (j=0;j<COL;j++){

          printf("%d\t", matrizc[i][j]);

        }

        printf("\n");}
        

        for (i=0;i<FIL;i++){
        for (j=0;j<COL;j++){
            if(j==i){

                if (matrizc[i][j] /2 != 0){
                    impares++;}

        }

        }
}


       printf("en la diagonal principal hay %d impares", impares);


       return main();

  }