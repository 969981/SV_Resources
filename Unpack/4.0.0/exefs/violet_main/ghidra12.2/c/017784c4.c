/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017784c4; name: FUN_017784c4
 */


void FUN_017784c4(long *param_1)

{
  undefined *puVar1;
  
  FUN_0177860c();
  puVar1 = PTR_DAT_047db058;
  param_1[8] = 5;
  param_1[9] = 0x1e00000000;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = (long)(puVar1 + 0x40);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_01778554(param_1 + 0xd);
  param_1[0x11] = 0;
  FUN_017785b0(param_1 + 0x12);
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  return;
}


