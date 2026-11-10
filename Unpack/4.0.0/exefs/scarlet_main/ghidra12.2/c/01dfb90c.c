/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dfb90c; name: FUN_01dfb90c
 */


void FUN_01dfb90c(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x688);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00fa4838(param_1,lVar1 + (long)param_3 * 0x10);
  return;
}


