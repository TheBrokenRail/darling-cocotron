#import <Onyx2D/O2Font.h>

#ifdef DARLING
#define __linux__
#endif

#import <stddef.h>
#import <ft2build.h>
#import FT_FREETYPE_H
#import FT_RENDER_H
#import <fontconfig/fontconfig.h>

#ifdef DARLING
#undef __linux__
#endif

@interface O2Font_FT : O2Font {
    FT_Face _face;
}

- (FT_Face)face;

@end

FT_Library O2FontSharedFreeTypeLibrary();
FcConfig *O2FontSharedFontConfig();