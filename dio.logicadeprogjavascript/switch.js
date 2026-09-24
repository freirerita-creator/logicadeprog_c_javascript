
// switch, case, break e default

let fruta = "banana"

switch(fruta) {
    case "laranja":
        console.log("suco de laranja")
    break

    case "banana":
    case "abacate":
        console.log("vitamina de " + fruta)
    break

    case "maça":
        console.log("suco de maça")
    break

    default:
        console.log("salada de frutas")
}
