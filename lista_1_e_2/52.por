programa {
  funcao inicio() {
    real numA, numB, numC, resultado

    escreva(
      "Para calcular o valaor do Δ de uma equação do segundo grau, temos: Δ = b² - 4ac \n",
      "digite o valor do coeficiente A: "
      )
      leia(numA)

      escreva("Digite o valor do coeficiente B: ")
      leia(numB)

      escreva("Digite o valor do coeficiente C: ")
      leia(numC)

      resultado = (numB*numB) - (4*numA*numC)
      
      escreva("Δ= ","(",numB,")²-","(4*",numA,"*",numC,")\n", "Δ= ", resultado)
  }
}