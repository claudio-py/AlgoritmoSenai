programa {
  real altura
  cadeia nome

  funcao lerAltura(){
      escreva("Digite a sua altura em centimentros: ")
      leia(altura)

  }

  funcao lerNome(){
    escreva("Digite o seu nome: ")
    leia(nome)
  }

  funcao inicio() {
    faca{  
      se(altura <= 100 ou altura > 210){
        limpa()
        escreva("Erro: Altura fora do intervalo. Tente novamente.\n")
        lerAltura()
      }senao{

      lerNome()
      lerAltura()

      }

      

    }enquanto(altura <= 100 ou altura > 210)
    
     escreva("sua altura é: ", altura, " cm e seu nome é: ", nome)
  }
}
