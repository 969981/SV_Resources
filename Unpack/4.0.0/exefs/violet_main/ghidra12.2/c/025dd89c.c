/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025dd89c; name: FUN_025dd89c
 */


void FUN_025dd89c(undefined1 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[8] = 0;
  param_1[0x20] = 0;
  uVar1 = *param_2;
  param_1[0x20] = 1;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  param_1[0x3c] = 1;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  param_1[0x44] = 0;
  return;
}


