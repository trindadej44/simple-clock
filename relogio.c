#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(){ //feito por Jader Trindade
setlocale(LC_ALL, "Portuguese");

	int sec, min, hour, i, opcao, opcaoRelogio, opcaoCronometro;
		char tecla;	
		min = 0; // alterar minutos
    	hour = 0; // alterar horas
		opcao = 0;

	do{
	     printf("\n\n\t\tDigite qual fun��o voc� deseja abrir:\n\n\n\n@@\tN� 1  -- Abre o menu Cron�metro\t        @@\n\n@@\tN� 2  -- Limpa o Cron�metro\t        @@\n\n@@\tN� 3  -- Abre o menu Temporizador\t@@\n\n@@\tN� 4  -- Hor�rio do seu sistema\t\t@@");
	     scanf("%d", &opcao);
	     if(opcao==1){
	    system("cls");
	    
	do{
		sec++;
		if(sec==60)
			min++;
			printf("Cron�metro / Rel�gio em C\n");
			printf("\n\n\n\n\n\t\t\t\t\t\t %dhr:%dmin:%dsec \n\n\n\n\n\t\t\t\t    ###PRESSIONE QUALQUER TECLA PARA SAIR###\n\n\n\n\n\t\t\t\tParab�ns! Voc� sobreviveu %d minutos nesse programa", hour, min, sec, min);
			Sleep(1000); // alterar a velocidade em que o tempo passa
			system("cls");
		if(sec>59)
			sec=0;
		if(min>59)
			hour++;
		if(min>=60)
			min=0;
		if(hour>=24)
			hour=0;
		if (_kbhit()){
            tecla = _getch();
            system("cls");
            break;
		}
	}while(opcaoRelogio==0);}
	if(opcao==2)
	{
		system("cls");
		printf("\n\tHIST�RICO LIMPO");
		sec=0;
		min=0;
		hour=0;
	}
	if(opcao==3)
	{	
		system("cls");
		printf("\n\n\t\t@ @ @ TEMPORIZADOR @ @ @\n\n");
		printf("\n\nOP��O #1: ESCOLHA AS HORAS, MINUTOS E SEGUNDOS EXATOS\n\nOP��O #2: ESCOLHA OS SEGUNDOS. OS MINUTOS E HORAS IR�O SE ADAPTAR");
		scanf("%d", &opcaoCronometro);
		if(opcaoCronometro==1)
		{
		printf("Quantos segundos deseja contar?");
		scanf("%d", &sec);
		printf("Quantas minutos deseja contar?");
		scanf("%d", &min);
		printf("Quantos horas deseja contar?");
		scanf("%d", &hour);
		system("cls");
		
		do{
			
			sec--;
			if(sec>60){do{
				(sec=(sec-60));
				min++;}while(sec>60);
			}
			
			if(min>60){do{
				(min=(min-60));
				hour++;}while(min>60);
			}
		
			if(sec==0){
				min--;
				sec=59;}
				if(min<0)
				break;
			
			printf("\n\n###CONTAGEM REGRESSIVA###\n\n");
			printf("\n\n\n\n\n\t\t\t\t\t\t %dhr:%dmin:%dsec \n\n\n\n\n\n\t\t\t\t\t@@@@ APERTE ESPA�O PARA SAIR @@@@", hour, min, sec, min);
			Sleep(1000); // alterar a velocidade em que o tempo passa
			system("cls");
			
			
			if (_kbhit()) {
            tecla = _getch();
            system("cls");
            if(tecla==32)
            break;}
            
        
			}while(opcaoRelogio==0);
		
		}
		if(opcaoCronometro==2)
		{
			
		printf("Quantos segundos deseja contar?");
		scanf("%d", &sec);
		
		do{
			
			sec--;
			if(sec>60){do{
				(sec=(sec-60));
				min++;}while(sec>60);
			}
			
			if(min>60){do{
				(min=(min-60));
				hour++;}while(min>60);
			}
		
			if(sec==0){
				min--;
				sec=59;}
				if(min<0)
				break;
			
			
		    system("cls");
			printf("\n\n###CONTAGEM REGRESSIVA###\n\n");
			printf("\n\n\n\n\n\t\t\t\t\t\t %dhr:%dmin:%dsec \n\n\n\n\n\n\t\t\t\t\t@@@@ APERTE ESPA�O PARA SAIR @@@@", hour, min, sec, min);
			Sleep(1000); // alterar a velocidade em que o tempo passa
			
			
			
			if (_kbhit()) {
            tecla = _getch();
            system("cls");
            if(tecla==32)
            break;}
            
        
			}while(opcaoRelogio==0);
		}
	}
	if(opcao==4){
	system("cls");
	struct tm *p;
    time_t seconds;
    time(&seconds);
    p = localtime(&seconds); 
    printf("\n\n\n@@@@\t\tHoras exatas do seu sistema: %d:%d:%d\t\t@@@@\n\n\n", p->tm_hour, p->tm_min, p->tm_sec);
	}
}while(opcao!=0);
}


