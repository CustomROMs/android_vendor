/*
 * Copyright (C) ST-Ericsson SA 2011. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 */
#include <stdio.h>
#include <string.h>

#include <bass_app.h>
#include <bass_app_test.h>
#include <debug.h>
#include <tee_client_api.h>

/* Typedef to the test case function pointer. */
typedef int (*test_case)(uint32_t data);

static const enum payload_type_t pl_type1 = BASS_PL_TYPE_TAPP;

static uint8_t dummy_header[512];

/* Signed header. Payload type = ISSW_PL_TYPE_OS_LOADER. */
static const uint8_t signedheader1[] = {
    0x52, 0x44, 0x48, 0x53, 0x50, 0x01, 0x00, 0x01,
    0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC1, 0xBE, 0x25, 0x39, 0x16, 0xFB, 0x37, 0x57,
    0x13, 0x6D, 0x36, 0x0B, 0x6E, 0xE2, 0xE2, 0x3D,
    0xEC, 0xFA, 0xC1, 0x91, 0xB2, 0x5B, 0xBE, 0xDF,
    0xFA, 0x9F, 0x9C, 0x29, 0x0A, 0xA7, 0x61, 0xFC,
    0x25, 0xC4, 0xF3, 0xEF, 0x21, 0x9C, 0x56, 0x49,
    0x3C, 0x02, 0x1A, 0x75, 0xEC, 0x76, 0xBB, 0xEC,
    0xCF, 0x1F, 0x85, 0x49, 0xFF, 0x55, 0xFA, 0xFF,
    0xC1, 0xB3, 0x48, 0x8F, 0x56, 0x21, 0xAA, 0x06,
    0x5F, 0x5D, 0x0A, 0x39, 0x5E, 0x50, 0x2D, 0xD3,
    0xB6, 0x88, 0x74, 0x1C, 0x1C, 0x76, 0x11, 0x91,
    0x7A, 0x3E, 0x90, 0x58, 0x52, 0xD9, 0x4E, 0x5E,
    0x5C, 0xB3, 0x79, 0x92, 0x62, 0x9C, 0xD8, 0xE1,
    0x67, 0x79, 0x46, 0x7C, 0xC0, 0x3D, 0x24, 0x46,
    0x68, 0xDF, 0x10, 0x76, 0xAD, 0x0E, 0x58, 0x87,
    0x9C, 0x2B, 0x97, 0xE5, 0xAB, 0x85, 0xF0, 0x7B,
    0x34, 0xE2, 0x81, 0x3D, 0xCE, 0x4E, 0x52, 0xD6,
    0x89, 0x61, 0x3D, 0x9A, 0xF4, 0xEB, 0x1F, 0x05,
    0x86, 0x3F, 0x83, 0xD8, 0x8A, 0x60, 0xEF, 0x1E,
    0xB7, 0x3B, 0xED, 0x4C, 0x7A, 0x74, 0x34, 0x49,
    0xEE, 0x54, 0xC4, 0x32, 0x40, 0x4E, 0xA0, 0x81,
    0xE1, 0x0E, 0x92, 0xAA, 0xBA, 0x96, 0xCD, 0xE8,
    0xC8, 0xB8, 0xB0, 0xCC, 0xAC, 0x3E, 0x42, 0x66,
    0x70, 0x6F, 0xC4, 0x8C, 0xCA, 0xAF, 0xF4, 0x4C,
    0xA5, 0x02, 0xDF, 0x80, 0xF7, 0x56, 0xEF, 0xFF,
    0xF1, 0x1D, 0x29, 0xA0, 0x0D, 0xC4, 0x40, 0x9E,
    0x9D, 0xDF, 0x71, 0x4E, 0x6F, 0x02, 0x6D, 0x7D,
    0x10, 0x9D, 0x4F, 0x1C, 0x21, 0x75, 0xB5, 0xA3,
    0xE8, 0xA9, 0x93, 0x2C, 0x68, 0xCD, 0x71, 0x08,
    0x6D, 0x9F, 0x2C, 0x40, 0x64, 0xA4, 0x5D, 0x2A,
    0x98, 0x5A, 0xD0, 0x79, 0x0B, 0xF5, 0x27, 0x8C,
    0xBC, 0xAF, 0x54, 0xA6, 0xF6, 0x0C, 0xFE, 0x17,
    0xEA, 0x8C, 0x04, 0x88, 0x15, 0xE2, 0x37, 0x09,
    0xDA, 0x7C, 0xEA, 0x09, 0x84, 0xD8, 0x07, 0x3F,
    0x64, 0x5F, 0x42, 0x48, 0x91, 0x2B, 0x4C, 0x66,
    0x3F, 0xE0, 0x96, 0x3A, 0x11, 0x34, 0x61, 0x49,
    0x3C, 0xE8, 0x76, 0xEC, 0xCE, 0x91, 0x38, 0x48,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0D, 0x00, 0x00, 0x00, 0x04, 0x39, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFD, 0x16, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xD9, 0x16, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0xB5, 0x16, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x91, 0x16, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x6D, 0x16, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 0x49, 0x16, 0x00, 0x00,
    0x06, 0x00, 0x00, 0x00, 0x25, 0x16, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x00, 0x01, 0x16, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0xDD, 0x15, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, 0xB9, 0x15, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x95, 0x15, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x71, 0x15, 0x00, 0x00,
    0x0C, 0x00, 0x00, 0x00, 0x41, 0x15, 0x00, 0x00,
    0x70, 0xB5, 0x0D, 0x1C, 0x04, 0x1C, 0x00, 0xF0,
    0xF9, 0xFD, 0x85, 0x60, 0x44, 0x71, 0x00, 0x20,
    0x70, 0xBD, 0xC0, 0x46, 0x10, 0xB5, 0x00, 0xF0,
    0xF1, 0xFD, 0x43, 0x79, 0x00, 0x2B, 0x01, 0xD0,
    0x00, 0x20, 0x03, 0xE0, 0x02, 0x48, 0x00, 0xF0,
    0x05, 0xF8, 0x0B, 0x20, 0x10, 0xBD, 0xC0, 0x46,
    0x0D, 0x00, 0xFF, 0x0B, 0x00, 0xB5, 0x87, 0xB0,
    0x01, 0x90, 0x00, 0xF0, 0xDF, 0xFD, 0xF0, 0x23,
    0x1B, 0x02, 0x03, 0xA9, 0x03, 0x93, 0x01, 0xAB,
    0x8B, 0x60, 0x04, 0x23, 0x4B, 0x60, 0xC0, 0x69,
    0x98, 0x30, 0x03, 0xF0, 0xE7, 0xF8, 0x07, 0xB0,
    0x00, 0xBD, 0xC0, 0x46, 0xF0, 0xB5, 0x95, 0xB0,
    0x11, 0xAE, 0x03, 0x90, 0x08, 0x1C, 0x31, 0x1C,
    0x02, 0x92, 0x02, 0xF0, 0xCF, 0xFF, 0x23, 0x4C,
    0x7C, 0x44, 0x05, 0x1C, 0x00, 0x28, 0x02, 0xD0,
    0x00, 0x06, 0x21, 0x4B, 0x38, 0xE0, 0x21, 0x4B,
    0xA5, 0x20, 0xE4, 0x58, 0x0C, 0xAF, 0x23, 0x68,
    0x98, 0x47, 0x31, 0x1C, 0x04, 0x22, 0x03, 0x1C,
    0x38, 0x1C, 0x98, 0x47, 0x23, 0x68, 0xA5, 0x20,
    0x98, 0x47, 0x02, 0x99, 0x10, 0x22, 0x03, 0x1C,
    0x0D, 0xA8, 0x98, 0x47, 0x6B, 0x46, 0x10, 0x33,
    0x02, 0x93, 0x20, 0x23, 0x00, 0x93, 0x01, 0x20,
    0x39, 0x1C, 0x14, 0x22, 0x02, 0x9B, 0x00, 0xF0,
    0xCB, 0xFE, 0x05, 0x1C, 0x00, 0x28, 0x02, 0xD0,
    0x00, 0x06, 0x11, 0x4B, 0x14, 0xE0, 0x23, 0x68,
    0xA6, 0x20, 0x98, 0x47, 0x00, 0x21, 0x14, 0x22,
    0x03, 0x1C, 0x38, 0x1C, 0x98, 0x47, 0x02, 0x9B,
    0xB3, 0x60, 0x03, 0x98, 0x20, 0x23, 0x31, 0x1C,
    0x73, 0x60, 0x03, 0xF0, 0x95, 0xF9, 0x05, 0x1C,
    0x00, 0x28, 0x04, 0xD0, 0x07, 0x4B, 0x00, 0x06,
    0x18, 0x43, 0xFF, 0xF7, 0x9F, 0xFF, 0x15, 0xB0,
    0x28, 0x1C, 0xF0, 0xBD, 0x90, 0x38, 0x00, 0x00,
    0x9F, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xA3, 0x00, 0xFF, 0x00, 0xA7, 0x00, 0xFF, 0x00,
    0x70, 0xB5, 0x00, 0xF0, 0x73, 0xFD, 0x14, 0x4D,
    0x7D, 0x44, 0x03, 0x6A, 0x04, 0x1C, 0x00, 0x2B,
    0x21, 0xD0, 0xC1, 0x69, 0x5A, 0x68, 0x94, 0x31,
    0x0B, 0x68, 0x9A, 0x42, 0x11, 0xD2, 0x0F, 0x4B,
    0xA5, 0x20, 0xEB, 0x58, 0x1B, 0x68, 0x98, 0x47,
    0xE1, 0x69, 0x22, 0x6A, 0x8C, 0x31, 0x03, 0x1C,
    0x08, 0x68, 0x11, 0x68, 0x52, 0x68, 0x98, 0x47,
    0xE3, 0x69, 0x22, 0x6A, 0x90, 0x33, 0x52, 0x68,
    0x1A, 0x60, 0x06, 0x4B, 0xA4, 0x20, 0xEB, 0x58,
    0x1B, 0x68, 0x98, 0x47, 0x03, 0x1C, 0x20, 0x6A,
    0x98, 0x47, 0x00, 0x23, 0x23, 0x62, 0x70, 0xBD,
    0xE8, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xF8, 0xB5, 0x00, 0xF0, 0x43, 0xFD, 0x24, 0x4D,
    0x7D, 0x44, 0xC3, 0x69, 0x04, 0x1C, 0x1A, 0x1C,
    0x94, 0x32, 0x17, 0x68, 0x21, 0x4A, 0x97, 0x42,
    0x01, 0xD9, 0xA0, 0x27, 0x7F, 0x01, 0x90, 0x33,
    0x1B, 0x68, 0xBB, 0x42, 0x04, 0xD9, 0x1E, 0x48,
    0xFF, 0xF7, 0x4C, 0xFF, 0x0A, 0x24, 0x2E, 0xE0
};

static bool is_secure_boot_enabled(void)
{
    bool result = true;
    struct tee_product_config product_config;

    result = get_product_config(&product_config);
    if (BASS_RC_SUCCESS != result) {
        dprintf(ERROR, "Could not get product config.\n");
    }

    dprintf(INFO, "rt_flags: 0x%08x\n", product_config.rt_flags);

    if ((product_config.rt_flags & TEE_RT_FLAGS_SECURE_BOOT) ==
        TEE_RT_FLAGS_SECURE_BOOT) {
        dprintf(INFO, "Test case running on non engineering device, hence not "
                " all test cases cannot be performed.\n");
        result = false;
    }

    return result;
}

/*
 * Normal positive test case that call verify_signedheader with a correct
 * header.
 *
 * @param data Optional data to the function.
 *
 * @return BASS_RC_SUCCESS when test case ends successfully, otherwise any of
 *         the other defined return values.
 */
static int test_01_normal_verify_signedheader(uint32_t data)
{
    bass_return_code result = BASS_RC_FAILURE;
    bass_signed_header_info_t hinfo;
    uint32_t size_of_signed_header;

    (void)data;

    memset(&hinfo, 0, sizeof(hinfo));

    result = verify_signedheader(signedheader1, sizeof(signedheader1), pl_type1,
                                 &hinfo);

    if (BASS_RC_SUCCESS == result) {
        dprintf(INFO, "Header verification successful.\n");
        dump_buffer("Test 01: hinfo", (void *)&hinfo,
                    sizeof(bass_signed_header_info_t));
    } else {
        dprintf(ERROR, "Header verification failure.\n");
    }

    /*
     * Check that the size of signed header actually is what is written into the
     * signed header that we are using.
     */
    size_of_signed_header =
        ((bass_app_signed_header_t *)signedheader1)->size_of_signed_header;

    if (memcmp(&hinfo, &size_of_signed_header, sizeof(uint16_t))) {
        result = BASS_RC_FAILURE;
    }

    /*
     * Just to check a bit more, we do a check of the payload also, which makes
     * use of the values that it got from verify_signedheader.
     */
    result = bass_check_payload_hash(&hinfo.ht,
                                     &hinfo.plt,
                                     (void *)signedheader1,
                                     hinfo.size_of_signed_header,
                                     &hinfo.ehash.value,
                                     SHA256_HASH_SIZE);

    return result;
}

/*
 * Test case that has to short header size which is ok on an R&D device. The
 * test case should return BASS_RC_SUCCESS on a R&D device.
 *
 * @param data Optional data to the function.
 *
 * @return BASS_RC_SUCCESS when test case ends successfully, otherwise any of
 *         the other defined return values.
 */
static int test_02_dummy_header_size_0(uint32_t data)
{
    bass_return_code result = BASS_RC_FAILURE;
    bass_signed_header_info_t hinfo;

    (void)data;

    if (is_secure_boot_enabled()) {
        dprintf(INFO, "Cannot run this test case on this device\n");
        return BASS_RC_SUCCESS;
    }

    memset(&dummy_header, 0xff, sizeof(dummy_header));
    memset(&hinfo, 0xff, sizeof(hinfo));

    result = verify_signedheader(dummy_header, 0, BASS_PL_TYPE_APE_NW_CODE,
                                 &hinfo);
    if (BASS_RC_SUCCESS == result) {
        dprintf(INFO, "Header verification successful.\n");
        dump_buffer("Test 02: hinfo", (void *)&hinfo,
                    sizeof(bass_signed_header_info_t));
    } else {
        dprintf(ERROR, "Header verification failure.\n");
    }

    return result;
}

/*
 * Test case that has header size 4 which is the short possible length to be
 * able to decide if it is a signed header or not. However the header isn't a
 * magic header, hence the header isn't considered to be a header which means
 * that it should return ok on a R&D device.
 *
 * @param data Optional data to the function.
 *
 * @return BASS_RC_SUCCESS when test case ends successfully, otherwise any of
 *         the other defined return values.
 */
static int test_03_dummy_size_header_4(uint32_t data)
{
    bass_return_code result = BASS_RC_FAILURE;
    bass_signed_header_info_t hinfo;
    uint8_t local_dummy_header[512];

    (void)data;

    if (is_secure_boot_enabled()) {
        dprintf(INFO, "Cannot run this test case on this device\n");
        return BASS_RC_SUCCESS;
    }

    memset(&local_dummy_header, 0xff, sizeof(local_dummy_header));
    memset(&hinfo, 0xff, sizeof(hinfo));

    result = verify_signedheader(local_dummy_header, 4, pl_type1, &hinfo);
    if (BASS_RC_SUCCESS == result) {
        dprintf(INFO, "Header verification successful.\n");
        dump_buffer("Test 03: hinfo", (void *)&hinfo,
                    sizeof(bass_signed_header_info_t));
    } else {
        dprintf(ERROR, "Header verification failure.\n");
    }

    return result;
}

/*
 * Test case that has a header size which is big enough, but isn't a there isn't
 * any magic header, hence it is not considered as a signed header. On a R&D
 * device this type of header should pass.
 *
 * @param data Optional data to the function.
 *
 * @return BASS_RC_SUCCESS when test case ends successfully, otherwise any of
 *         the other defined return values.
 */
static int test_04_dummy_header_full_size(uint32_t data)
{
    bass_return_code result = BASS_RC_FAILURE;
    bass_signed_header_info_t hinfo;
    uint8_t local_dummy_header[512];

    (void)data;

    if (is_secure_boot_enabled()) {
        dprintf(INFO, "Cannot run this test case on this device\n");
        return BASS_RC_SUCCESS;
    }

    memset(&local_dummy_header, 0xff, sizeof(local_dummy_header));
    memset(&hinfo, 0xff, sizeof(hinfo));

    result = verify_signedheader(local_dummy_header, sizeof(local_dummy_header),
				 pl_type1, &hinfo);
    if (BASS_RC_SUCCESS == result) {
        dprintf(INFO, "Header verification successful.\n");
        dump_buffer("Test 04: hinfo", (void *)&hinfo,
                    sizeof(bass_signed_header_info_t));
    } else {
        dprintf(ERROR, "Header verification failure.\n");
    }

    return result;
}

/*
 * Test case that has a header size which is big enough, but isn't a there isn't
 * any magic header, hence it is not considered as a signed header. On a R&D
 * device this type of header should pass. After the "header" has been verified
 * we call bass_check_payload_hash to verify that the data also passes on a R&D
 * device. This test case is basically doing the same thing as Little Kernel is
 * doing, i.e. just call verify_signedheader and bass_check_payload_hash without
 * wonder about what kind of the device it is using. The is_secure_boot_enabled
 * check we have in the test case is there only to make sure that the test suite
 * is returning OK, if someone is running the test cases on a non R&D device.
 *
 * @param data Optional data to the function.
 *
 * @return BASS_RC_SUCCESS when test case ends successfully, otherwise any of
 *         the other defined return values.
 */
static int test_05_dummy_header_check_payload(uint32_t data)
{
    bass_return_code result = BASS_RC_FAILURE;
    bass_signed_header_info_t hinfo;
    uint8_t local_dummy_header[512];

    (void)data;

    if (is_secure_boot_enabled()) {
        dprintf(INFO, "Cannot run this test case on this device\n");
        return BASS_RC_SUCCESS;
    }

    memset(&local_dummy_header, 0xff, sizeof(local_dummy_header));
    memset(&hinfo, 0xff, sizeof(hinfo));

    result = verify_signedheader(local_dummy_header, sizeof(local_dummy_header),
				 pl_type1, &hinfo);
    if (BASS_RC_SUCCESS == result) {
        dprintf(INFO, "Header verification successful.\n");
        dump_buffer("Test 05: hinfo", (void *)&hinfo,
                    sizeof(bass_signed_header_info_t));
    } else {
        dprintf(ERROR, "Header verification failure.\n");
    }

    result = bass_check_payload_hash(&hinfo.ht,
                                     &hinfo.plt,
                                     local_dummy_header,
                                     hinfo.size_of_signed_header,
                                     &hinfo.ehash.value,
                                     0);

    if (BASS_RC_SUCCESS == result) {
        dprintf(INFO, "Payload verification successful.\n");
    } else {
        dprintf(ERROR, "Payload verification failure.\n");
    }

    return result;
}

static test_case test_cases[] = {
#if defined(STE_PLATFORM_U8500)
    &test_01_normal_verify_signedheader,
    &test_02_dummy_header_size_0,
    &test_03_dummy_size_header_4,
    &test_04_dummy_header_full_size,
    &test_05_dummy_header_check_payload
#endif
};

uint32_t bass_app_test_verify_signedheader(void)
{
    size_t i = 0;
    uint32_t failing_test_cases = 0;

    for (i = 0; i < sizeof(test_cases) / sizeof(test_case); i++) {
        if (test_cases[i](0)) {
            failing_test_cases |= (1 << i);
        }
    }

    if (failing_test_cases) {
        for (i = 0; i < sizeof(test_cases) / sizeof(test_case); i++) {
            if (failing_test_cases & (i << 1)) {
                /* Increase with one since the array is zero indexed. */
                dprintf(ERROR, "Test case %d failed\n", i + 1);
            }
        }
        dprintf(ERROR, "The test cases above failed, for more information see "
                "the log file above!\n");
    } else {
        dprintf(ALWAYS, "All tee verify_signedheader tests passed!\n");
    }

    return failing_test_cases;
}
