programa {
  funcao inicio() {
    real nota1, nota2, media
    cadeia nome
    escreva("Digite o nome do aluno: ")
    leia(nome)

    escreva("Digite a primeira nota: ")
    leia(nota1)

    escreva("Digite a segunda nota: ")
    leia(nota2)
    limpa()
    media = (nota1+nota2)/2

    escreva(
      " a média do(a) ", nome, " é de: ", media, " pontos",
      "\n"
       )
       se(media >= 7){
          escreva("por tanto, obteve um bom aproveitamento, parabéns!")
       }senao{
          escreva("por tanto, não obteve um bom aproveitamento, estude mais da próxima vez")
       }
  }
}
