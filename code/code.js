//! levels

//* puzzle easy
let puzzle_easy = [[0, 0, 0, 1, 0, 1, 0, 0, 0, 0],
                   [1, 1, 0, 1, 0, 1, 0, 1, 1, 0],
                   [0, 1, 1, 1, 1, 1, 1, 1, 0, 0],
                   [0, 0, 1, 0, 1, 1, 1, 0, 0, 0],
                   [0, 0, 1, 1, 1, 1, 1, 1, 0, 0],
                   [0, 0, 1, 1, 1, 1, 1, 1, 1, 0],
                   [0, 0, 1, 1, 1, 1, 1, 1, 1, 1],
                   [0, 0, 1, 1, 1, 1, 1, 1, 1, 1],
                   [0, 0, 1, 1, 1, 1, 1, 1, 1, 1],
                   [0, 0, 1, 1, 1, 1, 0, 0, 0, 0]];

//* solved easy
let solved_easy = [[0, 0, 0, 3, 0, 3, 0, 0, 0, 0],
                   [3, 3, 0, 3, 0, 3, 0, 3, 3, 0],
                   [0, 3, 3, 3, 3, 3, 3, 3, 0, 0],
                   [0, 0, 3, 0, 3, 3, 3, 0, 0, 0],
                   [0, 0, 3, 3, 3, 3, 3, 3, 0, 0],
                   [0, 0, 3, 3, 3, 3, 3, 3, 3, 0],
                   [0, 0, 3, 3, 3, 3, 3, 3, 3, 3],
                   [0, 0, 3, 3, 3, 3, 3, 3, 3, 3],
                   [0, 0, 3, 3, 3, 3, 3, 3, 3, 3],
                   [0, 0, 3, 3, 3, 3, 0, 0, 0, 0]];

//* puzzle intermediate
let puzzle_intermediate = [[0, 0, 1, 0, 0, 0, 0, 1, 0, 0],
                           [0, 1, 1, 1, 0, 0, 1, 1, 1, 0],
                           [1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
                           [1, 1, 0, 0, 1, 0, 0, 1, 1, 1],
                           [1, 1, 0, 0, 0, 0, 0, 1, 1, 1],
                           [1, 1, 0, 0, 0, 0, 1, 1, 1, 1],
                           [0, 1, 1, 0, 0, 1, 1, 1, 1, 0],
                           [0, 0, 1, 1, 1, 1, 1, 1, 0, 0],
                           [0, 0, 0, 1, 1, 1, 1, 0, 0, 0],
                           [0, 0, 0, 0, 1, 1, 0, 0, 0, 0]];

//* solved intermediate
let solved_intermediate = [[0, 0, 3, 0, 0, 0, 0, 3, 0, 0],
                           [0, 3, 3, 3, 0, 0, 3, 3, 3, 0],
                           [3, 3, 3, 3, 3, 3, 3, 3, 3, 3],
                           [3, 3, 0, 0, 3, 0, 0, 3, 3, 3],
                           [3, 3, 0, 0, 0, 0, 0, 3, 3, 3],
                           [3, 3, 0, 0, 0, 0, 3, 3, 3, 3],
                           [0, 3, 3, 0, 0, 3, 3, 3, 3, 0],
                           [0, 0, 3, 3, 3, 3, 3, 3, 0, 0],
                           [0, 0, 0, 3, 3, 3, 3, 0, 0, 0],
                           [0, 0, 0, 0, 3, 3, 0, 0, 0, 0]];

//* puzzle hard
let puzzle_hard = [[0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0],
                   [0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0],
                   [0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0],
                   [0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0],
                   [0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1],
                   [0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1],
                   [0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1],
                   [0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1],
                   [0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
                   [0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0],
                   [0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0],
                   [1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0],
                   [1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0],
                   [0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0],
                   [0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]];

//* solved hard
let solved_hard = [[0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 0, 0, 0, 0],
                   [0, 0, 0, 0, 0, 3, 3, 3, 0, 0, 3, 3, 0, 0, 0],
                   [0, 0, 0, 0, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0],
                   [0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 0, 0, 0, 3, 0],
                   [0, 0, 3, 0, 0, 3, 3, 0, 0, 0, 0, 0, 0, 3, 3],
                   [0, 0, 3, 3, 0, 0, 3, 0, 3, 0, 0, 3, 0, 0, 3],
                   [0, 3, 0, 0, 3, 0, 3, 3, 3, 3, 0, 3, 3, 0, 3],
                   [0, 0, 3, 3, 3, 3, 3, 3, 3, 0, 0, 3, 3, 3, 3],
                   [0, 3, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3],
                   [0, 0, 3, 3, 3, 3, 3, 3, 0, 0, 3, 3, 3, 3, 0],
                   [0, 0, 0, 3, 3, 3, 3, 3, 3, 0, 0, 3, 3, 0, 0],
                   [3, 3, 3, 3, 3, 3, 0, 3, 0, 3, 0, 0, 0, 0, 0],
                   [3, 3, 3, 3, 0, 3, 0, 3, 0, 3, 3, 0, 0, 0, 0],
                   [0, 3, 3, 3, 0, 0, 3, 0, 3, 0, 0, 0, 0, 0, 0],
                   [0, 0, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]];

//* puzzle trivial
let puzzle_trivial = [[0, 0, 0, 1, 1],
                      [0, 0, 1, 1, 0],
                      [0, 1, 1, 0, 0],
                      [1, 1, 0, 0, 0],
                      [1, 1, 1, 1, 1]];

//* solevd trivial
let solved_trivial = [[0, 0, 0, 3, 3],
                      [0, 0, 3, 3, 0],
                      [0, 3, 3, 0, 0],
                      [3, 3, 0, 0, 0],
                      [3, 3, 3, 3, 3]];

//* aantal levens
let lives = 3;

//! functies

window.onload = function(){
    select();
    draw(puzzle);
}

function select() {
    let level = prompt("Welk level wil je spelen? (easy, intermediate, hard of trivial)");
    if (level == "easy") {
        puzzle = puzzle_easy;
        solved = solved_easy;
    }
    else if (level == "intermediate") {
        puzzle = puzzle_intermediate;
        solved = solved_intermediate;
    }
    else if (level == "hard") {
        puzzle = puzzle_hard;
        solved = solved_hard;
    }
    else if (level == "trivial") {
        puzzle = puzzle_trivial;
        solved = solved_trivial;
    }
    else {
        alert("Dit level bestaat niet!");
    }
}

function draw(puzzle) {
    let puzzleHTML = generate(puzzle);
    document.getElementById("puzzle").innerHTML = puzzleHTML;
}

function generate(puzzle) {
    let nonogram = "<h1>nonogram</h1>";
    let table = "";
    for (let r = 0; r < puzzle.length; r++) {
        let col = "";
        col += "<tr>"
        let row = "";
        for (let c = 0; c < puzzle[r].length; c++) {
            if (puzzle[r][c] == 3) {
                row += "<td class='colored' onclick='square_click_handler(this)'>";
            }
            else if (puzzle[r][c] == 'X') {
                row += "<td class='mine' onclick='square_click_handler(this)'>";
            }
            else {
                row += "<td onclick='square_click_handler(this)'>";
            }
            row += puzzle[r][c];
            row += "</td>";
        }
        col += row;
        col += "</tr>";
        table += col;
    }
    return `${nonogram}<table>${table}</table>`;
}

function change(puzzle, row, col) {
    if (puzzle[row][col] == 1) {
        puzzle[row][col] = 3;
    }
    else if (puzzle[row][col] == 0) {
        puzzle[row][col] = 'X';
        lives -= 1;
        if (lives == 0) {
            alert("Game over!");
            reset();
        }
        else {
            alert("Je hebt een mijn geraakt! Je hebt nog " + lives + " levens over.");
        }
    }
}

function square_click_handler(cell) {
    let col = cell.cellIndex;
    let row = cell.parentNode.rowIndex;
    change(puzzle, row, col);
    draw(puzzle);
    check(puzzle, solved);
}

function reset() {
    location.reload();
}

function check(puzzle, solved) {
    let correct = true;
    for (let r = 0; r < puzzle.length; r++) {
        for (let c = 0; c < puzzle[r].length; c++) {
            if (puzzle[r][c] != solved[r][c]) {
                correct = false;
            }
        }
    }
    if (correct) {
        alert("Je hebt gewonnen!");
    }
}