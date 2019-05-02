//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSProgress, SDWebImageTransition;

@interface UIView (WebCache)
- (void)sd_removeActivityIndicator;
- (void)sd_addActivityIndicator;
- (int)sd_getIndicatorStyle;
- (void)sd_setIndicatorStyle:(long long)arg1;
- (_Bool)sd_showActivityIndicatorView;
- (void)sd_setShowActivityIndicatorView:(_Bool)arg1;
- (void)setActivityIndicator:(id)arg1;
- (id)activityIndicator;
@property(retain, nonatomic) SDWebImageTransition *sd_imageTransition;
- (void)sd_setNeedsLayout;
- (void)sd_setImage:(id)arg1 imageData:(id)arg2 basedOnClassOrViaCustomSetImageBlock:(CDUnknownBlockType)arg3 transition:(id)arg4 cacheType:(long long)arg5 imageURL:(id)arg6;
- (void)sd_setImage:(id)arg1 imageData:(id)arg2 basedOnClassOrViaCustomSetImageBlock:(CDUnknownBlockType)arg3 cacheType:(long long)arg4 imageURL:(id)arg5;
- (void)sd_cancelCurrentImageLoad;
- (void)sd_internalSetImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 operationKey:(id)arg4 internalSetImageBlock:(CDUnknownBlockType)arg5 progress:(CDUnknownBlockType)arg6 completed:(CDUnknownBlockType)arg7 context:(id)arg8;
- (void)sd_internalSetImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 operationKey:(id)arg4 setImageBlock:(CDUnknownBlockType)arg5 progress:(CDUnknownBlockType)arg6 completed:(CDUnknownBlockType)arg7 context:(id)arg8;
- (void)sd_internalSetImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 operationKey:(id)arg4 setImageBlock:(CDUnknownBlockType)arg5 progress:(CDUnknownBlockType)arg6 completed:(CDUnknownBlockType)arg7;
@property(retain, nonatomic) NSProgress *sd_imageProgress;
- (id)sd_imageURL;
@end

