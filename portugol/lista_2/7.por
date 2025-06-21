programa {
  inteiro z, x, acumulador

  funcao digiteZ(){
    escreva("digite o valor de z: ")
    leia(z)
    se(z<x){
      digiteZ()
    }
  }

  funcao inicio() {
    acumulador =0
    escreva("agora digite o valor de x: ")
    leia(x)

    digiteZ()
    
   faca{
      acumulador = acumulador + x
      // escreva(x,"\n")
      escreva(" +",x)
      x++
    }enquanto(z+1 > acumulador)
    escreva(" = ",acumulador)
  }
}
