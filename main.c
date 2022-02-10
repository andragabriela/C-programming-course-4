#include <stdio.h>
#include <stdlib.h>
///2. For a list of students, each having name, registration_number and 5 marks for current semester,
///sort them in descending order of the average of the 5 marks,
///and display the students with identical average in alphabetical order.
typedef struct{
    char name[25];
    int nr;
    float grades[6];
}student;

float media(student s)
{
    float suma=0;
    int i;
    for(i=0;i<5;i++)
        suma+=s.grades[i];
    return suma/5;
}
void sortare(student *v, int n)
{
    int i,j,aux2,aux3;
    char aux1[25];
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        if(v[i].grades[5]<v[j].grades[5])
    {
        strcpy(aux1,v[i].name);
        aux2=v[i].nr;
        strcpy(v[i].name,v[j].name);
        v[i].nr=v[j].nr;
        v[j].nr=aux2;
        strcpy(v[j].name,aux1);
        for(int k=0; k<6;k++)
        {
            aux3=v[i].grades[k];
            v[i].grades[k]=v[j].grades[k];
            v[j].grades[k]=aux3;
        }

    }
    else
        if(v[i].grades[5]==v[j].grades[5])
            if(strcmp(v[i].name, v[j].name>0)
    {
        strcpy(aux1,v[i].name);
        aux2=v[i].nr;
        strcpy(v[i].name,v[j].name);
        v[i].nr=v[j].nr;
        v[j].nr=aux2;
        strcpy(v[j].name,aux1);
        for(int k=0; k<6;k++)
        {
            aux3=v[i].grades[k];
            v[i].grades[k]=v[j].grades[k];
            v[j].grades[k]=aux3;
        }
    }
}
int main()
{
    int i,j,n;
    printf("Cititi nr de elevi: ");
    scanf("%d", &n);
    getchar();
    student *v=malloc(sizeof(student)*n);

    for(i=0;i<n;i++)
    {
        printf("Nume: ");
        gets(v[i].name);
        printf("Nr de inregistrare: ");
        scanf("%d", &v[i].nr);
        printf("Notele:");
        for(j=0;j<5;j++)
            scanf("%f", &v[i].grades[j]);
        getchar();
    }
    for(i=0;i<n;i++)
           v[i].grades[5]=media(v[i]);
    sortare(v,n);
    for(i=0;i<n;i++)
{
    printf("Nume: %s",v[i].name);
    printf("Nr de inregistrare:%d ", v[i].grades[j]);
    printf("media:%f ", v[i].grades[5]);
    printf("\n");
}
    free(v);

    return 0;
}
