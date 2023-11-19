//! levels

//* puzzle easy
let puzzle_easy = [['', '1', '2', '8', '3 6', '8', '10', '7', '2 5', '1 4', '3'],
                   ['1 1', 0, 0, 0, 1, 0, 1, 0, 0, 0, 0],
                   ['2 1 1 2', 1, 1, 0, 1, 0, 1, 0, 1, 1, 0],
                   ['7', 0, 1, 1, 1, 1, 1, 1, 1, 0, 0],
                   ['1 3', 0, 0, 1, 0, 1, 1, 1, 0, 0, 0],
                   ['6', 0, 0, 1, 1, 1, 1, 1, 1, 0, 0],
                   ['7', 0, 0, 1, 1, 1, 1, 1, 1, 1, 0],
                   ['8', 0, 0, 1, 1, 1, 1, 1, 1, 1, 1],
                   ['8', 0, 0, 1, 1, 1, 1, 1, 1, 1, 1],
                   ['8', 0, 0, 1, 1, 1, 1, 1, 1, 1, 1],
                   ['4', 0, 0, 1, 1, 1, 1, 0, 0, 0, 0]];

//* solved easy
let solved_easy = [['', '1', '2', '8', '3 6', '8', '10', '7', '2 5', '1 4', '3'],
                   ['1 1', 0, 0, 0, 3, 0, 3, 0, 0, 0, 0],
                   ['2 1 1 2', 3, 3, 0, 3, 0, 3, 0, 3, 3, 0],
                   ['7', 0, 3, 3, 3, 3, 3, 3, 3, 0, 0],
                   ['1 3', 0, 0, 3, 0, 3, 3, 3, 0, 0, 0],
                   ['6', 0, 0, 3, 3, 3, 3, 3, 3, 0, 0],
                   ['7', 0, 0, 3, 3, 3, 3, 3, 3, 3, 0],
                   ['8', 0, 0, 3, 3, 3, 3, 3, 3, 3, 3],
                   ['8', 0, 0, 3, 3, 3, 3, 3, 3, 3, 3],
                   ['8', 0, 0, 3, 3, 3, 3, 3, 3, 3, 3],
                   ['4', 0, 0, 3, 3, 3, 3, 0, 0, 0, 0]];

//* puzzle intermediate
let puzzle_intermediate = [['', '4', '6', '3 2', '2 2', '2 3', '1 4', '2 4', '8', '6', '4'],
                           ['1 1', 0, 0, 1, 0, 0, 0, 0, 1, 0, 0],
                           ['3 3', 0, 1, 1, 1, 0, 0, 1, 1, 1, 0],
                           ['10', 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
                           ['2 1 3', 1, 1, 0, 0, 1, 0, 0, 1, 1, 1],
                           ['2 3', 1, 1, 0, 0, 0, 0, 0, 1, 1, 1],
                           ['2 4', 1, 1, 0, 0, 0, 0, 1, 1, 1, 1],
                           ['2 4', 0, 1, 1, 0, 0, 1, 1, 1, 1, 0],
                           ['6', 0, 0, 1, 1, 1, 1, 1, 1, 0, 0],
                           ['4', 0, 0, 0, 1, 1, 1, 1, 0, 0, 0],
                           ['2', 0, 0, 0, 0, 1, 1, 0, 0, 0, 0]];

//* solved intermediate
let solved_intermediate = [['', '4', '6', '3 2', '2 2', '2 3', '1 4', '2 4', '8', '6', '4'],
                           ['1 1', 0, 0, 3, 0, 0, 0, 0, 3, 0, 0],
                           ['3 3', 0, 3, 3, 3, 0, 0, 3, 3, 3, 0],
                           ['10', 3, 3, 3, 3, 3, 3, 3, 3, 3, 3],
                           ['2 1 3', 3, 3, 0, 0, 3, 0, 0, 3, 3, 3],
                           ['2 3', 3, 3, 0, 0, 0, 0, 0, 3, 3, 3],
                           ['2 4', 3, 3, 0, 0, 0, 0, 3, 3, 3, 3],
                           ['2 4', 0, 3, 3, 0, 0, 3, 3, 3, 3, 0],
                           ['6', 0, 0, 3, 3, 3, 3, 3, 3, 0, 0],
                           ['4', 0, 0, 0, 3, 3, 3, 3, 0, 0, 0],
                           ['2', 0, 0, 0, 0, 3, 3, 0, 0, 0, 0]];

//* puzzle hard
let puzzle_hard = [['', '2', '1 1 3', '2 1 1 4', '1 1 6', '2 6', '4 6', '11 1', '4 7', '1 2 4 1 1', '1 1 1 1 2', '2 2 1', '1 6', '5', '2 3', '5'],
                   ['5', 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0],
                   ['3 2', 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0],
                   ['5', 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0],
                   ['6 1', 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0],
                   ['1 2 2', 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1],
                   ['2 1 1 1 1', 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1],
                   ['1 1 4 2 1', 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1],
                   ['7 4', 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1],
                   ['1 11', 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
                   ['6 4', 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0],
                   ['6 2', 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0],
                   ['6 1 1', 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0],
                   ['4 1 1 2', 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0],
                   ['3 1 1', 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0],
                   ['2', 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]];

//* solved hard
let solved_hard = [['', '2', '1 1 3', '2 1 1 4', '1 1 6', '2 6', '4 6', '11 1', '4 7', '1 2 4 1 1', '1 1 1 1 2', '2 2 1', '1 6', '5', '2 3', '5'],
                   ['5', 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 0, 0, 0, 0],
                   ['3 2', 0, 0, 0, 0, 0, 3, 3, 3, 0, 0, 3, 3, 0, 0, 0],
                   ['5', 0, 0, 0, 0, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0],
                   ['6 1', 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 0, 0, 0, 3, 0],
                   ['1 2 2', 0, 0, 3, 0, 0, 3, 3, 0, 0, 0, 0, 0, 0, 3, 3],
                   ['2 1 1 1 1', 0, 0, 3, 3, 0, 0, 3, 0, 3, 0, 0, 3, 0, 0, 3],
                   ['1 1 4 2 1', 0, 3, 0, 0, 3, 0, 3, 3, 3, 3, 0, 3, 3, 0, 3],
                   ['7 4', 0, 0, 3, 3, 3, 3, 3, 3, 3, 0, 0, 3, 3, 3, 3],
                   ['1 11', 0, 3, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3],
                   ['6 4', 0, 0, 3, 3, 3, 3, 3, 3, 0, 0, 3, 3, 3, 3, 0],
                   ['6 2', 0, 0, 0, 3, 3, 3, 3, 3, 3, 0, 0, 3, 3, 0, 0],
                   ['6 1 1', 3, 3, 3, 3, 3, 3, 0, 3, 0, 3, 0, 0, 0, 0, 0],
                   ['4 1 1 2', 3, 3, 3, 3, 0, 3, 0, 3, 0, 3, 3, 0, 0, 0, 0],
                   ['3 1 1', 0, 3, 3, 3, 0, 0, 3, 0, 3, 0, 0, 0, 0, 0, 0],
                   ['2', 0, 0, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]];

//* puzzle trivial
let puzzle_trivial = [['', '2', '3', '2 1', '2 1', '1 1'],
                      ['2', 0, 0, 0, 1, 1],
                      ['2', 0, 0, 1, 1, 0],
                      ['2', 0, 1, 1, 0, 0],
                      ['2', 1, 1, 0, 0, 0],
                      ['5', 1, 1, 1, 1, 1]];

//* solevd trivial
let solved_trivial = [['', '2', '3', '2 1', '2 1', '1 1'],
                      ['2', 0, 0, 0, 3, 3],
                      ['2', 0, 0, 3, 3, 0],
                      ['2', 0, 3, 3, 0, 0],
                      ['2', 3, 3, 0, 0, 0],
                      ['5', 3, 3, 3, 3, 3]];

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
            let i = 0;
            let j = 0;
            if (typeof puzzle[r][c] == "number" && puzzle[r][c] == 3) {
                row += "<td class='hidden' onclick='square_click_handler(this)'>";
            }
            else if (puzzle[r][c] == 'X') {
                row += "<td class='visible' onclick='square_click_handler(this)'>";
            }
            else if (i < puzzle[r][0].length && typeof puzzle[r][c] == "string") {
                row += "<td class='visible vertical' onclick='square_click_handler(this)'>";
                i++;
            }
            else if (j < puzzle[0][c].length && typeof puzzle[r][c] == "string") {
                row += "<td class='visible horizontal' onclick='square_click_handler(this)'>";
                j++;
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