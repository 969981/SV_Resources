/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ed9144; name: FUN_01ed9144
 */


void FUN_01ed9144(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[4] = param_2;
  param_1[5] = 0x5c0b81702e05c0;
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((long)param_1 + 0x314) = 2;
  FUN_01ed9190(param_1 + 1,param_3);
  return;
}


