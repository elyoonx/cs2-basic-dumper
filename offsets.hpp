inline struct buttonsOffsets {
	DWORD attack;
	DWORD attack2;
	DWORD back;
	DWORD duck;
	DWORD forward;
	DWORD jump;
	DWORD left;
	DWORD lookatweapon;
	DWORD reload;
	DWORD right;
	DWORD showscores;
	DWORD sprint;
	DWORD turnleft;
	DWORD turnright;
	DWORD use;
	DWORD zoom;
} buttons;

inline struct CCSPlayer_PingServicesOffsets {
	DWORD m_hPlayerPing;
} CCSPlayer_PingServices;

inline struct CEconItemAttributeOffsets {
	DWORD m_iAttributeDefinitionIndex;
	DWORD m_flValue;
	DWORD m_flInitialValue;
	DWORD m_nRefundableCurrency;
	DWORD m_bSetBonus;
} CEconItemAttribute;

inline struct C_EnvWindSharedOffsets {
	DWORD m_flStartTime;
	DWORD m_iWindSeed;
	DWORD m_iMinWind;
	DWORD m_iMaxWind;
	DWORD m_windRadius;
	DWORD m_iMinGust;
	DWORD m_iMaxGust;
	DWORD m_flMinGustDelay;
	DWORD m_flMaxGustDelay;
	DWORD m_flGustDuration;
	DWORD m_iGustDirChange;
	DWORD m_iInitialWindDir;
	DWORD m_flInitialWindSpeed;
	DWORD m_location;
	DWORD m_hEntOwner;
} C_EnvWindShared;

inline struct C_SkyCameraOffsets {
	DWORD m_skyboxData;
	DWORD m_skyboxSlotToken;
	DWORD m_bUseAngles;
	DWORD m_pNext;
} C_SkyCamera;

inline struct CPulseCell_BaseOffsets {
	DWORD m_nEditorNodeID;
} CPulseCell_Base;

inline struct C_EnvCubemapFogOffsets {
	DWORD m_flEndDistance;
	DWORD m_flStartDistance;
	DWORD m_flFogFalloffExponent;
	DWORD m_bHeightFogEnabled;
	DWORD m_flFogHeightWidth;
	DWORD m_flFogHeightEnd;
	DWORD m_flFogHeightStart;
	DWORD m_flFogHeightExponent;
	DWORD m_flLODBias;
	DWORD m_bActive;
	DWORD m_bStartDisabled;
	DWORD m_flFogMaxOpacity;
	DWORD m_nCubemapSourceType;
	DWORD m_hSkyMaterial;
	DWORD m_iszSkyEntity;
	DWORD m_hFogCubemapTexture;
	DWORD m_bHasHeightFogEnd;
	DWORD m_bFirstTime;
} C_EnvCubemapFog;

inline struct C_BaseFlex__Emphasized_PhonemeOffsets {
	DWORD m_sClassName;
	DWORD m_flAmount;
	DWORD m_bRequired;
	DWORD m_bBasechecked;
	DWORD m_bValid;
} C_BaseFlex__Emphasized_Phoneme;

inline struct C_BulletHitModelOffsets {
	DWORD m_matLocal;
	DWORD m_iBoneIndex;
	DWORD m_hPlayerParent;
	DWORD m_bIsHit;
	DWORD m_flTimeCreated;
	DWORD m_vecStartPos;
} C_BulletHitModel;

inline struct C_FuncElectrifiedVolumeOffsets {
	DWORD m_nAmbientEffect;
	DWORD m_EffectName;
	DWORD m_bState;
} C_FuncElectrifiedVolume;

inline struct C_MapVetoPickControllerOffsets {
	DWORD m_nDraftType;
	DWORD m_nTeamWinningCoinToss;
	DWORD m_nTeamWithFirstChoice;
	DWORD m_nVoteMapIdsList;
	DWORD m_nAccountIDs;
	DWORD m_nMapId0;
	DWORD m_nMapId1;
	DWORD m_nMapId2;
	DWORD m_nMapId3;
	DWORD m_nMapId4;
	DWORD m_nMapId5;
	DWORD m_nStartingSide0;
	DWORD m_nCurrentPhase;
	DWORD m_nPhaseStartTick;
	DWORD m_nPhaseDurationTicks;
	DWORD m_nPostDataUpdateTick;
	DWORD m_bDisabledHud;
} C_MapVetoPickController;

inline struct CPointOffScreenIndicatorUiOffsets {
	DWORD m_bBeenEnabled;
	DWORD m_bHide;
	DWORD m_flSeenTargetTime;
	DWORD m_pTargetPanel;
} CPointOffScreenIndicatorUi;

inline struct C_PostProcessingVolumeOffsets {
	DWORD m_hPostSettings;
	DWORD m_flFadeDuration;
	DWORD m_flMinLogExposure;
	DWORD m_flMaxLogExposure;
	DWORD m_flMinExposure;
	DWORD m_flMaxExposure;
	DWORD m_flExposureCompensation;
	DWORD m_flExposureFadeSpeedUp;
	DWORD m_flExposureFadeSpeedDown;
	DWORD m_flTonemapEVSmoothingRange;
	DWORD m_bMaster;
	DWORD m_bExposureControl;
} C_PostProcessingVolume;

inline struct C_CSPlayerPawnBaseOffsets {
	DWORD m_pPingServices;
	DWORD m_previousPlayerState;
	DWORD m_iPlayerState;
	DWORD m_bHasMovedSinceSpawn;
	DWORD m_flLastSpawnTimeIndex;
	DWORD m_iProgressBarDuration;
	DWORD m_flProgressBarStartTime;
	DWORD m_flClientDeathTime;
	DWORD m_flFlashBangTime;
	DWORD m_flFlashScreenshotAlpha;
	DWORD m_flFlashOverlayAlpha;
	DWORD m_bFlashBuildUp;
	DWORD m_bFlashDspHasBeenCleared;
	DWORD m_bFlashScreenshotHasBeenGrabbed;
	DWORD m_flFlashMaxAlpha;
	DWORD m_flFlashDuration;
	DWORD m_flClientHealthFadeChangeTimestamp;
	DWORD m_nClientHealthFadeParityValue;
	DWORD m_fNextThinkPushAway;
	DWORD m_flCurrentMusicStartTime;
	DWORD m_flMusicRoundStartTime;
	DWORD m_bDeferStartMusicOnWarmup;
	DWORD m_flLastSmokeOverlayAlpha;
	DWORD m_flLastSmokeAge;
	DWORD m_vLastSmokeOverlayColor;
	DWORD m_hOriginalController;
} C_CSPlayerPawnBase;

inline struct C_C4Offsets {
	DWORD m_activeLightParticleIndex;
	DWORD m_eActiveLightEffect;
	DWORD m_bStartedArming;
	DWORD m_fArmedTime;
	DWORD m_bBombPlacedAnimation;
	DWORD m_bIsPlantingViaUse;
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
	DWORD m_bPlayedArmingBeeps;
	DWORD m_bBombPlanted;
} C_C4;

inline struct CPrecipitationVDataOffsets {
	DWORD m_szParticlePrecipitationEffect;
	DWORD m_flInnerDistance;
	DWORD m_nAttachType;
	DWORD m_bBatchSameVolumeType;
	DWORD m_nRTEnvCP;
	DWORD m_nRTEnvCPComponent;
	DWORD m_szModifier;
} CPrecipitationVData;

inline struct C_RetakeGameRulesOffsets {
	DWORD m_nMatchSeed;
	DWORD m_bBlockersPresent;
	DWORD m_bRoundInProgress;
	DWORD m_iFirstSecondHalfRound;
	DWORD m_iBombSite;
	DWORD m_hBombPlanter;
} C_RetakeGameRules;

inline struct CPulseCell_WaitForObservableOffsets {
	DWORD m_Condition;
	DWORD m_OnTrue;
} CPulseCell_WaitForObservable;

inline struct C_BaseButtonOffsets {
	DWORD m_glowEntity;
	DWORD m_usable;
	DWORD m_szDisplayText;
} C_BaseButton;

inline struct CCSObserver_ObserverServicesOffsets {
	DWORD m_obsInterpState;
} CCSObserver_ObserverServices;

inline struct CHitboxComponentOffsets {
	DWORD m_flBoundsExpandRadius;
} CHitboxComponent;

inline struct C_EnvVolumetricFogControllerOffsets {
	DWORD m_flScattering;
	DWORD m_TintColor;
	DWORD m_flAnisotropy;
	DWORD m_flFadeSpeed;
	DWORD m_flDrawDistance;
	DWORD m_flFadeInStart;
	DWORD m_flFadeInEnd;
	DWORD m_flIndirectStrength;
	DWORD m_nVolumeDepth;
	DWORD m_fFirstVolumeSliceThickness;
	DWORD m_nIndirectTextureDimX;
	DWORD m_nIndirectTextureDimY;
	DWORD m_nIndirectTextureDimZ;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bActive;
	DWORD m_flStartAnisoTime;
	DWORD m_flStartScatterTime;
	DWORD m_flStartDrawDistanceTime;
	DWORD m_flStartAnisotropy;
	DWORD m_flStartScattering;
	DWORD m_flStartDrawDistance;
	DWORD m_flDefaultAnisotropy;
	DWORD m_flDefaultScattering;
	DWORD m_flDefaultDrawDistance;
	DWORD m_bStartDisabled;
	DWORD m_bEnableIndirect;
	DWORD m_bIsMaster;
	DWORD m_hFogIndirectTexture;
	DWORD m_nForceRefreshCount;
	DWORD m_fNoiseSpeed;
	DWORD m_fNoiseStrength;
	DWORD m_vNoiseScale;
	DWORD m_fWindSpeed;
	DWORD m_vWindDirection;
	DWORD m_bFirstTime;
} C_EnvVolumetricFogController;

inline struct CPulseGraphDefOffsets {
	DWORD m_DomainIdentifier;
	DWORD m_DomainSubType;
	DWORD m_ParentMapName;
	DWORD m_ParentXmlName;
	DWORD m_Chunks;
	DWORD m_Cells;
	DWORD m_Vars;
	DWORD m_PublicOutputs;
	DWORD m_InvokeBindings;
	DWORD m_CallInfos;
	DWORD m_Constants;
	DWORD m_DomainValues;
	DWORD m_BlackboardReferences;
	DWORD m_OutputConnections;
} CPulseGraphDef;

inline struct C_EnvWindVolumeOffsets {
	DWORD m_bActive;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bStartDisabled;
	DWORD m_nShape;
	DWORD m_fWindSpeedMultiplier;
	DWORD m_fWindTurbulenceMultiplier;
	DWORD m_fWindSpeedVariationMultiplier;
	DWORD m_fWindDirectionVariationMultiplier;
} C_EnvWindVolume;

inline struct CPointChildModifierOffsets {
	DWORD m_bOrphanInsteadOfDeletingChildrenOnRemove;
} CPointChildModifier;

inline struct C_CSGO_TeamPreviewCameraOffsets {
	DWORD m_nVariant;
} C_CSGO_TeamPreviewCamera;

inline struct CInfoDynamicShadowHintBoxOffsets {
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
} CInfoDynamicShadowHintBox;

inline struct CBaseAnimGraphControllerOffsets {
	DWORD m_animGraphNetworkedVars;
	DWORD m_bSequenceFinished;
	DWORD m_flSoundSyncTime;
	DWORD m_nActiveIKChainMask;
	DWORD m_hSequence;
	DWORD m_flSeqStartTime;
	DWORD m_flSeqFixedCycle;
	DWORD m_nAnimLoopMode;
	DWORD m_flPlaybackRate;
	DWORD m_nNotifyState;
	DWORD m_bNetworkedAnimationInputsChanged;
	DWORD m_bNetworkedSequenceChanged;
	DWORD m_bLastUpdateSkipped;
	DWORD m_flPrevAnimUpdateTime;
	DWORD m_hGraphDefinitionAG2;
	DWORD m_bIsUsingAG2;
	DWORD m_serializedPoseRecipeAG2;
	DWORD m_nSerializePoseRecipeSizeAG2;
	DWORD m_nSerializePoseRecipeVersionAG2;
	DWORD m_nGraphCreationFlagsAG2;
	DWORD m_nServerGraphDefReloadCountAG2;
	DWORD m_nServerSerializationContextIteration;
} CBaseAnimGraphController;

inline struct C_ColorCorrectionOffsets {
	DWORD m_vecOrigin;
	DWORD m_MinFalloff;
	DWORD m_MaxFalloff;
	DWORD m_flFadeInDuration;
	DWORD m_flFadeOutDuration;
	DWORD m_flMaxWeight;
	DWORD m_flCurWeight;
	DWORD m_netlookupFilename;
	DWORD m_bEnabled;
	DWORD m_bMaster;
	DWORD m_bClientSide;
	DWORD m_bExclusive;
	DWORD m_bEnabledOnClient;
	DWORD m_flCurWeightOnClient;
	DWORD m_bFadingIn;
	DWORD m_flFadeStartWeight;
	DWORD m_flFadeStartTime;
	DWORD m_flFadeDuration;
} C_ColorCorrection;

inline struct CBuoyancyHelperOffsets {
	DWORD m_nFluidType;
	DWORD m_flFluidDensity;
	DWORD m_flNeutrallyBuoyantGravity;
	DWORD m_flNeutrallyBuoyantLinearDamping;
	DWORD m_flNeutrallyBuoyantAngularDamping;
	DWORD m_bNeutrallyBuoyant;
	DWORD m_vecFractionOfWheelSubmergedForWheelFriction;
	DWORD m_vecWheelFrictionScales;
	DWORD m_vecFractionOfWheelSubmergedForWheelDrag;
	DWORD m_vecWheelDrag;
} CBuoyancyHelper;

inline struct CBodyComponentPointOffsets {
	DWORD m_sceneNode;
} CBodyComponentPoint;

inline struct C_EconItemViewOffsets {
	DWORD m_bInventoryImageRgbaRequested;
	DWORD m_bInventoryImageTriedCache;
	DWORD m_nInventoryImageRgbaWidth;
	DWORD m_nInventoryImageRgbaHeight;
	DWORD m_szCurrentLoadCachedFileName;
	DWORD m_bRestoreCustomMaterialAfterPrecache;
	DWORD m_iItemDefinitionIndex;
	DWORD m_iEntityQuality;
	DWORD m_iEntityLevel;
	DWORD m_iItemID;
	DWORD m_iItemIDHigh;
	DWORD m_iItemIDLow;
	DWORD m_iAccountID;
	DWORD m_iInventoryPosition;
	DWORD m_bInitialized;
	DWORD m_bDisallowSOC;
	DWORD m_bIsStoreItem;
	DWORD m_bIsTradeItem;
	DWORD m_iEntityQuantity;
	DWORD m_iRarityOverride;
	DWORD m_iQualityOverride;
	DWORD m_iOriginOverride;
	DWORD m_ubStyleOverride;
	DWORD m_unClientFlags;
	DWORD m_AttributeList;
	DWORD m_NetworkedDynamicAttributes;
	DWORD m_szCustomName;
	DWORD m_szCustomNameOverride;
	DWORD m_bInitializedTags;
} C_EconItemView;

inline struct CPulseCell_Timeline__TimelineEvent_tOffsets {
	DWORD m_flTimeFromPrevious;
	DWORD m_EventOutflow;
} CPulseCell_Timeline__TimelineEvent_t;

inline struct IntervalTimerOffsets {
	DWORD m_timestamp;
	DWORD m_nWorldGroupId;
} IntervalTimer;

inline struct audioparams_tOffsets {
	DWORD localSound;
	DWORD soundscapeIndex;
	DWORD localBits;
	DWORD soundscapeEntityListIndex;
	DWORD soundEventHash;
} audioparams_t;

inline struct C_CSWeaponBaseOffsets {
	DWORD m_iWeaponGameplayAnimState;
	DWORD m_flWeaponGameplayAnimStateTimestamp;
	DWORD m_flInspectCancelCompleteTime;
	DWORD m_bInspectPending;
	DWORD m_bInspectShouldLoop;
	DWORD m_flCrosshairDistance;
	DWORD m_iAmmoLastCheck;
	DWORD m_nLastEmptySoundCmdNum;
	DWORD m_bFireOnEmpty;
	DWORD m_OnPlayerPickup;
	DWORD m_weaponMode;
	DWORD m_flTurningInaccuracyDelta;
	DWORD m_vecTurningInaccuracyEyeDirLast;
	DWORD m_flTurningInaccuracy;
	DWORD m_fAccuracyPenalty;
	DWORD m_flLastAccuracyUpdateTime;
	DWORD m_fAccuracySmoothedForZoom;
	DWORD m_iRecoilIndex;
	DWORD m_flRecoilIndex;
	DWORD m_bBurstMode;
	DWORD m_flLastBurstModeChangeTime;
	DWORD m_nPostponeFireReadyTicks;
	DWORD m_flPostponeFireReadyFrac;
	DWORD m_bInReload;
	DWORD m_flDroppedAtTime;
	DWORD m_bIsHauledBack;
	DWORD m_bSilencerOn;
	DWORD m_flTimeSilencerSwitchComplete;
	DWORD m_iOriginalTeamNumber;
	DWORD m_iMostRecentTeamNumber;
	DWORD m_bDroppedNearBuyZone;
	DWORD m_flNextAttackRenderTimeOffset;
	DWORD m_bClearWeaponIdentifyingUGC;
	DWORD m_bVisualsDataSet;
	DWORD m_bUIWeapon;
	DWORD m_nCustomEconReloadEventId;
	DWORD m_nextPrevOwnerUseTime;
	DWORD m_hPrevOwner;
	DWORD m_nDropTick;
	DWORD m_bWasActiveWeaponWhenDropped;
	DWORD m_donated;
	DWORD m_fLastShotTime;
	DWORD m_bWasOwnedByCT;
	DWORD m_bWasOwnedByTerrorist;
	DWORD m_flNextClientFireBulletTime;
	DWORD m_flNextClientFireBulletTime_Repredict;
	DWORD m_IronSightController;
	DWORD m_iIronSightMode;
	DWORD m_flLastLOSTraceFailureTime;
	DWORD m_flWatTickOffset;
	DWORD m_flLastShakeTime;
} C_CSWeaponBase;

inline struct CTimelineOffsets {
	DWORD m_flValues;
	DWORD m_nValueCounts;
	DWORD m_nBucketCount;
	DWORD m_flInterval;
	DWORD m_flFinalValue;
	DWORD m_nCompressionType;
	DWORD m_bStopped;
} CTimeline;

inline struct FilterHealthOffsets {
	DWORD m_bAdrenalineActive;
	DWORD m_iHealthMin;
	DWORD m_iHealthMax;
} FilterHealth;

inline struct C_PointClientUIHUDOffsets {
	DWORD m_bCheckCSSClasses;
	DWORD m_bIgnoreInput;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDPI;
	DWORD m_flInteractDistance;
	DWORD m_flDepthOffset;
	DWORD m_unOwnerContext;
	DWORD m_unHorizontalAlign;
	DWORD m_unVerticalAlign;
	DWORD m_unOrientation;
	DWORD m_bAllowInteractionFromAllSceneWorlds;
	DWORD m_vecCSSClasses;
} C_PointClientUIHUD;

inline struct CPulseCell_Inflow_GraphHookOffsets {
	DWORD m_HookName;
} CPulseCell_Inflow_GraphHook;

inline struct C_KeychainModuleOffsets {
	DWORD m_nKeychainDefID;
	DWORD m_nKeychainSeed;
} C_KeychainModule;

inline struct CFuncWaterOffsets {
	DWORD m_BuoyancyHelper;
} CFuncWater;

inline struct CCSGameModeRulesOffsets {
	DWORD __m_pChainEntity;
} CCSGameModeRules;

inline struct C_CSObserverPawnOffsets {
	DWORD m_hDetectParentChange;
} C_CSObserverPawn;

inline struct ViewAngleServerChange_tOffsets {
	DWORD nType;
	DWORD qAngle;
	DWORD nIndex;
} ViewAngleServerChange_t;

inline struct CCSPlayerBase_CameraServicesOffsets {
	DWORD m_iFOV;
	DWORD m_iFOVStart;
	DWORD m_flFOVTime;
	DWORD m_flFOVRate;
	DWORD m_hZoomOwner;
	DWORD m_flLastShotFOV;
} CCSPlayerBase_CameraServices;

inline struct CPulseCell_Inflow_BaseEntrypointOffsets {
	DWORD m_EntryChunk;
	DWORD m_RegisterMap;
} CPulseCell_Inflow_BaseEntrypoint;

inline struct C_HostageOffsets {
	DWORD m_entitySpottedState;
	DWORD m_leader;
	DWORD m_reuseTimer;
	DWORD m_vel;
	DWORD m_isRescued;
	DWORD m_jumpedThisFrame;
	DWORD m_nHostageState;
	DWORD m_bHandsHaveBeenCut;
	DWORD m_hHostageGrabber;
	DWORD m_fLastGrabTime;
	DWORD m_vecGrabbedPos;
	DWORD m_flRescueStartTime;
	DWORD m_flGrabSuccessTime;
	DWORD m_flDropStartTime;
	DWORD m_flDeadOrRescuedTime;
	DWORD m_blinkTimer;
	DWORD m_lookAt;
	DWORD m_lookAroundTimer;
	DWORD m_isInit;
	DWORD m_eyeAttachment;
	DWORD m_chestAttachment;
	DWORD m_pPredictionOwner;
	DWORD m_fNewestAlphaThinkTime;
} C_Hostage;

inline struct CPlayer_ObserverServicesOffsets {
	DWORD m_iObserverMode;
	DWORD m_hObserverTarget;
	DWORD m_iObserverLastMode;
	DWORD m_bForcedObserverMode;
	DWORD m_flObserverChaseDistance;
	DWORD m_flObserverChaseDistanceCalcTime;
} CPlayer_ObserverServices;

inline struct C_BasePlayerWeaponOffsets {
	DWORD m_nNextPrimaryAttackTick;
	DWORD m_flNextPrimaryAttackTickRatio;
	DWORD m_nNextSecondaryAttackTick;
	DWORD m_flNextSecondaryAttackTickRatio;
	DWORD m_iClip1;
	DWORD m_iClip2;
	DWORD m_pReserveAmmo;
} C_BasePlayerWeapon;

inline struct CRagdollManagerOffsets {
	DWORD m_iCurrentMaxRagdollCount;
} CRagdollManager;

inline struct C_CSGO_MapPreviewCameraPathOffsets {
	DWORD m_flZFar;
	DWORD m_flZNear;
	DWORD m_bLoop;
	DWORD m_bVerticalFOV;
	DWORD m_bConstantSpeed;
	DWORD m_flDuration;
	DWORD m_flPathLength;
	DWORD m_flPathDuration;
	DWORD m_bDofEnabled;
	DWORD m_flDofNearBlurry;
	DWORD m_flDofNearCrisp;
	DWORD m_flDofFarCrisp;
	DWORD m_flDofFarBlurry;
	DWORD m_flDofTiltToGround;
} C_CSGO_MapPreviewCameraPath;

inline struct C_RopeKeyframeOffsets {
	DWORD m_LinksTouchingSomething;
	DWORD m_nLinksTouchingSomething;
	DWORD m_bApplyWind;
	DWORD m_fPrevLockedPoints;
	DWORD m_iForcePointMoveCounter;
	DWORD m_bPrevEndPointPos;
	DWORD m_vPrevEndPointPos;
	DWORD m_flCurScroll;
	DWORD m_flScrollSpeed;
	DWORD m_RopeFlags;
	DWORD m_iRopeMaterialModelIndex;
	DWORD m_nSegments;
	DWORD m_hStartPoint;
	DWORD m_hEndPoint;
	DWORD m_iStartAttachment;
	DWORD m_iEndAttachment;
	DWORD m_Subdiv;
	DWORD m_RopeLength;
	DWORD m_Slack;
	DWORD m_TextureScale;
	DWORD m_fLockedPoints;
	DWORD m_nChangeCount;
	DWORD m_Width;
	DWORD m_PhysicsDelegate;
	DWORD m_hMaterial;
	DWORD m_TextureHeight;
	DWORD m_vecImpulse;
	DWORD m_vecPreviousImpulse;
	DWORD m_flCurrentGustTimer;
	DWORD m_flCurrentGustLifetime;
	DWORD m_flTimeToNextGust;
	DWORD m_vWindDir;
	DWORD m_vColorMod;
	DWORD m_vCachedEndPointAttachmentPos;
	DWORD m_vCachedEndPointAttachmentAngle;
	DWORD m_bConstrainBetweenEndpoints;
	DWORD m_bEndPointAttachmentPositionsDirty;
	DWORD m_bEndPointAttachmentAnglesDirty;
	DWORD m_bNewDataThisFrame;
	DWORD m_bPhysicsInitted;
} C_RopeKeyframe;

inline struct C_SoundEventOBBEntityOffsets {
	DWORD m_vMins;
	DWORD m_vMaxs;
} C_SoundEventOBBEntity;

inline struct CEntityInstanceOffsets {
	DWORD m_iszPrivateVScripts;
	DWORD m_pEntity;
	DWORD m_CScriptComponent;
} CEntityInstance;

inline struct C_EnvCombinedLightProbeVolumeOffsets {
	DWORD m_Entity_Color;
	DWORD m_Entity_flBrightness;
	DWORD m_Entity_hCubemapTexture;
	DWORD m_Entity_bCustomCubemapTexture;
	DWORD m_Entity_hLightProbeTexture_AmbientCube;
	DWORD m_Entity_hLightProbeTexture_SDF;
	DWORD m_Entity_hLightProbeTexture_SH2_DC;
	DWORD m_Entity_hLightProbeTexture_SH2_R;
	DWORD m_Entity_hLightProbeTexture_SH2_G;
	DWORD m_Entity_hLightProbeTexture_SH2_B;
	DWORD m_Entity_hLightProbeDirectLightIndicesTexture;
	DWORD m_Entity_hLightProbeDirectLightScalarsTexture;
	DWORD m_Entity_hLightProbeDirectLightShadowsTexture;
	DWORD m_Entity_vBoxMins;
	DWORD m_Entity_vBoxMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nEnvCubeMapArrayIndex;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_flEdgeFadeDist;
	DWORD m_Entity_vEdgeFadeDists;
	DWORD m_Entity_nLightProbeSizeX;
	DWORD m_Entity_nLightProbeSizeY;
	DWORD m_Entity_nLightProbeSizeZ;
	DWORD m_Entity_nLightProbeAtlasX;
	DWORD m_Entity_nLightProbeAtlasY;
	DWORD m_Entity_nLightProbeAtlasZ;
	DWORD m_Entity_bEnabled;
} C_EnvCombinedLightProbeVolume;

inline struct C_BaseEntityOffsets {
	DWORD m_CBodyComponent;
	DWORD m_NetworkTransmitComponent;
	DWORD m_nLastThinkTick;
	DWORD m_pGameSceneNode;
	DWORD m_pRenderComponent;
	DWORD m_pCollision;
	DWORD m_iMaxHealth;
	DWORD m_iHealth;
	DWORD m_flDamageAccumulator;
	DWORD m_lifeState;
	DWORD m_bTakesDamage;
	DWORD m_nTakeDamageFlags;
	DWORD m_nPlatformType;
	DWORD m_ubInterpolationFrame;
	DWORD m_hSceneObjectController;
	DWORD m_nNoInterpolationTick;
	DWORD m_nVisibilityNoInterpolationTick;
	DWORD m_flProxyRandomValue;
	DWORD m_iEFlags;
	DWORD m_nWaterType;
	DWORD m_bInterpolateEvenWithNoModel;
	DWORD m_bPredictionEligible;
	DWORD m_bApplyLayerMatchIDToModel;
	DWORD m_tokLayerMatchID;
	DWORD m_nSubclassID;
	DWORD m_nSimulationTick;
	DWORD m_iCurrentThinkContext;
	DWORD m_aThinkFunctions;
	DWORD m_bDisabledContextThinks;
	DWORD m_flAnimTime;
	DWORD m_flSimulationTime;
	DWORD m_nSceneObjectOverrideFlags;
	DWORD m_bHasSuccessfullyInterpolated;
	DWORD m_bHasAddedVarsToInterpolation;
	DWORD m_bRenderEvenWhenNotSuccessfullyInterpolated;
	DWORD m_nInterpolationLatchDirtyFlags;
	DWORD m_ListEntry;
	DWORD m_flCreateTime;
	DWORD m_flSpeed;
	DWORD m_EntClientFlags;
	DWORD m_bClientSideRagdoll;
	DWORD m_iTeamNum;
	DWORD m_spawnflags;
	DWORD m_nNextThinkTick;
	DWORD m_fFlags;
	DWORD m_vecAbsVelocity;
	DWORD m_vecServerVelocity;
	DWORD m_vecVelocity;
	DWORD m_vecBaseVelocity;
	DWORD m_hEffectEntity;
	DWORD m_hOwnerEntity;
	DWORD m_MoveCollide;
	DWORD m_MoveType;
	DWORD m_nActualMoveType;
	DWORD m_flWaterLevel;
	DWORD m_fEffects;
	DWORD m_hGroundEntity;
	DWORD m_nGroundBodyIndex;
	DWORD m_flFriction;
	DWORD m_flElasticity;
	DWORD m_flGravityScale;
	DWORD m_flTimeScale;
	DWORD m_bAnimatedEveryTick;
	DWORD m_bGravityDisabled;
	DWORD m_flNavIgnoreUntilTime;
	DWORD m_hThink;
	DWORD m_fBBoxVisFlags;
	DWORD m_flActualGravityScale;
	DWORD m_bGravityActuallyDisabled;
	DWORD m_bPredictable;
	DWORD m_bRenderWithViewModels;
	DWORD m_nFirstPredictableCommand;
	DWORD m_nLastPredictableCommand;
	DWORD m_hOldMoveParent;
	DWORD m_Particles;
	DWORD m_vecAngVelocity;
	DWORD m_DataChangeEventRef;
	DWORD m_dependencies;
	DWORD m_nCreationTick;
	DWORD m_bAnimTimeChanged;
	DWORD m_bSimulationTimeChanged;
	DWORD m_sUniqueHammerID;
	DWORD m_nBloodType;
} C_BaseEntity;

inline struct ActiveModelConfig_tOffsets {
	DWORD m_Handle;
	DWORD m_Name;
	DWORD m_AssociatedEntities;
	DWORD m_AssociatedEntityNames;
} ActiveModelConfig_t;

inline struct CEnvSoundscapeProxyOffsets {
	DWORD m_MainSoundscapeName;
} CEnvSoundscapeProxy;

inline struct C_SoundEventEntityOffsets {
	DWORD m_bStartOnSpawn;
	DWORD m_bToLocalPlayer;
	DWORD m_bStopOnNew;
	DWORD m_bSaveRestore;
	DWORD m_bSavedIsPlaying;
	DWORD m_flSavedElapsedTime;
	DWORD m_iszSourceEntityName;
	DWORD m_iszAttachmentName;
	DWORD m_onGUIDChanged;
	DWORD m_onSoundFinished;
	DWORD m_flClientCullRadius;
	DWORD m_iszSoundName;
	DWORD m_hSource;
	DWORD m_nEntityIndexSelection;
	DWORD m_bClientSideOnly;
} C_SoundEventEntity;

inline struct CPulseCell_Inflow_EventHandlerOffsets {
	DWORD m_EventName;
} CPulseCell_Inflow_EventHandler;

inline struct C_KnifeOffsets {
	DWORD m_bFirstAttack;
} C_Knife;

inline struct CSkeletonInstanceOffsets {
	DWORD m_modelState;
	DWORD m_bIsAnimationEnabled;
	DWORD m_bUseParentRenderBounds;
	DWORD m_bDisableSolidCollisionsForHierarchy;
	DWORD m_bDirtyMotionType;
	DWORD m_bIsGeneratingLatchedParentSpaceState;
	DWORD m_materialGroup;
	DWORD m_nHitboxSet;
} CSkeletonInstance;

inline struct CPulseCell_Outflow_CycleShuffled__InstanceState_tOffsets {
	DWORD m_Shuffle;
	DWORD m_nNextShuffle;
} CPulseCell_Outflow_CycleShuffled__InstanceState_t;

inline struct CPulseCell_BaseLerp__CursorState_tOffsets {
	DWORD m_StartTime;
	DWORD m_EndTime;
} CPulseCell_BaseLerp__CursorState_t;

inline struct C_BaseClientUIEntityOffsets {
	DWORD m_bEnabled;
	DWORD m_DialogXMLName;
	DWORD m_PanelClassName;
	DWORD m_PanelID;
} C_BaseClientUIEntity;

inline struct CPulseCell_WaitForCursorsWithTagBase__CursorState_tOffsets {
	DWORD m_TagName;
} CPulseCell_WaitForCursorsWithTagBase__CursorState_t;

inline struct CBasePropOffsets {
	DWORD m_bModelOverrodeBlockLOS;
	DWORD m_iShapeType;
	DWORD m_bConformToCollisionBounds;
	DWORD m_mPreferredCatchTransform;
} CBaseProp;

inline struct CInfoOffscreenPanoramaTextureOffsets {
	DWORD m_bDisabled;
	DWORD m_nResolutionX;
	DWORD m_nResolutionY;
	DWORD m_szLayoutFileName;
	DWORD m_RenderAttrName;
	DWORD m_TargetEntities;
	DWORD m_nTargetChangeCount;
	DWORD m_vecCSSClasses;
	DWORD m_bCheckCSSClasses;
} CInfoOffscreenPanoramaTexture;

inline struct C_BaseCSGrenadeOffsets {
	DWORD m_bClientPredictDelete;
	DWORD m_bRedraw;
	DWORD m_bIsHeldByPlayer;
	DWORD m_bPinPulled;
	DWORD m_bJumpThrow;
	DWORD m_bThrowAnimating;
	DWORD m_fThrowTime;
	DWORD m_flThrowStrength;
	DWORD m_fDropTime;
	DWORD m_fPinPullTime;
	DWORD m_bJustPulledPin;
	DWORD m_nNextHoldTick;
	DWORD m_flNextHoldFrac;
	DWORD m_hSwitchToWeaponAfterThrow;
} C_BaseCSGrenade;

inline struct CFilterAttributeIntOffsets {
	DWORD m_sAttributeName;
} CFilterAttributeInt;

inline struct CPointTemplateOffsets {
	DWORD m_iszWorldName;
	DWORD m_iszSource2EntityLumpName;
	DWORD m_iszEntityFilterName;
	DWORD m_flTimeoutInterval;
	DWORD m_bAsynchronouslySpawnEntities;
	DWORD m_clientOnlyEntityBehavior;
	DWORD m_ownerSpawnGroupType;
	DWORD m_createdSpawnGroupHandles;
	DWORD m_SpawnedEntityHandles;
	DWORD m_ScriptSpawnCallback;
	DWORD m_ScriptCallbackScope;
} CPointTemplate;

inline struct C_WeaponBaseItemOffsets {
	DWORD m_bSequenceInProgress;
	DWORD m_bRedraw;
} C_WeaponBaseItem;

inline struct PhysicsRagdollPose_tOffsets {
	DWORD m_Transforms;
	DWORD m_hOwner;
	DWORD m_bSetFromDebugHistory;
} PhysicsRagdollPose_t;

inline struct CPropDataComponentOffsets {
	DWORD m_flDmgModBullet;
	DWORD m_flDmgModClub;
	DWORD m_flDmgModExplosive;
	DWORD m_flDmgModFire;
	DWORD m_iszPhysicsDamageTableName;
	DWORD m_iszBasePropData;
	DWORD m_nInteractions;
	DWORD m_bSpawnMotionDisabled;
	DWORD m_nDisableTakePhysicsDamageSpawnFlag;
	DWORD m_nMotionDisabledSpawnFlag;
} CPropDataComponent;

inline struct C_WeaponCZ75aOffsets {
	DWORD m_bMagazineRemoved;
} C_WeaponCZ75a;

inline struct CDestructiblePartsComponentOffsets {
	DWORD __m_pChainEntity;
	DWORD m_vecDamageTakenByHitGroup;
	DWORD m_hOwner;
	DWORD m_nLastHitDamageLevel;
} CDestructiblePartsComponent;

inline struct CCSPlayerController_ActionTrackingServicesOffsets {
	DWORD m_perRoundStats;
	DWORD m_matchStats;
	DWORD m_iNumRoundKills;
	DWORD m_iNumRoundKillsHeadshots;
	DWORD m_flTotalRoundDamageDealt;
} CCSPlayerController_ActionTrackingServices;

inline struct CBodyComponentBaseAnimGraphOffsets {
	DWORD m_animationController;
} CBodyComponentBaseAnimGraph;

inline struct C_TriggerBuoyancyOffsets {
	DWORD m_BuoyancyHelper;
	DWORD m_flFluidDensity;
} C_TriggerBuoyancy;

inline struct CPlayer_MovementServices_HumanoidOffsets {
	DWORD m_flStepSoundTime;
	DWORD m_flFallVelocity;
	DWORD m_bInCrouch;
	DWORD m_nCrouchState;
	DWORD m_flCrouchTransitionStartTime;
	DWORD m_bDucked;
	DWORD m_bDucking;
	DWORD m_bInDuckJump;
	DWORD m_groundNormal;
	DWORD m_flSurfaceFriction;
	DWORD m_surfaceProps;
	DWORD m_nStepside;
} CPlayer_MovementServices_Humanoid;

inline struct C_BaseDoorOffsets {
	DWORD m_bIsUsable;
} C_BaseDoor;

inline struct CSMatchStats_tOffsets {
	DWORD m_iEnemy5Ks;
	DWORD m_iEnemy4Ks;
	DWORD m_iEnemy3Ks;
	DWORD m_iEnemyKnifeKills;
	DWORD m_iEnemyTaserKills;
} CSMatchStats_t;

inline struct EntityRenderAttribute_tOffsets {
	DWORD m_ID;
	DWORD m_Values;
} EntityRenderAttribute_t;

inline struct CPulseCell_Inflow_ObservableVariableListenerOffsets {
	DWORD m_nBlackboardReference;
	DWORD m_bSelfReference;
} CPulseCell_Inflow_ObservableVariableListener;

inline struct CModelStateOffsets {
	DWORD m_hModel;
	DWORD m_ModelName;
	DWORD m_bClientClothCreationSuppressed;
	DWORD m_MeshGroupMask;
	DWORD m_nBodyGroupChoices;
	DWORD m_nIdealMotionType;
	DWORD m_nForceLOD;
	DWORD m_nClothUpdateFlags;
} CModelState;

inline struct CPulseCell_LerpCameraSettings__CursorState_tOffsets {
	DWORD m_hCamera;
	DWORD m_OverlaidStart;
	DWORD m_OverlaidEnd;
} CPulseCell_LerpCameraSettings__CursorState_t;

inline struct CPulseCell_Outflow_CycleOrderedOffsets {
	DWORD m_Outputs;
} CPulseCell_Outflow_CycleOrdered;

inline struct C_ShatterGlassShardPhysicsOffsets {
	DWORD m_ShardDesc;
} C_ShatterGlassShardPhysics;

inline struct CFilterMassGreaterOffsets {
	DWORD m_fFilterMass;
} CFilterMassGreater;

inline struct C_EntityDissolveOffsets {
	DWORD m_flStartTime;
	DWORD m_flFadeInStart;
	DWORD m_flFadeInLength;
	DWORD m_flFadeOutModelStart;
	DWORD m_flFadeOutModelLength;
	DWORD m_flFadeOutStart;
	DWORD m_flFadeOutLength;
	DWORD m_flNextSparkTime;
	DWORD m_nDissolveType;
	DWORD m_vDissolverOrigin;
	DWORD m_nMagnitude;
	DWORD m_bCoreExplode;
	DWORD m_bLinkedToServerEnt;
} C_EntityDissolve;

inline struct C_ClientRagdollOffsets {
	DWORD m_bFadeOut;
	DWORD m_bImportant;
	DWORD m_flEffectTime;
	DWORD m_gibDespawnTime;
	DWORD m_iCurrentFriction;
	DWORD m_iMinFriction;
	DWORD m_iMaxFriction;
	DWORD m_iFrictionAnimState;
	DWORD m_bReleaseRagdoll;
	DWORD m_iEyeAttachment;
	DWORD m_bFadingOut;
	DWORD m_flScaleEnd;
	DWORD m_flScaleTimeStart;
	DWORD m_flScaleTimeEnd;
} C_ClientRagdoll;

inline struct PulseSelectorOutflowList_tOffsets {
	DWORD m_Outflows;
} PulseSelectorOutflowList_t;

inline struct CCSPlayer_BuyServicesOffsets {
	DWORD m_vecSellbackPurchaseEntries;
} CCSPlayer_BuyServices;

inline struct C_CSTeamOffsets {
	DWORD m_szTeamMatchStat;
	DWORD m_numMapVictories;
	DWORD m_bSurrendered;
	DWORD m_scoreFirstHalf;
	DWORD m_scoreSecondHalf;
	DWORD m_scoreOvertime;
	DWORD m_szClanTeamname;
	DWORD m_iClanID;
	DWORD m_szTeamFlagImage;
	DWORD m_szTeamLogoImage;
} C_CSTeam;

inline struct C_TriggerPhysicsOffsets {
	DWORD m_gravityScale;
	DWORD m_linearLimit;
	DWORD m_linearDamping;
	DWORD m_angularLimit;
	DWORD m_angularDamping;
	DWORD m_linearForce;
	DWORD m_flFrequency;
	DWORD m_flDampingRatio;
	DWORD m_vecLinearForcePointAt;
	DWORD m_bCollapseToForcePoint;
	DWORD m_vecLinearForcePointAtWorld;
	DWORD m_vecLinearForceDirection;
	DWORD m_bConvertToDebrisWhenPossible;
} C_TriggerPhysics;

inline struct C_HandleTestOffsets {
	DWORD m_Handle;
	DWORD m_bSendHandle;
} C_HandleTest;

inline struct CInfoWorldLayerOffsets {
	DWORD m_pOutputOnEntitiesSpawned;
	DWORD m_worldName;
	DWORD m_layerName;
	DWORD m_bWorldLayerVisible;
	DWORD m_bEntitiesSpawned;
	DWORD m_bCreateAsChildSpawnGroup;
	DWORD m_hLayerSpawnGroup;
	DWORD m_bWorldLayerActuallyVisible;
} CInfoWorldLayer;

inline struct FilterDamageTypeOffsets {
	DWORD m_iDamageType;
} FilterDamageType;

inline struct CAttributeListOffsets {
	DWORD m_Attributes;
	DWORD m_pManager;
} CAttributeList;

inline struct CPulseCell_Inflow_WaitOffsets {
	DWORD m_WakeResume;
} CPulseCell_Inflow_Wait;

inline struct C_ParticleSystemOffsets {
	DWORD m_szSnapshotFileName;
	DWORD m_bActive;
	DWORD m_bFrozen;
	DWORD m_flFreezeTransitionDuration;
	DWORD m_nStopType;
	DWORD m_bAnimateDuringGameplayPause;
	DWORD m_iEffectIndex;
	DWORD m_flStartTime;
	DWORD m_flPreSimTime;
	DWORD m_vServerControlPoints;
	DWORD m_iServerControlPointAssignments;
	DWORD m_hControlPointEnts;
	DWORD m_bNoSave;
	DWORD m_bNoFreeze;
	DWORD m_bNoRamp;
	DWORD m_bStartActive;
	DWORD m_iszEffectName;
	DWORD m_iszControlPointNames;
	DWORD m_nDataCP;
	DWORD m_vecDataCPValue;
	DWORD m_nTintCP;
	DWORD m_clrTint;
	DWORD m_bOldActive;
	DWORD m_bOldFrozen;
} C_ParticleSystem;

inline struct CPulseCell_Outflow_CycleShuffledOffsets {
	DWORD m_Outputs;
} CPulseCell_Outflow_CycleShuffled;

inline struct CCSPlayer_ActionTrackingServicesOffsets {
	DWORD m_hLastWeaponBeforeC4AutoSwitch;
	DWORD m_bIsRescuing;
	DWORD m_weaponPurchasesThisMatch;
	DWORD m_weaponPurchasesThisRound;
} CCSPlayer_ActionTrackingServices;

inline struct C_FootstepControlOffsets {
	DWORD m_source;
	DWORD m_destination;
} C_FootstepControl;

inline struct CCitadelSoundOpvarSetOBBOffsets {
	DWORD m_iszStackName;
	DWORD m_iszOperatorName;
	DWORD m_iszOpvarName;
	DWORD m_vDistanceInnerMins;
	DWORD m_vDistanceInnerMaxs;
	DWORD m_vDistanceOuterMins;
	DWORD m_vDistanceOuterMaxs;
	DWORD m_nAABBDirection;
} CCitadelSoundOpvarSetOBB;

inline struct CPulseCell_BooleanSwitchStateOffsets {
	DWORD m_Condition;
	DWORD m_SubGraph;
	DWORD m_WhenTrue;
	DWORD m_WhenFalse;
} CPulseCell_BooleanSwitchState;

inline struct C_EconEntityOffsets {
	DWORD m_flFlexDelayTime;
	DWORD m_flFlexDelayedWeight;
	DWORD m_bAttributesInitialized;
	DWORD m_AttributeManager;
	DWORD m_OriginalOwnerXuidLow;
	DWORD m_OriginalOwnerXuidHigh;
	DWORD m_nFallbackPaintKit;
	DWORD m_nFallbackSeed;
	DWORD m_flFallbackWear;
	DWORD m_nFallbackStatTrak;
	DWORD m_bClientside;
	DWORD m_bParticleSystemsCreated;
	DWORD m_vecAttachedParticles;
	DWORD m_hViewmodelAttachment;
	DWORD m_iOldTeam;
	DWORD m_bAttachmentDirty;
	DWORD m_nUnloadedModelIndex;
	DWORD m_iNumOwnerValidationRetries;
	DWORD m_hOldProvidee;
	DWORD m_vecAttachedModels;
} C_EconEntity;

inline struct CPulseCell_UnknownOffsets {
	DWORD m_UnknownKeys;
} CPulseCell_Unknown;

inline struct CSPerRoundStats_tOffsets {
	DWORD m_iKills;
	DWORD m_iDeaths;
	DWORD m_iAssists;
	DWORD m_iDamage;
	DWORD m_iEquipmentValue;
	DWORD m_iMoneySaved;
	DWORD m_iKillReward;
	DWORD m_iLiveTime;
	DWORD m_iHeadShotKills;
	DWORD m_iObjective;
	DWORD m_iCashEarned;
	DWORD m_iUtilityDamage;
	DWORD m_iEnemiesFlashed;
} CSPerRoundStats_t;

inline struct CPulse_BlackboardReferenceOffsets {
	DWORD m_hBlackboardResource;
	DWORD m_BlackboardResource;
	DWORD m_nNodeID;
	DWORD m_NodeName;
} CPulse_BlackboardReference;

inline struct C_GradientFogOffsets {
	DWORD m_hGradientFogTexture;
	DWORD m_flFogStartDistance;
	DWORD m_flFogEndDistance;
	DWORD m_bHeightFogEnabled;
	DWORD m_flFogStartHeight;
	DWORD m_flFogEndHeight;
	DWORD m_flFarZ;
	DWORD m_flFogMaxOpacity;
	DWORD m_flFogFalloffExponent;
	DWORD m_flFogVerticalExponent;
	DWORD m_fogColor;
	DWORD m_flFogStrength;
	DWORD m_flFadeTime;
	DWORD m_bStartDisabled;
	DWORD m_bIsEnabled;
	DWORD m_bGradientFogNeedsTextures;
} C_GradientFog;

inline struct CCSPlayerController_InGameMoneyServicesOffsets {
	DWORD m_iAccount;
	DWORD m_iStartAccount;
	DWORD m_iTotalCashSpent;
	DWORD m_iCashSpentThisRound;
} CCSPlayerController_InGameMoneyServices;

inline struct CFilterModelOffsets {
	DWORD m_iFilterModel;
} CFilterModel;

inline struct C_SoundAreaEntityOrientedBoxOffsets {
	DWORD m_vMin;
	DWORD m_vMax;
} C_SoundAreaEntityOrientedBox;

inline struct C_CSGO_PreviewPlayerOffsets {
	DWORD m_animgraphCharacterModeString;
	DWORD m_flInitialModelScale;
} C_CSGO_PreviewPlayer;

inline struct C_RectLightOffsets {
	DWORD m_bShowLight;
} C_RectLight;

inline struct C_FuncTrackTrainOffsets {
	DWORD m_nLongAxis;
	DWORD m_flRadius;
	DWORD m_flLineLength;
} C_FuncTrackTrain;

inline struct C_BeamOffsets {
	DWORD m_flFrameRate;
	DWORD m_flHDRColorScale;
	DWORD m_flFireTime;
	DWORD m_flDamage;
	DWORD m_nNumBeamEnts;
	DWORD m_queryHandleHalo;
	DWORD m_hBaseMaterial;
	DWORD m_nHaloIndex;
	DWORD m_nBeamType;
	DWORD m_nBeamFlags;
	DWORD m_hAttachEntity;
	DWORD m_nAttachIndex;
	DWORD m_fWidth;
	DWORD m_fEndWidth;
	DWORD m_fFadeLength;
	DWORD m_fHaloScale;
	DWORD m_fAmplitude;
	DWORD m_fStartFrame;
	DWORD m_fSpeed;
	DWORD m_flFrame;
	DWORD m_nClipStyle;
	DWORD m_bTurnedOff;
	DWORD m_vecEndPos;
	DWORD m_hEndEntity;
} C_Beam;

inline struct C_EnvLightProbeVolumeOffsets {
	DWORD m_Entity_hLightProbeTexture_AmbientCube;
	DWORD m_Entity_hLightProbeTexture_SDF;
	DWORD m_Entity_hLightProbeTexture_SH2_DC;
	DWORD m_Entity_hLightProbeTexture_SH2_R;
	DWORD m_Entity_hLightProbeTexture_SH2_G;
	DWORD m_Entity_hLightProbeTexture_SH2_B;
	DWORD m_Entity_hLightProbeDirectLightIndicesTexture;
	DWORD m_Entity_hLightProbeDirectLightScalarsTexture;
	DWORD m_Entity_hLightProbeDirectLightShadowsTexture;
	DWORD m_Entity_vBoxMins;
	DWORD m_Entity_vBoxMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_nLightProbeSizeX;
	DWORD m_Entity_nLightProbeSizeY;
	DWORD m_Entity_nLightProbeSizeZ;
	DWORD m_Entity_nLightProbeAtlasX;
	DWORD m_Entity_nLightProbeAtlasY;
	DWORD m_Entity_nLightProbeAtlasZ;
	DWORD m_Entity_bEnabled;
} C_EnvLightProbeVolume;

inline struct C_FuncConveyorOffsets {
	DWORD m_vecMoveDirEntitySpace;
	DWORD m_flTargetSpeed;
	DWORD m_nTransitionStartTick;
	DWORD m_nTransitionDurationTicks;
	DWORD m_flTransitionStartSpeed;
	DWORD m_hConveyorModels;
	DWORD m_flCurrentConveyorOffset;
	DWORD m_flCurrentConveyorSpeed;
} C_FuncConveyor;

inline struct C_PlantedC4Offsets {
	DWORD m_bBombTicking;
	DWORD m_nBombSite;
	DWORD m_nSourceSoundscapeHash;
	DWORD m_entitySpottedState;
	DWORD m_flNextGlow;
	DWORD m_flNextBeep;
	DWORD m_flC4Blow;
	DWORD m_bCannotBeDefused;
	DWORD m_bHasExploded;
	DWORD m_flTimerLength;
	DWORD m_bBeingDefused;
	DWORD m_bTriggerWarning;
	DWORD m_bExplodeWarning;
	DWORD m_bC4Activated;
	DWORD m_bTenSecWarning;
	DWORD m_flDefuseLength;
	DWORD m_flDefuseCountDown;
	DWORD m_bBombDefused;
	DWORD m_hBombDefuser;
	DWORD m_AttributeManager;
	DWORD m_hDefuserMultimeter;
	DWORD m_flNextRadarFlashTime;
	DWORD m_bRadarFlash;
	DWORD m_pBombDefuser;
	DWORD m_fLastDefuseTime;
	DWORD m_pPredictionOwner;
	DWORD m_vecC4ExplodeSpectatePos;
	DWORD m_vecC4ExplodeSpectateAng;
	DWORD m_flC4ExplodeSpectateDuration;
} C_PlantedC4;

inline struct C_RagdollPropOffsets {
	DWORD m_ragEnabled;
	DWORD m_ragPos;
	DWORD m_ragAngles;
	DWORD m_flBlendWeight;
	DWORD m_hRagdollSource;
	DWORD m_iEyeAttachment;
	DWORD m_flBlendWeightCurrent;
	DWORD m_parentPhysicsBoneIndices;
	DWORD m_worldSpaceBoneComputationOrder;
} C_RagdollProp;

inline struct CPulse_CallInfoOffsets {
	DWORD m_PortName;
	DWORD m_nEditorNodeID;
	DWORD m_RegisterMap;
	DWORD m_CallMethodID;
	DWORD m_nSrcChunk;
	DWORD m_nSrcInstruction;
} CPulse_CallInfo;

inline struct C_LightEntityOffsets {
	DWORD m_CLightComponent;
} C_LightEntity;

inline struct C_CSGO_MapPreviewCameraPathNodeOffsets {
	DWORD m_szParentPathUniqueID;
	DWORD m_nPathIndex;
	DWORD m_vInTangentLocal;
	DWORD m_vOutTangentLocal;
	DWORD m_flFOV;
	DWORD m_flCameraSpeed;
	DWORD m_flEaseIn;
	DWORD m_flEaseOut;
	DWORD m_vInTangentWorld;
	DWORD m_vOutTangentWorld;
} C_CSGO_MapPreviewCameraPathNode;

inline struct C_CSPlayerResourceOffsets {
	DWORD m_bHostageAlive;
	DWORD m_isHostageFollowingSomeone;
	DWORD m_iHostageEntityIDs;
	DWORD m_bombsiteCenterA;
	DWORD m_bombsiteCenterB;
	DWORD m_hostageRescueX;
	DWORD m_hostageRescueY;
	DWORD m_hostageRescueZ;
	DWORD m_bEndMatchNextMapAllVoted;
	DWORD m_foundGoalPositions;
} C_CSPlayerResource;

inline struct CSkyboxReferenceOffsets {
	DWORD m_worldGroupId;
	DWORD m_hSkyCamera;
} CSkyboxReference;

inline struct CMapInfoOffsets {
	DWORD m_iBuyingStatus;
	DWORD m_flBombRadius;
	DWORD m_iPetPopulation;
	DWORD m_bUseNormalSpawnsForDM;
	DWORD m_bDisableAutoGeneratedDMSpawns;
	DWORD m_flBotMaxVisionDistance;
	DWORD m_iHostageCount;
	DWORD m_bFadePlayerVisibilityFarZ;
	DWORD m_bRainTraceToSkyEnabled;
	DWORD m_flEnvRainStrength;
	DWORD m_flEnvPuddleRippleStrength;
	DWORD m_flEnvPuddleRippleDirection;
	DWORD m_flEnvWetnessCoverage;
	DWORD m_flEnvWetnessDryingAmount;
} CMapInfo;

inline struct CCSGameModeRules_DeathmatchOffsets {
	DWORD m_flDMBonusStartTime;
	DWORD m_flDMBonusTimeLength;
	DWORD m_sDMBonusWeapon;
} CCSGameModeRules_Deathmatch;

inline struct CPulseCell_CursorQueueOffsets {
	DWORD m_nCursorsAllowedToRunParallel;
} CPulseCell_CursorQueue;

inline struct C_PhysicsPropOffsets {
	DWORD m_bAwake;
} C_PhysicsProp;

inline struct CFilterTeamOffsets {
	DWORD m_iFilterTeam;
} CFilterTeam;

inline struct client_dllOffsets {
	DWORD dwCSGOInput;
	DWORD dwEntityList;
	DWORD dwGameEntitySystem;
	DWORD dwGameEntitySystem_highestEntityIndex;
	DWORD dwGameRules;
	DWORD dwGlobalVars;
	DWORD dwGlowManager;
	DWORD dwLocalPlayerController;
	DWORD dwLocalPlayerPawn;
	DWORD dwPlantedC4;
	DWORD dwPrediction;
	DWORD dwSensitivity;
	DWORD dwSensitivity_sensitivity;
	DWORD dwViewAngles;
	DWORD dwViewMatrix;
	DWORD dwViewRender;
	DWORD dwWeaponC4;
} client_dll;

inline struct engine2_dllOffsets {
	DWORD dwBuildNumber;
	DWORD dwNetworkGameClient_clientTickCount;
	DWORD dwNetworkGameClient_deltaTick;
	DWORD dwNetworkGameClient_isBackgroundMap;
	DWORD dwNetworkGameClient_localPlayer;
	DWORD dwNetworkGameClient_maxClients;
	DWORD dwNetworkGameClient_serverTickCount;
	DWORD dwNetworkGameClient_signOnState;
	DWORD dwWindowHeight;
	DWORD dwWindowWidth;
} engine2_dll;

inline struct inputsystem_dllOffsets {
	DWORD dwInputSystem;
} inputsystem_dll;

inline struct matchmaking_dllOffsets {
	DWORD dwGameTypes;
} matchmaking_dll;

inline struct soundsystem_dllOffsets {
	DWORD dwSoundSystem;
	DWORD dwSoundSystem_engineViewData;
} soundsystem_dll;

