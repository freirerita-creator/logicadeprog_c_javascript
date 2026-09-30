
// (pao) é o equivalente a declaracao da variavel pao. pao é o parametro da função e so existe dentro do escopo da função

torrarPao("pão de forma")
torrarPao("pão integral")

function torrarPao(pao) {
    console.log("torrada feita com " + pao)

}
//atribui valor para o parametro
//usamos parametros para que uma mesma funçao tenha ressultados diferentes



// outro exemplo

torrarPao("pão de forma" , "felipe", 10.90)


function torrarPao(pao, nome, valor){
    console.log("torrada feita com " + pao)
    console.log("ela é um pedido de " + nome)
    console.log("O valor total do pedido é " + valor)

}

