

let posicao = 0

let cavernaDoDragao = 10

jornadaDoHeroi(posicao, cavernaDoDragao)

function jornadaDoHeroi (posicao, cavernaDoDragao) {
    console.log("O heroi começa a jornada na posição " + posicao)

    while (posicao < 10){
        posicao++

        console.log("O heroi deu um passo e está na posição " + posicao)
    }
}