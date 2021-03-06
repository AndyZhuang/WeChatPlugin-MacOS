//
//  Color.h
//  WeChatPlugin
//
//  Created by TK on 2017/8/20.
//  Copyright © 2017年 tk. All rights reserved.
//

#ifndef Color_h
#define Color_h

#define TK_RGBA(r, g, b, a) [NSColor colorWithRed:(r) / 255.0 \
green:(g) / 255.0 \
blue:(b) / 255.0 \
alpha:(a)]

#define TK_RGB(r, g, b) TK_RGBA(r, g, b, 1.0)

#define TK_GRAY(c) TK_RGB(c, c, c)

#define kBG1 TK_GRAY(0xec)
#define kBG2 TK_GRAY(0xe3)

#endif /* Color_h */
