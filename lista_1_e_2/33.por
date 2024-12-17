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

}senao se(num1 > menor e num1 < maior){
  //B
escreva("B: ", menor + num1, "\n")

}senao se(num2 > menor e num2 < maior){
  //C
escreva("C: ", menor + num2, "\n")

}senao se(num3 > menor e num3 < maior){
  //D
escreva("D: ", menor + num3, "\n")

}senao se(num1 == menor e num2 != num3){
//E
escreva("E: ", menor + num1, "\n")

}senao se(num2 == menor e num3 != num1){
  //F
escreva("F: ", menor + num2, "\n")

}senao se(num3 == menor e num1 != num2){
  //G
escreva("G: ", menor + num3, "\n")

}senao{
  //H
  escreva("H: ", maior + menor,"\n")
}

}
}

