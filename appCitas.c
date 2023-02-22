#include <stdio.h>

//23 de febrero de 2023
//Cruz López Juan Manuel
//Versión

int main() {
    int porcentajeObtenido = 0;
    char respuesta;

    printf("¡¡Bienvenido a nuestra app de citas!! Para poder emparejar con esta persona, responde las siguientes preguntas:\n");

    // Pregunta 1
    printf("\n1.- ¿Esta persona te atrae fisicamente?\n");
    printf("A. Si\nB. No\n");
    scanf(" %c", &respuesta);

    if (respuesta == 'A') {
        porcentajeObtenido += 10;
        printf("\nOh, tal vez cuando la conozcas cambies de opinion.\n");
    } else {
        porcentajeObtenido -= 0;
        printf("\nPerfecto, veamos si te gustan más cosas.\n");
    }

    // Pregunta 2
    printf("\n2.- ¿Te agrada su forma de vestir?\n");
    printf("A. Si\nB. No\n");
    scanf(" %c", &respuesta);

    if (respuesta == 'A') {
        porcentajeObtenido += 10;
        printf("\nGenial! .\n");
    } else {
        porcentajeObtenido -= 0;
        printf("\nTal vez sea un estilo que nunca habías visto.\n");
    }

    // Pregunta 3
    printf("\n3.- ¿Comparten gustos musicales?\n");
    printf("A. Si\nB. No\n");
    scanf(" %c", &respuesta);

    if (respuesta == 'A') {
        porcentajeObtenido += 5;
        printf("\nDeberian ir a algun concierto juntos:D.\n");
    } else {
        porcentajeObtenido -= 0;
        printf("\nJuntos podrian aumentar sus conocimientos musicales.\n");
    }

	 // Pregunta 4
    printf("\n4.- ¿Estarias dispuesto a participar junto a esa persona en sus actividades favoritas?\n");
    printf("A. Si\nB. No\n");
    scanf(" %c", &respuesta);

    if (respuesta == 'A') {
        porcentajeObtenido += 20;
        printf("\nSe divertiran mucho.\n");
    } else {
        porcentajeObtenido -= 0;
        printf("\nTal vez te diviertas mas de lo que piensas.\n");
    }
	
 // Pregunta 5
    printf("\n5.- ¿Compartes al menos 2 hobbies con esta persona?\n");
    printf("A. Si\nB. No\n");
    scanf(" %c", &respuesta);

    if (respuesta == 'A') {
        porcentajeObtenido += 5;
        printf("\nPodran procrastinar juntos :D.\n");
    } else {
        porcentajeObtenido -= 0;
        printf("\nParece una oportunidad de conocer mas actividades.\n");
    }
    
     // Pregunta 6
    printf("\n6.- ¿Tus ideas concuerdan con las de esta persona?\n");
    printf("A. Si\nB. No\n");
    scanf(" %c", &respuesta);

    if (respuesta == 'A') {
        porcentajeObtenido += 10;
        printf("\nAlgo menos de lo que preocuparse...\n");
    } else {
        porcentajeObtenido -= 0;
        printf("\nRecuerda que cada mente es diferente.\n");
    }

 // Pregunta 7
    printf("\n7.- ¿Su equipo deportivo favorito es rival de tu equipo favorito?\n");
    printf("A. Si\nB. No\n");
    scanf(" %c", &respuesta);

    if (respuesta == 'A') {
        porcentajeObtenido += 10;
        printf("\nGoyaaa.\n");
    } else {
        porcentajeObtenido -= 0;
        printf("\nSi pierde el america pierde mi familia.\n");
    }
    
     // Pregunta 8
    printf("\n8.- ¿Su sabor de helado favorito es el mismo que el tuyo?\n");
    printf("A. Si\nB. No\n");
    scanf(" %c", &respuesta);

    if (respuesta == 'A') {
        porcentajeObtenido += 10;
        printf("\nTendran que comprar doble porcion.\n");
    } else {
        porcentajeObtenido -= 0;
        printf("\nAl menos no van a discutir por quien se lo termino.\n");
    }
    
     // Pregunta 9
    printf("\n9.- ¿Le presentarías a tu familia sin temer lo que opinen de esta persona?\n");
    printf("A. Si\nB. No\n");
    scanf(" %c", &respuesta);

    if (respuesta == 'A') {
        porcentajeObtenido += 10;
        printf("\nQue rica le quedo la sopita suegra.\n");
    } else {
        porcentajeObtenido -= 0;
        printf("\nDe mejores casas me han corrido.\n");
    }
    
     // Pregunta 10
    printf("\n10.- ¿Estás dispuesto a conocer y respetar a esta persona, aunque no sea como tú esperabas?\n");
    printf("A. Si\nB. No\n");
    scanf(" %c", &respuesta);

    if (respuesta == 'A') {
        porcentajeObtenido += 10;
        printf("\nEl respeto al derecho ajeno es la paz.\n");
    } else {
        porcentajeObtenido -= 0;
        printf("\nMe quede sin ideas.\n");
    }
    
    // Porcentaje de compatibilidad entre la pareja
    if (porcentajeObtenido < 70){
    	printf("\nTu compatibilidad con esta persona es baja :(\n", porcentajeObtenido);
	} else {
		printf("\nVivan los novios!!!\n");
	}

    return 0;
}

