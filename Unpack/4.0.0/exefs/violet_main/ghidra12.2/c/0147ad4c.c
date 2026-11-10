/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0147ad4c; name: FUN_0147ad4c
 */


void FUN_0147ad4c(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  param_1[5] = 0;
  return;
}


