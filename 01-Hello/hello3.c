/*´TP 1 hello3
20180411
Eduardo Yujra
*/
int printf(const char *s, ...);

int main(void){
int i=42;
prontf("La respuesta es %d\n");
/*no permite compilar ni crear el archivo hello3.s
hello3.i: In function 'main':
hello3.i:4:1: warning: implicit declaration of function 'prontf'; did you mean 'printf'? [-Wimplicit-function-declaration]
 prontf("La respuesta es %d\n");
 ^~~~~~
 printf*/