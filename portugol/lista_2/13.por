programa {
  funcao inicio() {
    inteiro ano
    cadeia mes
    logico bissexto
    caracter deNovo
    faca{
      limpa()
      escreva("Digite o ano: ")
      leia(ano)

      escreva("Digite as 3 primeiras letras do mês em minúsculo: ")
      leia(mes)
      limpa()

      se(ano%4==0){
        se(ano%100==0){
          se(ano%400==0){
            bissexto = verdadeiro
            
          }senao{
            bissexto = falso
          
          }
        }senao{
            bissexto = verdadeiro

        }
      }senao{
            bissexto = falso

      }

    
          escolha(mes){
            caso"jan":escreva("31 dias")pare

            caso"fev":
              se(bissexto){
                escreva("29 dias")

              }senao{
                escreva("28 dias")

              }
            pare

            caso"mar":escreva("31 dias")pare
            caso"abr":escreva("30 dias")pare
            caso"mai":escreva("31 dias")pare
            caso"jun":escreva("30 dias")pare
            caso"jul":escreva("31 dias")pare
            caso"ago":escreva("31 dias")pare
            caso"set":escreva("30 dias")pare
            caso"out":escreva("31 dias")pare
            caso"nov":escreva("30 dias")pare
            caso"dez":escreva("31 dias")pare  
          }
      
      

      escreva("\nvoce deseja outras entradas (S/?): ")
      leia(deNovo)
    }enquanto(deNovo == "s" ou deNovo == "S")

  }
}
