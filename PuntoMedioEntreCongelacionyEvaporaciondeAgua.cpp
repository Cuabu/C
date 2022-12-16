
	//Este Programa calcula el punto medio entre
	// Los puntos de congelacion y ebullicion del agua
	
	#include<iostream>
	
	using namespace std;
	
	const float FREEZE_PT = 32.0; // Punto de congelacion del agua
	const float EBULLI_PT = 212.0; //Punto de ebullicion del agua
	
	int main()
	{
		float avgTemp;  	//Contiene el resultado a promediar
							//FREEZE_PT
							
						
		cout << "El agua se congela a " << FREEZE_PT;
		cout << "El agua se evapora a " <<EBULLI_PT;
		
		avgTemp=FREEZE_PT + EBULLI_PT;
		avgTemp=avgTemp / 2.0;
		
		cout << "La mitad es ";
		cout << avgTemp << "grados.";
		
		return 0;
		
	}
