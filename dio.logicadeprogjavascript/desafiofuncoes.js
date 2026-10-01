
let vitorias = 50
let derrotas = 5


ranking(vitorias, derrotas)

function ranking(vitorias, derrotas){

    let saldoDePontos = vitorias - derrotas
    
    if (saldoDePontos <= 10){
        console.log("O heroi tem " + saldoDePontos + " pontos e está no nível ferro")

    } else if (saldoDePontos >= 11 && saldoDePontos <=20){
        console.log("O heroi tem " + saldoDePontos + " pontos e está no nível bronze")

    } else if (saldoDePontos >= 20 && saldoDePontos <= 50){
        console.log("O heroi tem " + saldoDePontos + " pontos e está no nível ouro")
    }
    
}