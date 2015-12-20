{CoodeForces Problem 158 B}
{Такси}
type Tarr = array[1..100000] of byte;
var n:integer;
    S:Tarr;
    i:integer;
    p1, p2, p3, p4:integer;
{----BubbleSort----}
procedure pBubbleSort(var S:Tarr);
    var i, j, T:integer;
    begin
            for i:=1 to n-1 do
                for j:=1 to n-i do
                    if S[j] > S[j+1] then
                        begin
                            T:=S[j];
                            S[j]:=S[j+1];
                            S[j+1]:=T;
                        end;
    end;
{----Main----}
begin
    readln(n);
    for i:=1 to n do
        read(S[i]);

    pBubbleSort(S);

    p1:=0;
    p2:=0;
    p3:=0;
    p4:=0;
    i:=1;
    while S[i] = 1 do
        begin
            inc(p1);
            inc(i);
        end;

    while S[i] = 2 do
        begin
            inc(p2);
            inc(i);
        end;

    while S[i] = 3 do
        begin
            inc(p3);
            inc(i);
        end;

    while S[i] = 4 do
        begin
            inc(p4);
            inc(i);
        end;

        //for i:=1 to n do
            //write(S[i],' ');
        writeln(p1,' ',p2,' ',p3,' ',p4);
        readln;
        readln;
end.