programa {
  funcao inicio() {
    inteiro ano
    escreva("Digite o ano: ")
    leia(ano)

    se(ano%4==0){
      se(ano%100==0){
        se(ano%400==0){
          escreva("sim, trata se de um ano bissexto")
        }senao{
          escreva("não, o ano referido não é bissexto")
        }
      }senao{
        escreva("sim, trata se de um ano bissexto")
      }
    }senao{
      escreva("não é um ano bissexto")
    }
  }
}
