/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b409c; name: FUN_008b409c
 */


void FUN_008b409c(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047d2438 + 0x10;
  param_1[2] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = -1;
  lVar2 = FUN_008b5400(param_2);
  param_1[2] = lVar2;
  return;
}


