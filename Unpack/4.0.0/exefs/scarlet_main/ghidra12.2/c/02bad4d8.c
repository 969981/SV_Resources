/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bad4d8; name: FUN_02bad4d8
 */


int FUN_02bad4d8(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar4 = *(long **)(*(long *)(param_1 + 0x120) + 0x48);
  plVar3 = *(long **)(*(long *)(param_1 + 0x120) + 0x50);
  if (plVar4 == plVar3) {
    return 0;
  }
  uVar5 = (ulong)((long)plVar3 + (-8 - (long)plVar4)) >> 3;
  uVar1 = uVar5 + 1;
  iVar2 = 0;
  if (uVar5 != 0) {
    lVar6 = -(uVar1 & 0x3ffffffffffffffe);
    plVar3 = plVar4;
    do {
      plVar4 = plVar3 + 2;
      if (*(int *)(*plVar3 + 0x90) == param_2) {
        iVar2 = iVar2 + 1;
      }
      if (*(int *)(plVar3[1] + 0x90) == param_2) {
        iVar2 = iVar2 + 1;
      }
      lVar6 = lVar6 + 2;
      plVar3 = plVar4;
    } while (lVar6 != 0);
  }
  if (((uVar1 & 1) != 0) && (*(int *)(*plVar4 + 0x90) == param_2)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


