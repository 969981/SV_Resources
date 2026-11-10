/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a5870; name: FUN_028a5870
 */


void FUN_028a5870(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 long *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  while (param_2 != param_4) {
    uVar2 = *param_2;
    puVar1 = param_2 + 1;
    *param_2 = *param_6;
    *param_6 = uVar2;
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
  return;
}


