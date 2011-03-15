set(swfgl_src
	swfgl.c
	tag.c
	rect.c
	swfreader.c
)
set(swfgl_h
	tag.h
	rect.h
	swfreader.h
)

add_library(SWFgl ${swfgl_src} ${swfgl_h})
