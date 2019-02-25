//
//  NSString+EmojiFilter.h
//  DBTest
//
//  Created by Beautilut on 2019/2/25.
//  Copyright © 2019 Beautilut. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (EmojiFilter)

- (BOOL)containsEmoji;

- (NSString *)removeEmoji;

@end

NS_ASSUME_NONNULL_END
