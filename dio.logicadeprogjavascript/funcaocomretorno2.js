

let userName = getFirstName("Rita Freire")

console.log("Seja bem-vindo(a) " + userName)

function getFirstName(name){
    let firstName = name.split(" ")[0]
    return firstName
}