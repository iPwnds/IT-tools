//Interne voorstelling van de puzzel als een tweedimensionale lijst
let puzzle = [[0, 1, 2],
              [7, 4, 8],
              [3, 5, 6]];

//Wanneer de volledige HTML-pagina geladen is wordt onderstaande functie uitgevoerd
window.onload = function(){
    draw_puzzle(puzzle);
}

//Deze functie neemt als invoer de lijstrepresentatie van onze puzzel
//
function draw_puzzle(puzzle){
    let puzzle_html = generate_puzzle_html(puzzle);
    document.getElementById("puzzle_container").innerHTML = puzzle_html;
}

function generate_puzzle_html(puzzle) {
    //TODO: Implementeer deze functie!
    //puzzle bevat een tweedimensionale lijst die de sliding puzzle voorstelt
    //Kijk naar de functie generate_board_html in voorbeeld 7 uit het hoorcollege voor inspiratie
    let table = "";
    for (let r = 0; r < puzzle.length; r++) {  
        let col = "";
        col += "<tr>"
        let row = "";
        for (let c = 0; c < puzzle[r].length; c++) {
            row += "<td onclick='square_click_handler(this)'>"
            row += puzzle[r][c];
            row += "</td>";
        }
        col += row;
        col += "</tr>";
        table += col;
    }
    return `<table>${table}</table>`;
}

function check_game_complete(puzzle) {
    let correct = (puzzle[0][0] == 1 && puzzle[0][1] == 2 && puzzle[0][2] == 3 && puzzle[1][0] == 4 && puzzle[1][1] == 5 && puzzle[1][2] == 6 && puzzle[2][0] == 7 && puzzle[2][1] == 8 && puzzle[2][2] == 0);
    if (correct == true) {
        return true;
    }
    else{
        return false;
    }
}

function swap_empty_square(puzzle, row, col) {
    let empty_row = 0;
    let empty_col = 0;
    for (let r = 0; r < puzzle.length; r++) {
        for (let c = 0; c < puzzle[r].length; c++) {
            if (puzzle[r][c] == 0) {
                empty_row = r;
                empty_col = c;
            }
        }
    }
    if (row == empty_row && col == empty_col - 1 || row == empty_row && col == empty_col + 1 || row == empty_row - 1 && col == empty_col || row == empty_row + 1 && col == empty_col) {
        let temp = puzzle[row][col];
        puzzle[row][col] = puzzle[empty_row][empty_col];
        puzzle[empty_row][empty_col] = temp;
    }
}


function square_click_handler(cell) {
    let col = cell.cellIndex;
    let row = cell.parentNode.rowIndex;
    swap_empty_square(puzzle, row, col);
    draw_puzzle(puzzle);
    if (check_game_complete(puzzle) == true) {
        alert("Proficiat!");
    }
}