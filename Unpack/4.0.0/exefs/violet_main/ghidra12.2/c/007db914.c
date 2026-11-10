/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007db914; name: FUN_007db914
 */


void FUN_007db914(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00792e30();
  param_1[0xb] = param_2;
  puVar1 = PTR_DAT_047d1360;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0078ca60(param_1 + 0xf);
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  FUN_007e5190(param_1 + 0x17);
  return;
}


