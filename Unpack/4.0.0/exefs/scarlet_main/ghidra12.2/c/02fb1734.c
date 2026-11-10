/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fb1734; name: FUN_02fb1734
 */


void FUN_02fb1734(long *param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  long local_78;
  long lStack_70;
  undefined1 local_68;
  
  iVar4 = (int)param_4[1];
  if (0 < iVar4) {
    lVar7 = 0;
    iVar3 = 0x7fffffff;
    do {
      piVar6 = (int *)(*param_4 + lVar7 * 0xc);
      iVar1 = *piVar6;
      iVar2 = piVar6[1];
      lVar8 = (long)iVar1;
      if (iVar1 < iVar2) {
        do {
          uVar5 = (ulong)*(uint *)(*param_1 + lVar8 * 0xc + 4);
          if ((((*(byte *)(param_3 + uVar5 * 0x68 + 0x42) >> 2 & 1) == 0) ||
              ((~*(uint *)(param_3 + uVar5 * 0x68 + 8) & 0xffffff) != 0)) ||
             ((~*(uint *)(param_3 + uVar5 * 0x68 + 0x18) & 0xffffff) != 0)) {
            iVar4 = *(int *)(param_3 + uVar5 * 0x68 + 0x34);
            if (iVar4 != iVar3 && iVar4 != 0x7fffffff) {
              lVar9 = (long)iVar4;
              lVar11 = *(long *)(*(long *)(param_2 + 0x488) + 0x38);
              uVar5 = FUN_02f0c52c(param_2,lVar11 + lVar9 * 0x38);
              iVar3 = iVar4;
              if ((uVar5 & 1) == 0) {
                lVar12 = lVar11 + lVar9 * 0x38;
                puVar10 = (undefined1 *)(lVar12 + 0x21);
                local_68 = *puVar10;
                puVar13 = (uint *)(lVar12 + 0x1c);
                local_78 = param_2;
                lStack_70 = param_2 + 0x140;
                if (*puVar13 != 0) {
                  iVar4 = *(int *)(lVar11 + lVar9 * 0x38 + 0x18);
                  uVar14 = 0;
                  do {
                    lVar9 = *(long *)(*(long *)(param_2 + 0x488) + 8) + (long)iVar4 * 0x68;
                    iVar4 = *(int *)(lVar9 + 0x38);
                    FUN_02f0c32c(&local_78,*(undefined4 *)(lVar9 + 8));
                    FUN_02f0c32c(&local_78,*(undefined4 *)(lVar9 + 0x18));
                    uVar14 = uVar14 + 1;
                  } while (uVar14 < *puVar13);
                }
                *puVar10 = local_68;
              }
            }
          }
          lVar8 = lVar8 + 1;
        } while (iVar2 != (int)lVar8);
        iVar4 = (int)param_4[1];
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar4);
  }
  return;
}


