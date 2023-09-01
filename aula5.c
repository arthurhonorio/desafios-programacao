#include <stdio.h>

int main()
{
    char st[80];
    
    st[0] = 'o';
    st[1] = 'l';
    st[2] = 'a';
    st[3] = '\0';
    
    
    printf("%s\n", st);

}

/*
%c caracter
% é a mascara
%s string

ler string
scanf("%s", st)
na string st[0] == st
no scanf salva na primeira posição
se colocar &st[10], será salva a partir da posição 10
o scanf coloca o \0 no final automaticamente
%s pega tudo até o primeiro espaço
o enter é \n
vetor é um buffer de entrada
\n pro buffer é vazio
se tiver só isso no buffer, ele nao faz nada

formas de let o scanf
"%s"    ler até o um espaçor
"%10c"  ler 10 caracteres
"%abc"  lê enquanto os caracteres forem a, b, ou c   
"^\n"   le ate o \n

fgets(identificaror variavel, quantos caracteres, stdin)

pode iniciar um vetor com "" 
char st[100] = {"é possivel"}

#include <string.h>
cpp reference
 
strcmp se retorna 0, a string sao =s
strcpy copia (string que recebe, string que é copiada)
strlen 

stdlib.h
atoi string para int

































*/
