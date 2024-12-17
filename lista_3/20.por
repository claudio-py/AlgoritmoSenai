programa {
  funcao inicio() {
    inteiro cadastro,contador
    real media = 0.0
    cadeia opcao
    contador = 0
    escreva("digite quantas pessoas deseja cadastrar: ")
    leia(cadastro)
    cadeia nome_e_sexo[cadastro][2]
    real altura_e_peso[cadastro][2]
    inteiro i = 0
   
    faca{
      escreva("digite o nome da ",i+1,"º pessoa: ")
      leia(nome_e_sexo[i][0])

      escreva("digite (m || M) ou (f || F) para definir o sexo do(a) ",nome_e_sexo[i][0],": ")
      leia(nome_e_sexo[i][1])

      escolha(nome_e_sexo[i][1]){
        caso "F": nome_e_sexo[i][1] = "f" pare
        caso "M": nome_e_sexo[i][1] = "m" pare
      }

      escreva("digite a altura em metro do(a) ",nome_e_sexo[i][0],": ")
      leia(altura_e_peso[i][0])

      escreva("digite o peso em kg do(a) ",nome_e_sexo[i][0],": ")
      leia(altura_e_peso[i][1])
      i++
    }enquanto(i < cadastro)
    // escreva(nome_e_sexo)
    // escreva(altura_e_peso)
    faca{
      limpa()
      escreva(
        "digite a opção que deseja a seguir:\n",
        "nh --> para saber o numero de homens cadastrados\n",
        "nf --> para saber o numero de mulheres cadastradas\n",
        "amh --> para saber a altura média dos homens\n",
        "amf --> para saber a altura média das mulheres\n",
        "amt --> para saber a altura média total do grupo\n",
        "pmh --> para saber o peso médio dos homens\n",
        "pmf --> para saber o peso médio das mulheres\n",
        "pmt --> para saber o peso médio total do grupo\n",
        "ls --> para listar o perfil de todos os cadastrados\n",

        "digite sua opção aqui:->  "
      )
      leia(opcao)

      escolha(opcao){
        caso "nh":
        limpa()
          para(inteiro j=0; j < cadastro; j++){
            se(nome_e_sexo[j][1] == "m"){
                contador++
            }
          }
                escreva(contador)
                contador = 0
        pare

        caso "nf":
        limpa()
          para(inteiro j=0; j < cadastro; j++){
            se(nome_e_sexo[j][1] == "f"){
                contador++
            }
          }
                escreva(contador)
                contador = 0
        pare

        caso "amh":
        limpa()

          para(inteiro j=0; j < cadastro; j++){
            se(nome_e_sexo[j][1] == "m"){
                contador++
                media = media + altura_e_peso[j][0]
                
            }
          }
          media = media/contador
          escreva(" a media da altura dos homens é: ", media)
          contador = 0
          media = 0
        pare

        caso "amf":
        limpa()

          para(inteiro j=0; j < cadastro; j++){
            se(nome_e_sexo[j][1] == "f"){
                contador++
                media = media + altura_e_peso[j][0]
                
            }
          }
          media = media/contador
          escreva(" a media da altura das mulheres é: ", media)
          contador = 0
          media = 0
        pare
        caso "amt":
        limpa()

          para(inteiro j=0; j < cadastro; j++){
            
                
                media = media + altura_e_peso[j][0]
         
          }
          media = media/cadastro
          escreva("a media de altura total do grupo: ", media)
          
          media = 0
        pare
        caso "pmh":
        limpa()

          para(inteiro j=0; j < cadastro; j++){
            se(nome_e_sexo[j][1] == "m"){
                contador++
                media = media + altura_e_peso[j][1]
                
            }
          }
          media = media/contador
          escreva(" a media de peso dos homens é: ", media)
          contador = 0
          media = 0
        pare

        caso "pmf":
        limpa()

          para(inteiro j=0; j < cadastro; j++){
            se(nome_e_sexo[j][1] == "f"){
                contador++
                media = media + altura_e_peso[j][1]
                
            }
          }
          media = media/contador
          escreva(" a media de peso das mulheres é: ", media)
          contador = 0
          media = 0
        pare
        caso "pmt":
        limpa()

          para(inteiro j=0; j < cadastro; j++){
            
               
                media = media + altura_e_peso[j][1]
         
          }
          media = media/cadastro
          escreva("a media de apeso total do grupo: ", media)
          
          media = 0
        pare
        caso "ls":
        limpa()

          para(inteiro j=0; j < cadastro; j++){
            escreva("nome: ", nome_e_sexo[j][0]," | sexo: ", nome_e_sexo[j][1]," | altura: ",altura_e_peso[j][0]," | peso: ",altura_e_peso[j][1],"\n")
               
             
          }

        pare
      }
      escreva("\nse você deseja realizar outra consulta digite S : ")
      leia(opcao)

    }enquanto(opcao == "s" ou opcao == "S")
    
  }
}
