programa {
    inteiro tamanho
    cadeia nodeGlobal[]
    inteiro intGlobal[]
    logico boolGlobal[]
    caracter charGlobal[]
    cadeia stringGlobal[]
    real floatGlobal[]

  funcao inicio() {
    inteiro opcao
    logico continuar = verdadeiro
    escreva("olá, vamos criar uma lista? então vamos começar: \n")
    escreva("digite qual tamanho da lista você quer: ")
    leia(tamanho)
    criarLista(tamanho)

    escreva("agora escolha o que você gostaria de fazer com a sua lista:\n")

    enquanto(continuar){
      escreva("digite 0 para imprimir a lista completa: \n")
      escreva("digite 1 para imprimir o valor de uma posição específica da lista: \n")
      escreva("Digite 2 para deletar um índice da lista.\n")

      leia(opcao)
      escolha(opcao){
        caso 0:
          lerLista(opcao)
        pare
        caso 1:
          lerLista(opcao)
        pare
        caso 2:
          deletarIndice()
        pare
      }
      escreva("\ndeseja realizar outra operação? digite sim ou nao: ")
      leia(continuar)
      limpa()
    }

  }
    funcao criarLista(inteiro tamanho){
    cadeia tipo
    inteiro indice = 0
    cadeia node[tamanho]
    inteiro int[tamanho]
    logico bool[tamanho]
    caracter char[tamanho]
    cadeia string[tamanho]
    real float[tamanho]

    faca{
      escreva("digite qual o tipo de dado você irá adicionar a seguir: ")
      leia(tipo)
      escolha(tipo){
        caso "inteiro":
        escreva("posição ", indice,": ")
        leia(int[indice])
        node[indice] = "inteiro"
        string[indice] = "none"
        pare
        caso "real":
        escreva("posição ", indice,": ")
        leia(float[indice])
        node[indice] = "real"
        string[indice] = "none"
        pare
        caso "cadeia":
        escreva("posição ", indice,": ")
        leia(string[indice])
        node[indice] = "cadeia"
        pare
        caso "caracter":
        escreva("posição ", indice,": ")
        leia(char[indice])
        node[indice] = "caracter"
        string[indice] = "none"
        pare
        caso "logico":
        escreva("posição ", indice,": ")
        leia(bool[indice])
        node[indice] = "logico"
        string[indice] = "none"
        pare
      }
      indice++
    }enquanto(indice < tamanho)
    nodeGlobal = node
    intGlobal = int
    boolGlobal = bool
    charGlobal = char
    stringGlobal = string
    floatGlobal = float
    limpa()
    escreva("a lista está pronta :D\n")
  }

  funcao lerLista(inteiro buscarIndice){
    se(buscarIndice == 1){
      inteiro indice
      escreva("Digite qual indice voce deseja buscar: ")
      leia(indice)
      escreva("[")
      escolha(nodeGlobal[indice]){
        caso "inteiro":
            escreva(intGlobal[indice])
        pare
        caso "real": 
            escreva(floatGlobal[indice])
        pare
        caso "cadeia":
            escreva("\"",stringGlobal[indice],"\"")
        pare
        caso "caracter":
            escreva("'",charGlobal[indice],"'")
        pare
        caso "logico":
            escreva(boolGlobal[indice])
        pare
      }  
    escreva("]")
    }senao{
    escreva("[")
    para(inteiro i = 0; i<tamanho;i++){
      escolha(nodeGlobal[i]){
        caso "inteiro":
          se(i == tamanho -1){
            escreva(intGlobal[i])
          }senao{
            escreva(intGlobal[i],", ")
          }
        pare
        caso "real":
          se(i == tamanho -1){
            escreva(floatGlobal[i])
          }senao{
            escreva(floatGlobal[i],", ")
          }
        pare
        caso "cadeia":
          se(i == tamanho -1){
            escreva("\"",stringGlobal[i],"\"")
          }senao{
            escreva("\"",stringGlobal[i],"\", ")
          }
        pare
        caso "caracter":
          se(i == tamanho -1){
            escreva("'",charGlobal[i],"'")
          }senao{
            escreva("'",charGlobal[i],"', ")
          }
        pare
        caso "logico":
          se(i == tamanho -1){
            escreva(boolGlobal[i])
          }senao{
            escreva(boolGlobal[i],", ")
          }
        pare
      }
    }
    escreva("]")
  }

    }
    funcao deletarIndice(){
        inteiro indice
        escreva("Digite o índice que deseja deletar: ")
        leia(indice)
        
        se (indice >= 0 e indice < tamanho){
            para (inteiro i = indice; i < tamanho - 1; i++){
                nodeGlobal[i] = nodeGlobal[i + 1]
                se(intGlobal[i+1] <= 0 ou intGlobal[i+1] >= 0){
                intGlobal[i] = intGlobal[i + 1]
                }
                se(boolGlobal[i+1] == falso ou boolGlobal[i+1] == verdadeiro){
                boolGlobal[i] = boolGlobal[i + 1]
                }
                se(charGlobal[i + 1] >= 'a'){
                charGlobal[i] = charGlobal[i + 1]
                }       
                
                stringGlobal[i] = stringGlobal[i + 1]

                
                se(floatGlobal[i + 1] <= 0 ou floatGlobal[i + 1] >0){

                floatGlobal[i] = floatGlobal[i + 1]
                }
            }
            tamanho--
            escreva("Índice ", indice, " removido com sucesso.\n")
        } senao {
            escreva("Índice inválido!\n")
        }
    }
}