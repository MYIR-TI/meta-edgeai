# Enable source ipk packages and install directories
INHERIT:pn-edgeai-apps-utils += "sourceipk"
SRCIPK_INCLUDE_EXTRAFILES:pn-edgeai-apps-utils = "0"
CREATE_SRCIPK:pn-edgeai-apps-utils ?= "1"
SRCIPK_INSTALL_DIR:pn-edgeai-apps-utils ?= "edgeai-app-stack/${PN}"
SRCIPK_SHALLOW_CLONE:pn-edgeai-apps-utils ?= "true"
SRCIPK_PRESERVE_GIT:pn-edgeai-apps-utils ?= "true"

INHERIT:pn-edgeai-dl-inferer += "sourceipk"
SRCIPK_INCLUDE_EXTRAFILES:pn-edgeai-dl-inferer = "0"
CREATE_SRCIPK:pn-edgeai-dl-inferer ?= "1"
SRCIPK_INSTALL_DIR:pn-edgeai-dl-inferer ?= "edgeai-app-stack/${PN}"
SRCIPK_SHALLOW_CLONE:pn-edgeai-dl-inferer ?= "true"
SRCIPK_PRESERVE_GIT:pn-edgeai-dl-inferer ?= "true"

INHERIT:pn-edgeai-gst-apps += "sourceipk"
SRCIPK_INCLUDE_EXTRAFILES:pn-edgeai-gst-apps = "0"
CREATE_SRCIPK:pn-edgeai-gst-apps ?= "1"
SRCIPK_INSTALL_DIR:pn-edgeai-gst-apps ?= "edgeai-app-stack/${PN}"
SRCIPK_SHALLOW_CLONE:pn-edgeai-gst-apps ?= "true"
SRCIPK_PRESERVE_GIT:pn-edgeai-gst-apps ?= "true"

INHERIT:pn-edgeai-gst-plugins += "sourceipk"
SRCIPK_INCLUDE_EXTRAFILES:pn-edgeai-gst-plugins = "0"
CREATE_SRCIPK:pn-edgeai-gst-plugins ?= "1"
SRCIPK_INSTALL_DIR:pn-edgeai-gst-plugins ?= "edgeai-app-stack/${PN}"
SRCIPK_SHALLOW_CLONE:pn-edgeai-gst-plugins ?= "true"
SRCIPK_PRESERVE_GIT:pn-edgeai-gst-plugins ?= "true"

INHERIT:pn-edgeai-tiovx-kernels += "sourceipk"
SRCIPK_INCLUDE_EXTRAFILES:pn-edgeai-tiovx-kernels = "0"
CREATE_SRCIPK:pn-edgeai-tiovx-kernels ?= "1"
SRCIPK_INSTALL_DIR:pn-edgeai-tiovx-kernels ?= "edgeai-app-stack/${PN}"
SRCIPK_SHALLOW_CLONE:pn-edgeai-tiovx-kernels ?= "true"
SRCIPK_PRESERVE_GIT:pn-edgeai-tiovx-kernels ?= "true"

INHERIT:pn-edgeai-tiovx-modules += "sourceipk"
SRCIPK_INCLUDE_EXTRAFILES:pn-edgeai-tiovx-modules = "0"
CREATE_SRCIPK:pn-edgeai-tiovx-modules ?= "1"
SRCIPK_INSTALL_DIR:pn-edgeai-tiovx-modules ?= "edgeai-app-stack/${PN}"
SRCIPK_SHALLOW_CLONE:pn-edgeai-tiovx-modules ?= "true"
SRCIPK_PRESERVE_GIT:pn-edgeai-tiovx-modules ?= "true"
