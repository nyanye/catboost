IF (OS_DARWIN AND ARCH_X86_64)
    SET(SANDBOX_RESOURCE_ID 2584304489)
ELSEIF (OS_LINUX AND ARCH_X86_64)
    SET(SANDBOX_RESOURCE_ID 2584305537)
ELSEIF (OS_WINDOWS AND ARCH_X86_64)
    SET(SANDBOX_RESOURCE_ID 2584303873)
ELSE()
    SET(SANDBOX_RESOURCE_ID)
ENDIF()
