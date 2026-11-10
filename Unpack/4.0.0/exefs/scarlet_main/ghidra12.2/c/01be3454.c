/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01be3454; name: FUN_01be3454
 */


void FUN_01be3454(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = FUN_01be3500();
  puVar1 = PTR_DAT_047d53f0;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  FUN_00d0a71c(param_1 + 1,lVar2 + 8);
  param_1[5] = *(long *)(lVar2 + 0x28);
  param_1[4] = *(long *)(lVar2 + 0x20);
  return;
}


