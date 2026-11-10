/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a57c0; name: FUN_028a57c0
 */


undefined1  [16]
FUN_028a57c0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,long *param_5,
            undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  while (param_2 != param_4) {
    puVar1 = param_2 + 1;
    *param_6 = *param_2;
    if ((long)puVar1 - *param_1 == 0x1000) {
      param_1 = param_1 + 1;
      puVar1 = (undefined8 *)*param_1;
    }
    param_6 = param_6 + 1;
    param_2 = puVar1;
    if ((long)param_6 - *param_5 == 0x1000) {
      param_5 = param_5 + 1;
      param_6 = (undefined8 *)*param_5;
    }
  }
  auVar2._8_8_ = param_6;
  auVar2._0_8_ = param_5;
  return auVar2;
}


