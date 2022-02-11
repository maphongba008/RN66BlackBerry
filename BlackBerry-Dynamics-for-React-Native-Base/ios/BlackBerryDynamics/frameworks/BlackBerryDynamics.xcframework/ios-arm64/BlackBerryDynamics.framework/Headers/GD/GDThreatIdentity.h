/*
 * (c) 2020 BlackBerry Limited. All rights reserved.
 */

#import "GDThreat.h"
#import "GDPortability.h"

GD_NS_ASSUME_NONNULL_BEGIN

/**  
 * Determine whether current application activity matches the behavior and identity of the authorized user.
 * 
 * Requires BlackBerry Persona to be enabled.
 *
 */
@interface BBDThreatIdentity : BBDThreat

/**
 * Determine a user’s security risk level based on behavior and usage analysis.
 * 
 * Determine a user’s security risk level based on behavior and usage analysis.
 *
 * @return BBDThreatLevel 
 */
@property (nonatomic, assign, readonly) BBDThreatLevel behaviouralLocationRisk;


/**
 * Creates an instance of BBDThreatIdentity.
 */
- (instancetype)init NS_DESIGNATED_INITIALIZER;

@end

GD_NS_ASSUME_NONNULL_END
