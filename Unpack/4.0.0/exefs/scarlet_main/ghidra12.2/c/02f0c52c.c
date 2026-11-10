/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0c52c; name: FUN_02f0c52c
 */


undefined8 FUN_02f0c52c(long *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  long lVar8;
  int iVar9;
  
  if (*(int *)(param_2 + 0x1c) != 0) {
    uVar5 = 0;
    cVar6 = -1;
    iVar9 = *(int *)(param_2 + 0x18);
    do {
      lVar8 = *(long *)(param_1[0x91] + 8);
      lVar3 = lVar8 + (long)iVar9 * 0x68;
      iVar1 = *(int *)(lVar3 + 0x38);
      uVar4 = *(ulong *)(lVar3 + 8) & 0xffffff;
      cVar7 = cVar6;
      if ((uVar4 != 0xffffff) &&
         (((*(uint *)(param_1[7] + uVar4 * 0xc0 + 0x54) ^ 0xffffffff) & 10) == 0)) {
        lVar3 = (**(code **)(*param_1 + 0x270))
                          (param_1,*(undefined4 *)(param_1[7] + uVar4 * 0xc0 + 0x80));
        cVar7 = *(char *)(lVar3 + 0x5e);
        if ((cVar6 != -1) && (bVar2 = cVar7 != cVar6, cVar7 = cVar6, bVar2)) {
          return 0;
        }
      }
      uVar4 = *(ulong *)(lVar8 + (long)iVar9 * 0x68 + 0x18) & 0xffffff;
      cVar6 = cVar7;
      if ((uVar4 != 0xffffff) &&
         (((*(uint *)(param_1[7] + uVar4 * 0xc0 + 0x54) ^ 0xffffffff) & 10) == 0)) {
        lVar3 = (**(code **)(*param_1 + 0x270))
                          (param_1,*(undefined4 *)(param_1[7] + uVar4 * 0xc0 + 0x80));
        cVar6 = *(char *)(lVar3 + 0x5e);
        if ((cVar7 != -1) && (bVar2 = cVar6 != cVar7, cVar6 = cVar7, bVar2)) {
          return 0;
        }
      }
      uVar5 = uVar5 + 1;
      iVar9 = iVar1;
    } while (uVar5 < *(uint *)(param_2 + 0x1c));
  }
  return 1;
}


