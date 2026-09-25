

//primeira versão do codigo

let herois = [
    ["Chico", 1000],
    ["Mark", 5000],
    ["Dilma", 9000],
    ["Jana", 10000],
];


console.log("O heroi de nome " + herois[0][0] + "está no nível " + herois[0][1] )
    if (herois[0][1]< 2000){
        console.log("O xp de " + herois[0][0] + "é de ferro")

    }

console.log("O heroi de nome " + herois[1][0] + "está no nível " + herois[1][1])
    if (herois[1][1] >= 2001 && herois[1][1] <= 5000) {
        console.log("O xp de " + herois[1][0] + "é de prata")
    }

console.log("O heroi de nome " + herois[2][0] + "está no nível " + herois[2][1])
    if (herois[2][1] >= 8001 && herois[2][1] <= 9000){
        console.log("O xp de " + herois[2][0] + "é ascendente")
    }


