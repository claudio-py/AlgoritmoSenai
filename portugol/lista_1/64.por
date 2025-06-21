programa {
  funcao inicio() {
    cadeia nome, sexo
    real debito

    escreva("Digite o seu nome: ")
    leia(nome)

    escreva("Digite 1 se você for mulher ou digite 2 se você for homem: ")
    leia(sexo)

    escreva("Digite o valor da compra: ")
    leia(debito)
      limpa()
    se(sexo == "1"){
      escreva(
        "feliz seu dia mulher! hoje você tem um desconto de 13% e deverá pagar apenas:\n R$",debito-(debito*0.13)
      )

    }senao se(sexo == "2"){
      escreva(
        "você tem um desconto de 5%, por tanto, deverá pagar apenas: \n R$", debito-(debito*0.05)
      )
    }senao{
      escreva("desculpe, tente novamente \n")
      inicio()
    }


  }
}
