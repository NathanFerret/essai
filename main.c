#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void a()
{
    int  alea;
    alea = rand();
    printf("%d\n",alea);

}
void b()
{
    int alea,a;
    printf("entrez la borne sup: ");
    scanf("%d",&a);
    alea = rand()%a;
    printf("%d\n",alea);
}
void c()
{
    int alea,a,b,c;
    printf("entrez la borne sup: ");
    scanf("%d",&a);
    printf("entrez la borne inf: ");
    scanf("%d",&b);
    c = a-b;
    alea = b+rand()%c;
           printf("%d\n",alea);
}
void d()
{
    int alea,n,a,b,c,i;
    printf("entrez le nombre de valeurs desire: ");
    scanf("%d",&n);
    printf("entrez la borne sup: ");
    scanf("%d",&a);
    printf("entrez la borne inf: ");
    scanf("%d",&b);
    c = a-b;
    for(i=0; i<n; i++)
    {
        alea = b+rand()%c;
        printf("%d\n",alea);
    }
}
void e()
{
    int n,i;
    float alea;
    printf("entrez le nombre de valeurs desire: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        alea = rand()%101;
        alea = alea/100;
        printf("%f\n",alea);
    }

}
int main()
{
    char choix;
    srand(time(NULL));
    printf("entrez votre choix ");
    scanf("%c",&choix);
    switch (choix)
    {
    case 'a':
        printf("vous avez fait le choix a \n");
        a();
        break;
    case 'b':
        printf("vous avez fait le choix b \n");
        b();
        break;
    case 'c':
        printf("vous avez fait le choix c \n");
        c();
        break;
    case 'd':
        printf("vous avez fait le choix a \n");
        d();
        break;
    case 'e':
        printf("vous avez fait le choix e \n");
        e();
        break;

    default:
        printf("votre choix est erroné.\n");
    }
    return 0;
}

