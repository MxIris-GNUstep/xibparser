/* Class Header:XIBImageView */
#ifndef __XIBImageView_H_
#define __XIBImageView_H_

#import <Foundation/Foundation.h>

@class XIBImageCell;
@class XIBRect;

@interface XIBImageView : NSObject
{
  XIBImageCell* _cell;
  BOOL _fixedFrame;
  XIBRect* _frame;
  NSString* _horizontalHuggingPriority;
  NSString* _id;
  BOOL _translatesAutoresizingMaskIntoConstraints;
  NSString* _verticalHuggingPriority;
}

- (BOOL) fixedFrame;
- (NSString *) horizontalHuggingPriority;
- (NSString *) id;
- (void) setFixedFrame: (BOOL) fixedFrame;
- (void) setHorizontalHuggingPriority: (NSString *) horizontalHuggingPriority;
- (void) setId: (NSString *) id;
- (void) setTranslatesAutoresizingMaskIntoConstraints: (BOOL) translatesAutoresizingMaskIntoConstraints;
- (void) setVerticalHuggingPriority: (NSString *) verticalHuggingPriority;
- (BOOL) translatesAutoresizingMaskIntoConstraints;
- (NSString *) verticalHuggingPriority;

@end

#endif
