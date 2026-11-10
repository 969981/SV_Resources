/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e9c98; name: FUN_017e9c98
 */


void FUN_017e9c98(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&DAT_04608508;
  param_1[4] = (long)&PTR_LAB_046085a0;
  param_1[5] = (long)&DAT_046085f0;
  FUN_017e9da0(param_1 + 0x42);
  puVar1 = PTR_DAT_047d9260;
  *param_1 = (long)(PTR_DAT_047d9260 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa8);
  param_1[5] = (long)(puVar1 + 0xf8);
  FUN_017e9d00(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}


