This folder kinda-sorta correlates to the Micrchip Harmony folder "firmware/src/system_config/<config>/bsp"

The main point of this folder, is to connect the MCU-specific possibilities, to the features provided by the board. It should have NO knowledge at all of the intended usage; that would be the purpose of the "bsp" or the application.
