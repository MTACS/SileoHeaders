//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GADOMIDProcessorFactory : NSObject
{
    id <GADOMIDNodeProcessor> _screenProcessor;
    id <GADOMIDNodeProcessor> _windowProcessor;
    id <GADOMIDNodeProcessor> _viewProcessor;
}

- (void).cxx_destruct;
- (id)rootProcessor;
- (id)init;

@end

