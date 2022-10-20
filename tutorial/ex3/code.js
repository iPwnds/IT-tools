let random_value = 0;

function assign_random_value(){
   random_value = Math.floor(Math.random() * 5); 
}

function check_value(value){
    if(value == random_value){
        alert("Gewonnen!");
        assign_random_value();
    }else{
        alert("Pech! Probeer opnieuw.");
    }
}

function say_something(message){
    alert("Message: "+message);
}

assign_random_value();
