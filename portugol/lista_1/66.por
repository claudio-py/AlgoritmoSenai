programa {
inclua biblioteca Matematica
funcao inicio(){
real num1,num2,num3, maior, menor, resultado

escreva("digite o comprimento da primeira reta: ")
leia(num1)

escreva("digite o comprimento da segunda reta: ")
leia(num2)

escreva("digite o comprimento da terceira reta: ")
leia(num3)
maior = Matematica.maior_numero(num1,num2)
maior = Matematica.maior_numero(maior,num3)

menor = Matematica.menor_numero(num1,num2)
menor = Matematica.menor_numero(menor,num3)


se(maior == menor){
  //A 
  resultado = maior + menor
  //escreva("A: ",resultado, "\n")

}senao se(num1 > menor e num1 < maior){
  //B
resultado = menor + num1
//escreva("B: ", resultado, "\n")

}senao se(num2 > menor e num2 < maior){
  //C
resultado = menor + num2
//escreva("C: ", resultado, "\n")


}senao se(num3 > menor e num3 < maior){
  //D
resultado = menor + num3
//escreva("D: ", resultado, "\n")


}senao se(num1 == menor e num2 != num3){
//E
resultado = menor + num1
//escreva("E: ", resultado, "\n")


}senao se(num2 == menor e num3 != num1){
  //F
resultado = menor + num2
//escreva("F: ", resultado, "\n")


}senao se(num3 == menor e num1 != num2){
  //G
resultado = menor + num3
//escreva("G: ", resultado, "\n")


}senao{
  //H
  resultado = maior + menor
  //escreva("H: ", resultado,"\n")

}

escreva(
  "soma das retas menores: ", resultado,"\n",
  "o valor da reta maior : ", maior,"\n"
)

se(resultado > maior){
escreva("a soma do comprimento das duas menores retas é superior ao comprimento da reta de maior comprimento, por tanto, SIM É POSSIVEL FORMAR UM TRIÂNGULO")
}senao{
escreva("a soma do comprimento das duas menores retas NÃO é superior ao comprimento da reta de maior comprimento, por tanto, NÃO É POSSIVEL FORMAR UM TRIÂNGULO")

}


}
}

