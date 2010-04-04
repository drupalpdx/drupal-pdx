; $Id: shadowbox.make,v 1.1.2.4.2.1 2010/02/25 12:03:35 psynaptic Exp $
; Example drush make file for downloading third party Shadowbox library.
; http://bit.ly/bJXFXR

core = 6.x

libraries[shadowbox][download][type] = "get"
libraries[shadowbox][download][url] = "http://freestylesystems.co.uk/sites/freestylesystems.co.uk/files/shadowbox-build-3.0.2.tar"
libraries[shadowbox][directory_name] = "shadowbox"
libraries[shadowbox][destination] = "sites/all/libraries"
