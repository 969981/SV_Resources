/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0082d020; name: FUN_0082d020
 */


int FUN_0082d020(long param_1,uint *param_2,int param_3,uint param_4,uint *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  
  puVar7 = PTR_DAT_047d1a60;
  lVar11 = *(long *)(param_1 + 0x48);
  lVar3 = 0;
  if (lVar11 != 0) {
    lVar3 = lVar11 + param_1 + 0x48;
  }
  if (param_4 == 0xffffffff) {
    uVar10 = -(uint)(*(int *)(lVar3 + 0x68) == 0);
  }
  else {
    plVar14 = (long *)(lVar3 + 0x70);
    plVar15 = (long *)(lVar3 + 0x60);
    param_4 = param_4 >> (ulong)(-(uint)*(byte *)(param_1 + 0x1c) & 0x1f);
    uVar9 = param_4 >> 8;
    uVar10 = param_4 >> 1 & 0x7f;
    iVar17 = uVar10 + *(int *)((long)plVar15 + (ulong)uVar9 * 0x60 + *plVar15 + 0x50);
    lVar11 = (long)iVar17 * 4 + *plVar14;
    cVar6 = *(char *)((long)plVar14 + lVar11 + 3);
    if ((cVar6 == *(char *)((long)plVar14 + lVar11 + 1)) ||
       ((uint)(*(char *)((long)plVar14 + (long)iVar17 * 4 + *plVar14 + 2) != cVar6) <= (param_4 & 1)
       )) {
      uVar10 = uVar10 + 1;
      if (uVar10 < *(byte *)((long)plVar15 + (ulong)uVar9 * 0x60 + *plVar15 + 0x59)) {
        uVar13 = 0;
      }
      else {
        uVar9 = uVar9 + 1;
        uVar13 = 0;
        uVar10 = 0;
        if (*(int *)(lVar3 + 0x68) <= (int)uVar9) {
          return 0;
        }
      }
    }
    else {
      uVar13 = (param_4 & 1) + 1;
    }
    uVar10 = uVar13 | uVar10 << 1 | uVar9 << 8;
  }
  if (uVar10 == 0xffffffff) {
    iVar17 = 0;
  }
  else {
    plVar16 = (long *)(lVar3 + 0x70);
    lVar12 = *plVar16;
    plVar15 = (long *)(lVar3 + 0x60);
    lVar11 = *plVar15;
    iVar17 = 0;
    plVar14 = (long *)PTR_DAT_047d19f0;
    do {
      while( true ) {
        lVar2 = lVar12 + (long)plVar16;
        lVar4 = 0;
        if (lVar12 != 0) {
          lVar4 = lVar2;
        }
        while( true ) {
          uVar18 = uVar10 >> 8;
          uVar19 = (ulong)uVar18;
          uVar5 = *(uint *)((long)plVar15 + uVar19 * 0x60 + lVar11 + 0x50);
          uVar13 = uVar10 >> 1 & 0x7f;
          lVar12 = lVar4 + (ulong)uVar5 * 4 + (ulong)uVar13 * 4;
          uVar9 = uVar10 & 1;
          if ((*(char *)(lVar12 + 1) != *(char *)(lVar12 + 3)) || (*(byte *)(lVar12 + 2) - 3 < 2))
          break;
          iVar1 = uVar5 + uVar13;
          lVar12 = lVar2 + (long)iVar1 * 4;
          cVar6 = *(char *)(lVar12 + 3);
          if ((cVar6 == *(char *)(lVar12 + 1)) ||
             ((*(char *)(lVar2 + (long)iVar1 * 4 + 2) != cVar6) <= uVar9)) {
            uVar13 = uVar13 + 1;
            if (uVar13 < *(byte *)((long)plVar15 + uVar19 * 0x60 + lVar11 + 0x59)) {
              uVar9 = 0;
            }
            else {
              uVar18 = uVar18 + 1;
              if (*(int *)(lVar3 + 0x68) <= (int)uVar18) {
                return iVar17;
              }
              uVar9 = 0;
              uVar13 = 0;
            }
          }
          else {
            uVar9 = uVar9 + 1;
          }
          uVar10 = uVar9 | uVar13 << 1 | uVar18 << 8;
          if (uVar10 == 0xffffffff) {
            return iVar17;
          }
        }
        lVar11 = *(long *)(param_5 + 2);
        if ((lVar11 == 0) ||
           (uVar8 = (**(code **)(*plVar14 + (ulong)*(byte *)(lVar11 + 0x18) * 0x40 + 0x4020))
                              (lVar11,(uVar10 + 1 <<
                                      (ulong)(-(uint)*(byte *)(param_1 + 0x1c) & 0x1f)) + -1),
           plVar14 = (long *)PTR_DAT_047d19f0, (uVar8 & 1) != 0)) {
          iVar17 = iVar17 + 1;
          *param_2 = (uVar10 + 1 << (ulong)(-((uint)*(byte *)(param_1 + 0x1c) + param_5[1]) & 0x1f))
                     - 1 | *(uint *)(puVar7 + (long)(int)param_5[1] * 4) & *param_5;
          if (iVar17 == param_3) {
            return param_3;
          }
          param_2 = param_2 + 1;
        }
        lVar11 = *plVar15;
        iVar1 = *(int *)((long)plVar15 + uVar19 * 0x60 + lVar11 + 0x50) + uVar13;
        lVar12 = *plVar16;
        lVar2 = (long)iVar1 * 4 + lVar12;
        cVar6 = *(char *)((long)plVar16 + lVar2 + 3);
        if ((cVar6 != *(char *)((long)plVar16 + lVar2 + 1)) &&
           (uVar9 < (*(char *)((long)plVar16 + (long)iVar1 * 4 + lVar12 + 2) != cVar6))) break;
        if (uVar13 + 1 < (uint)*(byte *)((long)plVar15 + uVar19 * 0x60 + lVar11 + 0x59)) {
          uVar10 = (uVar13 + 1) * 2 | uVar18 << 8;
        }
        else {
          if (*(int *)(lVar3 + 0x68) <= (int)(uVar18 + 1)) {
            return iVar17;
          }
          uVar10 = (uVar18 + 1) * 0x100;
        }
        if (uVar10 == 0xffffffff) {
          return iVar17;
        }
      }
      uVar10 = uVar9 + 1 | uVar13 << 1 | uVar18 << 8;
    } while (uVar10 != 0xffffffff);
  }
  return iVar17;
}


