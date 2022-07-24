#include <stdio.h>

int main()
{

	double dinheiro,D,E;

	int nota,Caixa1,Caixa2,Caixa3,Caixa4,Caixa5,Caixa6,Caixa7,Caixa8,Caixa9,Caixa10;

	int cem,cinquenta,vinte,dez,cinco,dois;

	int m_um,m_cinquenta,m_vintecinco,m_dez,m_cinco,m_umcent;

	scanf ("%lf",&dinheiro);

	nota=dinheiro;

	cem=nota/100;

	Caixa1=nota%100;

	cinquenta=Caixa1/50;

	Caixa2=Caixa1%50;

	vinte=Caixa2/20;

	Caixa3=Caixa2%20;

	dez=Caixa3/10;

	Caixa4=Caixa3%10;

	cinco=Caixa4/5;

	Caixa5=Caixa4%5;

	dois=Caixa5/2;

	m_um=Caixa5%2;


	E=dinheiro*100;

	Caixa6=(int) E;

	Caixa7=Caixa6%100;

	m_cinquenta=Caixa7/50;

	Caixa8=Caixa7%50;

	m_vintecinco=Caixa8/25;

	Caixa9=Caixa8%25;

	m_dez=Caixa9/10;

	Caixa10=Caixa9%10;

	m_cinco=Caixa10/5;

	m_umcent=Caixa10%5;

	printf ("NOTAS:\n");

	printf ("%d nota(s) de R$ 100.00\n",cem);

	printf ("%d nota(s) de R$ 50.00\n",cinquenta);

	printf ("%d nota(s) de R$ 20.00\n",vinte);
	
	printf ("%d nota(s) de R$ 10.00\n",dez);

	printf ("%d nota(s) de R$ 5.00\n",cinco);

	printf ("%d nota(s) de R$ 2.00\n",dois);

	printf ("MOEDAS:\n");

	printf ("%d moeda(s) de R$ 1.00\n",m_um);

	printf ("%d moeda(s) de R$ 0.50\n",m_cinquenta);

	printf ("%d moeda(s) de R$ 0.25\n",m_vintecinco);

	printf ("%d moeda(s) de R$ 0.10\n",m_dez);

	printf ("%d moeda(s) de R$ 0.05\n",m_cinco);

	printf ("%d moeda(s) de R$ 0.01\n",m_umcent);

	return 0;

}
