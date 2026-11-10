/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e8b70; name: FUN_030e8b70
 */


ulong FUN_030e8b70(long param_1,uint param_2,long *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  int *piVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  
  puVar6 = PTR_DAT_047e4f38;
  iVar9 = *(int *)PTR_DAT_047e4f38;
  lVar5 = tpidr_el0;
  lVar10 = *(long *)(lVar5 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar10;
  }
  if (*(long *)(lVar10 + (long)iVar9 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (param_2 == 1) {
    *param_3 = param_1;
    uVar22 = 1;
  }
  else {
    uVar2 = param_2;
    if ((int)param_2 < 0) {
      uVar2 = param_2 + 1;
    }
    iVar9 = (int)uVar2 >> 1;
    iVar7 = FUN_030e8b70(param_1,iVar9,param_4,param_3);
    lVar10 = param_4 + (long)iVar9 * 8;
    iVar8 = FUN_030e8b70(param_1 + (long)iVar9 * 0x10,param_2 - iVar9,lVar10,param_3);
    iVar9 = 0;
    if (iVar7 < 1) {
      uVar22 = 0;
      iVar12 = 0;
    }
    else {
      uVar22 = 0;
      iVar12 = 0;
      if (0 < iVar8) {
        uVar22 = 0;
        iVar12 = 0;
        iVar9 = 0;
        do {
          piVar14 = *(int **)(param_4 + (long)iVar12 * 8);
          iVar21 = *piVar14;
          piVar16 = *(int **)(lVar10 + (long)iVar9 * 8);
          iVar19 = *piVar16;
          if (iVar21 == iVar19) {
            iVar19 = piVar16[1];
            iVar21 = piVar14[1];
            if (iVar21 != iVar19) goto LAB_030e8c9c;
            uVar3 = *(ushort *)(piVar16 + 2);
            uVar4 = *(ushort *)(piVar14 + 2);
            if (uVar4 != uVar3) {
LAB_030e8cb0:
              if (uVar3 <= uVar4) goto LAB_030e8cb8;
              goto LAB_030e8ca4;
            }
            uVar3 = *(ushort *)((long)piVar16 + 10);
            uVar4 = *(ushort *)((long)piVar14 + 10);
            if (uVar4 != uVar3) goto LAB_030e8cb0;
            iVar12 = iVar12 + 1;
LAB_030e8cb8:
            param_3[uVar22] = (long)piVar16;
            iVar9 = iVar9 + 1;
          }
          else {
LAB_030e8c9c:
            if (iVar19 <= iVar21) goto LAB_030e8cb8;
LAB_030e8ca4:
            param_3[uVar22] = (long)piVar14;
            iVar12 = iVar12 + 1;
          }
          uVar22 = uVar22 + 1;
        } while ((iVar9 < iVar8) && (iVar12 < iVar7));
      }
    }
    if (iVar7 - iVar12 != 0 && iVar12 <= iVar7) {
      lVar20 = (long)iVar12;
      uVar17 = uVar22 & 0xffffffff;
      if ((iVar7 - iVar12 & 1U) != 0) {
        lVar1 = lVar20 * 8;
        lVar20 = lVar20 + 1;
        param_3[uVar17] = *(long *)(param_4 + lVar1);
        uVar17 = uVar17 + 1;
      }
      if (iVar7 != iVar12 + 1) {
        iVar21 = ((iVar7 + (int)uVar22) - iVar12) - (int)uVar17;
        plVar15 = param_3 + uVar17 + 1;
        plVar18 = (long *)(param_4 + lVar20 * 8 + 8);
        do {
          plVar15[-1] = plVar18[-1];
          iVar21 = iVar21 + -2;
          *plVar15 = *plVar18;
          plVar15 = plVar15 + 2;
          plVar18 = plVar18 + 2;
        } while (iVar21 != 0);
      }
      uVar22 = (ulong)(uint)(((int)uVar22 + iVar7) - iVar12);
    }
    if (iVar9 < iVar8) {
      uVar17 = (ulong)iVar9;
      uVar13 = uVar22 & 0xffffffff;
      uVar11 = ~uVar17;
      if ((iVar8 - iVar9 & 1U) != 0) {
        lVar20 = uVar17 * 8;
        uVar22 = uVar13 + 1;
        uVar17 = uVar17 + 1;
        param_3[uVar13] = *(long *)(lVar10 + lVar20);
        uVar13 = uVar22;
      }
      if (uVar11 + (long)iVar8 != 0) {
        lVar10 = (long)iVar8 - uVar17;
        plVar15 = param_3 + uVar13 + 1;
        plVar18 = (long *)(param_4 + (uVar17 + ((long)((ulong)uVar2 << 0x20) >> 0x21)) * 8 + 8);
        uVar22 = uVar13;
        do {
          plVar15[-1] = plVar18[-1];
          uVar22 = uVar22 + 2;
          lVar10 = lVar10 + -2;
          *plVar15 = *plVar18;
          plVar15 = plVar15 + 2;
          plVar18 = plVar18 + 2;
        } while (lVar10 != 0);
      }
    }
    iVar9 = *(int *)puVar6;
    lVar10 = *(long *)(lVar5 + 0x1000b8);
    if (lVar10 == 0) {
      lVar10 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar10;
    }
    if (*(long *)(lVar10 + (long)iVar9 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
  }
  return uVar22 & 0xffffffff;
}


