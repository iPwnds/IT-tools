let my_board = [[0, 0, 0],
                [0, 0, 0],
                [0, 0, 0]];

let current_turn = 1;

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
    
    
}

