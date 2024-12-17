programa {
  funcao inicio() {
    inteiro acumulador = 0
    escreva("(")
    para(inteiro i = 1; i <= 100; i++){
      se(i%2 == 0){
        acumulador = acumulador + i
        escreva(" + ", i)
      }
    }
    escreva(") = ", acumulador)
  }
}
