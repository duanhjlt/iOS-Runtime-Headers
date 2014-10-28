/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class BRFieldCKInfo, NSData, NSNumber, NSSet, NSString;

@interface BRCVersion : NSObject <NSCopying, NSSecureCoding> {
    BRFieldCKInfo *_ckInfo;
    NSSet *_conflictLoserEtags;
    NSData *_contentSignature;
    NSNumber *_lastEditorDeviceKey;
    NSString *_lastEditorDeviceName;
    NSData *_lazyXattr;
    long long _mtime;
    NSString *_originalPOSIXName;
    NSData *_quarantineInfo;
    long long _size;
    NSData *_thumbnailSignature;
    long long _thumbnailSize;
    NSData *_xattrSignature;
}

@property(retain) BRFieldCKInfo * ckInfo;
@property(retain) NSSet * conflictLoserEtags;
@property(retain) NSData * contentSignature;
@property(readonly) BOOL hasThumbnail;
@property(readonly) BOOL isPackage;
@property(retain) NSNumber * lastEditorDeviceKey;
@property(retain) NSString * lastEditorDeviceName;
@property(retain) NSData * lazyXattr;
@property long long mtime;
@property(retain) NSString * originalPOSIXName;
@property(retain) NSData * quarantineInfo;
@property long long size;
@property(retain) NSData * thumbnailSignature;
@property long long thumbnailSize;
@property(retain) NSData * xattrSignature;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionNameForItemID:(id)arg1 container:(id)arg2;
- (BOOL)check:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2;
- (id)ckInfo;
- (id)conflictLoserEtags;
- (id)contentSignature;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainst:(id)arg1 lastEditorChanged:(BOOL*)arg2;
- (unsigned long long)diffAgainst:(id)arg1;
- (id)displayNameWithoutExtension:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasThumbnail;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2 container:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (BOOL)isPackage;
- (id)lastEditorDeviceKey;
- (id)lastEditorDeviceName;
- (id)lastEditorDeviceNameWithDB:(id)arg1;
- (id)lazyXattr;
- (long long)mtime;
- (id)originalPOSIXName;
- (id)quarantineInfo;
- (void)setCkInfo:(id)arg1;
- (void)setConflictLoserEtags:(id)arg1;
- (void)setContentSignature:(id)arg1;
- (void)setLastEditorDeviceKey:(id)arg1;
- (void)setLastEditorDeviceName:(id)arg1;
- (void)setLazyXattr:(id)arg1;
- (void)setMtime:(long long)arg1;
- (void)setOriginalPOSIXName:(id)arg1;
- (void)setQuarantineInfo:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setThumbnailSignature:(id)arg1;
- (void)setThumbnailSize:(long long)arg1;
- (void)setXattrSignature:(id)arg1;
- (long long)size;
- (id)thumbnailSignature;
- (long long)thumbnailSize;
- (id)xattrSignature;

@end