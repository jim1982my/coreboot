ramstage-y += dmic.c
ramstage-y += nau88l25.c
ramstage-y += max98357.c
ramstage-y += ssm4567.c
ramstage-y += rt5663.c
ramstage-y += max98927.c

# DSP firmware settings files.
ifeq ($(CONFIG_SOC_INTEL_KABYLAKE),y)
NHLT_BLOB_PATH = 3rdparty/blobs/soc/intel/kabylake/nhlt-blobs
else
NHLT_BLOB_PATH = 3rdparty/blobs/soc/intel/skylake/nhlt-blobs
endif

DMIC_2CH_48KHZ_16B = dmic-2ch-48khz-16b.bin
DMIC_2CH_48KHZ_32B = dmic-2ch-48khz-32b.bin
DMIC_4CH_48KHZ_16B = dmic-4ch-48khz-16b.bin
DMIC_4CH_48KHZ_32B = dmic-4ch-48khz-32b.bin
NAU88L25 = nau88l25-2ch-48khz-24b.bin
MAX98357_RENDER = max98357-render-2ch-48khz-24b.bin
MAX98927_RENDER = max98927-render-2ch-48khz-24b.bin
RT5663 = rt5663-2ch-48khz-24b.bin
SSM4567_RENDER = ssm4567-render-2ch-48khz-24b.bin
SSM4567_CAPTURE = ssm4567-capture-4ch-48khz-32b.bin

cbfs-files-$(CONFIG_NHLT_DMIC_2CH) += $(DMIC_2CH_48KHZ_16B)
$(DMIC_2CH_48KHZ_16B)-file := $(NHLT_BLOB_PATH)/$(DMIC_2CH_48KHZ_16B)
$(DMIC_2CH_48KHZ_16B)-type := raw

cbfs-files-$(CONFIG_NHLT_DMIC_2CH) += $(DMIC_2CH_48KHZ_32B)
$(DMIC_2CH_48KHZ_32B)-file := $(NHLT_BLOB_PATH)/$(DMIC_2CH_48KHZ_32B)
$(DMIC_2CH_48KHZ_32B)-type := raw

cbfs-files-$(CONFIG_NHLT_DMIC_4CH) += $(DMIC_4CH_48KHZ_16B)
$(DMIC_4CH_48KHZ_16B)-file := $(NHLT_BLOB_PATH)/$(DMIC_4CH_48KHZ_16B)
$(DMIC_4CH_48KHZ_16B)-type := raw

cbfs-files-$(CONFIG_NHLT_DMIC_4CH) += $(DMIC_4CH_48KHZ_32B)
$(DMIC_4CH_48KHZ_32B)-file := $(NHLT_BLOB_PATH)/$(DMIC_4CH_48KHZ_32B)
$(DMIC_4CH_48KHZ_32B)-type := raw

cbfs-files-$(CONFIG_NHLT_NAU88L25) += $(NAU88L25)
$(NAU88L25)-file := $(NHLT_BLOB_PATH)/$(NAU88L25)
$(NAU88L25)-type := raw

cbfs-files-$(CONFIG_NHLT_MAX98357) += $(MAX98357_RENDER)
$(MAX98357_RENDER)-file := $(NHLT_BLOB_PATH)/$(MAX98357_RENDER)
$(MAX98357_RENDER)-type := raw

cbfs-files-$(CONFIG_NHLT_SSM4567) += $(SSM4567_RENDER)
$(SSM4567_RENDER)-file := $(NHLT_BLOB_PATH)/$(SSM4567_RENDER)
$(SSM4567_RENDER)-type := raw

cbfs-files-$(CONFIG_NHLT_SSM4567) += $(SSM4567_CAPTURE)
$(SSM4567_CAPTURE)-file := $(NHLT_BLOB_PATH)/$(SSM4567_CAPTURE)
$(SSM4567_CAPTURE)-type := raw

cbfs-files-$(CONFIG_NHLT_RT5663) += $(RT5663)
$(RT5663)-file := $(NHLT_BLOB_PATH)/$(RT5663)
$(RT5663)-type := raw

cbfs-files-$(CONFIG_NHLT_MAX98927) += $(MAX98927_RENDER)
$(MAX98927_RENDER)-file := $(NHLT_BLOB_PATH)/$(MAX98927_RENDER)
$(MAX98927_RENDER)-type := raw
