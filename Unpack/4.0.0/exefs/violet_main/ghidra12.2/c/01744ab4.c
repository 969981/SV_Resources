/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01744ab4; name: FUN_01744ab4
 */


void FUN_01744ab4(long *param_1)

{
  undefined *puVar1;
  
  FUN_01744b38();
  puVar1 = PTR_DAT_047dda68;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[4] = (long)(puVar1 + 0x40);
  param_1[5] = (long)&PTR_FUN_045a8e40;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x15] = 0xfffffffffffffff;
  param_1[0x16] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_1[1];
  param_1[0x10] = 0xfffffffffffffff;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_1[1];
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  return;
}


