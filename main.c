/*
 * 注意：这是占位示例，只保证能编译通过。
 * 请在你原来的工程里把真正的 main.c 覆盖本文件，
 * 并确认 BLE UUID 已改成你手环的真实 UUID，再推送编译。
 */
#include <stdio.h>
#include "nvs_flash.h"
#include "esp_log.h"

static const char *TAG = "mitya_ble";

/* TODO: 换成你手环的真实 UUID */
static const char *SERVICE_UUID = "0000xxxx-0000-1000-8000-00805f9b34fb";

void app_main(void)
{
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES ||
        ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ESP_ERROR_CHECK(nvs_flash_init());
    }
    ESP_LOGI(TAG, "mitya_ble start, service uuid = %s", SERVICE_UUID);
    /* 这里放你的 BLE 初始化与业务代码 */
}
