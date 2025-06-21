programa {
  funcao inicio() {
    real preco

    escreva("digite o preço do produto: ")
    leia(preco)
    
    escreva(
      "com desconto de 5% o produto sai a: R$", 
     preco - (preco*0.05)
    )
  }
}
