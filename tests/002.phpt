--TEST--
test1() Basic test
--EXTENSIONS--
opengl
--FILE--
<?php
$ret = test1();

var_dump($ret);
?>
--EXPECT--
The extension opengl is loaded and working!
NULL
