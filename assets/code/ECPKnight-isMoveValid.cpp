bool ECPKnight::isMoveValid(ECPChessField newField) {
    // ...
    const int columnDiff =
        abs((int) newField.column -(int) currentField.column);
    const int rowDiff =
        abs((int) newField.row - (int) currentField.row);

    if (columnDiff == 2 && rowDiff == 1) {
        // two fields horizontally and one vertically
        return true;
    }
    if (columnDiff == 1 && rowDiff == 2) {
        // two fields vertically and one horizontally
        return true;
    }
    
    return false;
};