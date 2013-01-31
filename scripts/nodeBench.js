function preOk (value, message){
    if( !!!value ){
        console.log("preOk: fail");
    }
}

function newOk( value, message ){
    if( !value ){
        console.log("newOk: fail");
    }
}

console.time("newOk");
for( var i = 0 ; i < 10000000 ; i++ ){
    newOk(true);
}
console.timeEnd("newOk");

console.time("preOk");
for( var i = 0 ; i < 10000000 ; i++ ){
    preOk(true);
}
console.timeEnd("preOk");