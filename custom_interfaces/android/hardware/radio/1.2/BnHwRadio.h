#ifndef HIDL_GENERATED_ANDROID_HARDWARE_RADIO_V1_2_BNHWRADIO_H
#define HIDL_GENERATED_ANDROID_HARDWARE_RADIO_V1_2_BNHWRADIO_H

#include <android/hardware/radio/1.2/IHwRadio.h>

namespace android {
namespace hardware {
namespace radio {
namespace V1_2 {

struct BnHwRadio : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwRadio(const ::android::sp<IRadio> &_hidl_impl);
    explicit BnHwRadio(const ::android::sp<IRadio> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwRadio();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    typedef IRadio Pure;

    typedef android::hardware::details::bnhw_tag _hidl_tag;

    ::android::sp<IRadio> getImpl() { return _hidl_mImpl; }
    // Methods from ::android::hardware::radio::V1_2::IRadio follow.
    static ::android::status_t _hidl_startNetworkScan_1_2(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_setIndicationFilter_1_2(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_setSignalStrengthReportingCriteria(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_setLinkCapacityReportingCriteria(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_setupDataCall_1_2(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_deactivateDataCall_1_2(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);



private:
    // Methods from ::android::hardware::radio::V1_0::IRadio follow.

    // Methods from ::android::hardware::radio::V1_1::IRadio follow.

    // Methods from ::android::hardware::radio::V1_2::IRadio follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<IRadio> _hidl_mImpl;
};

}  // namespace V1_2
}  // namespace radio
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_RADIO_V1_2_BNHWRADIO_H
