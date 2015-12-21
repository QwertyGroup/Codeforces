{CoodeForces Problem 158 B}
{Такси}
type Tarr = array[1..100000] of byte;
var n:integer;
    S:Tarr;
    i:integer;
    p1, p2, p3, p4:integer;
    taxi:integer;
    temp1, temp2, temp3:integer;
{----QuickSort----}
procedure pQSort(l,r:longint; var V:Tarr);
var i,j:longint;
    w,q:byte;
begin
  i := l; j := r;
  q := v[(l+r) div 2];
  repeat
    while (v[i] < q) do inc(i);
    while (q < v[j]) do dec(j);
    if (i <= j) then
    begin
      w:=v[i]; v[i]:=v[j]; v[j]:=w;
      inc(i); dec(j);
    end;
  until (i > j);
  if (l < j) then pQSort(l,j,S);
  if (i < r) then pQSort(i,r,S);
end;
{----Main----}
begin
    readln(n);
    for i:=1 to n do
        read(S[i]);

    pQSort(1,n,S);

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

        taxi:=0;

        inc(taxi,p4);

        inc(taxi,p2 div 2);
        if p2 mod 2 <> 0 then
            temp2:=p2 mod 2;

        temp1:=0;
        temp3:=0;

        if p1 = p3 then
            inc(taxi,p1);

        if p1 > p3 then
            begin
                inc(taxi,p3);
                temp1:=p1-p3;
            end;

        if p1 < p3 then
            begin
                inc(taxi,p1);
                temp3:=p3-p1;
            end;

        if temp1 <> 0 then
            if (temp1+temp2*2) mod 4 = 0 then
                inc(taxi,(temp1+temp2*2) div 4)
            else
                inc(taxi,((temp1+temp2*2) div 4)+1);

        if temp3 <> 0 then
            inc(taxi,(temp2+temp3));

        if (temp1 = 0) and (temp3 = 0) and (temp2 <> 0) then
            inc(taxi,temp2);

        writeln(taxi);

        //for i:=1 to n do
            //write(S[i],' ');
        //writeln;
        //writeln(p1,' ',p2,' ',p3,' ',p4);
        //writeln(temp1,' ',temp2,' ',temp3);
        //readln;
        //readln;
end.