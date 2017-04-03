<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<div class="tabs">

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<?php
	$faq = array();
?>

<?php 
	foreach ($rows as $id => $row): 
		$type = $view->render_field('field_type', $id);
		$title = $view->render_field('title', $id);
		$faq[$type][$id] = $title;
	endforeach; 
?>

<ul>  
<?php foreach($faq as $title => $rs) : ?>

	<?php $n = 0; ?>
	<?php $len = count($rs); ?>
	<label><?php print $title; ?> FAQs</label>
    <?php foreach($rs as $i => $r): ?>
		<?php if ($n == $len - 1) { ?>
			<li class="last"><a href="#tab-<?php print ($i+1); ?>"><?php print $r; ?></a></li>
		<?php } else { ?>
    		<li><a href="#tab-<?php print ($i+1); ?>"><?php print $r; ?></a></li>
    	<?php } $n++; ?>
    <?php endforeach; ?>

<?php endforeach; ?>
</ul>

<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' id="tab-' . ($id+1) . '" class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>

</div>