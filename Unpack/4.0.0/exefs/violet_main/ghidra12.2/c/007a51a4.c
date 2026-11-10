/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a51a4; name: FUN_007a51a4
 */


void FUN_007a51a4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d0b50 + 0x10;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  *param_1 = (long)puVar1;
  return;
}


