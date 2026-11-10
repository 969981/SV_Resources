/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a39d4c; name: FUN_02a39d4c
 */


void FUN_02a39d4c(long param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00ca1ea4(param_2,param_1);
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_00ca1ea4(param_2 + 2,param_1 + 0x10);
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x20);
  return;
}


