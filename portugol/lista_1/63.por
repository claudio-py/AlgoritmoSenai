programa {
  inclua biblioteca Calendario
  funcao inicio() {
  
  inteiro nascimento, mesNasc, diaNasc, anoAtual, mesAtual, diaAtual, idade, resultado
  mesAtual = Calendario.mes_atual()
  anoAtual = Calendario.ano_atual()
  diaAtual = Calendario.dia_mes_atual()


  escreva("digite seu ano de nascimento: ")
  leia(nascimento)

  limpa()

  escreva("digite o mês que nasceu: ")
  leia(mesNasc)

  limpa()

  escreva("digite o dia que nasceu: ")
  leia(diaNasc)

  limpa()

  
  se(mesNasc >= mesAtual){
    se(diaNasc > diaAtual){
    idade = anoAtual - nascimento - 1
    } senao{
    idade = anoAtual - nascimento
  }
  }
  senao{
    idade = anoAtual - nascimento
  }
  escreva("sua idade é: ", idade," anos\n")

  se(idade == 18){
    
    escreva("voce ja pode se alistar no exercito")
  }senao se(idade > 18){
    resultado= idade - 18
    escreva("ja passou ", resultado," ano(s) da idade de alistamento")
  }senao{
    resultado = 18 - idade
    escreva("faltam ", resultado, " ano(s) da idade de alistamento")
  }
  

  }
}
