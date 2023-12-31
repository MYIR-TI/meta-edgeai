SUMMARY = "TI GPIO py"
DESCRIPTION = "A Linux based Python library for TI GPIO RPi header enabled platforms"
HOMEPAGE = "https://github.com/TexasInstruments/ti-gpio-py"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${S}/LICENSE.txt;md5=cd9620c1f5cbe6e72b9ced80bd9755d0"

SRC_URI = "git://github.com/TexasInstruments/ti-gpio-py.git;protocol=https;branch=master"
SRCREV = "14f80a8b011af185e866432b3117f00d11a23d28"

S = "${WORKDIR}/git"

COMPATIBLE_MACHINE = "j721e-evm|j721e-hs-evm|j721s2-evm|j721s2-hs-evm|j784s4-evm|j784s4-hs-evm|am62axx-evm"

inherit setuptools3

PACKAGES += "${PN}-source"
FILES:${PN}-source += "/opt/"

do_install:append() {
    CP_ARGS="-Prf --preserve=mode,timestamps --no-preserve=ownership"

    mkdir -p ${D}/opt/ti-gpio-py
    cp ${CP_ARGS} ${S}/* ${D}/opt/ti-gpio-py
}

PR:append = "_edgeai_0"
