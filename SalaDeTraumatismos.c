#include <stdio.h>
#include<stdbool.h>

int main() {

  // Variables globales
  int pacientesSala1 = 0;
  int pacientesSala2 = 0;
  int pacientesSala3 = 0;
  int pacientesSala4 = 0;
  int sueroAsignado = 0;
  int tensionAsignado = 0;

  printf("Centro de traumatismos CD\n\n");

  printf("Asignación de salas\n");
  bool continuar = true;

  do{

    int opcion = -1;
    int traumatismo = -1;
    int zonaRotura = -1;
    int heridaAbierta = -1;
    int tipoFiebre = -1;
    int tension = -1;

    printf("\n¿Qué traumatismo es?\n");
    printf("1   Huesos rotos\n");
    printf("0   Fiebre\n");
    scanf("%i",&traumatismo);
    switch(traumatismo){
      // Caso de huesos Rotos
      case 1:
      printf("\n¿En qué parte esta el hueso roto?\n");
      printf("1   Superior\n");
      printf("0   Inferior\n");
      scanf("%i",&zonaRotura);
      switch(zonaRotura){
        case 1:
        pacientesSala1++;
        printf("\n>>Paciente asignado a la sala 1<<\n");
        break;
        case 0:
        pacientesSala2++;
        printf("\n>>Paciente asignado a la sala 2<<\n");
        break;
        default:
        printf("\nIngresaste un valor incorrecto\n");
      }
      if(zonaRotura==1 || zonaRotura==0){
        printf("\n¿La herida es abierta?\n");
        printf("1   Si\n");
        printf("0   No\n");
        scanf("%i",&heridaAbierta);
        if(heridaAbierta==1){
          printf("\n>>Suministrado suero al paciente<<\n");
          sueroAsignado++;
        }
      }
      break;
      // Caso de fiebre
      case 0:
      printf("\n¿Cual es el origen de la fiebre?\n");
      printf("1   Gripa\n");
      printf("0   Infeccion gastrica\n");
      scanf("%i",&tipoFiebre);
      switch(tipoFiebre){
        case 1:
        pacientesSala3++;
        printf("\n>>Paciente asignado a la sala 3<<\n");
        break;
        case 0:
        pacientesSala4++;
        printf("\n>>Paciente asignado a la sala 4<<\n");
        break;
        default:
        printf("\nIngresaste un valor incorrecto\n");
      }
      if(tipoFiebre==1 || tipoFiebre==0){
        printf("\n¿De cuanto es la tension?\n");
        scanf("%i",&tension);
        if(tension>=100){
          printf("\n>>Suministrado medicamento para la tension<<\n");
          tensionAsignado++;
        }
      }
      break;
      default:
      printf("\nIngresaste un valor incorrecto\n");
    }
    printf("\n¿Quiere ingresar otro paciente?\n");
    printf("1   Si\n");
    printf("0   No\n");
    scanf("%i",&opcion);
    if(opcion==0){continuar=false;}
  } while(continuar);
  printf("\nInforme de centro medico\n\n");
  printf("    %i pacientes en la sala 1\n",pacientesSala1);
  printf("    %i pacientes en la sala 2\n",pacientesSala2);
  printf("    %i pacientes en la sala 3\n",pacientesSala3);
  printf("    %i pacientes en la sala 4\n",pacientesSala4);
  printf("    %i pacientes con suero asignado\n",sueroAsignado);
  printf("    %i pacientes con medicamento para la tension asignado\n",tensionAsignado);
}