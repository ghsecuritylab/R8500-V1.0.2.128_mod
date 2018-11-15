# Makefile for libiconv/src

#### Start of system configuration section. ####

# Directories used by "make":
srcdir = .
top_srcdir = ..

# Directories used by "make install":
prefix = /usr
local_prefix = /usr/local
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin
libdir = ${exec_prefix}/lib
datadir = ${prefix}/share
localedir = $(datadir)/locale

# Programs used by "make":
CC = arm-brcm-linux-uclibcgnueabi-gcc
CFLAGS = -Os -O2 -DNETGEAR_PATCH -DBCMNVRAM -DBCMWPA2 -D__CONFIG_DHDAP__ -DRESTART_ALL_PROCESSES -D__CONFIG_GMAC3__ -D__CONFIG_USBAP__ -DBCMQOS -DBCMWPS -D__CONFIG_WPS__ -DBT_IGMP_SUPPORT -D__CONFIG_EMF__ -DTRAFFIC_MGMT_RSSI_POLICY -DPHYMON -DSUPPORT_REMOTE_HTTPS -DREMOTE_SMB_CONF -DREMOTE_USER_CONF -DUSERSETUP_SUPPORT -DXAGENT_CLOUD_SUPPORT -DINCLUDE_WPS_V20 -DOPENDNS_PARENTAL_CONTROL -DINCLUDE_ACCESSCONTROL -DINCLUDE_UCP -DU12H315 -DR8000 -DR7800 -DU12H335T21 -DINCLULDE_2ND_5G_RADIO -DDUAL_TRI_BAND_HW_SUPPORT -DPORT_TRUNKING_SUPPORT -DMULTIPLE_SSID -DENABLE_ML -DOPEN_SOURCE_SUPPORT -DBCM53125 -DBCM5301X -DACS_INTF_DETECT_PATCH -DCONFIG_REMOTE_USB_PROTECT -DCONFIG_RUSSIA_IPTV -DCONFIG_SAMBA_NO_RESTART -DLED_GPIO_SWITCH -DFBWIFI_FLAG -DDLNA -DHTTP_ACCESS_USB -DMAX_USB_ACCESS -DSAMBA_ENABLE -DUSB_NEW_SPEC -DINCLUDE_WIFI_BUTTON -DINCLUDE_USB_LED -DINCLUDE_DUAL_BAND -DSINGLE_FIRMWARE -DINCLUDE_GET_ST_CHKSUM -DUNIFIED_STR_TBL -DFIRST_MTD_ROTATION -DWIFI_ON_OFF_SCHE -DAUTO_CONN_24HR -DIGMP_PROXY -DAP_MODE -D__CONFIG_IGMP_SNOOPING__ -DLINUX26 -DINCLUDE_IPV6 -DPRESET_WL_SECURITY -DNEW_BCM_WPS_IPC -DSUPPORT_AC_MODE -DSTA_MODE -DPPP_RU_DESIGN -DEXT_ACS -DARP_PROTECTION -DCONFIG_2ND_5G_BRIDGE_MODE -DVLAN_SUPPORT -DCONFIG_2ND_SWITCH -DHIDDEN_PAGE_DEBUG -DBCM_DCS -DEXT_ACS -DBCM_BSD -DMFP -DDEBUG_BUTTOND -D__CONFIG_TREND_IQOS__ -DCONFIG_TREND_IQOS_ENABLED -D__BRCM_GENERIC_IQOS__ -Os -DLINUX26 -DCONFIG_KERNEL_2_6_36 -DXAGENT_CLOUD_SUPPORT -DBT_IGMP_SUPPORT
CPPFLAGS = 
LDFLAGS = 
INCLUDES = -I. -I$(srcdir) -I.. -I../include -I$(srcdir)/../include -I../srclib -I$(srcdir)/../srclib
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIBTOOL_COMPILE = $(LIBTOOL) --mode=compile
LIBTOOL_LINK = $(LIBTOOL) --mode=link
LIBTOOL_INSTALL = $(LIBTOOL) --mode=install
LIBTOOL_UNINSTALL = $(LIBTOOL) --mode=uninstall
RM = rm -f


# Programs used by "make install":
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
mkinstalldirs = $(SHELL) ../build-aux/mkinstalldirs

#### End of system configuration section. ####

SHELL = /bin/sh

# Needed by $(LIBTOOL).
top_builddir = ..

# We cannot link with libintl until libiconv is installed. (When we call
# libtool with arguments "../lib/libiconv.la -lintl", libtool will call ld
# with "../lib/.libs/libiconv.so $libdir/libintl.so $libdir/libiconv.so",
# (remember that $libdir/libintl.la lists $libdir/libiconv.so as a dependency),
# and this gives a fatal linker error on Solaris because the two libiconv.so
# files are different but have the same soname.
# So we can link the iconv executable only after we have installed libiconv,
# i.e. during "make install". The intermediate 'iconv' executable is built
# without internationalization and not linked with libintl.

all : iconv_no_i18n iconv.o
	test `ls -ld . | sed -e 's/^d\(.........\).*/\1/'` = rwxrwxrwx || chmod 777 .

# This is the temporary iconv executable, without internationalization.
iconv_no_i18n : iconv_no_i18n.o ../lib/libiconv.la
	$(LIBTOOL_LINK) $(CC) $(LDFLAGS) iconv_no_i18n.o ../srclib/libicrt.a ../lib/libiconv.la -o $@

iconv_no_i18n.o : $(srcdir)/iconv_no_i18n.c $(srcdir)/iconv.c
	$(CC) -c $(INCLUDES) -I../lib $(CFLAGS) $(CPPFLAGS) -DINSTALLDIR=\"$(bindir)\" -DLOCALEDIR=\"$(localedir)\" $(srcdir)/iconv_no_i18n.c

iconv.o : $(srcdir)/iconv.c
	$(CC) -c $(INCLUDES) -I../lib $(CFLAGS) $(CPPFLAGS) -DINSTALLDIR=\"$(bindir)\" -DLOCALEDIR=\"$(localedir)\" $(srcdir)/iconv.c

# The following rule is necessary to avoid a toplevel "make -n check" failure.
../lib/libiconv.la :
	cd ../lib && $(MAKE) libiconv.la

# Support for relocatability.
RELOCATABLE_LIBRARY_PATH = $(libdir)
RELOCATABLE_SRC_DIR = $(top_srcdir)/srclib
RELOCATABLE_BUILD_DIR = ../srclib
RELOCATABLE_CONFIG_H_DIR = ..

iconv_LDFLAGS = `if test -n '$(RELOCATABLE_LDFLAGS)'; then $(RELOCATABLE_LDFLAGS) $(bindir); fi`

# During "make install", we can build the final iconv executable.
# On HP-UX, in order to ensure that the new libiconv.sl will override the old
# one that is hardcoded in libintl.sl, we need to mention libiconv.sl before
# libintl.sl on the link command line. We have to bypass libtool in order to
# achieve this.
# On Solaris, the linker gives an error if we are using libintl.so and it
# refers to a libiconv.so in $prefix/lib since then it sees two libiconv.so's,
# one in $prefix/lib and one in ../lib/.libs. So we have to avoid using
# ../lib/libiconv.la entirely.
install : all force
	if [ ! -d $(DESTDIR)$(prefix) ] ; then $(mkinstalldirs) $(DESTDIR)$(prefix) ; fi
	if [ ! -d $(DESTDIR)$(exec_prefix) ] ; then $(mkinstalldirs) $(DESTDIR)$(exec_prefix) ; fi
	if [ ! -d $(DESTDIR)$(bindir) ] ; then $(mkinstalldirs) $(DESTDIR)$(bindir) ; fi
	case "linux-gnu" in \
	  hpux*) $(CC) $(LDFLAGS) $(iconv_LDFLAGS) iconv.o ../srclib/libicrt.a -L$(DESTDIR)$(libdir) -liconv  `if test -n '$(DESTDIR)'; then echo " -Wl,+b -Wl,$(libdir)"; fi` -o iconv;; \
	  *) $(LIBTOOL_LINK) $(CC) $(LDFLAGS) $(iconv_LDFLAGS) iconv.o ../srclib/libicrt.a $(DESTDIR)$(libdir)/libiconv.la  -o iconv;; \
	esac
	$(INSTALL_PROGRAM_ENV) $(LIBTOOL_INSTALL) $(INSTALL_PROGRAM) iconv $(DESTDIR)$(bindir)/iconv

installdirs : force
	if [ ! -d $(DESTDIR)$(prefix) ] ; then $(mkinstalldirs) $(DESTDIR)$(prefix) ; fi
	if [ ! -d $(DESTDIR)$(exec_prefix) ] ; then $(mkinstalldirs) $(DESTDIR)$(exec_prefix) ; fi
	if [ ! -d $(DESTDIR)$(bindir) ] ; then $(mkinstalldirs) $(DESTDIR)$(bindir) ; fi

uninstall : force
	$(LIBTOOL_UNINSTALL) $(RM) $(DESTDIR)$(bindir)/iconv

check : all

mostlyclean : clean

clean : force
	$(RM) *.o *.lo iconv_no_i18n iconv core
	$(RM) -r .libs _libs

distclean : clean
	$(RM) Makefile

maintainer-clean : distclean

force :

