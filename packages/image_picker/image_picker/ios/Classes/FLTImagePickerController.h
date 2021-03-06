// Copyright 2019 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class FLTImagePickerPlugin;

@interface FLTImagePickerController : UIImagePickerController

- (instancetype)initWithPlugin:(FLTImagePickerPlugin *)plugin;

@end

NS_ASSUME_NONNULL_END
