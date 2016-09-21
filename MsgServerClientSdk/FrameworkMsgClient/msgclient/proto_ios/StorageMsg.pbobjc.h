// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: storage_msg.proto

#import "GPBProtocolBuffers.h"

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30001
#error This file was generated by a different version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class StorageMsg;
GPB_ENUM_FWD_DECLARE(EMsgFlag);
GPB_ENUM_FWD_DECLARE(EMsgRole);
GPB_ENUM_FWD_DECLARE(EServerCmd);
GPB_ENUM_FWD_DECLARE(EStorageTag);

NS_ASSUME_NONNULL_BEGIN

#pragma mark - StorageMsgRoot

/// Exposes the extension registry for this file.
///
/// The base class provides:
/// @code
///   + (GPBExtensionRegistry *)extensionRegistry;
/// @endcode
/// which is a @c GPBExtensionRegistry that includes all the extensions defined by
/// this file and all files that it depends on.
@interface StorageMsgRoot : GPBRootObject
@end

#pragma mark - StorageMsg

typedef GPB_ENUM(StorageMsg_FieldNumber) {
  StorageMsg_FieldNumber_Rsvrcmd = 1,
  StorageMsg_FieldNumber_Tsvrcmd = 2,
  StorageMsg_FieldNumber_Mtag = 3,
  StorageMsg_FieldNumber_Mflag = 4,
  StorageMsg_FieldNumber_Mrole = 5,
  StorageMsg_FieldNumber_Result = 6,
  StorageMsg_FieldNumber_Sequence = 7,
  StorageMsg_FieldNumber_Maxseqn = 8,
  StorageMsg_FieldNumber_Msgid = 9,
  StorageMsg_FieldNumber_Storeid = 10,
  StorageMsg_FieldNumber_Ruserid = 11,
  StorageMsg_FieldNumber_Groupid = 12,
  StorageMsg_FieldNumber_Version = 13,
  StorageMsg_FieldNumber_Mtype = 14,
  StorageMsg_FieldNumber_Ispush = 15,
  StorageMsg_FieldNumber_Content = 16,
};

/// this is the msg for store msg to redis
@interface StorageMsg : GPBMessage

/// real server cmd
@property(nonatomic, readwrite) enum EServerCmd rsvrcmd;

/// temp server cmd for backup group cmd
@property(nonatomic, readwrite) enum EServerCmd tsvrcmd;

/// seqn or data
@property(nonatomic, readwrite) enum EStorageTag mtag;

/// group or single
@property(nonatomic, readwrite) enum EMsgFlag mflag;

/// sender or recver
@property(nonatomic, readwrite) enum EMsgRole mrole;

/// the redis opt result
@property(nonatomic, readwrite) int32_t result;

/// sequence
@property(nonatomic, readwrite) int64_t sequence;

/// max sequence
@property(nonatomic, readwrite) int64_t maxseqn;

/// message id
@property(nonatomic, readwrite, copy, null_resettable) NSString *msgid;

/// storage userid
@property(nonatomic, readwrite, copy, null_resettable) NSString *storeid;

/// real userid
@property(nonatomic, readwrite, copy, null_resettable) NSString *ruserid;

/// groupid
@property(nonatomic, readwrite, copy, null_resettable) NSString *groupid;

/// message version
@property(nonatomic, readwrite, copy, null_resettable) NSString *version;

/// the msg content type
@property(nonatomic, readwrite, copy, null_resettable) NSString *mtype;

/// if this message need push
@property(nonatomic, readwrite, copy, null_resettable) NSString *ispush;

/// message
@property(nonatomic, readwrite, copy, null_resettable) NSData *content;

@end

/// Fetches the raw value of a @c StorageMsg's @c rsvrcmd property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t StorageMsg_Rsvrcmd_RawValue(StorageMsg *message);
/// Sets the raw value of an @c StorageMsg's @c rsvrcmd property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetStorageMsg_Rsvrcmd_RawValue(StorageMsg *message, int32_t value);

/// Fetches the raw value of a @c StorageMsg's @c tsvrcmd property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t StorageMsg_Tsvrcmd_RawValue(StorageMsg *message);
/// Sets the raw value of an @c StorageMsg's @c tsvrcmd property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetStorageMsg_Tsvrcmd_RawValue(StorageMsg *message, int32_t value);

/// Fetches the raw value of a @c StorageMsg's @c mtag property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t StorageMsg_Mtag_RawValue(StorageMsg *message);
/// Sets the raw value of an @c StorageMsg's @c mtag property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetStorageMsg_Mtag_RawValue(StorageMsg *message, int32_t value);

/// Fetches the raw value of a @c StorageMsg's @c mflag property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t StorageMsg_Mflag_RawValue(StorageMsg *message);
/// Sets the raw value of an @c StorageMsg's @c mflag property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetStorageMsg_Mflag_RawValue(StorageMsg *message, int32_t value);

/// Fetches the raw value of a @c StorageMsg's @c mrole property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t StorageMsg_Mrole_RawValue(StorageMsg *message);
/// Sets the raw value of an @c StorageMsg's @c mrole property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetStorageMsg_Mrole_RawValue(StorageMsg *message, int32_t value);

#pragma mark - PackedStoreMsg

typedef GPB_ENUM(PackedStoreMsg_FieldNumber) {
  PackedStoreMsg_FieldNumber_MsgsArray = 1,
};

@interface PackedStoreMsg : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<StorageMsg*> *msgsArray;
/// The number of items in @c msgsArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger msgsArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)