/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b58d4; name: FUN_007b58d4
 */


void FUN_007b58d4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d0e58;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00796584(param_1 + 0xc);
  param_1[0x10] = param_2;
  return;
}


