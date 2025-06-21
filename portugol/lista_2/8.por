programa {
  funcao inicio() {
    real razao,termo
    inteiro i = 1
    razao = 3
    termo = 5
    escreva(termo, " --> 1º termo \n")
    faca{
      escreva(termo, " + ",razao)
        termo = termo + razao
        escreva(" = ", termo," --> ",i + 1,"º"," termo","\n")
        i++
    }enquanto(i<100)
  }
}
