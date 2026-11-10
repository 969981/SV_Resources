/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022e451c; name: FUN_022e451c
 */


void FUN_022e451c(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_047de148;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = PTR_DAT_047e31b0 + 0x10;
  param_1[0x12] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[8] = 0;
  param_1[9] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}


