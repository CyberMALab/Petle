# Pętle
Pętla to element języka programowania umożliwiający wielokrotne wykonanie fragmentu kodu. W praktyce wykorzystywana jest w sytuacji, kiedy program wykonuje serie tych samych instrukcji wiele razy. W języku C istnieją 3 rodzaje pętli *for*,*while*, *do… while*. 

*Schemat (4.0) Pętla*

![Schemat 4 0](https://user-images.githubusercontent.com/71324202/142193003-570890bf-4e03-4152-8d7b-b4d840e3d9a7.png)

## **Pętla *for***
Pętla *for* jest pętlą iteracyjną, czyli taką która wykonuje się konkretną ilość razy. Posiada ona najczęściej parametr nazywany zmienną sterującą. Nazwa zmiennej pochodzi od funkcji, którą pełni ona w pętli *for*, ponieważ steruje ona ilością wykonania pętli. Deklarując pętlę *for* mamy możliwość opisania 3 wyrażeń wewnątrz nawiasów definiujących pętlę, czyli w praktyce deklaracja wartości początkowej zmiennej sterującej, warunek wykonywania, zmiana zmiennej sterującej. Najczęstsza budowa pętli *for* w języku C:

![Rysunek 4 0](https://user-images.githubusercontent.com/71324202/142193127-242674ab-7d6c-4673-9f05-5a4171e6c81e.png)

Przy deklaracji pętli *for* bardzo ważne jest zwrócenie uwagi na to, aby zmiana zmiennej dążyła do warunku stopu. W przeciwnym wypadku możemy niechcący wpaść w pętlę nieskończoną. 

Tak na prawdę, zastosowany przeze mnie schemat, nie pokazuje w pełni potencjału pętli for. Powyżej została przedstawiona uproszczona – łatwa do zrozumienia budowa pętli. Tak na prawdę wyrażenia, które przyjmuje pętla *for* są dowolne. Nie musimy nawet używać zmiennej sterującej.  Prawdziwy schemat pętli *for* zgodny z gramatyką języka wygląda następująco:

`for(wyrażenie1; wyrażenie2; wyrażenie3)`

A użycie poszczególnych wyrażeń wygląda następująco:

- *wyrażenie1 –* zostanie wykonane przy wejściu w pętle przed wykonaniem jego pierwszego przebiegu,
- *wyrażenie2 –* definiuje czy pętla ma wykonać kolejny przebieg (wartość 0 wyrażenia każe przerwać wykonywanie, inne wartości każą wykonać kolejny przebieg pętli,
- *wyrażenie3 – wykonuje się po każdym wykonaniu przebiegu pętli.*
\*
` `Warto zauważyć, że użycie tej pętli w sposób jaki przedstawiony został na uproszczonym schemacie jest jak najbardziej logicznym wykorzystaniem właściwości wyrażeń pętli for* a zarazem najczęściej stosowanym.

*Przykład (4.0) Użycie pętli for w praktyce*

```
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	for(i=1; i<=10; i++)
	{
		printf("%2d ",i);
	}
	return 0;
}
```

*Wynik działania programu*

>1 2 3 4 5 6 7 8 9 10

Przykład (4.0) może nie budzi większego zaufania, ponieważ identyczny efekt uzyskamy przez zapisanie instrukcji printf("1 2 3 4 5 6 7 8 9 10");** ale wyobraźmy sobie sytuację, w której mamy wypisać 100 albo 1000 liczb. W przypadku pętli wystarczy zmienić warunek stopu na zostawiając resztę instrukcji bez zmian, a wypisanie za pomocą takiego sposobu ręcznego zajmie trochę więcej czasu. Dodatkowo za pomocą pętli, można stworzyć program, który wykona się ilość razy nieznaną dla programisty, a podawaną przez użytkownika. Przykład takiego programu znajduje się poniżej (4.1), a napisanie go bez użycia pętli jest niemożliwe.

*Przykład (4.1) Pętla for – zastosowanie praktyczne*
```
#include <stdio.h>
#include <stdlib.h>

int main() {
	int start, stop, i;
	printf("Podaj pierwsza liczbe: ");
	scanf(" %d", &start);
	printf("Podaj ostatnia liczbe: ");
	scanf(" %d", &stop);
	printf("Wszystkie calkowite w przedziale <%d,%d>: ",start,stop);
	for(i=start; i<=stop; i++)
	{
		printf("%3d ",i);
	}
	
	return 0;
}

```

*Wynik wykonania programu:*

>Podaj pierwsza liczbe: 35
>
>Podaj ostatnia liczbe: 40
>
>Wszystkie calkowite w przedziale <35,40>:  35  36  37  38  39  40


## **Pętla *while* i *do... while***
Pętla while* jest pętlą warunkową. Za jedyne wyrażenie jakie przyjmuje to warunek wykonywania (gramatycznie – wyrażenie2 z pętli for). 

![Rysunek 4 1](https://user-images.githubusercontent.com/71324202/142193208-3f315ec1-30c0-4e6f-aba7-08416237b841.png)


*Przykład (4.2) Użycie pętli while*

```
#include <stdio.h>
#include <stdlib.h>

int main() {
	char a;
	printf("Podaj litere 'a' aby zakonczyc:");
	scanf(" %c", &a);
	while(a!='a')
	{
		printf("Podaj litere 'a' aby zakonczyc:");
		scanf(" %c", &a);
	}
	return 0;
}
```

*Wynik działania programu:*

>Podaj litere 'a' aby zakonczyc:3
>
>Podaj litere 'a' aby zakonczyc:g
>
>Podaj litere 'a' aby zakonczyc:a

Pętla do… while* jest niemal identyczna w użyciu i działaniu jak pętla while*,* z tą różnicą, że pętla do… while* wykona się przynajmniej raz, ponieważ warunek nie jest sprawdzany na początku wykonania pętli (jak w pętli while), tylko na końcu. Istotną różnicą jest fakt, że po podaniu warunku pętli do… while* należy postawić średnik.

*Przykład (4.3) Użycie pętli do… while*

```
#include <stdio.h>
#include <stdlib.h>

int main() {
	char a;
	do
	{
		printf("Podaj litere 'a' aby zakonczyc:");
		scanf(" %c", &a);
	}
	while(a!='a');
	return 0;
}
```

*Wynik działania programu:*

>Podaj litere 'a' aby zakonczyc:h
>
>Podaj litere 'a' aby zakonczyc:a

## **Instrukcje przerwania i kontynuacji**
W kontekście pętli warto jeszcze powiedzieć o instrukcji kontynuacji i przerwania. Pierwsza z nich występuje w C pod nazwą *continue* i powoduje wykonywania kolejnego przebiegu pętli. Innymi słowy powraca do początku pętli (w przypadku pętli *for* dokonuje kroku iteracyjnego). Druga powoduje natychmiastowe wyjście z pętli a można ją wywołać w języku C za pomocą instrukcji *break*. 

Obrazowe działanie instrukcji *break*.

![Rysunek 4 2](https://user-images.githubusercontent.com/71324202/142193268-cea28e04-98ec-4844-b1eb-2bb1bc2d8dfa.png)

Obrazowe działanie instrukcji *continue*.

![Rysunek 4 3](https://user-images.githubusercontent.com/71324202/142193331-0351c627-7b3a-4727-ab60-532576e98b41.png)

## **Zadania do samodzielnego wykonania:**
1. Napisz program który oblicza sumę wszystkich liczb naturalnych mniejszych od podanej liczby
1. Napisz program który oblicza sumę oraz średnią n-liczb podanych przez użytkownika. Liczę n podaje użytkownik.
1. Napisz programy, które wczytują liczby do momentu wpisania przez użytkownika liczby o własnościach poniżej, a następnie ich największą, najmniejszą, sumę i średnią:
	1. parzystej
	1. nieparzystej
	1. 0



***
[Poprzednia część](https://github.com/CyberMALab/Instrukcja-warunkowa.git) | [Spis treści](https://github.com/CyberMALab/Wprowadzenie-do-programowania-w-j-zyku-ANSI-C.git) | [Następna część](https://github.com/CyberMALab/Instrukcja-wyboru-switch-case.git)
***
&copy; Cyberspace Modelling and Analysis Laboratory
