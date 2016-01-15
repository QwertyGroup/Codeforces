{CoodeForces Problem 281 A}
{Капитализация слова}
type tAr = array[1..1000] of char;
var A:tAr;
    i:integer;
{----Main----}
begin
    readln(A);
    if (ord(A[1]) >= 97) and (ord(A[1]) <= 122) then
        A[1]:=char(ord(A[1])-32);

    i:=1;
    while ((ord(A[i]) >= 97) and (ord(A[i]) <= 122)) or ((ord(A[i]) >= 65) and (ord(A[i]) <= 90)) do
        begin
            write(A[i]);
            inc(i);
        end;
    //readln;
end.