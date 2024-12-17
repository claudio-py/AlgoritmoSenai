programa {
inclua biblioteca Matematica
funcao inicio(){
real num1,num2,num3, maior, menor

escreva("digite o primeiro numero: ")
leia(num1)

escreva("digite o segundo numero: ")
leia(num2)

escreva("digite o terceiro numero: ")
leia(num3)
maior = Matematica.maior_numero(num1,num2)
maior = Matematica.maior_numero(maior,num3)

menor = Matematica.menor_numero(num1,num2)
menor = Matematica.menor_numero(menor,num3)


se(maior == menor){
  //A
  escreva("A: ",maior + menor, "\n")

}senao se(num1 < maior e num1 > menor){
  //B
escreva("B: ", maior + num1, "\n")

}senao se(num2 < maior e num2 > menor){
  //C
escreva("C: ", maior + num2, "\n")

}senao se(num3 < maior e num3 > menor){
  //D
escreva("D: ", maior + num3, "\n")

}senao se(num1 == maior e num2 != num3){
//E
escreva("E: ", maior + num1, "\n")

}senao se(num2 == maior e num3 != num1){
  //F
escreva("F: ", maior + num2, "\n")

}senao se(num3 == maior e num1 != num2){
  //G
escreva("G: ", maior + num3, "\n")

}senao{
  //H
  escreva("H: ", maior + menor,"\n")
}

}
}
