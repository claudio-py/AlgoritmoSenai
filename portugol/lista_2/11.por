programa {
  
  cadeia nome, sexo, novamente

  funcao defSexo(){
    escreva("Digte m ou M se for masculino ou digite f ou F se for feminino: ")
    leia(sexo)

    escolha(sexo){
      caso "F": sexo = "f" pare
      caso "M": sexo = "m" pare
    }

    escolha(sexo){
      caso "f": escreva("nome: ", nome,"\n","sexo: Feminino \n") pare
      
      caso "m": escreva("nome: ", nome,"\n","sexo: Masculino \n") pare
      
      caso contrario:
        limpa()
        escreva("Erro: sexo invalido. Tente novamente \n")
        defSexo()
    }
  }

  funcao inicio() {
  
    faca{
    limpa()
    escreva("Digite o seu nome: ")
    leia(nome)

    defSexo()

    escreva("voce deseja novas entradas (S/?): ")
    leia(novamente)
    }enquanto(novamente == "S" ou novamente == "s")

    
  }
}
