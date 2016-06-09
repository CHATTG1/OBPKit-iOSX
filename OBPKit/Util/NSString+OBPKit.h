//
//  NSString+OBPKit.h
//  OBPKit
//
//  Created by Torsten Louland on 25/01/2016.
//  Copyright © 2016 TESOBE Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface NSString (OBPKit)
- (NSString*)stringByAddingPercentEncodingForAllRFC3986ReservedCharachters;
- (NSString*)stringByAppendingURLQueryParams:(NSDictionary*)dictionary;
- (NSDictionary*)extractURLQueryParams;
- (NSString*)stringForURLByAppendingPath:(NSString*)path;
@end
