{CoodeForces Problem 160 A}
{Близнецы}
type tAr = array[1..100] of integer;
var n:integer;
    A:tAr;
    i,j:integer;
    sum, tempSum:integer;
    count:integer;
    T:integer;
{----Main----}
begin
    readln(n);
    for i:=1 to n do
        read(A[i]);

    sum:=0;
    for i:=1 to n do
        inc(sum,A[i]);

    for i:=1 to 99 do
        for j:=1 to 100-i do
            if A[j] < A[j+1] then
                begin
                    T:=A[j];
                    A[j]:=A[j+1];
                    A[j+1]:=T;
                end;

    tempSum:=0;
    count:=0;
    while (sum div 2) >= tempSum do
        begin
            inc(count);
            inc(tempSum,A[count]);
        end;

    writeln(count);
    //readln;
    //readln;
end.