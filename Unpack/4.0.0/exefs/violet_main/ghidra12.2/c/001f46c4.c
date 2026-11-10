/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f46c4; name: FUN_001f46c4
 */


void FUN_001f46c4(undefined8 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  *(undefined1 *)((long)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[5] = param_6;
  param_1[6] = param_7;
  *(undefined4 *)(param_1 + 7) = param_4;
  if (param_5 == (undefined8 *)0x0) {
    FUN_001eda20();
    return;
  }
  uVar1 = *param_5;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_5 + 1);
  param_1[3] = uVar1;
  return;
}


