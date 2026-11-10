/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00892230; name: FUN_00892230
 */


ulong FUN_00892230(long param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  
  iVar4 = *(int *)(param_1 + 0x30);
  uVar6 = *(uint *)(*(long *)(param_1 + 8) + 8);
  uVar10 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
  if (iVar4 != 0) {
    uVar10 = uVar6;
  }
  uVar6 = (uint)*param_2;
  if (*param_2 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    pbVar7 = param_2;
    do {
      pbVar7 = pbVar7 + 1;
      uVar15 = uVar15 * uVar10 + uVar6;
      uVar6 = (uint)*pbVar7;
    } while (uVar6 != 0);
  }
  uVar6 = *(uint *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x18);
  uVar10 = uVar6;
  if ((int)uVar6 < 0) {
    uVar10 = uVar6 + 1;
  }
  uVar14 = (ulong)(uint)((int)uVar10 >> 1);
  uVar11 = *(uint *)(lVar5 + (-(ulong)((uint)((int)uVar10 >> 1) >> 0x1f) & 0xfffffff000000000 |
                             uVar14 << 4));
  uVar10 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  uVar8 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar10 = uVar8;
  if (iVar4 != 0) {
    uVar10 = uVar11;
  }
  if (uVar10 != uVar15) {
    uVar9 = 0;
    uVar10 = uVar6;
    if (iVar4 == 0) {
      do {
        uVar11 = (uint)uVar14;
        if (uVar8 < uVar15) {
          uVar8 = (uint)uVar9;
          uVar9 = uVar14;
          uVar11 = uVar10;
          uVar10 = uVar8;
        }
        if (uVar10 == (uint)uVar14) {
          return 0xffffffff;
        }
        iVar12 = (int)uVar9 + uVar11;
        if (iVar12 < 0) {
          iVar12 = iVar12 + 1;
        }
        uVar14 = (ulong)(uint)(iVar12 >> 1);
        uVar10 = *(uint *)(lVar5 + (-(ulong)((uint)(iVar12 >> 1) >> 0x1f) & 0xfffffff000000000 |
                                   uVar14 << 4));
        uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
        uVar8 = uVar10 >> 0x10 | uVar10 << 0x10;
        uVar10 = uVar11;
      } while (uVar8 != uVar15);
    }
    else {
      do {
        uVar13 = (uint)uVar14;
        uVar3 = uVar13;
        uVar8 = (uint)uVar9;
        uVar2 = uVar10;
        if (uVar11 < uVar15) {
          uVar3 = uVar10;
          uVar8 = uVar13;
          uVar2 = (uint)uVar9;
        }
        uVar10 = uVar3;
        if (uVar2 == uVar13) {
          return 0xffffffff;
        }
        iVar12 = uVar8 + uVar10;
        if (iVar12 < 0) {
          iVar12 = iVar12 + 1;
        }
        uVar9 = (ulong)uVar8;
        uVar14 = (ulong)(uint)(iVar12 >> 1);
        uVar11 = *(uint *)(lVar5 + (-(ulong)((uint)(iVar12 >> 1) >> 0x1f) & 0xfffffff000000000 |
                                   uVar14 << 4));
      } while (uVar11 != uVar15);
    }
  }
  iVar12 = (int)uVar14;
  if (iVar12 == -1) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar11 = *(uint *)(lVar5 + (long)iVar12 * 0x10 + 4);
    uVar10 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    if (iVar4 != 0) {
      uVar10 = uVar11;
    }
    if (uVar10 != 0) {
      iVar1 = iVar12 - (uVar10 >> 0x18);
      lVar16 = (long)(int)uVar6;
      if ((int)uVar6 <= iVar1 + 1) {
        uVar6 = iVar1 + 1;
      }
      if (iVar4 == 0) {
        lVar17 = ((long)iVar12 - (ulong)(uVar10 >> 0x18)) + 1;
        puVar18 = (uint *)(lVar5 + lVar17 * 0x10 + 4);
        uVar14 = (ulong)(iVar12 - (uVar10 >> 0x18));
        do {
          if (lVar16 <= lVar17) goto LAB_008924b4;
          uVar10 = (puVar18[-1] & 0xff00ff00) >> 8 | (puVar18[-1] & 0xff00ff) << 8;
          if ((uVar10 >> 0x10 | uVar10 << 0x10) != uVar15) {
            return 0xffffffff;
          }
          uVar10 = (*puVar18 & 0xff00ff00) >> 8;
          uVar10 = (uVar10 | (*puVar18 & 0xff0000) << 8) >> 0x10 | uVar10 << 0x10;
          if (*(ulong *)(param_1 + 0x28) < *(long *)(param_1 + 0x10) + (ulong)uVar10) {
            return 0xffffffff;
          }
          iVar4 = strcmp((char *)param_2,(char *)(*(long *)(param_1 + 0x10) + (ulong)(uVar10 << 2)))
          ;
          uVar14 = (ulong)((int)uVar14 + 1);
          lVar17 = lVar17 + 1;
          puVar18 = puVar18 + 4;
        } while (iVar4 != 0);
      }
      else {
        lVar17 = ((long)iVar12 - (ulong)(uVar10 >> 0x18)) + 1;
        puVar18 = (uint *)(lVar5 + lVar17 * 0x10 + 4);
        uVar14 = (ulong)(iVar12 - (uVar10 >> 0x18));
        do {
          if (lVar16 <= lVar17) {
LAB_008924b4:
            return (ulong)uVar6;
          }
          if (puVar18[-1] != uVar15) {
            return 0xffffffff;
          }
          if (*(ulong *)(param_1 + 0x28) < *(long *)(param_1 + 0x10) + ((ulong)*puVar18 & 0xffffff))
          {
            return 0xffffffff;
          }
          iVar4 = strcmp((char *)param_2,
                         (char *)(*(long *)(param_1 + 0x10) +
                                 (ulong)(uint)((int)((ulong)*puVar18 & 0xffffff) << 2)));
          uVar14 = (ulong)((int)uVar14 + 1);
          lVar17 = lVar17 + 1;
          puVar18 = puVar18 + 4;
        } while (iVar4 != 0);
      }
    }
  }
  return uVar14;
}


