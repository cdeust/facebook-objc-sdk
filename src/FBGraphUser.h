/*
 * Copyright 2012 Facebook
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>
#import "FBGraphLocation.h"
#import "FBGraphObject.h"

// FBGraphUser protocol (graph accessor)
//
// Summary:
// represents commonly used properties of a Facebook User object, may be used to access an
// NSDictionary object for which the treatAsGraphObject method has been called; graph accessors 
// enable typed access to Facebook graph objects
@protocol FBGraphUser<FBGraphObject>

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *first_name;
@property (retain, nonatomic) NSString *last_name;
@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *birthday;
@property (retain, nonatomic) id<FBGraphLocation> location;

@end