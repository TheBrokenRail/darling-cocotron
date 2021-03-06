/* Copyright (c) 2006-2007 Christopher J. W. Lloyd

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. */

#import <Foundation/Foundation.h>
#import <AppKit/AppKitExport.h>

typedef NSString *NSPasteboardType;

// New Pasteboard Types (added in 10.6) and interchangeable with the old pasteboard types in Cocotron
APPKIT_EXPORT const NSPasteboardType NSPasteboardTypeString;
APPKIT_EXPORT const NSPasteboardType NSPasteboardTypePDF;
APPKIT_EXPORT const NSPasteboardType NSPasteboardTypePNG;
APPKIT_EXPORT const NSPasteboardType NSPasteboardTypeTIFF;
APPKIT_EXPORT const NSPasteboardType NSPasteboardTypeRTF;
APPKIT_EXPORT const NSPasteboardType NSPasteboardTypeRTFD;
APPKIT_EXPORT const NSPasteboardType NSPasteboardTypeHTML;
APPKIT_EXPORT const NSPasteboardType NSPasteboardTypeTabularText;
APPKIT_EXPORT const NSPasteboardType NSPasteboardTypeFont;
APPKIT_EXPORT const NSPasteboardType NSPasteboardTypeRuler;
APPKIT_EXPORT const NSPasteboardType NSPasteboardTypeColor;

// Old Pasteboard Types
APPKIT_EXPORT const NSPasteboardType NSColorPboardType;
APPKIT_EXPORT const NSPasteboardType NSFileContentsPboardType;
APPKIT_EXPORT const NSPasteboardType NSFilenamesPboardType;
APPKIT_EXPORT const NSPasteboardType NSFontPboardType;
APPKIT_EXPORT const NSPasteboardType NSPDFPboardType;
APPKIT_EXPORT const NSPasteboardType NSPICTPboardType;
APPKIT_EXPORT const NSPasteboardType NSPostScriptPboardType;
APPKIT_EXPORT const NSPasteboardType NSRTFDPboardType;
APPKIT_EXPORT const NSPasteboardType NSRTFPboardType;
APPKIT_EXPORT const NSPasteboardType NSRulerPboardType;
APPKIT_EXPORT const NSPasteboardType NSStringPboardType;
APPKIT_EXPORT const NSPasteboardType NSTabularTextPboardType;
APPKIT_EXPORT const NSPasteboardType NSTIFFPboardType;
APPKIT_EXPORT const NSPasteboardType NSURLPboardType;

APPKIT_EXPORT const NSPasteboardType NSFilesPromisePboardType;
APPKIT_EXPORT const NSPasteboardType NSPasteboardNameDrag;
APPKIT_EXPORT const NSPasteboardType NSPasteboardURLReadingFileURLsOnlyKey;

APPKIT_EXPORT NSString *const NSDragPboard;
APPKIT_EXPORT NSString *const NSFindPboard;
APPKIT_EXPORT NSString *const NSFontPboard;
APPKIT_EXPORT NSString *const NSGeneralPboard;
APPKIT_EXPORT NSString *const NSRulerPboard;

APPKIT_EXPORT NSString *const NSPasteboardNameGeneral;

@class NSPasteboard;

// @interface NSObject (NSPasteboard)
@protocol NSPasteboardTypeOwner
- (void) pasteboard: (NSPasteboard *) sender provideDataForType: (NSPasteboardType) type;
- (void) pasteboardChangedOwner: (NSPasteboard *) sender;
@end

@interface NSPasteboard : NSObject

+ (NSPasteboard *) generalPasteboard;
+ (NSPasteboard *) pasteboardWithName: (NSString *) name;

- (NSString *) name;
- (NSInteger) changeCount;

- (NSInteger) clearContents;
- (oneway void) releaseGlobally;

- (NSArray<NSPasteboardType> *) types;
- (NSPasteboardType) availableTypeFromArray: (NSArray<NSPasteboardType> *) types;

- (NSData *) dataForType: (NSPasteboardType) type;
- (NSString *) stringForType: (NSPasteboardType) type;
- propertyListForType: (NSPasteboardType) type;

- (NSInteger) declareTypes: (NSArray<NSPasteboardType> *) types owner: (id<NSPasteboardTypeOwner>) owner;
- (NSInteger) addTypes: (NSArray<NSPasteboardType> *) types owner: (id<NSPasteboardTypeOwner>) owner;

- (BOOL) setData: (NSData *) data forType: (NSPasteboardType) type;
- (BOOL) setString: (NSString *) string forType: (NSPasteboardType) type;
- (BOOL) setPropertyList: plist forType: (NSPasteboardType) type;

@end
