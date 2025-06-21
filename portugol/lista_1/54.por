programa {
  funcao inicio() {
    real salario

    escreva("digite o salário do funcionário: ")
    leia(salario)
    
    escreva(
      "com 15% de aumento o salário fica: R$", 
     salario + (salario*0.15)
    )
  }
}
