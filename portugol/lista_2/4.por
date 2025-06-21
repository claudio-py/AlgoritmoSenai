programa {
  funcao inicio() {
    inteiro  numero_de_cheques
    real soma_total_do_lote
    inteiro i = 0
    real acumulador = 0.0
    escreva("digite o valor total do lote: ")
    leia(soma_total_do_lote)
    escreva("digite o numero total de cheques: ")
    leia(numero_de_cheques)

    real valor_do_cheque[numero_de_cheques]

    enquanto(i< numero_de_cheques){
      escreva("digite o valor do ",i+1,"º cheque: ")
      leia(valor_do_cheque[i])
      acumulador = acumulador + valor_do_cheque[i]
      i++
    }

    se(acumulador == soma_total_do_lote){
      escreva("LOTE OK!")
    }senao se(acumulador < soma_total_do_lote){
      escreva("DIFERENÇA NEGATIVA!")
    }senao{
      escreva("DIFERENÇA POSITIVA!")

    }
    
  }
}
