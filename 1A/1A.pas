{CoodeForces Problem 1 A}
{Театральная площадь}
uses math;
var n, m, a: real;
{----Main----}
begin
    readln(n, m, a);
    writeln((ceil(n / a)) * (ceil(m / a)));
    readln;
end.