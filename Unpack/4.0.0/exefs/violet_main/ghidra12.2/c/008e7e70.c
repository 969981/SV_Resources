/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e7e70; name: FUN_008e7e70
 */


void FUN_008e7e70(float *param_1,float *param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
LAB_008e7ea0:
  do {
    pfVar14 = param_2 + -2;
LAB_008e7ea8:
    lVar12 = (long)param_2 - (long)param_1;
    uVar7 = lVar12 >> 3;
    switch(uVar7) {
    case 0:
    case 1:
      goto switchD_008e822c_caseD_0;
    case 2:
      if (param_2[-2] < *param_1) {
        return;
      }
      if ((param_2[-2] == *param_1) && ((int)param_1[1] <= (int)param_2[-1])) {
        return;
      }
      uVar13 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar13;
      return;
    case 3:
      FUN_008e8470(param_1,param_1 + 2,pfVar14,param_3);
      return;
    case 4:
      pfVar14 = param_1 + 4;
      FUN_008e8470(param_1,param_1 + 2,pfVar14,param_3);
      if (param_2[-2] < param_1[4]) {
        return;
      }
      if ((param_2[-2] == param_1[4]) && ((int)param_1[5] <= (int)param_2[-1])) {
        return;
      }
      uVar13 = *(undefined8 *)pfVar14;
      *(undefined8 *)pfVar14 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar13;
      fVar17 = param_1[2];
      if (*pfVar14 < fVar17) {
        return;
      }
      if ((*pfVar14 == fVar17) && ((int)param_1[3] <= (int)param_1[5])) {
        return;
      }
      uVar13 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 2) = uVar2;
      *(undefined8 *)(param_1 + 4) = uVar13;
      if ((float)uVar2 < *param_1) {
        return;
      }
      if (((float)uVar2 <= *param_1) && ((int)param_1[1] <= (int)((ulong)uVar2 >> 0x20))) {
        return;
      }
      uVar13 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 2) = uVar13;
      return;
    case 5:
      FUN_008e85d0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,pfVar14,param_3);
      return;
    }
    if (lVar12 < 0xf8) {
      FUN_008e8470(param_1,param_1 + 2,param_1 + 4,param_3);
      if (param_1 + 6 == param_2) {
        return;
      }
      lVar12 = 0;
      pfVar14 = param_1 + 6;
      pfVar9 = param_1 + 4;
      break;
    }
    uVar6 = uVar7;
    if ((long)uVar7 < 0) {
      uVar6 = uVar7 + 1;
    }
    pfVar9 = param_1 + ((long)uVar6 >> 1) * 2;
    if (lVar12 < 0x1f39) {
      iVar5 = FUN_008e8470(param_1,pfVar9,pfVar14,param_3);
      fVar17 = *param_1;
      fVar18 = *pfVar9;
      bVar4 = NAN(fVar17) || NAN(fVar18);
      bVar3 = fVar17 == fVar18;
      if (fVar17 < fVar18) goto LAB_008e7f68;
    }
    else {
      uVar6 = uVar7 + 3;
      if (-1 < (long)uVar7) {
        uVar6 = uVar7;
      }
      lVar12 = (uVar6 & 0x7ffffffffffffffc) * 2;
      iVar5 = FUN_008e85d0(param_1,(long)param_1 + lVar12,pfVar9,(long)pfVar9 + lVar12,pfVar14,
                           param_3);
      fVar17 = *param_1;
      fVar18 = *pfVar9;
      bVar4 = NAN(fVar17) || NAN(fVar18);
      bVar3 = fVar17 == fVar18;
      if (fVar17 < fVar18) goto LAB_008e7f68;
    }
    if ((bVar3 || bVar4) && ((int)pfVar9[1] <= (int)param_1[1])) {
LAB_008e7f68:
      if (param_1 != param_2 + -4) {
        pfVar8 = param_2 + -4;
        do {
          if ((fVar18 <= *pfVar8) && ((*pfVar8 != fVar18 || ((int)pfVar8[1] < (int)pfVar9[1])))) {
            uVar13 = *(undefined8 *)param_1;
            iVar5 = iVar5 + 1;
            *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
            *(undefined8 *)pfVar8 = uVar13;
            pfVar16 = param_1 + 2;
            if (pfVar16 < pfVar8) goto LAB_008e7fe8;
            goto LAB_008e8040;
          }
          pfVar8 = pfVar8 + -2;
        } while (param_1 != pfVar8);
      }
      pfVar9 = param_1 + 2;
      if ((fVar17 < *pfVar14) || ((fVar17 == *pfVar14 && ((int)param_2[-1] <= (int)param_1[1])))) {
        if (pfVar9 == pfVar14) {
          return;
        }
        pfVar9 = param_1 + 4;
        while ((fVar17 < pfVar9[-2] ||
               ((fVar17 == pfVar9[-2] && ((int)pfVar9[-1] <= (int)param_1[1]))))) {
          pfVar9 = pfVar9 + 2;
          if (param_2 == pfVar9) {
            return;
          }
        }
        uVar13 = *(undefined8 *)(pfVar9 + -2);
        *(undefined8 *)(pfVar9 + -2) = *(undefined8 *)pfVar14;
        *(undefined8 *)pfVar14 = uVar13;
      }
      if (pfVar9 == pfVar14) {
        return;
      }
      pfVar8 = pfVar14;
      do {
        fVar17 = *param_1;
        for (pfVar10 = pfVar9;
            (fVar17 < *pfVar10 || ((fVar17 == *pfVar10 && ((int)pfVar10[1] <= (int)param_1[1]))));
            pfVar10 = pfVar10 + 2) {
        }
        do {
          pfVar9 = pfVar8;
          pfVar8 = pfVar9 + -2;
          if (fVar17 < *pfVar8) break;
        } while ((*pfVar8 < fVar17) || ((int)param_1[1] < (int)pfVar9[-1]));
        if (pfVar8 <= pfVar10) goto LAB_008e81d0;
        uVar13 = *(undefined8 *)pfVar10;
        pfVar9 = pfVar10 + 2;
        *(undefined8 *)pfVar10 = *(undefined8 *)pfVar8;
        *(undefined8 *)pfVar8 = uVar13;
      } while( true );
    }
    pfVar16 = param_1 + 2;
    pfVar8 = pfVar14;
    if (pfVar16 < pfVar14) {
LAB_008e7fe8:
      while( true ) {
        fVar18 = *pfVar16;
        fVar17 = *pfVar9;
        pfVar10 = pfVar16;
        while ((fVar17 <= fVar18 && ((fVar17 < fVar18 || ((int)pfVar10[1] < (int)pfVar9[1]))))) {
          pfVar10 = pfVar10 + 2;
          fVar18 = *pfVar10;
        }
        do {
          do {
            pfVar16 = pfVar8;
            pfVar8 = pfVar16 + -2;
          } while (*pfVar8 < fVar17);
        } while ((*pfVar8 == fVar17) && ((int)pfVar9[1] <= (int)pfVar16[-1]));
        pfVar16 = pfVar10;
        if (pfVar8 < pfVar10) break;
        uVar13 = *(undefined8 *)pfVar10;
        iVar5 = iVar5 + 1;
        pfVar1 = pfVar8;
        if (pfVar9 != pfVar10) {
          pfVar1 = pfVar9;
        }
        pfVar16 = pfVar10 + 2;
        *(undefined8 *)pfVar10 = *(undefined8 *)pfVar8;
        *(undefined8 *)pfVar8 = uVar13;
        pfVar9 = pfVar1;
      }
    }
LAB_008e8040:
    if (((pfVar16 != pfVar9) && (*pfVar16 <= *pfVar9)) &&
       ((*pfVar9 != *pfVar16 || ((int)pfVar9[1] < (int)pfVar16[1])))) {
      uVar13 = *(undefined8 *)pfVar16;
      iVar5 = iVar5 + 1;
      *(undefined8 *)pfVar16 = *(undefined8 *)pfVar9;
      *(undefined8 *)pfVar9 = uVar13;
    }
    if (iVar5 == 0) {
      uVar7 = FUN_008e87b0(param_1,pfVar16,param_3);
      pfVar10 = pfVar16 + 2;
      uVar6 = FUN_008e87b0(pfVar10,param_2,param_3);
      if ((uVar6 & 1) == 0) {
        if ((uVar7 & 1) == 0) goto LAB_008e80c0;
        uVar11 = 2;
        goto LAB_008e81d8;
      }
      param_2 = pfVar16;
      if ((uVar7 & 1) != 0) {
        return;
      }
      goto LAB_008e7ea0;
    }
LAB_008e80c0:
    if ((long)pfVar16 - (long)param_1 < (long)param_2 - (long)pfVar16) {
      FUN_008e7e70(param_1,pfVar16,param_3);
      param_1 = pfVar16 + 2;
      goto LAB_008e7ea8;
    }
    FUN_008e7e70(pfVar16 + 2,param_2,param_3);
    param_2 = pfVar16;
  } while( true );
LAB_008e82b0:
  pfVar8 = pfVar14;
  fVar17 = *pfVar8;
  if ((*pfVar9 <= fVar17) &&
     ((fVar18 = pfVar8[1], fVar17 != *pfVar9 || ((int)fVar18 < (int)pfVar9[1])))) {
    *(undefined8 *)pfVar8 = *(undefined8 *)pfVar9;
    pfVar14 = param_1;
    if (pfVar9 != param_1) {
      pfVar14 = pfVar9;
      lVar15 = lVar12;
      do {
        fVar19 = *(float *)((long)param_1 + lVar15 + 8);
        if (fVar17 < fVar19) {
          pfVar14 = (float *)((long)param_1 + lVar15 + 0x10);
          goto LAB_008e8298;
        }
        if ((fVar17 <= fVar19) && (*(int *)((long)param_1 + lVar15 + 0xc) <= (int)fVar18))
        goto LAB_008e8298;
        bVar4 = lVar15 != -8;
        *(undefined8 *)((long)param_1 + lVar15 + 0x10) = *(undefined8 *)((long)param_1 + lVar15 + 8)
        ;
        pfVar14 = pfVar14 + -2;
        lVar15 = lVar15 + -8;
      } while (bVar4);
      pfVar14 = param_1;
    }
LAB_008e8298:
    *pfVar14 = fVar17;
    pfVar14[1] = fVar18;
  }
  lVar12 = lVar12 + 8;
  pfVar14 = pfVar8 + 2;
  pfVar9 = pfVar8;
  if (pfVar8 + 2 == param_2) {
switchD_008e822c_caseD_0:
    return;
  }
  goto LAB_008e82b0;
LAB_008e81d0:
  uVar11 = 4;
LAB_008e81d8:
  if (4 < uVar11) {
    return;
  }
  param_1 = pfVar10;
  if ((1 << (ulong)uVar11 & 0x15U) == 0) {
    return;
  }
  goto LAB_008e7ea8;
}


