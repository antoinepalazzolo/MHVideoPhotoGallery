@import Foundation;

//! Project version number for MHGallery.
FOUNDATION_EXPORT double MHGalleryVersionNumber;

//! Project version string for MHGallery.
FOUNDATION_EXPORT const unsigned char MHGalleryVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MHGallery/PublicHeader.h>

#import <MHGallery/UIImageView+MHGallery.h>
#import <MHGallery/MHTransitionDismissMHGallery.h>
#import <MHGallery/MHTransitionPresentMHGallery.h>
#import <MHGallery/MHPresenterImageView.h>
#import <MHGallery/MHCustomization.h>
#import <MHGallery/MHGalleryItem.h>
#import <MHGallery/MHGallerySharedManager.h>
#import <MHGallery/MHGalleryController.h>
#import <MHGallery/MHOverviewController.h>
#import <MHGallery/MHTransitionShowOverView.h>
#import <MHGallery/MHGalleryImageViewerViewController.h>
#import <MHGallery/SDWebImageDecoder.h>
#import <MHGallery/SDImageCache.h>





#define MHISIPAD ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
#define kMHGalleryBundleName @"MHGallery.bundle"
#define MHGalleryOSVersion [UIDevice.currentDevice.systemVersion floatValue]

extern void MHGalleryCustomLocalizationBlock(NSString *(^customLocalizationBlock)(NSString *stringToLocalize));
extern void MHGalleryCustomImageBlock(UIImage *(^customImageBlock)(NSString *imageToChangeName));

extern NSNumberFormatter *MHNumberFormatterVideo(void);

extern NSBundle *MHGalleryBundle(void);

extern NSString *MHGalleryLocalizedString(NSString *localizeString);

extern NSDictionary *MHDictionaryForQueryString(NSString *string);

extern UIImage *MHImageFromView(UIView *view);
extern UIImage *MHTemplateImage(NSString *imageName);
extern UIImage *MHDefaultImageForFrame(CGRect frame);
extern UIImage  *MHGalleryImage(NSString *imageName);

extern UIView  *MHStatusBar(void);
extern BOOL     MHShouldShowStatusBar(void);

extern NSString *const MHYoutubeChannel;
extern NSString *const MHGalleryViewModeShare;
extern NSString *const MHVimeoVideoBaseURL;
extern NSString *const MHVimeoThumbBaseURL;
extern NSString *const MHYoutubeInfoBaseURL;
extern NSString *const MHYoutubePlayBaseURL;
extern NSString *const MHYoutubeBaseURL;
extern NSString *const MHVimeoBaseURL;
extern NSString *const MHAssetLibrary;
extern NSString *const MHGalleryDurationData;

@interface SDImageCache (MHPrivateMethods)
- (NSString *)defaultCachePathForKey:(NSString *)key;
- (NSString *)cachedFileNameForKey:(NSString *)key;
@end

