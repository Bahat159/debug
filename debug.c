#include <stdio.h>
#include <stdlib.h>


int  good() {
  puts("WIN");
  execl("/bin/sh","sh",NULL);
}

int bad() {
printf("I'm sorry you are at %p and you want to be at %p\n", bad, good); 
}


int main(int argc, char **argv, char **envp)  {
 void (*functionpointer)(void) = bad; 
 char buffer[50];
 
  if (argc != 2 || strlen(argv[1])) return 0;
 
memcpy(buffer,argv[1], strlen(argv[1]);

memset(buffer, 0, strlen(argv[1]));

printf("This is exciting we are going to %p\n", functionpointer);

functionpointer();

return 0;
}
