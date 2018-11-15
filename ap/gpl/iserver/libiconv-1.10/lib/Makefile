# Makefile for libiconv/lib

#### Start of system configuration section. ####

# Directories used by "make":
srcdir = .

# Directories used by "make install":
prefix = /usr
local_prefix = /usr/local
exec_prefix = ${prefix}
libdir = ${exec_prefix}/lib

# Programs used by "make":
CC = arm-brcm-linux-uclibcgnueabi-gcc
CFLAGS = -Os -O2 -DNETGEAR_PATCH -DBCMNVRAM -DBCMWPA2 -D__CONFIG_DHDAP__ -DRESTART_ALL_PROCESSES -D__CONFIG_GMAC3__ -D__CONFIG_USBAP__ -DBCMQOS -DBCMWPS -D__CONFIG_WPS__ -DBT_IGMP_SUPPORT -D__CONFIG_EMF__ -DTRAFFIC_MGMT_RSSI_POLICY -DPHYMON -DSUPPORT_REMOTE_HTTPS -DREMOTE_SMB_CONF -DREMOTE_USER_CONF -DUSERSETUP_SUPPORT -DXAGENT_CLOUD_SUPPORT -DINCLUDE_WPS_V20 -DOPENDNS_PARENTAL_CONTROL -DINCLUDE_ACCESSCONTROL -DINCLUDE_UCP -DU12H315 -DR8000 -DR7800 -DU12H335T21 -DINCLULDE_2ND_5G_RADIO -DDUAL_TRI_BAND_HW_SUPPORT -DPORT_TRUNKING_SUPPORT -DMULTIPLE_SSID -DENABLE_ML -DOPEN_SOURCE_SUPPORT -DBCM53125 -DBCM5301X -DACS_INTF_DETECT_PATCH -DCONFIG_REMOTE_USB_PROTECT -DCONFIG_RUSSIA_IPTV -DCONFIG_SAMBA_NO_RESTART -DLED_GPIO_SWITCH -DFBWIFI_FLAG -DDLNA -DHTTP_ACCESS_USB -DMAX_USB_ACCESS -DSAMBA_ENABLE -DUSB_NEW_SPEC -DINCLUDE_WIFI_BUTTON -DINCLUDE_USB_LED -DINCLUDE_DUAL_BAND -DSINGLE_FIRMWARE -DINCLUDE_GET_ST_CHKSUM -DUNIFIED_STR_TBL -DFIRST_MTD_ROTATION -DWIFI_ON_OFF_SCHE -DAUTO_CONN_24HR -DIGMP_PROXY -DAP_MODE -D__CONFIG_IGMP_SNOOPING__ -DLINUX26 -DINCLUDE_IPV6 -DPRESET_WL_SECURITY -DNEW_BCM_WPS_IPC -DSUPPORT_AC_MODE -DSTA_MODE -DPPP_RU_DESIGN -DEXT_ACS -DARP_PROTECTION -DCONFIG_2ND_5G_BRIDGE_MODE -DVLAN_SUPPORT -DCONFIG_2ND_SWITCH -DHIDDEN_PAGE_DEBUG -DBCM_DCS -DEXT_ACS -DBCM_BSD -DMFP -DDEBUG_BUTTOND -D__CONFIG_TREND_IQOS__ -DCONFIG_TREND_IQOS_ENABLED -D__BRCM_GENERIC_IQOS__ -Os -DLINUX26 -DCONFIG_KERNEL_2_6_36 -DXAGENT_CLOUD_SUPPORT -DBT_IGMP_SUPPORT
CPPFLAGS = 
LDFLAGS = 
INCLUDES = -I. -I$(srcdir) -I../include -I$(srcdir)/../include
DEFS = -DLIBDIR=\"$(libdir)\" \
-DENABLE_RELOCATABLE=1 -DIN_LIBRARY -DINSTALLDIR=\"$(libdir)\" -DNO_XMALLOC \
-Dset_relocation_prefix=libiconv_set_relocation_prefix \
-Drelocate=libiconv_relocate -DHAVE_CONFIG_H
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIBTOOL_COMPILE = $(LIBTOOL) --mode=compile
LIBTOOL_LINK = $(LIBTOOL) --mode=link
LIBTOOL_INSTALL = $(LIBTOOL) --mode=install
LIBTOOL_UNINSTALL = $(LIBTOOL) --mode=uninstall
CP = cp
MV = mv
LN = ln
LN_S = ln -s
RM = rm -f

# Programs used by "make install":
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
mkinstalldirs = $(SHELL) ../build-aux/mkinstalldirs

#### End of system configuration section. ####

SHELL = /bin/sh

# Before making a release, change this according to the libtool documentation,
# section "Library interface versions".
LIBICONV_VERSION_INFO = 5:0:3

# Needed by $(LIBTOOL).
top_builddir = ..

SOURCES = $(srcdir)/iconv.c $(srcdir)/../libcharset/lib/localcharset.c $(srcdir)/relocatable.c

OBJECTS = iconv.lo localcharset.lo relocatable.lo

all : preloadable_libiconv.so libiconv.la

libiconv.la : $(OBJECTS)
	$(LIBTOOL_LINK) $(CC) $(LDFLAGS) -o libiconv.la -rpath $(libdir) -version-info $(LIBICONV_VERSION_INFO) -no-undefined $(OBJECTS)

preloadable_libiconv.so : preloadable_libiconv_linux.so
	$(RM) preloadable_libiconv.so
	$(LN_S) preloadable_libiconv_linux.so preloadable_libiconv.so

preloadable_libiconv_linux.so : $(SOURCES)
	if test -n "yes"; then \
	  $(LIBTOOL_LINK) $(CC) $(LDFLAGS) $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(DEFS) -fPIC -DPIC -DLIBICONV_PLUG $(SOURCES) -shared -o preloadable_libiconv_linux.so; \
	else \
	  $(LIBTOOL_LINK) $(CC) $(LDFLAGS) $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(DEFS) -KPIC -DPIC -DLIBICONV_PLUG $(SOURCES) -shared -o preloadable_libiconv_linux.so; \
	fi

preloadable_libiconv_solaris.so : $(SOURCES)
	if test -n "yes"; then \
	  $(LIBTOOL_LINK) $(CC) $(LDFLAGS) $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(DEFS) -fPIC -DPIC -DLIBICONV_PLUG $(SOURCES) -shared -o preloadable_libiconv_solaris.so; \
	else \
	  $(LIBTOOL_LINK) $(CC) $(LDFLAGS) $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(DEFS) -KPIC -DPIC -DLIBICONV_PLUG $(SOURCES) -G -o preloadable_libiconv_solaris.so; \
	fi

preloadable_libiconv_osf.so : $(SOURCES)
	if test -n "yes"; then \
	  $(LIBTOOL_LINK) $(CC) $(LDFLAGS) $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(DEFS) -fPIC -DPIC -DLIBICONV_PLUG $(SOURCES) -shared -o preloadable_libiconv_osf.so; \
	else \
	  mkdir objects; \
	  for f in $(SOURCES); do \
	    $(CC) $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(DEFS) -DPIC -DLIBICONV_PLUG -c $$f -o objects/`basename $$f | sed -e 's,\.c$$,.o,'`; \
	  done; \
	  /bin/ld -shared -expect_unresolved \* -o preloadable_libiconv_osf.so objects/*.o; \
	  rm -rf objects; \
	fi

iconv.lo : $(srcdir)/iconv.c $(srcdir)/converters.h $(srcdir)/encodings.def $(srcdir)/encodings_aix.def $(srcdir)/encodings_osf1.def $(srcdir)/encodings_dos.def $(srcdir)/encodings_local.def $(srcdir)/aliases.h $(srcdir)/aliases_aix.h $(srcdir)/aliases_osf1.h $(srcdir)/aliases_dos.h $(srcdir)/flags.h
	$(LIBTOOL_COMPILE) $(CC) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(DEFS) -c $(srcdir)/iconv.c

localcharset.lo : $(srcdir)/../libcharset/lib/localcharset.c $(srcdir)/relocatable.h
	$(LIBTOOL_COMPILE) $(CC) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(DEFS) -c $(srcdir)/../libcharset/lib/localcharset.c

relocatable.lo : $(srcdir)/relocatable.c $(srcdir)/relocatable.h
	$(LIBTOOL_COMPILE) $(CC) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(DEFS) -c $(srcdir)/relocatable.c

# Installs the library and include files only. Typically called with only
# $(libdir) and $(includedir) - don't use $(prefix) and $(exec_prefix) here.
install-lib : all force
	if [ ! -d $(libdir) ] ; then $(mkinstalldirs) $(libdir) ; fi
	$(LIBTOOL_INSTALL) $(INSTALL_DATA) libiconv.la $(libdir)/libiconv.la

install : all force
	if [ ! -d $(DESTDIR)$(prefix) ] ; then $(mkinstalldirs) $(DESTDIR)$(prefix) ; fi
	if [ ! -d $(DESTDIR)$(exec_prefix) ] ; then $(mkinstalldirs) $(DESTDIR)$(exec_prefix) ; fi
	if [ ! -d $(DESTDIR)$(libdir) ] ; then $(mkinstalldirs) $(DESTDIR)$(libdir) ; fi
	$(LIBTOOL_INSTALL) $(INSTALL_DATA) libiconv.la $(DESTDIR)$(libdir)/libiconv.la
	if test -n "preloadable_libiconv.so"; then $(INSTALL_DATA) preloadable_libiconv.so $(DESTDIR)$(libdir)/preloadable_libiconv.so.new && mv $(DESTDIR)$(libdir)/preloadable_libiconv.so.new $(DESTDIR)$(libdir)/preloadable_libiconv.so ; fi

installdirs : force
	if [ ! -d $(DESTDIR)$(prefix) ] ; then $(mkinstalldirs) $(DESTDIR)$(prefix) ; fi
	if [ ! -d $(DESTDIR)$(exec_prefix) ] ; then $(mkinstalldirs) $(DESTDIR)$(exec_prefix) ; fi
	if [ ! -d $(DESTDIR)$(libdir) ] ; then $(mkinstalldirs) $(DESTDIR)$(libdir) ; fi

uninstall : force
	$(LIBTOOL_UNINSTALL) $(RM) $(DESTDIR)$(libdir)/libiconv.la
	if test -n "preloadable_libiconv.so"; then $(RM) $(DESTDIR)$(libdir)/preloadable_libiconv.so ; fi

check : all

mostlyclean : clean

clean : force
	$(RM) *.o *.lo *.a *.la preloadable_libiconv* core so_locations
	$(RM) -r .libs _libs

distclean : clean
	$(RM) Makefile config.h libtool

maintainer-clean : distclean

force :

