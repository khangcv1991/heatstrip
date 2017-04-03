<?php
print "CONTENT_TYPE: " . $_SERVER['CONTENT_TYPE'] . "<BR />";
$data = file_get_contents('php://input');
print "DATA: <pre>";
var_dump($data);
var_dump($_POST);
print "</pre>";
?>
<form action="http://www.heatstrip.com.au/test_form2.php" method="post">
	<input type="text" name="lname" value="Mouse">
	<input type="submit" name="submit" value="submit" />
</form> 