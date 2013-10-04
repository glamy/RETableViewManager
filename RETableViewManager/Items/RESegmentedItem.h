//
// RESegmentedItem.h
// RETableViewManager
//
// Copyright (c) 2013 Dmitry Shmidt (https://github.com/shmidt)
//                    Roman Efimov (https://github.com/romaonthego)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import "RETableViewItem.h"

@interface RESegmentedItem : RETableViewItem

@property (assign, readwrite, nonatomic) NSInteger value;
@property (copy, readwrite, nonatomic) NSArray *titles;
@property (copy, readwrite, nonatomic) NSArray *images;
@property (copy, readwrite, nonatomic) void (^switchValueChangeHandler)(RESegmentedItem *item);

+ (instancetype)itemWithTitles:(NSArray *)titles value:(NSInteger)value switchValueChangeHandler:(void(^)(RESegmentedItem *item))switchValueChangeHandler;
+ (instancetype)itemWithTitles:(NSArray *)titles value:(NSInteger)value;

- (id)initWithTitles:(NSArray *)titles value:(NSInteger)value switchValueChangeHandler:(void(^)(RESegmentedItem *item))switchValueChangeHandler;
- (id)initWithTitles:(NSArray *)titles value:(NSInteger)value;

+ (instancetype)itemWithImages:(NSArray *)images value:(NSInteger)value switchValueChangeHandler:(void(^)(RESegmentedItem *item))switchValueChangeHandler;
+ (instancetype)itemWithImages:(NSArray *)images value:(NSInteger)value;

- (id)initWithImages:(NSArray *)images value:(NSInteger)value switchValueChangeHandler:(void(^)(RESegmentedItem *item))switchValueChangeHandler;
- (id)initWithImages:(NSArray *)images value:(NSInteger)value;

@end