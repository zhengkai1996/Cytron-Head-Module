# Instruction Set Table #

## Description ##
|Macro|Instruction|Description|Remark|
|:----|:----------|:----------|:-----|
|PING|0x01       |Used to obtain a status packet|Handled in function|
|READ\_DATA|0x02       |Read values from Control Register|Handled in function|
|WRITE\_DATA|0x03       |Write values to Control Register|Pass to function|
|FACTORY\_RESET|0x06       |Resetting the Control Register values to factory defaults|Handled in function|


