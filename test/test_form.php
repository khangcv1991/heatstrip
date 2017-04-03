<?php

	if (!empty($_POST)) {
		print '<p>POST is not empty.</p>';
	}
 
	if ($_POST) {
		print '<p><strong>The form POST values have been submitted, here they are!</strong></p>';
		print '<p>' . $_POST['firstname'] . '</p>';
		print '<p>' . $_POST['lastname'] . '</p>';
	} else {
		print '<p>No form POST yet.  When you hit submit, this message should disappear and the form inputs should appear.</p>';
	}
?>

<form action="test_form.php" method="POST">
	First name:<br>
	<input type="text" name="firstname" value="Mickey">
	<br>
	Last name:<br>
	<input type="text" name="lastname" value="Mouse">
	<br><br>
	<input type="submit" value="Submit">
</form> 