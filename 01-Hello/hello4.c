/*´TP 1 hello4
20180411
Eduardo Yujra
*/
int printf(const char *s, ...);

int main(void){
int i=42;
printf("La respuesta es %d\n");
}
/*El error se encuentra en que falta el } para cerrar el int main
hello4.i:4:1: error: expected declaration or statement at end of input
 printf("La respuesta es %d\n");
 ^~~~~~*/