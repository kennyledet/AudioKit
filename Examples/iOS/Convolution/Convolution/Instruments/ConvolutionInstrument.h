//
//  ConvolutionInstrument.h
//  AudioKit Example
//
//  Created by Aurelius Prochazka on 6/27/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "AKFoundation.h"

@interface ConvolutionInstrument : AKInstrument

@property (nonatomic, strong) AKInstrumentProperty *dishWellBalance;
@property (nonatomic, strong) AKInstrumentProperty *dryWetBalance;

@end
