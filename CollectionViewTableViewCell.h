//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UICollectionView;

@interface CollectionViewTableViewCell : UITableViewCell
{
    UICollectionView *_collectionView;
}

@property(nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithCollectionView:(id)arg1;

@end

