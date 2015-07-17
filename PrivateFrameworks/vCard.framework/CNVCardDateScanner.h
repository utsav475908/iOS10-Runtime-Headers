/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardDateScanner : NSObject {
    unsigned int  _position;
    NSString * _string;
}

@property (readonly) unsigned int position;

+ (id)scannerWithString:(id)arg1;

- (void)dealloc;
- (id)initWithString:(id)arg1;
- (BOOL)isAtEnd;
- (unsigned int)lengthOfCalendarUnit:(unsigned int)arg1;
- (unsigned short)nextCharacter;
- (unsigned int)position;
- (int)scanCalendarUnit:(unsigned int)arg1;
- (int)scanComponentValueOfLength:(unsigned int)arg1;
- (BOOL)scanLeapMarker;

@end