//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class IDESelection, IDEWorkspaceTabController;

@protocol IDESelectionSource <NSObject>
@property(nonatomic, readonly) IDEWorkspaceTabController *workspaceTabController;
@property(nonatomic, readonly) IDESelection *contextMenuSelection;
@property(nonatomic, readonly) IDESelection *outputSelection;
@end

