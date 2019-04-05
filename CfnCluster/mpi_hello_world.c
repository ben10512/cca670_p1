/*A Parallel Hello World Program*/
#include <stdio.h>
#include <mpi.h>
main(int argc, char **argv)
{
  int a, node;
  MPI_Init(&argc,&argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &node);
  for ( a = 1; a < 5; a=a+1){
    printf("Hello World from Node %d\n",node);
  }
  MPI_Finalize();
}
