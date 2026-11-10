/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01070010; name: FUN_01070010
 */


int FUN_01070010(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  if (*(int *)(param_1 + 0x70) == 1) {
    uVar3 = *(uint *)(param_1 + 0x90);
    plVar4 = (long *)FUN_0106fc68();
    uVar2 = (**(code **)(*plVar4 + 0x108))();
    if ((uVar2 & 0xffff) < uVar3) {
      iVar1 = *(int *)(param_1 + 0x90);
      plVar4 = (long *)FUN_0106fc68(param_1);
      uVar3 = (**(code **)(*plVar4 + 0x108))();
      return iVar1 - (uVar3 & 0xffff);
    }
  }
  return 0;
}


