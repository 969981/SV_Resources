/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d02230; name: FUN_01d02230
 */


void FUN_01d02230(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_2 + 0x10);
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0x60,8);
  *param_1 = lVar2;
  param_1[1] = (long)(param_2 + 0x10);
  FUN_01cfa5b0(lVar2 + 0x20,param_3);
  FUN_01cfa5b0(lVar2 + 0x40,param_3 + 0x20);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


