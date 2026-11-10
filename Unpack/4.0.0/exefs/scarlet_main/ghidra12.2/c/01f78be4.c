/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f78be4; name: FUN_01f78be4
 */


void FUN_01f78be4(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047cfc88 + 0x10);
  FUN_01cfa5b0(param_1 + 1,param_2 + 8);
  FUN_01cfa5b0(param_1 + 5,param_2 + 0x28);
  lVar1 = *(long *)(param_2 + 0x50);
  param_1[9] = *(long *)(param_2 + 0x48);
  param_1[10] = lVar1;
  return;
}


