include $(CLEAR_VARS)

CONFIG_OUT_DIR=$(ANDROID_PRODUCT_OUT)/obj/FLASHKIT/CONFIG_LIST

.phony: config-issw build-issw install-issw clean-issw distclean-issw

#Source location
PRIVATE_ISSW_ISSW_DIR := $(abspath $(BOOT_PATH)/issw)

#Output
PRIVATE_ISSW_OUT := $(FLASHKIT_INSTALL_BASE)/

#Other flags
PRIVATE_ISSW_PREFIX := $(PRIVATE_ISSW_OUT)/

PRIVATE_ISSW_RELBOOTPATH := ../../boot/
PRIVATE_ISSW_RELLOADERPATH := ../../loaders/

PRIVATE_ISSW_FLAGS = PREFIX=$(PRIVATE_ISSW_PREFIX) \
			 RELBOOTPATH=$(PRIVATE_ISSW_RELBOOTPATH) \
			 RELLOADERSPATH=$(PRIVATE_ISSW_RELLOADERPATH) \
			 RELMODEMPATH=$(FLASHKIT_RELATIVE_MODEMDIRPATH) \
			 ENABLE_MODEM_IN_FILELIST=$(FLASHKIT_ENABLE_MODEMINFILELIST)\
			 ENABLE_FEATURE_SIGN_IMAGES=$(ISSW_ENABLE_FEATURE_SIGN_IMAGES)\
			 MEMINIT_PRCMU_CONFIGLIST_OUTSIDE_ISSW=$(ISSW_ENABLE_FEATURE_MEMINIT_PRCMU_CONFIGLIST_OUTSIDE_ISSW)

config-issw:
	$(MAKE) -C $(PRIVATE_ISSW_ISSW_DIR) -f Makefile $(PRIVATE_ISSW_FLAGS) OUT_DIR=$(CONFIG_OUT_DIR) config

build-issw: config-issw
	$(MAKE) -C $(PRIVATE_ISSW_ISSW_DIR) -f Makefile $(PRIVATE_ISSW_FLAGS) OUT_DIR=$(CONFIG_OUT_DIR) build

install-issw: build-issw
	$(MAKE) -C $(PRIVATE_ISSW_ISSW_DIR) -f Makefile $(PRIVATE_ISSW_FLAGS) OUT_DIR=$(CONFIG_OUT_DIR) install

clean-issw:
	$(MAKE) -C $(PRIVATE_ISSW_ISSW_DIR) -f Makefile $(PRIVATE_ISSW_FLAGS) OUT_DIR=$(CONFIG_OUT_DIR) clean

distclean-issw:
	$(MAKE) -C $(PRIVATE_ISSW_ISSW_DIR) -f Makefile $(PRIVATE_ISSW_FLAGS) OUT_DIR=$(CONFIG_OUT_DIR) distclean

clean clobber: clean-issw

st-ericsson-flashkit: config-issw build-issw install-issw
