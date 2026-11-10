/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e7290; name: FUN_008e7290
 */


void FUN_008e7290(float *param_1,float *param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  float *pfVar13;
  long lVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
LAB_008e72c0:
  do {
    pfVar13 = param_2 + -2;
LAB_008e72c8:
    lVar11 = (long)param_2 - (long)param_1;
    uVar6 = lVar11 >> 3;
    switch(uVar6) {
    case 0:
    case 1:
      goto switchD_008e764c_caseD_0;
    case 2:
      if (*param_1 < param_2[-2]) {
        return;
      }
      if ((*param_1 <= param_2[-2]) && ((int)param_1[1] <= (int)param_2[-1])) {
        return;
      }
      uVar12 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar12;
      return;
    case 3:
      FUN_008e7890(param_1,param_1 + 2,pfVar13,param_3);
      return;
    case 4:
      pfVar13 = param_1 + 4;
      FUN_008e7890(param_1,param_1 + 2,pfVar13,param_3);
      if (param_1[4] < param_2[-2]) {
        return;
      }
      if ((param_1[4] <= param_2[-2]) && ((int)param_1[5] <= (int)param_2[-1])) {
        return;
      }
      uVar12 = *(undefined8 *)pfVar13;
      *(undefined8 *)pfVar13 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar12;
      fVar16 = param_1[2];
      if (fVar16 < *pfVar13) {
        return;
      }
      if ((fVar16 <= *pfVar13) && ((int)param_1[3] <= (int)param_1[5])) {
        return;
      }
      uVar12 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 2) = uVar2;
      *(undefined8 *)(param_1 + 4) = uVar12;
      if (*param_1 < (float)uVar2) {
        return;
      }
      if ((*param_1 == (float)uVar2) && ((int)param_1[1] <= (int)((ulong)uVar2 >> 0x20))) {
        return;
      }
      uVar12 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 2) = uVar12;
      return;
    case 5:
      FUN_008e79f0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,pfVar13,param_3);
      return;
    }
    if (lVar11 < 0xf8) {
      FUN_008e7890(param_1,param_1 + 2,param_1 + 4,param_3);
      if (param_1 + 6 == param_2) {
        return;
      }
      lVar11 = 0;
      pfVar13 = param_1 + 6;
      pfVar8 = param_1 + 4;
      break;
    }
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    pfVar8 = param_1 + ((long)uVar5 >> 1) * 2;
    if (lVar11 < 0x1f39) {
      iVar4 = FUN_008e7890(param_1,pfVar8,pfVar13,param_3);
      fVar16 = *param_1;
      fVar17 = *pfVar8;
      bVar3 = fVar16 < fVar17;
      if (fVar17 < fVar16) goto LAB_008e7388;
    }
    else {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
      lVar11 = (uVar5 & 0x7ffffffffffffffc) * 2;
      iVar4 = FUN_008e79f0(param_1,(long)param_1 + lVar11,pfVar8,(long)pfVar8 + lVar11,pfVar13,
                           param_3);
      fVar16 = *param_1;
      fVar17 = *pfVar8;
      bVar3 = fVar16 < fVar17;
      if (fVar17 < fVar16) goto LAB_008e7388;
    }
    if ((!bVar3) && ((int)pfVar8[1] <= (int)param_1[1])) {
LAB_008e7388:
      if (param_1 != param_2 + -4) {
        pfVar7 = param_2 + -4;
        do {
          if ((*pfVar7 <= fVar17) && ((*pfVar7 < fVar17 || ((int)pfVar7[1] < (int)pfVar8[1])))) {
            uVar12 = *(undefined8 *)param_1;
            iVar4 = iVar4 + 1;
            *(undefined8 *)param_1 = *(undefined8 *)pfVar7;
            *(undefined8 *)pfVar7 = uVar12;
            pfVar15 = param_1 + 2;
            if (pfVar15 < pfVar7) goto LAB_008e7408;
            goto LAB_008e7460;
          }
          pfVar7 = pfVar7 + -2;
        } while (param_1 != pfVar7);
      }
      pfVar8 = param_1 + 2;
      if ((*pfVar13 < fVar16) || ((*pfVar13 <= fVar16 && ((int)param_2[-1] <= (int)param_1[1])))) {
        if (pfVar8 == pfVar13) {
          return;
        }
        pfVar8 = param_1 + 4;
        while ((pfVar8[-2] < fVar16 ||
               ((pfVar8[-2] <= fVar16 && ((int)pfVar8[-1] <= (int)param_1[1]))))) {
          pfVar8 = pfVar8 + 2;
          if (param_2 == pfVar8) {
            return;
          }
        }
        uVar12 = *(undefined8 *)(pfVar8 + -2);
        *(undefined8 *)(pfVar8 + -2) = *(undefined8 *)pfVar13;
        *(undefined8 *)pfVar13 = uVar12;
      }
      if (pfVar8 == pfVar13) {
        return;
      }
      pfVar7 = pfVar13;
      do {
        fVar16 = *param_1;
        for (pfVar9 = pfVar8;
            (*pfVar9 < fVar16 || ((*pfVar9 <= fVar16 && ((int)pfVar9[1] <= (int)param_1[1]))));
            pfVar9 = pfVar9 + 2) {
        }
        do {
          pfVar8 = pfVar7;
          pfVar7 = pfVar8 + -2;
          if (*pfVar7 < fVar16) break;
        } while ((fVar16 < *pfVar7) || ((int)param_1[1] < (int)pfVar8[-1]));
        if (pfVar7 <= pfVar9) goto LAB_008e75f0;
        uVar12 = *(undefined8 *)pfVar9;
        pfVar8 = pfVar9 + 2;
        *(undefined8 *)pfVar9 = *(undefined8 *)pfVar7;
        *(undefined8 *)pfVar7 = uVar12;
      } while( true );
    }
    pfVar15 = param_1 + 2;
    pfVar7 = pfVar13;
    if (pfVar15 < pfVar13) {
LAB_008e7408:
      while( true ) {
        fVar17 = *pfVar15;
        fVar16 = *pfVar8;
        pfVar9 = pfVar15;
        while ((fVar17 <= fVar16 && ((fVar17 < fVar16 || ((int)pfVar9[1] < (int)pfVar8[1]))))) {
          pfVar9 = pfVar9 + 2;
          fVar17 = *pfVar9;
        }
        do {
          do {
            pfVar15 = pfVar7;
            pfVar7 = pfVar15 + -2;
          } while (fVar16 < *pfVar7);
        } while ((fVar16 <= *pfVar7) && ((int)pfVar8[1] <= (int)pfVar15[-1]));
        pfVar15 = pfVar9;
        if (pfVar7 < pfVar9) break;
        uVar12 = *(undefined8 *)pfVar9;
        iVar4 = iVar4 + 1;
        pfVar1 = pfVar7;
        if (pfVar8 != pfVar9) {
          pfVar1 = pfVar8;
        }
        pfVar15 = pfVar9 + 2;
        *(undefined8 *)pfVar9 = *(undefined8 *)pfVar7;
        *(undefined8 *)pfVar7 = uVar12;
        pfVar8 = pfVar1;
      }
    }
LAB_008e7460:
    if (((pfVar15 != pfVar8) && (*pfVar8 <= *pfVar15)) &&
       ((*pfVar8 < *pfVar15 || ((int)pfVar8[1] < (int)pfVar15[1])))) {
      uVar12 = *(undefined8 *)pfVar15;
      iVar4 = iVar4 + 1;
      *(undefined8 *)pfVar15 = *(undefined8 *)pfVar8;
      *(undefined8 *)pfVar8 = uVar12;
    }
    if (iVar4 == 0) {
      uVar6 = FUN_008e7bd0(param_1,pfVar15,param_3);
      pfVar9 = pfVar15 + 2;
      uVar5 = FUN_008e7bd0(pfVar9,param_2,param_3);
      if ((uVar5 & 1) == 0) {
        if ((uVar6 & 1) == 0) goto LAB_008e74e0;
        uVar10 = 2;
        goto LAB_008e75f8;
      }
      param_2 = pfVar15;
      if ((uVar6 & 1) != 0) {
        return;
      }
      goto LAB_008e72c0;
    }
LAB_008e74e0:
    if ((long)pfVar15 - (long)param_1 < (long)param_2 - (long)pfVar15) {
      FUN_008e7290(param_1,pfVar15,param_3);
      param_1 = pfVar15 + 2;
      goto LAB_008e72c8;
    }
    FUN_008e7290(pfVar15 + 2,param_2,param_3);
    param_2 = pfVar15;
  } while( true );
LAB_008e76d0:
  pfVar7 = pfVar13;
  fVar16 = *pfVar7;
  if ((fVar16 <= *pfVar8) &&
     ((fVar17 = pfVar7[1], fVar16 < *pfVar8 || ((int)fVar17 < (int)pfVar8[1])))) {
    *(undefined8 *)pfVar7 = *(undefined8 *)pfVar8;
    pfVar13 = param_1;
    if (pfVar8 != param_1) {
      pfVar13 = pfVar8;
      lVar14 = lVar11;
      do {
        fVar18 = *(float *)((long)param_1 + lVar14 + 8);
        if (fVar18 < fVar16) {
          pfVar13 = (float *)((long)param_1 + lVar14 + 0x10);
          goto LAB_008e76b8;
        }
        if ((fVar18 == fVar16) && (*(int *)((long)param_1 + lVar14 + 0xc) <= (int)fVar17))
        goto LAB_008e76b8;
        bVar3 = lVar14 != -8;
        *(undefined8 *)((long)param_1 + lVar14 + 0x10) = *(undefined8 *)((long)param_1 + lVar14 + 8)
        ;
        pfVar13 = pfVar13 + -2;
        lVar14 = lVar14 + -8;
      } while (bVar3);
      pfVar13 = param_1;
    }
LAB_008e76b8:
    *pfVar13 = fVar16;
    pfVar13[1] = fVar17;
  }
  lVar11 = lVar11 + 8;
  pfVar13 = pfVar7 + 2;
  pfVar8 = pfVar7;
  if (pfVar7 + 2 == param_2) {
switchD_008e764c_caseD_0:
    return;
  }
  goto LAB_008e76d0;
LAB_008e75f0:
  uVar10 = 4;
LAB_008e75f8:
  if (4 < uVar10) {
    return;
  }
  param_1 = pfVar9;
  if ((1 << (ulong)uVar10 & 0x15U) == 0) {
    return;
  }
  goto LAB_008e72c8;
}


