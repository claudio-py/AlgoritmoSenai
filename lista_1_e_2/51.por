programa {
  funcao inicio() {
    real altura, comprimento, area

    escreva("digite a altura da parede: ")
    leia(altura) 
    escreva("digite o comprimento da parede: ")
    leia(comprimento)

    area = altura*comprimento

    escreva(
      "a área da parede é: ", area," m²\n",
      "será necessário ", area/2," litros de tinta"
    )
  }
}
