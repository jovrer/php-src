--TEST--
Test atan2() - basic function test of atan2()
--INI--
serialize_precision=14
--FILE--
<?php
$valuesy = array(23,
                -23,
                2.345e1,
                -2.345e1,
                0x17,
                027,
                "23",
                "23.45",
                "2.345e1",
                null,
                true,
                false);

$valuesx = array(23,
                -23,
                2.345e1,
                -2.345e1,
                0x17,
                027,
                "23",
                "23.45",
                "2.345e1",
                null,
                true,
                false);

for ($i = 0; $i < count($valuesy); $i++) {
    for ($j = 0; $j < count($valuesx); $j++) {
        $res = atan2($valuesy[$i], $valuesx[$j]);
        echo "Y:$valuesy[$i] X:$valuesx[$j] ";
        var_dump($res);
    }
}
?>
--EXPECT--
Y:23 X:23 float(0.78539816339745)
Y:23 X:-23 float(2.3561944901923)
Y:23 X:23.45 float(0.77571063007847)
Y:23 X:-23.45 float(2.3658820235113)
Y:23 X:23 float(0.78539816339745)
Y:23 X:23 float(0.78539816339745)
Y:23 X:23 float(0.78539816339745)
Y:23 X:23.45 float(0.77571063007847)
Y:23 X:2.345e1 float(0.77571063007847)
Y:23 X: float(1.5707963267949)
Y:23 X:1 float(1.5273454314034)
Y:23 X: float(1.5707963267949)
Y:-23 X:23 float(-0.78539816339745)
Y:-23 X:-23 float(-2.3561944901923)
Y:-23 X:23.45 float(-0.77571063007847)
Y:-23 X:-23.45 float(-2.3658820235113)
Y:-23 X:23 float(-0.78539816339745)
Y:-23 X:23 float(-0.78539816339745)
Y:-23 X:23 float(-0.78539816339745)
Y:-23 X:23.45 float(-0.77571063007847)
Y:-23 X:2.345e1 float(-0.77571063007847)
Y:-23 X: float(-1.5707963267949)
Y:-23 X:1 float(-1.5273454314034)
Y:-23 X: float(-1.5707963267949)
Y:23.45 X:23 float(0.79508569671643)
Y:23.45 X:-23 float(2.3465069568734)
Y:23.45 X:23.45 float(0.78539816339745)
Y:23.45 X:-23.45 float(2.3561944901923)
Y:23.45 X:23 float(0.79508569671643)
Y:23.45 X:23 float(0.79508569671643)
Y:23.45 X:23 float(0.79508569671643)
Y:23.45 X:23.45 float(0.78539816339745)
Y:23.45 X:2.345e1 float(0.78539816339745)
Y:23.45 X: float(1.5707963267949)
Y:23.45 X:1 float(1.5281782247706)
Y:23.45 X: float(1.5707963267949)
Y:-23.45 X:23 float(-0.79508569671643)
Y:-23.45 X:-23 float(-2.3465069568734)
Y:-23.45 X:23.45 float(-0.78539816339745)
Y:-23.45 X:-23.45 float(-2.3561944901923)
Y:-23.45 X:23 float(-0.79508569671643)
Y:-23.45 X:23 float(-0.79508569671643)
Y:-23.45 X:23 float(-0.79508569671643)
Y:-23.45 X:23.45 float(-0.78539816339745)
Y:-23.45 X:2.345e1 float(-0.78539816339745)
Y:-23.45 X: float(-1.5707963267949)
Y:-23.45 X:1 float(-1.5281782247706)
Y:-23.45 X: float(-1.5707963267949)
Y:23 X:23 float(0.78539816339745)
Y:23 X:-23 float(2.3561944901923)
Y:23 X:23.45 float(0.77571063007847)
Y:23 X:-23.45 float(2.3658820235113)
Y:23 X:23 float(0.78539816339745)
Y:23 X:23 float(0.78539816339745)
Y:23 X:23 float(0.78539816339745)
Y:23 X:23.45 float(0.77571063007847)
Y:23 X:2.345e1 float(0.77571063007847)
Y:23 X: float(1.5707963267949)
Y:23 X:1 float(1.5273454314034)
Y:23 X: float(1.5707963267949)
Y:23 X:23 float(0.78539816339745)
Y:23 X:-23 float(2.3561944901923)
Y:23 X:23.45 float(0.77571063007847)
Y:23 X:-23.45 float(2.3658820235113)
Y:23 X:23 float(0.78539816339745)
Y:23 X:23 float(0.78539816339745)
Y:23 X:23 float(0.78539816339745)
Y:23 X:23.45 float(0.77571063007847)
Y:23 X:2.345e1 float(0.77571063007847)
Y:23 X: float(1.5707963267949)
Y:23 X:1 float(1.5273454314034)
Y:23 X: float(1.5707963267949)
Y:23 X:23 float(0.78539816339745)
Y:23 X:-23 float(2.3561944901923)
Y:23 X:23.45 float(0.77571063007847)
Y:23 X:-23.45 float(2.3658820235113)
Y:23 X:23 float(0.78539816339745)
Y:23 X:23 float(0.78539816339745)
Y:23 X:23 float(0.78539816339745)
Y:23 X:23.45 float(0.77571063007847)
Y:23 X:2.345e1 float(0.77571063007847)
Y:23 X: float(1.5707963267949)
Y:23 X:1 float(1.5273454314034)
Y:23 X: float(1.5707963267949)
Y:23.45 X:23 float(0.79508569671643)
Y:23.45 X:-23 float(2.3465069568734)
Y:23.45 X:23.45 float(0.78539816339745)
Y:23.45 X:-23.45 float(2.3561944901923)
Y:23.45 X:23 float(0.79508569671643)
Y:23.45 X:23 float(0.79508569671643)
Y:23.45 X:23 float(0.79508569671643)
Y:23.45 X:23.45 float(0.78539816339745)
Y:23.45 X:2.345e1 float(0.78539816339745)
Y:23.45 X: float(1.5707963267949)
Y:23.45 X:1 float(1.5281782247706)
Y:23.45 X: float(1.5707963267949)
Y:2.345e1 X:23 float(0.79508569671643)
Y:2.345e1 X:-23 float(2.3465069568734)
Y:2.345e1 X:23.45 float(0.78539816339745)
Y:2.345e1 X:-23.45 float(2.3561944901923)
Y:2.345e1 X:23 float(0.79508569671643)
Y:2.345e1 X:23 float(0.79508569671643)
Y:2.345e1 X:23 float(0.79508569671643)
Y:2.345e1 X:23.45 float(0.78539816339745)
Y:2.345e1 X:2.345e1 float(0.78539816339745)
Y:2.345e1 X: float(1.5707963267949)
Y:2.345e1 X:1 float(1.5281782247706)
Y:2.345e1 X: float(1.5707963267949)
Y: X:23 float(0)
Y: X:-23 float(3.1415926535898)
Y: X:23.45 float(0)
Y: X:-23.45 float(3.1415926535898)
Y: X:23 float(0)
Y: X:23 float(0)
Y: X:23 float(0)
Y: X:23.45 float(0)
Y: X:2.345e1 float(0)
Y: X: float(0)
Y: X:1 float(0)
Y: X: float(0)
Y:1 X:23 float(0.043450895391531)
Y:1 X:-23 float(3.0981417581983)
Y:1 X:23.45 float(0.042618102024328)
Y:1 X:-23.45 float(3.0989745515655)
Y:1 X:23 float(0.043450895391531)
Y:1 X:23 float(0.043450895391531)
Y:1 X:23 float(0.043450895391531)
Y:1 X:23.45 float(0.042618102024328)
Y:1 X:2.345e1 float(0.042618102024328)
Y:1 X: float(1.5707963267949)
Y:1 X:1 float(0.78539816339745)
Y:1 X: float(1.5707963267949)
Y: X:23 float(0)
Y: X:-23 float(3.1415926535898)
Y: X:23.45 float(0)
Y: X:-23.45 float(3.1415926535898)
Y: X:23 float(0)
Y: X:23 float(0)
Y: X:23 float(0)
Y: X:23.45 float(0)
Y: X:2.345e1 float(0)
Y: X: float(0)
Y: X:1 float(0)
Y: X: float(0)
