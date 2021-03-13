#!/usr/bin/env bash

./eval_expr
./eval_expr 1.4
./eval_expr 5.05
./eval_expr a
./eval_expr ca
./eval_expr 0
./eval_expr 9
./eval_expr 9.2
./eval_expr 1.6
./eval_expr 1123
./eval_expr 1123124
./eval_expr 111231234124124
./eval_expr 111231124
./eval_expr 3
./eval_expr 4
./eval_expr 5
./eval_expr "1.2 3"
./eval_expr 1.2
./eval_expr 1.5
./eval_expr 1.123
./eval_expr 1.1231234123
./eval_expr 1.1231234123124124124124124
./eval_expr 1124141414141412312412431451231312412
./eval_expr 1124141414141412312412431
./eval_expr 11241414141414
./eval_expr 11241414
./eval_expr 11241
./eval_expr 112
./eval_expr 2
./eval_expr 2234
./eval_expr 2234.2
./eval_expr 2234.212w3
./eval_expr 2234.212w3aa
./eval_expr 2234.212w
./eval_expr 2234.212wa
./eval_expr "2234.212*()"
./eval_expr "2234.212*()"
./eval_expr "2234.2121241241241241*()"
./eval_expr "2234.2121241212341241241*()"
./eval_expr "223412312312312.2121123*()"
./eval_expr "223412312312312.2121123+1234.123123*()"
./eval_expr "223412312312312.2121123+1234.123123+1-32*()"
./eval_expr +1
./eval_expr -1
./eval_expr --1
./eval_expr -123.123
./eval_expr +123.123
./eval_expr 12312312313213213214124213123
./eval_expr 12312312313213213
./eval_expr 1231231231321
./eval_expr 123123123
./eval_expr 1231231
./eval_expr 1231
./eval_expr 1231123
./eval_expr 123112
./eval_expr 1231128
./eval_expr 12311287
./eval_expr 123112878
./eval_expr 1231128789
./eval_expr 12311287890
./eval_expr 4294967295
./eval_expr 4294967294
./eval_expr 4294967293
./eval_expr 42949672
./eval_expr 429496725
./eval_expr 4294967266
./eval_expr 4294967264
./eval_expr 429496723
./eval_expr 1+4
./eval_expr 1
./eval_expr 12
./eval_expr 11
./eval_expr 1+1
./eval_expr 1a1
./eval_expr 1+2
./eval_expr "(1+2)+(-2+-3)"
./eval_expr "(1+2)+(-2+-4)"
./eval_expr "1a1"
./eval_expr "1++1"
./eval_expr "1+++1"
./eval_expr "+1++1"
./eval_expr "+1++1("
./eval_expr "+1++1()"
./eval_expr "+1++1+("
./eval_expr "+1++1+(2)"
./eval_expr "+1++1+(2+3)"
./eval_expr "1+1+(1)"
./eval_expr "1+1+"
./eval_expr "1+1"
./eval_expr "1+-11"
./eval_expr "1+-1"
./eval_expr "(1+1)"
./eval_expr "(1+1)+2"
./eval_expr "(1+1)+2(3)"
./eval_expr 2+2
./eval_expr 2/2
./eval_expr "2*(2+3)"
./eval_expr "2*(2-3)"
./eval_expr 2+2
./eval_expr 2/2
./eval_expr 2*3
./eval_expr "2*3"
./eval_expr 2+3
./eval_expr '2+(3-2)'
./eval_expr '2+2'
./eval_expr '2+2'
./eval_expr '2+2-33'
./eval_expr '2+2-4*(3/2)'
./eval_expr '2+2-4*(3+2)'
./eval_expr '2+2-4*(3+2)a'
./eval_expr 'a2+2-4*(3+2)'
./eval_expr '2+2-4*(3+2)a'
./eval_expr '2+2a'
./eval_expr '2+3*5+2+3+-2*3'
./eval_expr '2+3*5+2+3+-2*3'
./eval_expr '2+2a'
./eval_expr '2+2'
./eval_expr '2a2'
./eval_expr '2+2-'
./eval_expr '2+2-'
./eval_expr '2+2--2'
./eval_expr '2+2-+2'
./eval_expr '2 + 2'
./eval_expr '2+2-3'
./eval_expr '2 + 2'
./eval_expr '2 + 2'
./eval_expr "( 18.18 + 3.03 ) * 2"
./eval_expr '( 18.18 + 3.03 ) * 2a'
./eval_expr '( 18.18 + 3.03 ) * -2'
./eval_expr '( 18.18 + 3.03 )) * 2'
./eval_expr '( 18.18 + 3.03 ) * 2'
./eval_expr '( 18.18 + 3.03 () * 2'
./eval_expr '( 18.18 + 3.03 )) * 2'
./eval_expr '( 18.18 + 3.03 ) * 2'
./eval_expr '( 18.18 + 3.03 ) * 2()'
./eval_expr '( 18.18 + 3.03 ) * 2+()'
./eval_expr '( 18.18 + 3.03 ) * 2+)'
./eval_expr '( 18.18 + 3.03 ) * 2'
./eval_expr '(( 18.18 + 3.03 ) * 2'
./eval_expr '( 18.18 + 3.03 ) * 2'
./eval_expr '( 18.18) + 3.03 ) * 2'
./eval_expr '( 18.18 + 3.03 )) * 2'
./eval_expr '( 18.18 + 3.03 ))'
./eval_expr '( 18.18 + 3.03 )'
./eval_expr '( 18.18 + 3.03 ) * 2'
./eval_expr '( 2*(18.18 + 3.03)-3/(2) ) * 2'
./eval_expr '( 2*(18.18 + 3.03)-3/(2) ) * 2a'
./eval_expr '( 2*(18.18 + 3.03)-3/(2) ) * 2='
./eval_expr '( 2*(18.18 + 3.03)-3/(2) ) * 2-'
./eval_expr '( 2*(18.18 + 3.03)-3/(2/) ) * 2'
./eval_expr '( 2*(18.18 + 3.03)-3/(2\) ) * 2'
./eval_expr '( 2*(18.18 + 3.03)-3/(2++) ) * 2'
./eval_expr '( 2*(18.18 + 3.03)-3/(+2) ) * 2'
./eval_expr '( c2*(18.18 + 3.03)-3/(+2) ) * 2'
./eval_expr '2*(18.18 + 3.03)-3/(+2) ) * 2'
./eval_expr '(2*(18.18 + 3.03)-3/(+2) ) * 2'
./eval_expr ''
./eval_expr 'a'
./eval_expr '    '
./eval_expr '2'
./eval_expr '2'
./eval_expr ''
./eval_expr '       '
./eval_expr "2*3"
./eval_expr "2*3-(3/2)"
./eval_expr "2*3-(3/2)"
./eval_expr "" ""
./eval_expr "(2*(2-1))"
./eval_expr "(2*(2-1))"
./eval_expr "(2*((2-1)*(1+3))"
./eval_expr "(2*((2-1)*(1+3)))"
./eval_expr "2* 2"
./eval_expr "2 * 2"
./eval_expr "2* 2"
./eval_expr "2*2"
./eval_expr "2+2"
./eval_expr "2 +2"
./eval_expr "2 + 2"
./eval_expr "2+ 2"
./eval_expr ".2"
./eval_expr "2.2"
./eval_expr "2.2 + ."
./eval_expr "2.2 + .5"
./eval_expr "2.2 + 0.5"
./eval_expr "2.2 + 0.5 -(q234)"
./eval_expr "2.2 + 0.5 -(234)"
./eval_expr "2.2 + 0.5 -(q234)"
