//
//  MIKMIDIEventIterator.h
//  MIKMIDI
//
//  Created by Chris Flesner on 9/9/14.
//  Copyright (c) 2014 Mixed In Key. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>

@class MIKMIDITrack;
@class MIKMIDIEvent;


@interface MIKMIDIEventIterator : NSObject

@property (nonatomic, readonly) BOOL hasPreviousEvent;
@property (nonatomic, readonly) BOOL hasCurrentEvent;
@property (nonatomic, readonly) BOOL hasNextEvent;

- (instancetype)initWithTrack:(MIKMIDITrack *)track;
+ (instancetype)iteratorForTrack:(MIKMIDITrack *)track;

- (BOOL)seek:(MusicTimeStamp)timeStamp;
- (BOOL)moveToNextEvent;
- (BOOL)moveToPreviousEvent;

- (MIKMIDIEvent *)currentEvent;

@end