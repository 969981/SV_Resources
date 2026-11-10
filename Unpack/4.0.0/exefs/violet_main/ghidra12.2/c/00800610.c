/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00800610; name: FUN_00800610
 */


void FUN_00800610(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d1620 + 0x10;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  *param_1 = (long)puVar1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}


