//#include "gotocpp.h"
#include "cmsis_os.h"
#include "main.h"
#include "as5600.h"

uint32_t const my_i2c_xfer(uint8_t const slave_address,
                           uint8_t const * const p_tx_buffer,
                           size_t const tx_buffer_size,
                           uint8_t * const p_rx_buffer,
                           size_t const rx_buffer_size)
{

        uint32_t const timeout = 100;
        HAL_StatusTypeDef result = HAL_OK;
        bool is_rx_operation = true;

        if ((NULL == p_tx_buffer) || (0 == tx_buffer_size)) {
                result = HAL_ERROR;

        } else if ((NULL == p_rx_buffer) || (0 == rx_buffer_size)) {
                is_rx_operation = false;
        }

        if (HAL_OK == result) {
                // TX operation
                result = HAL_I2C_Master_Transmit(&hi2c1,
                                                 slave_address,
                                                 p_tx_buffer,
                                                 (uint16_t)tx_buffer_size,
                                                 timeout);
        }

        if ((HAL_OK == result) && (is_rx_operation)) {
                // RX operation
                result = HAL_I2C_Master_Receive(&hi2c1,
                                                slave_address,
                                                p_rx_buffer,
                                                rx_buffer_size,
                                                timeout);
        }

        return result;
}


void task_alpha(void* arg)
{
	as5600_error_t result;
	result = as5600_init(my_i2c_xfer);

	as5600_status_t status;
	uint16_t angle;
  for(;;)
  {
  	result = as5600_get_status(&status);
  	result = as5600_get_angle(&angle);
	  osDelay(100);
  }
}

