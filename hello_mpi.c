/* first example */

#include <stdio.h>
#include <mpi.h>

int main(argc , argv)
	int argc;
	char *argv[];
{
 int rank, size;

 MPI_Init(&argc, &argv); //start MPI
 MPI_Comm_rank (MPI_COMM_WORLD, &rank); //get process id
 MPI_Comm_size (MPI_COMM_WORLD, &size); // get processes number

 printf("Hello world from process %d of %d \n" , rank, size);

 MPI_Finalize();
 return 0;

}
