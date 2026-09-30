

function fazerTorrada(){
    console.log("Passando a manteiga no pão...")
    console.log("O pão está pronto para ser torrado...")
    console.log("O pão está na torradeira...")
    console.log("O pão está sendo torrado...")
    console.log("O pão torrado está pronto!")
}
 
fazerTorrada()


//uma função principal que guarda modulos de um processo em conjunto. é melhor modular as funções e juntar em uma principal, pois fica mais facil para manutenção

function mainSaveData(){
    getData()
    checkValues()
    sendToDataBase()

}

//a função main chama as demais funções criadas:

function getData () {
    //codigo aqui
}

function checkValues() {
    //codigo aqui
}

function sendToDataBase() {
    //codigo aqui
}