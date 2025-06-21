programa {
  real dividendo, divisor
  caracter deNovo
  inteiro i = 0

  funcao calcular(){
    escreva("resultado: ", dividendo/divisor, "\n")
    i++
  }

  funcao divisor(){
    escreva("Digite o valor do divisor: ")
    leia(divisor)
    se(divisor == 0){
      limpa()
      escreva("valor invalido \n")
      divisor()
    }
  }

  funcao inicio() {
    faca{
      limpa()

      escreva("Digite o valor do dividendo: ")
      leia(dividendo)
    
      divisor()

      calcular()

      escreva("você deseja outro cálculo (S/?): ")
      leia(deNovo)
    }enquanto(deNovo == "S" ou deNovo =="s")

    escreva("realizou se: ", i, " calculo(s)")
    
  }
}
