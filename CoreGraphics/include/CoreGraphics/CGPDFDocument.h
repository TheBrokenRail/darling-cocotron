/* Copyright(c) 2008 Christopher J. W. Lloyd

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files(the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. */

#import <CoreGraphics/CoreGraphicsExport.h>

typedef struct CF_BRIDGED_TYPE(id) O2PDFDoument *CGPDFDocumentRef;

#import <CoreFoundation/CFURL.h>

#import <CoreGraphics/CGDataProvider.h>
#import <CoreGraphics/CGPDFPage.h>

CF_IMPLICIT_BRIDGING_ENABLED

COREGRAPHICS_EXPORT CGPDFDocumentRef CGPDFDocumentRetain(CGPDFDocumentRef self);
COREGRAPHICS_EXPORT void CGPDFDocumentRelease(CGPDFDocumentRef self);

COREGRAPHICS_EXPORT CGPDFDocumentRef CGPDFDocumentCreateWithURL(CFURLRef url);
COREGRAPHICS_EXPORT CGPDFDocumentRef CGPDFDocumentCreateWithProvider(CGDataProviderRef provider);

COREGRAPHICS_EXPORT size_t CGPDFDocumentGetNumberOfPages(CGPDFDocumentRef self);
COREGRAPHICS_EXPORT CGPDFPageRef CGPDFDocumentGetPage(CGPDFDocumentRef self, size_t pageNumber);

CF_IMPLICIT_BRIDGING_DISABLED
