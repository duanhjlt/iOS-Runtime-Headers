/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKDAcceptSharesURLRequest : CKDURLRequest {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shareAcceptedBlock;

    NSMutableDictionary *_shareInfoByRequestID;
    NSArray *_shareInfosToAccept;
}

@property(copy) id shareAcceptedBlock;
@property(retain) NSMutableDictionary * shareInfoByRequestID;
@property(retain) NSArray * shareInfosToAccept;

- (void).cxx_destruct;
- (id)initWithShareInfosToAccept:(id)arg1;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setShareAcceptedBlock:(id)arg1;
- (void)setShareInfoByRequestID:(id)arg1;
- (void)setShareInfosToAccept:(id)arg1;
- (id)shareAcceptedBlock;
- (id)shareInfoByRequestID;
- (id)shareInfosToAccept;

@end