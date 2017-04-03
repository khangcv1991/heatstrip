<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>  
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
  <style type="text/css">
@media screen and (max-width: 900px) {
  #popup-announcement-wrap {
    width: 100% !important; left: 0 !important; right: 0 !important;
  }
  #popup-announcement iframe{
    width: 100% !important;
  }
}
  </style>
  <style type="text/css">
    /*Menu mobile devices*/
   body #zone-menu-wrapper.menu-mobile{ display: none; }
   body .logo-img .active.mobile-menu{ display: none; }

@media screen and (max-width: 767px) {
  body .logo-img {    
      margin-right: -10px;
  }
    body .logo-img a:first-child{ display: none; }
    body .logo-img .active.mobile-menu{ display: block; }
    body #block-block-15{ position: absolute; top: -5px; right: 45px; }
  body #zone-menu-wrapper #block-nice-menus-1 { display: none; }
  body #zone-menu-wrapper.menu-mobile #block-nice-menus-1 { display: block; }
    body #zone-menu-wrapper.menu-mobile{ display: block; background: transparent; box-shadow:none; margin-bottom: 0; }
    body #zone-menu-wrapper.menu-mobile .responsive-menus.responsified span.toggler:first-child{ display: none; }
    body #zone-menu-wrapper.menu-mobile .responsive-menus.responsified span.toggler{ 
    position: absolute;
    top: -50px;
    right: -10px;
    color: #000;
    font-size: 30px;
    border-bottom: none;
    }

    body #zone-menu-wrapper{ background: transparent;  }
    body #block-search-form{ 
      background: transparent url(/sites/all/themes/custom/heatstrip/logo-txt.png) center left no-repeat; 
    background-size: 45%;
      padding-left: 45%;
      height: 40px;
      line-height: 42px;
    }

    .responsive-menus.responsified .responsive-menus-simple li ul{
      display: none !important;
      visibility: hidden !important;
    }
    .responsive-menus.responsified .responsive-menus-simple li ul.opened{
      display: block !important;
      visibility: visible !important;
    }
    .responsive-menus.responsified.responsive-toggled.absolute .responsive-menus-simple { 
      text-align: center; 
      font-size:16px; 
      padding: 0 15%;
      width: auto;
      left: 0;
      right: 0;
      z-index: 9999;
      margin: 0 -10px;
    }
    body .responsive-menus.responsified .responsive-menus-simple li a { 
      text-align: center; 
      padding: 15px 10px; 
      color: #767370;
      border-bottom:none;
    }
    body .responsive-menus.responsified .responsive-menus-simple > li > a{
      font-weight: bold;
    }
    body .responsive-menus.responsified span.nolink{ padding: 15px 10px;color: #767370; font-weight: bold; }

  body .responsive-menus.responsified .responsive-menus-simple > li{
    border-bottom: 1px solid rgba(255,255,255,0.5);
  }
  body .responsive-menus.responsified .responsive-menus-simple > li:last-child{
    border-bottom: none;
  }
    body .responsive-menus.responsified .responsive-menus-simple > li > ul > li > a{
      font-size:14px;
    }

}
@media screen and (max-width: 400px) {
  body #block-block-15 img{
    width: 100px !important;
  }
  body #zone-menu-wrapper.menu-mobile .responsive-menus.responsified span.toggler { top: -47px;  }
  body #block-search-form{
    background: transparent url(/sites/all/themes/custom/heatstrip/logo-txt.png) center top no-repeat; 
    background-size: 100%;
    padding-top: 55px;
    text-align: center;
    padding-left: 0;
  }
}
@media screen and (max-width: 360px) {
  body #block-block-15 img{
    width: 80px !important;
  }
  body #zone-menu-wrapper.menu-mobile .responsive-menus.responsified span.toggler { top: -44px;  }
}
  </style>
  <script type="text/javascript">
    jQuery(document).ready(function ($) {   
      $(document).ready(function(){
        $('#zone-footer').prepend('<div class="grid-3 region newsletter"><form class="cd-form"><h2>Newsletter signup</h2><input type="email" id="cd-email" class="cd-email" name="cd-email" placeholder="Enter your email address"><input type="submit" class="cd-submit" value="Submit"><div class="cd-loading"></div></form></div>');
        $('.region-footer-fourth').after($('.region-footer-first'));
        $('body .responsive-menus.responsified .responsive-menus-simple > li:last-child').after($(' #block-search-form'));
      });
      
      jQuery('.responsive-menus-simple > li').click(function () {
        if (jQuery(this).find('ul').hasClass("opened")) {
            jQuery('.responsive-menus-simple > li > ul').removeClass('opened');
        } else {
            jQuery('.responsive-menus-simple > li > ul').removeClass('opened');
            jQuery(this).find('ul').toggleClass('opened');
        }
      });
    });
  </script>
</head>
<body<?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <div class="homepage">
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
  </div>
</body>
</html>