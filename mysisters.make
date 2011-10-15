; My Sister's Place Indy Give Camp Dev

api = 2
core = 7.x

; Drupal Core
projects[drupal][type] = core
projects[drupal][version] = 7.8

; Drupal Contrib modules
projects[] = ctools
projects[] = views
projects[] = views_slideshow
projects[] = entity
projects[] = media
projects[] = media_youtube
projects[] = media_flickr
projects[] = webform
projects[] = date
projects[] = calendar
projects[] = gmap
projects[] = addressfield
projects[] = wysiwyg
projects[] = imce
projects[] = nodequeue
projects[] = google_analytics
projects[] = views_bulk_operations
projects[] = features
projects[] = context
projects[] = devel
projects[] = sharethis
;projects[] = twitter
;projects[] = oauth

projects[] = omega
projects[] = omega_tools

; Libraries
libraries[ckeditor][destination] = libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.1/ckeditor_3.6.1.tar.gz
