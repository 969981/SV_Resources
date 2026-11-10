/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02999de0; name: FUN_02999de0
 */


void FUN_02999de0(long *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1d0))();
  FUN_0181cac8((long)param_1 + 0x3f4,param_2,iVar1 - param_3);
  FUN_0181cb20(param_1,param_2);
  return;
}


