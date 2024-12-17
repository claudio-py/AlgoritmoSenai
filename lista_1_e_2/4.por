programa {
  funcao inicio() {
 
		inteiro num1, num2, num3
    escreva("digite o primeiro numnero: ")
    leia(num1)
    escreva("digite o segundo numnero: ")
    leia(num2)
    escreva("digite o terceiro numnero: ")
    leia(num3)
	se(num1 < num2 e num1 < num3 ){
		escreva(num1)
		}senao se(num2 < num1 e num2 < num3){
			escreva(num2)
			}senao{
        escreva(num3)
      }
  }
}
 