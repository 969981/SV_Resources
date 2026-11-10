/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001641b0; name: FUN_001641b0
 */


int FUN_001641b0(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  int *piVar10;
  long *plVar11;
  int *piVar12;
  
  uVar8 = *(ulong *)(param_1 + 0x38);
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  uVar4 = (ulong)(uint)((int)param_2 - (int)uVar8) & 0x1f;
  piVar12 = (int *)(param_1 + uVar4 * 4 + 0x50);
  iVar1 = *piVar12;
  plVar11 = (long *)(param_1 + uVar4 * 8 + 0xd0);
  *param_4 = *plVar11;
  iVar3 = FUN_00163f90(param_1,param_2 + 0x20,param_3,plVar11);
  *piVar12 = iVar3;
  if (0 < iVar3) {
    lVar5 = *plVar11;
    uVar4 = ~uVar8 + param_2;
    pcVar6 = *(char **)(param_1 + 0x48);
    pcVar7 = (char *)(param_2 + 0x1f);
    uVar8 = 0xffffffffffffffe1;
    pcVar9 = pcVar7 + -lVar5;
    if (pcVar6 <= pcVar9) {
      while (*pcVar7 == *pcVar9) {
        piVar10 = (int *)(param_1 + (uVar4 & 0x1f) * 4 + 0x50);
        iVar3 = (int)uVar8 + *piVar12 + 0x20;
        if (*piVar10 < iVar3) {
          *piVar10 = iVar3;
          *(long *)(param_1 + (uVar4 & 0x1f) * 8 + 0xd0) = *plVar11;
        }
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar7 + -1;
        bVar2 = 0xfffffffffffffffe < uVar8;
        uVar8 = uVar8 + 1;
        if (bVar2) {
          return iVar1;
        }
        pcVar9 = pcVar7 + -lVar5;
        if (pcVar9 < pcVar6) {
          return iVar1;
        }
      }
    }
  }
  return iVar1;
}


