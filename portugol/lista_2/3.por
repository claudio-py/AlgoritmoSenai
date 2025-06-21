programa {
  funcao inicio() {
    real media = 0.0
    inteiro cont[]={0,0}
    cadeia alunos[] = {
      "jorge", "luiz", "matheus","amanda",
      "luzia","katia","claudio","daniel",
      "breno","maysa","rayssa","maria",
      "robson", "ricardo", "gabriel"
      }
    real notas[][] = {
      {8.5,3.6,7.1,7.1},
      {9.4,6.5,6.2,8.2},
      {5.3,7.4,9.3,8.3},
      {6.2,8.3,8.4,9.4},
      {7.1,9.2,7.5,6.5},
      {8.0,3.1,6.6,5.6},
      {9.9,4.2,5.7,4.7},
      {4.8,5.3,4.8,3.8},
      {5.7,6.4,3.9,4.9},
      {6.6,7.5,4.8,5.0},
      {7.5,8.6,5.7,6.9},
      {8.4,9.7,6.6,7.8},
      {9.3,3.8,7.5,8.7},
      {7.2,5.9,8.4,9.6},
      {9.1,7.0,9.3,8.5}
      
    }

    enquanto(cont[0] <= 14){
      escreva("Aluno(a): ",alunos[cont[0]],"\n","notas: ")
      

      enquanto(cont[1] <= 3){
        media = media + notas[cont[0]][cont[1]]
        escreva(notas[cont[0]][cont[1]]," | ")
        notas[cont[0]][cont[1]]
        cont[1]= cont[1] + 1


      }
      media = media/4
      escreva("\nMedia = ", media)

      se(media > 6.0){
        escreva("\nsituação: Aprovado")
      }senao{
        escreva("\nsituação: Reprovado")
      }
      
      cont[0]= cont[0] + 1
      cont[1]=0
      media = 0.0
      escreva("\n \n")
    }

  }
}
