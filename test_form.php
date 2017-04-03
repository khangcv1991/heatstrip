<?php
print "CONTENT_TYPE: " . $_SERVER['CONTENT_TYPE'] . "<BR />";
$data = file_get_contents('php://input');
print "DATA: <pre>";
var_dump($data);
var_dump($_POST);
print "</pre>";
?>

<?php

/*	if (!empty($_POST)) {
		print '<p>POST is not empty.</p>';
	}
 
	if ($_POST) {
		print '<p><strong>The form POST values have been submitted, here they are!</strong></p>';
		print '<p>' . $_POST['firstname'] . '</p>';
		print '<p>' . $_POST['lastname'] . '</p>';
	} else {
		print '<p>No form POST yet.  When you hit submit, this message should disappear and the form inputs should appear.</p>';
	}*/
?>

<form method="POST">
	First name:<br>
	<input type="text" name="firstname" value="Mickey">
	<br>
	Last name:<br>
	<input type="text" name="lastname" value="Mouse">
	<br><br>
	<input type="submit" name="submit" value="submit" />
</form> 