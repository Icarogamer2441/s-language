#include <stdio.h>

#define se if
#define senao else
#define imprimir printf
#define inteiro int
#define letra char
#define decimal float
#define para for
#define funcao void
#define enquanto while
#define faca do
#define tamanhodo sizeof
#define repita for
#define devolver return
#define verdadeiro 1
#define falso 0
#define escolha switch
#define caso case
#define padrao default
#define quebrar break
#define ler scanf
#define e &&
#define ou ||
#define nao !
#define diferente !=
#define booleano int
char token1[50] = "";
char token2[50] = "";
char token3[50] = "";

void help() {
	imprimir("se = if\n");
	imprimir("senao = else\n");
	imprimir("imprimir() = printf\n");
	imprimir("inteiro = int\n");
	imprimir("letra = char\n");
	imprimir("decimal = float\n");
	imprimir("para = for\n");
	imprimir("funcao = void\n");
	imprimir("enquanto = while\n");
	imprimir("faca = do\n");
	imprimir("tamanhodo = sizeof\n");
	imprimir("repita = for\n");
	imprimir("devolver = return\n");
	imprimir("verdadeiro = true\n");
	imprimir("falso = false\n");
	imprimir("escolha = switch");
	imprimir("caso = case\n");
	imprimir("padrao = default\n");
	imprimir("quebrar = break\n");
	imprimir("ler = scanf\n");
	imprimir("e = &&\n");
	imprimir("ou = ||\n");
	imprimir("nao = !\n");
	imprimir("diferente = !=\n");
	imprimir("booleano = boolean\n");
	imprimir("import this file to other files using #include <defines.c>\n");
	imprimir("this language is in portuguese, and its simple because i started in c recently (and im bad in english because im from brasil and i speak portuguese\n");
}

void createToken(char name[50], int tokenNumber) {
	printf("token %s created and you have only 3 tokens of limit", name);

	if(tokenNumer == 1){
		token1 = name;
	} else if(tokenNumber = 2){
		token2 = name;
	} else if(tokenNumber = 3){
		token3 = name;
	} else {
		printf("uknown number, use 1, 2 or 3");
	}
}

void tokenHelp() {
	printf("tokens is used to use on the if's to make simulated things (what do you want to be) example: a token used to make a login sistem that the token is used to add more security to the user account");
}
