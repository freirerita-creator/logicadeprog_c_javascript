

let herois = [
    ["Chico", 1000],
    ["Mark", 5000],
    ["Dilma", 9000],
    ["Jana", 10000],
];

//Continue repetindo enquanto i for menor que a quantidade de heróis.
//Comece i em 0 → enquanto i for menor que a quantidade de heróis → aumente i em 1.

//herois[i][0] // pega o nome
//herois[i][1] // pega o XP

for (let i = 0; i < herois.length; i++){
    
    let nome = herois[i][0];
    let xp = herois[i][1];
    let classificacao;

    if (xp <= 1000) {
        classificacao = "Ferro";
    } else if (xp <= 2000) {
        classificacao = "Bronze";
    } else if (xp <= 5000) {
        classificacao = "Prata";
    } else if (xp <= 7000) {
        classificacao = "Ouro";
    } else if (xp <= 8000) {
        classificacao = "Platina";
    } else if (xp <= 9000) {
        classificacao = "Ascendente";
    } else if (xp <= 10000) {
        classificacao = "Imortal";
    } else {
        classificacao = "Radiante";
    }

    console.log(
        "Herói: " + nome +
        " | XP: " + xp +
        " | Classificação: " + classificacao
    );


}