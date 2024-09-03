//challenge 1
#include <stdio.h>
main() {
    char nom[30];
    char prenom[30];
    int age;
    char sexe;
    char email[50];
    printf("entrez votre nom : ");
    scanf(" %s", nom); 
    printf("entrez votre prénom : ");
    scanf(" %s", prenom); 
    printf("entrez votre âge : ");
    scanf("%d", &age);
    printf("entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe); 
    printf("entrez votre adresse email : ");
    scanf(" %s", email); 
    printf("nom : %s\n", nom);
    printf("prénom : %s\n", prenom);
    printf("age : %d\n", age);
    printf("sexe : %c\n", sexe);
    printf("adresse email : %s\n", email);

}



//challenge 2
#include <stdio.h>
main(){
    float T;
    float K;
    printf("entrez la température en Celsius : ");
    scanf("%f", &T);
    K = C + 273.15;
    printf("la température en Kelvin est : %f \n", K);

}




//challenge 3
#include <stdio.h>
main() {
    float km;
    float yards;
    printf("entrez la distance en kilomètres : ");
    scanf("%f", &km);
    yards = km * 1093.61;
    printf("La distance en yards est : %f \n", yards);

}



//challenge 4
#include <stdio.h>
main(){
    float km/h;
    float m/s;
    printf("entrez la vitesse en km/h : ");
    scanf("%f", &km/h);
    m/s = km/h * 0.27778;
    printf("la vitesse en m/s est : %f \n", m/s);

}



//chllenge 5
#include <stdio.h>
main(){
    float C;
    printf("entrez la température en : ");
    scanf("%f", &C);
    if (C < 0) {
        printf("l etat de l'eau est : Solide\n");
    } else if (C >= 0 && C < 100) {
        printf("l etat de l'eau est : Liquide\n");
    } else {
        printf("l etat de l'eau est : Gaz\n");
    }

}



//challenge 6
#include <stdio.h>
main(){
    float a,b;
    printf("entrez le premier nombre : ");
    scanf("%f", &a);
    printf("entrez le deuxieme nombre : ");
    scanf("%f", &b);
    printf("a + b = %f\n", a + b);
    printf("a - b = %f\n", a - b);
    printf("a * b = %f\n", a * b);
    printf("a / b = %f\n", a / b);

}











//challenge 1
#include <stdio.h>
main() {
    int N;

    printf("entrez un entier : ");
    scanf("%d", &N);

    if (N%2==0) {
        printf("%d est pair.\n", N);
    } 
	else {
        printf("%d est impair.\n", N);
    }

}


//challenge 2
#include <stdio.h>
main(){
    char c;
    printf("entrez un caractere : ");
    scanf("%c", &c);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c est une voyelle\n", c);
            break;
        default:
            printf("%c n'est pas une voyelle\n", c);
            break;
    }

}


//challenge 3
#include <stdio.h>
main() {
    int a, b;
    int S;
    printf("entrez la premiere valeur : ");
    scanf("%d", &a);
    printf("entrez la deuxieme valeur : ");
    scanf("%d", &b);
    S = a + b;
    if (a==b){
        printf("la somme est : %d\n", 3*S);
    } 
	else {
        printf("La somme est : %d\n", S);
    }
}


//challenge 4
#include <stdio.h>
#include <math.h>
main(){
    float a, b, c;
    float delta,racine1,racine2
    printf("entrez a, b et c de l'équation ax^2 + bx + c = 0 :\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    delta = b^2-4*a*c;
	if (delta > 0) {
        racine1 =(-b+sqrt(delta)) / (2*a);
        racine2 =(-b-sqrt(delta)) / (2*a);
        printf("les solutions de l'equation sont :\n");
        printf("x1 = %f\n", racine1);
        printf("x2 = %f\n", racine2);
    } else if (delta == 0) {
        racine1= -b/(2*a);
        printf("la solution de l'equation est :\n");
        printf("x = %f\n", racine1);
    } else 
	{
        printf("L'équation n'admet pas de solution \n");
    }
}


























