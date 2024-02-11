#include <stdio.h>

int main(void) {
    int edges,nodes,i,j;
    char u,v;
    printf("Enter the number of nodes: ");
    scanf("%d",&nodes);
   
    int graph [nodes][nodes];
    for(i=0; i<nodes; ++i)
        for(j=0; j<nodes; ++j)
           graph[i][j]=0;
    printf("Enter the number of edges: ");
    scanf("%d",&edges);
    getchar();
    printf("Enter the edges:\n");
   
    for(i=0; i<edges; ++i){
        printf("Enter edge %d: ", i+1);
        scanf("%c %c", &u, &v);
        getchar();
       
        printf("%d %d\n", u-'A',v-'A');
        graph[u-'A'][v-'A']=1;
        graph[v-'A'][u-'A']=1;
       
    }
    for(i=0; i<nodes; ++i){
        for(j=0; j<nodes; ++j)
           printf("%d ",graph[i][j]);
           printf("\n");
    }
    return 0;
}