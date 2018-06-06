//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <SourceEditor/NSServicesMenuRequestor-Protocol.h>
#import <SourceEditor/NSTextInputClient-Protocol.h>
#import <SourceEditor/_TtP12SourceEditor34SourceEditorViewMissingKeyBindings_-Protocol.h>

@class NSString, SourceEditorScrollView, _TtC12SourceEditor23SourceEditorContentView;

@interface _TtC12SourceEditor16SourceEditorView : NSView <NSTextInputClient, _TtP12SourceEditor34SourceEditorViewMissingKeyBindings_, NSServicesMenuRequestor>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: contentViewOffset
    // Error parsing type: , name: layoutManager
    // Error parsing type: , name: contentView
    // Error parsing type: , name: editAssistant
    // Error parsing type: , name: foldingController
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: boundsChangeObserver
    // Error parsing type: , name: frameChangeObserver
    // Error parsing type: , name: undoObserver
    // Error parsing type: , name: redoObserver
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: defaultScrollViewContentInsets
    // Error parsing type: , name: additionalScrollViewContentInsets
    // Error parsing type: , name: overscroll
    // Error parsing type: , name: commandInterface.storage
    // Error parsing type: , name: contentViewWidthConstraint
    // Error parsing type: , name: contentViewWidthLimitConstraint
    // Error parsing type: , name: contentViewHeightConstraint
    // Error parsing type: , name: structuredEditingController
    // Error parsing type: , name: trimTrailingWhitespaceController
    // Error parsing type: , name: automaticallyAdjustsContentMargins
    // Error parsing type: , name: cursorRectOverrideProviders
    // Error parsing type: , name: lineAnnotationManager.storage
    // Error parsing type: , name: gutter
    // Error parsing type: , name: foldingRibbon
    // Error parsing type: , name: draggingSource
    // Error parsing type: , name: registeredDraggingExtensions
    // Error parsing type: , name: textFindableDisplay.storage
    // Error parsing type: , name: textFindPanel.storage
    // Error parsing type: , name: textFindPanelDisplayed
    // Error parsing type: , name: findQuery
    // Error parsing type: , name: findResult
    // Error parsing type: , name: findReplaceWith
    // Error parsing type: , name: findResultNeedUpdate
    // Error parsing type: , name: selectedSymbolHighlight.storage
    // Error parsing type: , name: lineHighlightLayoutVisualization
    // Error parsing type: , name: delimiterHighlight.storage
    // Error parsing type: , name: coverageLayoutVisualization
    // Error parsing type: , name: isEditingEnabled
    // Error parsing type: , name: selectionController.storage
    // Error parsing type: , name: selectionDisplay
    // Error parsing type: , name: selection
    // Error parsing type: , name: oldSubstitutionView
    // Error parsing type: , name: calloutVisualization.storage
    // Error parsing type: , name: isCodeCompletionEnabled
    // Error parsing type: , name: languageServiceCompletionStrategy
    // Error parsing type: , name: codeCompletionController
    // Error parsing type: , name: currentListShownExplicitly
    // Error parsing type: , name: currentListWordStart
    // Error parsing type: , name: shouldProvideCodeCompletion
    // Error parsing type: , name: markedEditTransaction
    // Error parsing type: , name: markedStyle
    // Error parsing type: , name: asyncContinuations
    // Error parsing type: , name: postLayoutContinuations
    // Error parsing type: , name: emacsMarkedSourceRange
    // Error parsing type: , name: continueKillRing
    // Error parsing type: , name: deferredScrollState
    // Error parsing type: , name: contextualMenuEventConsumer
    // Error parsing type: , name: contextualMenuItemProvider
    // Error parsing type: , name: structuredSelectionDelegate
    // Error parsing type: , name: eventConsumers
    // Error parsing type: , name: editing
    // Error parsing type: , name: updateContentSizeDuringLiveResize
    // Error parsing type: , name: isInLiveResize
    // Error parsing type: , name: contentSizeIsValid
    // Error parsing type: , name: contentSize
}

+ (id)defaultMenu;
- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, readonly) NSString *description;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)performTextFinderAction:(id)arg1;
- (void)performFindPanelAction:(id)arg1;
- (void)resetCursorRects;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)updateSelectionManagerIsActive;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
@property(nonatomic, readonly) BOOL acceptsFirstResponder;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
@property(nonatomic, readonly) SourceEditorScrollView *scrollView; // @synthesize scrollView;
- (void)viewDidMoveToWindow;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) _TtC12SourceEditor23SourceEditorContentView *contentView; // @synthesize contentView;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
@property(nonatomic, readonly) id accessibilityFocusedUIElement;
- (long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (id)validAttributesForMarkedText;
- (id)attributedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (BOOL)hasMarkedText;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)insertText:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)selectColumnDown:(id)arg1;
- (void)selectColumnUp:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)jumpToSelection:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)unfoldAllComments:(id)arg1;
- (void)foldAllComments:(id)arg1;
- (void)unfoldAllMethods:(id)arg1;
- (void)foldAllMethods:(id)arg1;
- (void)unfoldAll:(id)arg1;
- (void)unfold:(id)arg1;
- (void)fold:(id)arg1;
- (void)selectStructure:(id)arg1;
- (void)complete:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (void)swapWithMark:(id)arg1;
- (void)selectToMark:(id)arg1;
- (void)deleteToMark:(id)arg1;
- (void)setMark:(id)arg1;
- (void)yankAndSelect:(id)arg1;
- (void)yank:(id)arg1;
- (void)deleteParagraph:(id)arg1;
- (void)deleteLine:(id)arg1;
- (void)insertDoubleQuoteIgnoringSubstitution:(id)arg1;
- (void)insertSingleQuoteIgnoringSubstitution:(id)arg1;
- (void)insertContainerBreak:(id)arg1;
- (void)insertLineBreak:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (void)pasteAsPlainText:(id)arg1;
- (void)pasteAndPreserveFormatting:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

