programa {
  funcao inicio() {
    real km
    escreva("Digite quantos km deseja viajar: ")
    leia(km)

    se(km > 200){
      escreva("opa, viagem acimda de 200km, você paga apenas R$0,45/km, logo o preço da sua passagem sairá apenas: R$", km*0.45)
    }senao{
      escreva("a taxa para viagens até 200km é de R$0,50/km, logo o preço de sua passagem sairá por: R$",km*0.5)
    }
    
  }
}
