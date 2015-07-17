/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface RenderedHandViewFactory : NSObject {
    BOOL _allowCaching;
    NSMutableDictionary *_angleCache;
    NSString *_imagePath;
    struct CGPoint { 
        float x; 
        float y; 
    } _offset;
    struct CGPDFPage { } *_page;
    unsigned int _registeredClientsCount;
    NSBundle *_resourcesBundle;
    struct CGSize { 
        float width; 
        float height; 
    } _scale;
    struct CGSize { 
        float width; 
        float height; 
    } _viewSize;
}

@property (nonatomic, readonly) BOOL allowCaching;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic) unsigned int registeredClientsCount;

+ (void)flushAllCaches;
+ (id)keyForBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint { float x1; float x2; })arg3 scale:(struct CGSize { float x1; float x2; })arg4;
+ (id)registerForFactoryWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint { float x1; float x2; })arg3 scale:(struct CGSize { float x1; float x2; })arg4 allowCaching:(BOOL)arg5;
+ (void)unregisterForFactory:(id)arg1;

- (BOOL)allowCaching;
- (void)dealloc;
- (void)flushCache;
- (id)imageForAngle:(float)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint { float x1; float x2; })arg3 scale:(struct CGSize { float x1; float x2; })arg4 allowCaching:(BOOL)arg5;
- (id)key;
- (unsigned int)registeredClientsCount;
- (id)renderImageForAngle:(float)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2;
- (void)setRegisteredClientsCount:(unsigned int)arg1;

@end