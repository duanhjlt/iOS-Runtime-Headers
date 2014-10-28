/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPProtectionInfo, CKDPRecordIdentifier, NSData, NSString;

@interface CKDPAsset : PBCodable <NSCopying> {
    struct { 
        unsigned int downloadURLExpiration : 1; 
        unsigned int size : 1; 
    NSString *_contentBaseURL;
    NSData *_data;
    NSString *_derivedContentType;
    NSString *_downloadBaseURL;
    NSData *_downloadRequest;
    NSString *_downloadToken;
    long long _downloadURLExpiration;
    } _has;
    NSData *_header;
    NSString *_owner;
    CKDPProtectionInfo *_protectionInfo;
    CKDPRecordIdentifier *_recordId;
    NSString *_referenceIdentifier;
    NSData *_referenceSignature;
    NSString *_requestor;
    NSData *_signature;
    long long _size;
    NSString *_uploadReceipt;
}

@property(retain) NSString * contentBaseURL;
@property(retain) NSData * data;
@property(retain) NSString * derivedContentType;
@property(retain) NSString * downloadBaseURL;
@property(retain) NSData * downloadRequest;
@property(retain) NSString * downloadToken;
@property long long downloadURLExpiration;
@property(readonly) BOOL hasContentBaseURL;
@property(readonly) BOOL hasData;
@property(readonly) BOOL hasDerivedContentType;
@property(readonly) BOOL hasDownloadBaseURL;
@property(readonly) BOOL hasDownloadRequest;
@property(readonly) BOOL hasDownloadToken;
@property BOOL hasDownloadURLExpiration;
@property(readonly) BOOL hasHeader;
@property(readonly) BOOL hasOwner;
@property(readonly) BOOL hasProtectionInfo;
@property(readonly) BOOL hasRecordId;
@property(readonly) BOOL hasReferenceIdentifier;
@property(readonly) BOOL hasReferenceSignature;
@property(readonly) BOOL hasRequestor;
@property(readonly) BOOL hasSignature;
@property BOOL hasSize;
@property(readonly) BOOL hasUploadReceipt;
@property(retain) NSData * header;
@property(retain) NSString * owner;
@property(retain) CKDPProtectionInfo * protectionInfo;
@property(retain) CKDPRecordIdentifier * recordId;
@property(retain) NSString * referenceIdentifier;
@property(retain) NSData * referenceSignature;
@property(retain) NSString * requestor;
@property(retain) NSData * signature;
@property long long size;
@property(retain) NSString * uploadReceipt;

- (void).cxx_destruct;
- (id)contentBaseURL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)derivedContentType;
- (id)description;
- (id)dictionaryRepresentation;
- (id)downloadBaseURL;
- (id)downloadRequest;
- (id)downloadToken;
- (long long)downloadURLExpiration;
- (BOOL)hasContentBaseURL;
- (BOOL)hasData;
- (BOOL)hasDerivedContentType;
- (BOOL)hasDownloadBaseURL;
- (BOOL)hasDownloadRequest;
- (BOOL)hasDownloadToken;
- (BOOL)hasDownloadURLExpiration;
- (BOOL)hasHeader;
- (BOOL)hasOwner;
- (BOOL)hasProtectionInfo;
- (BOOL)hasRecordId;
- (BOOL)hasReferenceIdentifier;
- (BOOL)hasReferenceSignature;
- (BOOL)hasRequestor;
- (BOOL)hasSignature;
- (BOOL)hasSize;
- (BOOL)hasUploadReceipt;
- (unsigned int)hash;
- (id)header;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)owner;
- (id)protectionInfo;
- (BOOL)readFrom:(id)arg1;
- (id)recordId;
- (id)referenceIdentifier;
- (id)referenceSignature;
- (id)requestor;
- (void)setContentBaseURL:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDerivedContentType:(id)arg1;
- (void)setDownloadBaseURL:(id)arg1;
- (void)setDownloadRequest:(id)arg1;
- (void)setDownloadToken:(id)arg1;
- (void)setDownloadURLExpiration:(long long)arg1;
- (void)setHasDownloadURLExpiration:(BOOL)arg1;
- (void)setHasSize:(BOOL)arg1;
- (void)setHeader:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setRecordId:(id)arg1;
- (void)setReferenceIdentifier:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setRequestor:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setUploadReceipt:(id)arg1;
- (id)signature;
- (long long)size;
- (id)uploadReceipt;
- (void)writeTo:(id)arg1;

@end