programa {
  funcao inicio() {
    real num
    escreva("digite uma distância em metros: ")
    leia(num)

    escreva(
      "polegadas: ", num*39.37008, "\n",
      "pés: ", num*3.28084, "\n",
      "jarda: ", num*1.093613, "\n",
      "milhas: ", num*0.000621, "\n",
      "milhas nauticas: ", num*0.00054, "\n"
    )
  }
}
