{CoodeForces Problem 37 A}
{Башни}
type tArr = array[1..1000] of integer;
var A:tArr;
    n, i, j, T:integer;
    curNum, max, counter, curMax:integer;
{----Main----}
begin
    readln(n);
    for i:=1 to n do
        read(A[i]);
    for i:=1 to n - 1 do
        for j:=1 to n - i do
            if A[j] > A[j+1] then
                begin
                    T:=A[j];
                    A[j]:=A[j+1];
                    A[j+1]:=T;
                end;
        curNum:=A[1];
        max:=0;
        curMax:=1;
        counter:=1;
        for i:=1 to n do
                if (curNum <> A[i]) then
                    begin
                        inc(counter);
                        curNum:=A[i];
                        inc(curMax);
                        if max < curMax then
                            max:=curMax;
                    end;
    writeln(max,' ',counter);
    readln;
    readln;
end.