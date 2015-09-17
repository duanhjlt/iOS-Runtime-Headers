/* Generated by RuntimeBrowser.
 */

@protocol MPVideoControllerProtocol <MPControllerProtocol>

@required

- (BOOL)TVOutEnabled;
- (BOOL)allowsDetailScrubbing;
- (BOOL)allowsWirelessPlayback;
- (BOOL)alwaysAllowHidingControlsOverlay;
- (int)artworkImageStyle;
- (BOOL)attemptAutoPlayWhenControlsHidden;
- (BOOL)autoPlayWhenLikelyToKeepUp;
- (UIView *)backgroundView;
- (UIColor *)backstopColor;
- (BOOL)canAnimateControlsOverlay;
- (BOOL)canChangeScaleMode;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (BOOL)canShowControlsOverlay;
- (BOOL)controlsOverlayVisible;
- (unsigned long long)desiredParts;
- (BOOL)disableAutoRotation;
- (BOOL)disableControlsAutohide;
- (unsigned long long)disabledParts;
- (BOOL)displayPlaybackErrorAlerts;
- (void)displayVideoView;
- (void)exitFullscreen;
- (_UIHostedWindow *)hostedWindow;
- (unsigned int)hostedWindowContextID;
- (BOOL)inlinePlaybackUsesTVOut;
- (BOOL)isFullscreen;
- (unsigned int)itemTypeOverride;
- (UIImage *)posterImage;
- (void)prepareToDisplayVideo;
- (unsigned int)scaleMode;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
- (void)setArtworkImageStyle:(int)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
- (void)setBackstopColor:(UIColor *)arg1;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setClosedCaptions:(NSArray *)arg1;
- (void)setControlsNeedLayout;
- (void)setControlsOverlayVisible:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDisableAutoRotation:(BOOL)arg1;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setDisplayPlaybackErrorAlerts:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
- (void)setItemTypeOverride:(unsigned int)arg1;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (void)setPosterImage:(UIImage *)arg1;
- (void)setScaleMode:(unsigned int)arg1;
- (void)setScaleModeOverride:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)showAlternateTracksController:(NSSet *)arg1;
- (UIView<MPVideoOverlay> *)videoOverlayView;
- (MPVideoView *)videoView;
- (BOOL)viewControllerWillRequestExit;
- (unsigned long long)visibleParts;

@end