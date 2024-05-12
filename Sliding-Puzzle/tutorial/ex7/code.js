let my_board = [[0, 0, 0],
                [0, 0, 0],
                [0, 0, 0]];

let current_turn = 2;

function draw_board(board){
    container = document.getElementById("board_container");
    board_html = generate_board_html(board);
    container.innerHTML = board_html;
}

function generate_board_html(board){
    let table_inner_html = "";
    for(let i = 0; i < board.length; i++){
        
        let row_html = "<tr>"
        for(let j = 0; j < board[i].length; j++){
            row_html += generate_square(board[i][j]);
        }
        row_html += "</tr>";
        table_inner_html += row_html;
    }

    return `<table>${table_inner_html}</table>`;
    
}

function generate_square(type){
    let square_class = "empty";
    let square_content = "";

    if(type == 1){
        square_class = "red";
        square_content = "X";
    }else if(type == 2){
        square_class = "yellow";
        square_content = "O";
    }
    return `<td class="${square_class} board_element" onclick="square_click_handler(this)">${square_content}</td>`;
}

function update_board(board, row, col, type){
    board[row][col] = type;
    draw_board(board);
}

function square_click_handler(event){
    let col = event.cellIndex;
    let row = event.parentNode.rowIndex;

    update_board(my_board, row, col, current_turn);

    if(current_turn == 1){
        current_turn = 2;
    } else {
        current_turn = 1;
    }

    check_win(my_board);
    
    
}

function reset(){
    my_board = [[0, 0, 0], [0, 0, 0], [0, 0, 0]];
    draw_board(my_board);
}

function check_win(board){
    for(let i = 0; i < board.length; i++){

        if(board[i][0] == 2 && board[i][1] == 1 && board[i][2] == 2){
            win_game();
        }
        
    }

    for(let i = 0; i < board[0].length; i++){

        if(board[0][i] == 2 && board[1][i] == 1 && board[2][i] == 2){
            win_game();
            
        }
        
    }

    //TODO: Diagonale controle
}

function win_game(){
    alert(`Proficiat! Speler ${current_turn} wint.`);
    reset();
}

window.onload = function(){
    draw_board(my_board);
}

