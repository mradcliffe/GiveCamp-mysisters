(function ($) {
					 
/**
 * Add step process to Volunteer form
 */
Drupal.behaviors.formToWizard = {
  attach: function (context, settings) {
    $("#webform-client-form-8").formToWizard({
		submitButton: 'edit-submit',
		prevLabel: '< Previous',
		nextLabel: 'Proceed >'
		});
	}
}
})(jQuery);