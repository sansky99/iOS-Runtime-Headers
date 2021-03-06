/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableActivityCache : PBCodable <HDDecoding, NSCopying> {
    long long  _activeEnergyBurnedAnchor;
    double  _activeHours;
    long long  _activeHoursAnchor;
    double  _briskMinutes;
    long long  _briskMinutesAnchor;
    long long  _cacheIndex;
    long long  _calorieGoalAnchor;
    double  _deepBreathingDuration;
    long long  _deepBreathingSessionAnchor;
    double  _energyBurned;
    double  _energyBurnedGoal;
    long long  _energyBurnedGoalAnchor;
    double  _energyBurnedGoalDate;
    long long  _flightsClimbed;
    long long  _flightsClimbedAnchor;
    struct { 
        unsigned int activeEnergyBurnedAnchor : 1; 
        unsigned int activeHours : 1; 
        unsigned int activeHoursAnchor : 1; 
        unsigned int briskMinutes : 1; 
        unsigned int briskMinutesAnchor : 1; 
        unsigned int cacheIndex : 1; 
        unsigned int calorieGoalAnchor : 1; 
        unsigned int deepBreathingDuration : 1; 
        unsigned int deepBreathingSessionAnchor : 1; 
        unsigned int energyBurned : 1; 
        unsigned int energyBurnedGoal : 1; 
        unsigned int energyBurnedGoalAnchor : 1; 
        unsigned int energyBurnedGoalDate : 1; 
        unsigned int flightsClimbed : 1; 
        unsigned int flightsClimbedAnchor : 1; 
        unsigned int pushCount : 1; 
        unsigned int pushCountAnchor : 1; 
        unsigned int stepCount : 1; 
        unsigned int stepCountAnchor : 1; 
        unsigned int walkingAndRunningDistance : 1; 
        unsigned int walkingAndRunningDistanceAnchor : 1; 
        unsigned int wheelchairUse : 1; 
        unsigned int workoutAnchor : 1; 
    }  _has;
    long long  _pushCount;
    long long  _pushCountAnchor;
    HDCodableSample * _sample;
    long long  _stepCount;
    long long  _stepCountAnchor;
    double  _walkingAndRunningDistance;
    long long  _walkingAndRunningDistanceAnchor;
    long long  _wheelchairUse;
    long long  _workoutAnchor;
}

@property (nonatomic) long long activeEnergyBurnedAnchor;
@property (nonatomic) double activeHours;
@property (nonatomic) long long activeHoursAnchor;
@property (nonatomic) double briskMinutes;
@property (nonatomic) long long briskMinutesAnchor;
@property (nonatomic) long long cacheIndex;
@property (nonatomic) long long calorieGoalAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double deepBreathingDuration;
@property (nonatomic) long long deepBreathingSessionAnchor;
@property (readonly, copy) NSString *description;
@property (nonatomic) double energyBurned;
@property (nonatomic) double energyBurnedGoal;
@property (nonatomic) long long energyBurnedGoalAnchor;
@property (nonatomic) double energyBurnedGoalDate;
@property (nonatomic) long long flightsClimbed;
@property (nonatomic) long long flightsClimbedAnchor;
@property (nonatomic) BOOL hasActiveEnergyBurnedAnchor;
@property (nonatomic) BOOL hasActiveHours;
@property (nonatomic) BOOL hasActiveHoursAnchor;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) BOOL hasBriskMinutesAnchor;
@property (nonatomic) BOOL hasCacheIndex;
@property (nonatomic) BOOL hasCalorieGoalAnchor;
@property (nonatomic) BOOL hasDeepBreathingDuration;
@property (nonatomic) BOOL hasDeepBreathingSessionAnchor;
@property (nonatomic) BOOL hasEnergyBurned;
@property (nonatomic) BOOL hasEnergyBurnedGoal;
@property (nonatomic) BOOL hasEnergyBurnedGoalAnchor;
@property (nonatomic) BOOL hasEnergyBurnedGoalDate;
@property (nonatomic) BOOL hasFlightsClimbed;
@property (nonatomic) BOOL hasFlightsClimbedAnchor;
@property (nonatomic) BOOL hasPushCount;
@property (nonatomic) BOOL hasPushCountAnchor;
@property (nonatomic, readonly) BOOL hasSample;
@property (nonatomic) BOOL hasStepCount;
@property (nonatomic) BOOL hasStepCountAnchor;
@property (nonatomic) BOOL hasWalkingAndRunningDistance;
@property (nonatomic) BOOL hasWalkingAndRunningDistanceAnchor;
@property (nonatomic) BOOL hasWheelchairUse;
@property (nonatomic) BOOL hasWorkoutAnchor;
@property (readonly) unsigned int hash;
@property (nonatomic) long long pushCount;
@property (nonatomic) long long pushCountAnchor;
@property (nonatomic, retain) HDCodableSample *sample;
@property (nonatomic) long long stepCount;
@property (nonatomic) long long stepCountAnchor;
@property (readonly) Class superclass;
@property (nonatomic) double walkingAndRunningDistance;
@property (nonatomic) long long walkingAndRunningDistanceAnchor;
@property (nonatomic) long long wheelchairUse;
@property (nonatomic) long long workoutAnchor;

- (void).cxx_destruct;
- (long long)activeEnergyBurnedAnchor;
- (double)activeHours;
- (long long)activeHoursAnchor;
- (BOOL)applyToObject:(id)arg1;
- (double)briskMinutes;
- (long long)briskMinutesAnchor;
- (long long)cacheIndex;
- (long long)calorieGoalAnchor;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedEnergyBurnedGoalQuantity;
- (id)decodedEnergyBurnedQuantity;
- (id)decodedWalkingAndRunningDistanceQuantity;
- (double)deepBreathingDuration;
- (long long)deepBreathingSessionAnchor;
- (id)description;
- (id)dictionaryRepresentation;
- (double)energyBurned;
- (double)energyBurnedGoal;
- (long long)energyBurnedGoalAnchor;
- (double)energyBurnedGoalDate;
- (long long)flightsClimbed;
- (long long)flightsClimbedAnchor;
- (BOOL)hasActiveEnergyBurnedAnchor;
- (BOOL)hasActiveHours;
- (BOOL)hasActiveHoursAnchor;
- (BOOL)hasBriskMinutes;
- (BOOL)hasBriskMinutesAnchor;
- (BOOL)hasCacheIndex;
- (BOOL)hasCalorieGoalAnchor;
- (BOOL)hasDeepBreathingDuration;
- (BOOL)hasDeepBreathingSessionAnchor;
- (BOOL)hasEnergyBurned;
- (BOOL)hasEnergyBurnedGoal;
- (BOOL)hasEnergyBurnedGoalAnchor;
- (BOOL)hasEnergyBurnedGoalDate;
- (BOOL)hasFlightsClimbed;
- (BOOL)hasFlightsClimbedAnchor;
- (BOOL)hasPushCount;
- (BOOL)hasPushCountAnchor;
- (BOOL)hasSample;
- (BOOL)hasStepCount;
- (BOOL)hasStepCountAnchor;
- (BOOL)hasWalkingAndRunningDistance;
- (BOOL)hasWalkingAndRunningDistanceAnchor;
- (BOOL)hasWheelchairUse;
- (BOOL)hasWorkoutAnchor;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)pushCount;
- (long long)pushCountAnchor;
- (BOOL)readFrom:(id)arg1;
- (id)sample;
- (void)setActiveEnergyBurnedAnchor:(long long)arg1;
- (void)setActiveHours:(double)arg1;
- (void)setActiveHoursAnchor:(long long)arg1;
- (void)setBriskMinutes:(double)arg1;
- (void)setBriskMinutesAnchor:(long long)arg1;
- (void)setCacheIndex:(long long)arg1;
- (void)setCalorieGoalAnchor:(long long)arg1;
- (void)setDeepBreathingDuration:(double)arg1;
- (void)setDeepBreathingSessionAnchor:(long long)arg1;
- (void)setEnergyBurned:(double)arg1;
- (void)setEnergyBurnedGoal:(double)arg1;
- (void)setEnergyBurnedGoalAnchor:(long long)arg1;
- (void)setEnergyBurnedGoalDate:(double)arg1;
- (void)setFlightsClimbed:(long long)arg1;
- (void)setFlightsClimbedAnchor:(long long)arg1;
- (void)setHasActiveEnergyBurnedAnchor:(BOOL)arg1;
- (void)setHasActiveHours:(BOOL)arg1;
- (void)setHasActiveHoursAnchor:(BOOL)arg1;
- (void)setHasBriskMinutes:(BOOL)arg1;
- (void)setHasBriskMinutesAnchor:(BOOL)arg1;
- (void)setHasCacheIndex:(BOOL)arg1;
- (void)setHasCalorieGoalAnchor:(BOOL)arg1;
- (void)setHasDeepBreathingDuration:(BOOL)arg1;
- (void)setHasDeepBreathingSessionAnchor:(BOOL)arg1;
- (void)setHasEnergyBurned:(BOOL)arg1;
- (void)setHasEnergyBurnedGoal:(BOOL)arg1;
- (void)setHasEnergyBurnedGoalAnchor:(BOOL)arg1;
- (void)setHasEnergyBurnedGoalDate:(BOOL)arg1;
- (void)setHasFlightsClimbed:(BOOL)arg1;
- (void)setHasFlightsClimbedAnchor:(BOOL)arg1;
- (void)setHasPushCount:(BOOL)arg1;
- (void)setHasPushCountAnchor:(BOOL)arg1;
- (void)setHasStepCount:(BOOL)arg1;
- (void)setHasStepCountAnchor:(BOOL)arg1;
- (void)setHasWalkingAndRunningDistance:(BOOL)arg1;
- (void)setHasWalkingAndRunningDistanceAnchor:(BOOL)arg1;
- (void)setHasWheelchairUse:(BOOL)arg1;
- (void)setHasWorkoutAnchor:(BOOL)arg1;
- (void)setPushCount:(long long)arg1;
- (void)setPushCountAnchor:(long long)arg1;
- (void)setSample:(id)arg1;
- (void)setStepCount:(long long)arg1;
- (void)setStepCountAnchor:(long long)arg1;
- (void)setWalkingAndRunningDistance:(double)arg1;
- (void)setWalkingAndRunningDistanceAnchor:(long long)arg1;
- (void)setWheelchairUse:(long long)arg1;
- (void)setWorkoutAnchor:(long long)arg1;
- (long long)stepCount;
- (long long)stepCountAnchor;
- (double)walkingAndRunningDistance;
- (long long)walkingAndRunningDistanceAnchor;
- (long long)wheelchairUse;
- (long long)workoutAnchor;
- (void)writeTo:(id)arg1;

@end
