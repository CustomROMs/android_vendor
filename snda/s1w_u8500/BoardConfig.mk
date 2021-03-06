-include vendor/st-ericsson/u8500/BoardConfig.mk

TARGET_SPECIFIC_HEADER_PATH += vendor/snda/s1w_u8500/include

# Kernel information
TARGET_KERNEL_SOURCE := kernel/snda/u8500
TARGET_KERNEL_CONFIG := cm_u8500_defconfig
TARGET_KERNEL_CUSTOM_TOOLCHAIN := arm-eabi-4.4.3
BOARD_KERNEL_BASE := 0x00000000
BOARD_KERNEL_PAGESIZE := 2048
BOARD_KERNEL_CMDLINE :=
BOARD_FORCE_RAMDISK_ADDRESS := 0x02000000

# Graphics
BOARD_USES_STE_HARDWARE := true
COMMON_GLOBAL_CFLAGS += -DSTE_HARDWARE

# Wifi
BOARD_HAVE_SNDA_WIFI := true
WIFI_MAC_ADDR_CSPSA := true

