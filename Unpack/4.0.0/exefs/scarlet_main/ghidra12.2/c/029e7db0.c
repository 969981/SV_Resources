/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e7db0; name: FUN_029e7db0
 */


undefined4
FUN_029e7db0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_029e897c(param_1,param_5);
  FUN_029e8adc(param_1,param_4);
  FUN_029e8c38(param_1,param_3);
  FUN_029e8d94(param_1,param_2);
  uVar4 = FUN_01571a80(param_1,(iVar1 - iVar2) + iVar3);
  return uVar4;
}


