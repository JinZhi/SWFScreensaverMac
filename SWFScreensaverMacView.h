//
//  SWFScreensaverMacView.h
//  SWFScreensaverMac
//
//  Created by Florian on 01.10.09.
//  Licensed under http://www.mozilla.org/MPL/MPL-1.1.html
//

#import <ScreenSaver/ScreenSaver.h>
#import <WebKit/WebKit.h>
#import <SystemConfiguration/SystemConfiguration.h>


@interface SWFScreensaverMacView : ScreenSaverView {
    IBOutlet id configSheet;
    IBOutlet id showInfoPic;
    IBOutlet id showInfoText;
    IBOutlet id showConfig;
	
	// running in preview mode
    Boolean previewMode;

    Boolean debugMode;				// running in debug mode (true / false)
    
    Boolean interactiveMode;		// running in interactive mode (true / false)
    
    // path to main bundle
    NSBundle *pMainBundle;
    NSString *pBundlePath;
    
    
    NSDictionary *infoDict;			// plist file
    NSMutableString *pathToLogFile;	// path to the log file
    
    WebScriptObject *scriptObject;	// Scriptobjekt für JS
    
    Boolean quitFlag;				// flag for shutting down
    
    WebView *webView;	
    
}
	
@property (nonatomic,retain) IBOutlet id configSheet;
@property (nonatomic,retain) IBOutlet id showInfoPic;
@property (nonatomic,retain) IBOutlet id showInfoText;
@property (nonatomic,retain) IBOutlet id showConfig;
	
	// running in preview mode
@property (nonatomic,assign) Boolean previewMode;

@property (nonatomic,assign) Boolean debugMode;				// running in debug mode (true / false)

@property (nonatomic,assign) Boolean interactiveMode;		// running in interactive mode (true / false)

// path to main bundle
@property (nonatomic,retain) NSBundle *pMainBundle;
@property (nonatomic,retain) NSString *pBundlePath;


@property (nonatomic,retain) NSDictionary *infoDict;			// plist file
@property (nonatomic,retain) NSMutableString *pathToLogFile;	// path to the log file


@property (nonatomic,retain) WebScriptObject *scriptObject;	// Scriptobjekt für JS


@property (nonatomic,assign) Boolean quitFlag;				// flag for shutting down

@property (nonatomic,retain) WebView *webView;				// webview for displaying html/flash


static Boolean checkOnline(const char *serverName);
static void LogToFile(NSString *message, ...);
- (void) quitScreenSaver;
- (void) gotoUrl:(NSString *) destinationURL;


@end
