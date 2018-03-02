#include <stdio.h>

int tiempo(int,int);

int main(int argc, char const *argv[])
{
	int pesoMax,kilometros,numVehiculos;
	float tiempototal=0;
	printf("Ingrese el peso maximo,longitud del puente y el numero de vehiculos\n");
	scanf("%d %d %d",&pesoMax,&kilometros,&numVehiculos);
	int i;
	int pesoVeh[numVehiculos];
	int velCar[numVehiculos];
	for (i = 0; i < numVehiculos; ++i)
	{
		scanf("%d%*[-]%d",&pesoVeh[i],&velCar[i]);
	}


	int contPeso=0;
	int sumPesoCar=0;
	i=0;
	int j = 0;
	int menor;
	while(i<numVehiculos)
	{
		sumPesoCar=sumPesoCar+pesoVeh[i];
		if (sumPesoCar+pesoVeh[i+1]>pesoMax)
		{
			menor=velCar[i];
			while(j<=i){

				if (velCar[j]<menor)
				{
					menor=velCar[j];
				}
			
				j++;
				
				
				

			}


			tiempototal=+tiempototal+tiempo(kilometros,menor);


		
			sumPesoCar=0;
		}
		
		i++;
	}
	puts("");
	printf("%.1f\n",tiempototal );
	
	return 0;
}

int tiempo(int kilometros,int s)
{
	float segundos;
	segundos=((float)kilometros/(float)s)*60;
	
	return segundos;

}