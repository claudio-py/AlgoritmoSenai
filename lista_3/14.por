programa {
  funcao inicio() {
    real num1, num2
    caracter operador,deNovo
    
    faca{
      limpa()
      escreva("digite o primeiro numero: ")
      leia(num1)
      escreva("digite o segundo numero: ")
      leia(num2)
      limpa()
      escreva(
      
        "/  -> dividir\n",
        "*  -> multiplicar\n",
        "+  -> adicionar\n",
        "-  -> subtrair\n",
        "escolha uma operação: "



      )
      leia(operador)
      limpa()

      escolha(operador){
        caso "/":escreva(num1," ÷ ", num2, " = ", num1/num2) pare
        caso "*":escreva(num1," * ", num2, " = ", num1*num2) pare
        caso "+":escreva(num1," + ", num2, " = ", num1+num2) pare
        caso "-":escreva(num1," - ", num2, " = ", num1-num2) pare
      }

      escreva("\nvocê deseja realizar outra operação(S/?): ")
      leia(deNovo)
    }enquanto(deNovo == "s" ou deNovo == "S")
  }
}
