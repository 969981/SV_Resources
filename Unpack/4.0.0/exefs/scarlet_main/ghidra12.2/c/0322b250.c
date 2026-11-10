/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322b250; name: FUN_0322b250
 */


long FUN_0322b250(long param_1,undefined4 param_2)

{
  size_t sVar1;
  long *plVar2;
  char acStack_2758 [10024];
  
  FUN_031c68c0(acStack_2758,0x2728,0x2728,&DAT_03c596d4,param_2);
  plVar2 = *(long **)(param_1 + 8);
  sVar1 = strlen(acStack_2758);
  (**(code **)(*plVar2 + 0x28))(plVar2,acStack_2758,(long)(int)sVar1);
  return param_1;
}


