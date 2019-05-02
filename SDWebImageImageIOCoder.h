//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SDWebImageProgressiveCoder.h"

@class NSString;

@interface SDWebImageImageIOCoder : NSObject <SDWebImageProgressiveCoder>
{
    unsigned long long _width;
    unsigned long long _height;
    long long _orientation;
    struct CGImageSource *_imageSource;
}

+ (_Bool)shouldScaleDownImage:(id)arg1;
+ (_Bool)canEncodeToHEIFFormat;
+ (_Bool)canEncodeToHEICFormat;
+ (_Bool)canDecodeFromHEIFFormat;
+ (_Bool)canDecodeFromHEICFormat;
+ (_Bool)shouldDecodeImage:(id)arg1;
+ (id)sharedCoder;
- (id)encodedDataWithImage:(id)arg1 format:(long long)arg2;
- (_Bool)canEncodeToFormat:(long long)arg1;
- (id)sd_decompressedAndScaledDownImageWithImage:(id)arg1;
- (id)sd_decompressedImageWithImage:(id)arg1;
- (id)decompressedImageWithImage:(id)arg1 data:(id *)arg2 options:(id)arg3;
- (id)incrementallyDecodedImageWithData:(id)arg1 finished:(_Bool)arg2;
- (id)decodedImageWithData:(id)arg1;
- (_Bool)canIncrementallyDecodeFromData:(id)arg1;
- (_Bool)canDecodeFromData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
