/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c7e18; name: FUN_012c7e18
 */


void FUN_012c7e18(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  param_1[2] = 1;
  param_1[3] = 0;
  puVar1 = PTR_DAT_047e5760;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[9] = param_2[1];
  lVar2 = *param_2;
  param_1[10] = 0;
  param_1[0xb] = -0x8000000000000000;
  param_1[0x10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = -0x8000000000000000;
  param_1[8] = lVar2;
  param_1[0xe] = 0;
  param_1[0xf] = -0x8000000000000000;
  return;
}


