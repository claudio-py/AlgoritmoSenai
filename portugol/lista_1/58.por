programa {
  funcao inicio() {
    real velocidade, multa
    escreva("qual  é a velocidade do carro ? ")
    leia(velocidade)

    se(velocidade <= 80){
      escreva(" sem problemas, boa viagem")
    }senao{
      multa = (velocidade - 80)*5
      escreva("o valor da multa é: R$", multa)
    }
  }
}
