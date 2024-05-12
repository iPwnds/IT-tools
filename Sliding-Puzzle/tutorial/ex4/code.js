let random_value = 0;
let button_amount = 5;

window.onload = function(){
    //Getting elements by ID is only possible after the page has loaded
    document.getElementById("number_picker").onchange = function(){
        change_button_amount(this.value);
    }
    assign_random_value();
}


function change_button_amount(new_amount){
    button_amount = new_amount;
    create_buttons();
}

function create_buttons(){
    let button_html = "";
    for(let i = 0; i < button_amount; i++){
        button_html += generate_button_html(i);
    }
    document.getElementById("button_container").innerHTML = button_html;
    assign_random_value();
}

function generate_button_html(button_index){
    return `<button onclick="check_value(${button_index})">${button_index}</button>`;
}


function assign_random_value(){
   random_value = Math.floor(Math.random() * button_amount); 
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

