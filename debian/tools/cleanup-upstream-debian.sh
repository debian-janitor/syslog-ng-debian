#! /bin/sh
set -e

cd debian

rm -f \
   Makefile \
   README.Debian \
   changelog.in \
   syslog-ng.conf.example \
   syslog-ng.default \
   syslog-ng.files \
   syslog-ng.init \
   syslog-ng.logrotate \
   syslog-ng.logrotate.example \
   syslog-ng.postinst \
   syslog-ng.postrm \
   syslog-ng.preinst

touch Makefile.am