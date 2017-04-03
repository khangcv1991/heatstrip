(function($) {

  Drupal.behaviors.heatstrip = {
    attach: function() {
    	$('.flexslider').on('start', function () {
    	 	//alert('test');
    	 	$('.flex-active-slide .flex-caption', this).delay(800).fadeIn(400);
		});
    	$('.flexslider').on('after', function () {
    	 	//alert('test');
    	 	$('.flex-caption', this).hide();
    	 	$('.flex-active-slide .flex-caption', this).delay(800).fadeIn(400);
		});

        // CODE FOR DOWLOADS PAGE
        $('.download-toggle').click(function(e) {
            e.preventDefault();
            $(this).parents('.views-row').children('.views-field-field-pdf').toggle();
        });

        $('.views-field-field-pdf a').attr('target', '_blank');

        // Pop up gallery
        $('.field-name-image-colorbox .field-name-field-image .field-item').children('a').html('+ Gallery');

        $('.views-field-field-video li').prepend('<span>&nbsp;</span>');

    }
  }

})(jQuery);
