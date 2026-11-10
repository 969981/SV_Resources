/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da0a30; name: FUN_00da0a30
 */


void FUN_00da0a30(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  
LAB_00da0a50:
  do {
    plVar9 = param_2 + -1;
    plVar14 = param_1;
LAB_00da0a5c:
    param_1 = plVar14;
    lVar13 = (long)param_2 - (long)param_1;
    uVar10 = lVar13 >> 3;
    switch(uVar10) {
    case 0:
    case 1:
      return;
    case 2:
      lVar13 = *plVar9;
      lVar17 = *(long *)(*param_3 + 0x280);
      lVar16 = *(long *)(*param_3 + 0x248);
      uVar10 = lVar17 + *(int *)(lVar13 + 0x468);
      lVar15 = *param_1;
      iVar3 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                       (uVar10 & 0x1f) * 0x80 + 0x78);
      uVar10 = lVar17 + *(int *)(lVar15 + 0x468);
      iVar4 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                       (uVar10 & 0x1f) * 0x80 + 0x78);
      bVar6 = SBORROW4(iVar3,iVar4);
      iVar7 = iVar3 - iVar4;
      if (iVar3 == iVar4) {
        bVar6 = SBORROW4(*(int *)(lVar13 + 0x4f4),*(int *)(lVar15 + 0x4f4));
        iVar7 = *(int *)(lVar13 + 0x4f4) - *(int *)(lVar15 + 0x4f4);
      }
      if (iVar7 < 0 == bVar6) {
        return;
      }
      *param_1 = lVar13;
      *plVar9 = lVar15;
      return;
    case 3:
      FUN_00da13c0(param_1,param_1 + 1,plVar9,param_3);
      return;
    case 4:
      FUN_00da1200(param_1,param_1 + 1,param_1 + 2,plVar9,param_3);
      return;
    case 5:
      FUN_00da15a0(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
      return;
    }
    if (lVar13 < 0xf8) {
      FUN_00da13c0(param_1,param_1 + 1,param_1 + 2,param_3);
      if (param_1 + 3 == param_2) {
        return;
      }
      lVar13 = 0;
      plVar9 = param_1 + 3;
      plVar14 = param_1 + 2;
      break;
    }
    uVar8 = uVar10;
    if ((long)uVar10 < 0) {
      uVar8 = uVar10 + 1;
    }
    plVar14 = (long *)((long)param_1 + (uVar8 & 0x3ffffffffffffffe) * 4);
    if (lVar13 < 0x1f39) {
      iVar7 = FUN_00da13c0(param_1,plVar14,plVar9,param_3);
    }
    else {
      uVar8 = uVar10 + 3;
      if (-1 < (long)uVar10) {
        uVar8 = uVar10;
      }
      lVar13 = (uVar8 & 0x7ffffffffffffffc) * 2;
      iVar7 = FUN_00da15a0(param_1,(long)param_1 + lVar13,plVar14,(long)plVar14 + lVar13,plVar9,
                           param_3);
    }
    lVar13 = *param_1;
    lVar15 = *(long *)(*param_3 + 0x280);
    uVar10 = lVar15 + *(int *)(lVar13 + 0x468);
    lVar16 = *(long *)(*param_3 + 0x248);
    lVar17 = *plVar14;
    iVar3 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) + (uVar10 & 0x1f) * 0x80
                    + 0x78);
    uVar10 = lVar15 + *(int *)(lVar17 + 0x468);
    iVar4 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) + (uVar10 & 0x1f) * 0x80
                    + 0x78);
    if (iVar3 == iVar4) {
      if (*(int *)(lVar17 + 0x4f4) <= *(int *)(lVar13 + 0x4f4)) goto LAB_00da0c48;
    }
    else if (iVar4 <= iVar3) {
LAB_00da0c48:
      for (plVar11 = param_2 + -2; param_1 != plVar11; plVar11 = plVar11 + -1) {
        lVar18 = *plVar11;
        uVar10 = lVar15 + *(int *)(lVar18 + 0x468);
        iVar5 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar10 & 0x1f) * 0x80 + 0x78);
        bVar6 = SBORROW4(iVar5,iVar4);
        iVar1 = iVar5 - iVar4;
        if (iVar5 == iVar4) {
          bVar6 = SBORROW4(*(int *)(lVar18 + 0x4f4),*(int *)(lVar17 + 0x4f4));
          iVar1 = *(int *)(lVar18 + 0x4f4) - *(int *)(lVar17 + 0x4f4);
        }
        if (iVar1 < 0 != bVar6) {
          iVar7 = iVar7 + 1;
          *param_1 = lVar18;
          *plVar11 = lVar13;
          goto LAB_00da0fcc;
        }
      }
      plVar11 = param_1 + 1;
      lVar17 = *plVar9;
      uVar10 = lVar15 + *(int *)(lVar17 + 0x468);
      iVar4 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                       (uVar10 & 0x1f) * 0x80 + 0x78);
      bVar6 = SBORROW4(iVar3,iVar4);
      iVar7 = iVar3 - iVar4;
      if (iVar3 == iVar4) {
        bVar6 = SBORROW4(*(int *)(lVar13 + 0x4f4),*(int *)(lVar17 + 0x4f4));
        iVar7 = *(int *)(lVar13 + 0x4f4) - *(int *)(lVar17 + 0x4f4);
      }
      if (iVar7 < 0 == bVar6) {
        if (plVar11 == plVar9) {
          return;
        }
        plVar11 = param_1 + 2;
        while( true ) {
          lVar18 = plVar11[-1];
          uVar10 = lVar15 + *(int *)(lVar18 + 0x468);
          iVar4 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                           (uVar10 & 0x1f) * 0x80 + 0x78);
          bVar6 = SBORROW4(iVar3,iVar4);
          iVar7 = iVar3 - iVar4;
          if (iVar3 == iVar4) {
            bVar6 = SBORROW4(*(int *)(lVar13 + 0x4f4),*(int *)(lVar18 + 0x4f4));
            iVar7 = *(int *)(lVar13 + 0x4f4) - *(int *)(lVar18 + 0x4f4);
          }
          if (iVar7 < 0 != bVar6) break;
          plVar11 = plVar11 + 1;
          if (param_2 == plVar11) {
            return;
          }
        }
        plVar11[-1] = lVar17;
        *plVar9 = lVar18;
      }
      plVar12 = plVar9;
      if (plVar11 == plVar9) {
        return;
      }
LAB_00da0ee8:
      lVar13 = *param_1;
      lVar15 = *(long *)(*param_3 + 0x280);
      lVar16 = *(long *)(*param_3 + 0x248);
      uVar10 = lVar15 + *(int *)(lVar13 + 0x468);
      iVar7 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                       (uVar10 & 0x1f) * 0x80 + 0x78);
      plVar14 = plVar11;
      do {
        lVar17 = *plVar14;
        uVar10 = lVar15 + *(int *)(lVar17 + 0x468);
        iVar3 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar10 & 0x1f) * 0x80 + 0x78);
        if (iVar7 == iVar3) {
          if (*(int *)(lVar13 + 0x4f4) < *(int *)(lVar17 + 0x4f4)) goto LAB_00da0f64;
        }
        else if (iVar7 < iVar3) goto LAB_00da0f64;
        plVar14 = plVar14 + 1;
      } while( true );
    }
    plVar11 = plVar9;
LAB_00da0fcc:
    plVar12 = param_1 + 1;
    plVar20 = plVar12;
    if (plVar12 < plVar11) {
LAB_00da0fd8:
      lVar13 = *plVar14;
      lVar15 = *(long *)(*param_3 + 0x280);
      lVar16 = *(long *)(*param_3 + 0x248);
      uVar10 = lVar15 + *(int *)(lVar13 + 0x468);
      iVar3 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                       (uVar10 & 0x1f) * 0x80 + 0x78);
      plVar20 = plVar12;
      do {
        lVar17 = *plVar20;
        uVar10 = lVar15 + *(int *)(lVar17 + 0x468);
        iVar4 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar10 & 0x1f) * 0x80 + 0x78);
        if (iVar4 == iVar3) {
          if (*(int *)(lVar13 + 0x4f4) <= *(int *)(lVar17 + 0x4f4)) goto LAB_00da1048;
        }
        else if (iVar3 <= iVar4) goto LAB_00da1048;
        plVar20 = plVar20 + 1;
      } while( true );
    }
LAB_00da108c:
    if (plVar20 != plVar14) {
      lVar15 = *plVar14;
      lVar17 = *(long *)(*param_3 + 0x280);
      lVar16 = *(long *)(*param_3 + 0x248);
      uVar10 = lVar17 + *(int *)(lVar15 + 0x468);
      lVar13 = *plVar20;
      iVar4 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                       (uVar10 & 0x1f) * 0x80 + 0x78);
      uVar10 = lVar17 + *(int *)(lVar13 + 0x468);
      iVar1 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                       (uVar10 & 0x1f) * 0x80 + 0x78);
      bVar6 = SBORROW4(iVar4,iVar1);
      iVar3 = iVar4 - iVar1;
      if (iVar4 == iVar1) {
        bVar6 = SBORROW4(*(int *)(lVar15 + 0x4f4),*(int *)(lVar13 + 0x4f4));
        iVar3 = *(int *)(lVar15 + 0x4f4) - *(int *)(lVar13 + 0x4f4);
      }
      if (iVar3 < 0 != bVar6) {
        iVar7 = iVar7 + 1;
        *plVar20 = lVar15;
        *plVar14 = lVar13;
      }
    }
    if (iVar7 != 0) goto LAB_00da11b0;
    uVar10 = FUN_028f5380(param_1,plVar20,param_3);
    uVar8 = FUN_028f5380(plVar20 + 1,param_2,param_3);
    if ((uVar8 & 1) == 0) goto LAB_00da11a0;
    param_2 = plVar20;
    if ((uVar10 & 1) != 0) {
      return;
    }
  } while( true );
LAB_00da0cc8:
  plVar11 = plVar9;
  lVar15 = *plVar11;
  lVar18 = *(long *)(*param_3 + 0x280);
  lVar17 = *(long *)(*param_3 + 0x248);
  uVar10 = lVar18 + *(int *)(lVar15 + 0x468);
  lVar16 = *plVar14;
  iVar3 = *(int *)(*(long *)(lVar17 + (uVar10 >> 2 & 0x3ffffffffffffff8)) + (uVar10 & 0x1f) * 0x80 +
                  0x78);
  uVar10 = lVar18 + *(int *)(lVar16 + 0x468);
  iVar4 = *(int *)(*(long *)(lVar17 + (uVar10 >> 2 & 0x3ffffffffffffff8)) + (uVar10 & 0x1f) * 0x80 +
                  0x78);
  bVar6 = SBORROW4(iVar3,iVar4);
  iVar7 = iVar3 - iVar4;
  if (iVar3 == iVar4) {
    bVar6 = SBORROW4(*(int *)(lVar15 + 0x4f4),*(int *)(lVar16 + 0x4f4));
    iVar7 = *(int *)(lVar15 + 0x4f4) - *(int *)(lVar16 + 0x4f4);
  }
  if (iVar7 < 0 != bVar6) {
    *plVar11 = lVar16;
    if (plVar14 != param_1) {
      lVar16 = lVar13;
      do {
        lVar17 = *(long *)((long)param_1 + lVar16 + 8);
        lVar19 = *(long *)(*param_3 + 0x280);
        lVar18 = *(long *)(*param_3 + 0x248);
        uVar10 = lVar19 + *(int *)(lVar15 + 0x468);
        iVar7 = *(int *)(*(long *)(lVar18 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar10 & 0x1f) * 0x80 + 0x78);
        uVar10 = lVar19 + *(int *)(lVar17 + 0x468);
        iVar3 = *(int *)(*(long *)(lVar18 + (uVar10 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar10 & 0x1f) * 0x80 + 0x78);
        if (iVar7 == iVar3) {
          if (*(int *)(lVar17 + 0x4f4) <= *(int *)(lVar15 + 0x4f4)) goto LAB_00da0de0;
        }
        else if (iVar3 <= iVar7) {
          plVar14 = (long *)((long)param_1 + lVar16 + 0x10);
          goto LAB_00da0de0;
        }
        plVar14 = plVar14 + -1;
        *(long *)((long)param_1 + lVar16 + 0x10) = lVar17;
        bVar6 = lVar16 != -8;
        lVar16 = lVar16 + -8;
      } while (bVar6);
      plVar14 = param_1;
    }
LAB_00da0de0:
    *plVar14 = lVar15;
  }
  lVar13 = lVar13 + 8;
  plVar9 = plVar11 + 1;
  plVar14 = plVar11;
  if (plVar11 + 1 == param_2) {
    return;
  }
  goto LAB_00da0cc8;
LAB_00da0f64:
  do {
    plVar12 = plVar12 + -1;
    lVar18 = *plVar12;
    uVar10 = lVar15 + *(int *)(lVar18 + 0x468);
    iVar4 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) + (uVar10 & 0x1f) * 0x80
                    + 0x78);
    bVar6 = SBORROW4(iVar7,iVar4);
    iVar3 = iVar7 - iVar4;
    if (iVar7 == iVar4) {
      bVar6 = SBORROW4(*(int *)(lVar13 + 0x4f4),*(int *)(lVar18 + 0x4f4));
      iVar3 = *(int *)(lVar13 + 0x4f4) - *(int *)(lVar18 + 0x4f4);
    }
  } while (iVar3 < 0 != bVar6);
  if (plVar12 <= plVar14) goto LAB_00da0fb8;
  plVar11 = plVar14 + 1;
  *plVar14 = lVar18;
  *plVar12 = lVar17;
  goto LAB_00da0ee8;
LAB_00da1048:
  do {
    plVar11 = plVar11 + -1;
    lVar18 = *plVar11;
    uVar10 = lVar15 + *(int *)(lVar18 + 0x468);
    iVar1 = *(int *)(*(long *)(lVar16 + (uVar10 >> 2 & 0x3ffffffffffffff8)) + (uVar10 & 0x1f) * 0x80
                    + 0x78);
    bVar6 = SBORROW4(iVar1,iVar3);
    iVar4 = iVar1 - iVar3;
    if (iVar1 == iVar3) {
      bVar6 = SBORROW4(*(int *)(lVar18 + 0x4f4),*(int *)(lVar13 + 0x4f4));
      iVar4 = *(int *)(lVar18 + 0x4f4) - *(int *)(lVar13 + 0x4f4);
    }
  } while (iVar4 < 0 == bVar6);
  if (plVar11 < plVar20) goto LAB_00da108c;
  iVar7 = iVar7 + 1;
  plVar2 = plVar11;
  if (plVar14 != plVar20) {
    plVar2 = plVar14;
  }
  plVar12 = plVar20 + 1;
  *plVar20 = lVar18;
  *plVar11 = lVar17;
  plVar14 = plVar2;
  goto LAB_00da0fd8;
LAB_00da11a0:
  plVar14 = plVar20 + 1;
  if ((uVar10 & 1) == 0) {
LAB_00da11b0:
    if ((long)param_2 - (long)plVar20 <= (long)plVar20 - (long)param_1) {
      FUN_00da0a30(plVar20 + 1,param_2,param_3);
      param_2 = plVar20;
      goto LAB_00da0a50;
    }
    FUN_00da0a30(param_1,plVar20,param_3);
    plVar14 = plVar20 + 1;
LAB_00da0fb8:
  }
  goto LAB_00da0a5c;
}


