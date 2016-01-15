{CoodeForces Problem 339 A}
{Математика спешит на помощь}
var S:string;
    A:array[1..200] of integer;
    i,j,l:integer;
    T:integer;
{----Main----}
begin
    readln(S);
    l:=1;

    for i := 1 to length(S) do
        case S[i] of
            '1':begin A[l]:=1; inc(l); end;
            '2':begin A[l]:=2; inc(l); end;
            '3':begin A[l]:=3; inc(l); end;
        end;

    dec(l);

        for i:=1 to l-1 do
            for j:=1 to l-i do
                if A[j] > A[j+1] then
                    begin
                        T:=A[j];
                        A[j]:=A[j+1];
                        A[j+1]:=T;
                    end;

    for i:=1 to l-1 do
        begin
            write(A[i]);
            write('+');
        end;
    write(A[l]);
    //readln;
end.