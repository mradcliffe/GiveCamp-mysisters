<?php
/**
 * variables:
 *   $footermap: The render array containing all items to be rendered. The
 *               top level is the "header" level. You can change this by
 *               calling element_children() and changing the #theme to
 *               footermap_header of the child element you wish.
 *
 *         e.g. <?php
 *              foreach (element_children($footermap['main-menu']) as $child) {
 *                $footermap['main-menu'][$child]['#theme'] = 'footermap_header';
 *                $new[] = $child;
 *              }
 *              
 *              print render($new);
 *              ?>
 *
 *       $title: An optional title that will be printed out. This is
 *               normally blank. You may also set a title via the block,
 *               if rendering in a block.
 */
 
 $new = array();
?>
<div class="footermap">
  <?php if (!empty($title)): ?>
    <h2><?php print check_plain($title); ?></h2>
  <?php endif; ?>

  <?php foreach ($footermap as $key => $header) { 
    foreach (element_children($header['#items']) as $child) { 
      $footermap[$key]['#items'][$child]['#theme'] = 'footermap_header'; 
      $new[] = $footermap[$key]['#items'][$child];
    }
   } ?>
  <div id="<?php print 'footermap-col-' . $key; ?>" class="footermap-col">
    <?php print render($new); ?>
  </div> 
</div>
