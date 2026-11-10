/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03422220; name: FUN_03422220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03422220(float *param_1,float *param_2,float *param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  ulong *puVar17;
  long lVar18;
  float *pfVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar23 = param_1[4];
  pfVar9 = param_1 + 2;
  if (fVar23 != 0.0) {
    uVar16 = 0;
    uVar8 = (uint)*(long *)(param_2 + 0x1a);
    if (fVar23 != 0.0) {
      uVar16 = uVar8 / (uint)fVar23;
    }
    for (pfVar19 = *(float **)(*(long *)pfVar9 + (ulong)(uVar8 - uVar16 * (int)fVar23) * 8);
        pfVar19 != (float *)0x0; pfVar19 = *(float **)(pfVar19 + 10)) {
      if (*(long *)(*(long *)(pfVar19 + 4) + 0x68) == *(long *)(param_2 + 0x1a)) goto LAB_03422500;
    }
  }
  for (puVar6 = *(undefined8 **)param_1; puVar6 != (undefined8 *)0x0;
      puVar6 = (undefined8 *)puVar6[0x38]) {
    if (puVar6[0x3a] != 0) goto LAB_03422330;
  }
  puVar6 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0xb,0x1d8);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  puVar6[0x38] = 0;
  *puVar6 = 0;
  puVar6[7] = puVar6;
  puVar6[0xe] = puVar6 + 7;
  puVar6[0x15] = puVar6 + 0xe;
  puVar6[0x1c] = puVar6 + 0x15;
  puVar6[0x2a] = puVar6 + 0x23;
  puVar6[0x23] = puVar6 + 0x1c;
  puVar6[0x3a] = puVar6 + 0x31;
  puVar6[0x31] = puVar6 + 0x2a;
  *(undefined4 *)(puVar6 + 0x39) = 8;
  if (*(long *)param_1 == 0) {
    *(undefined8 **)param_1 = puVar6;
    puVar6[0x38] = 0;
  }
  else {
    puVar6[0x38] = *(long *)param_1;
    *(undefined8 **)param_1 = puVar6;
  }
LAB_03422330:
  pfVar19 = (float *)puVar6[0x3a];
  if (pfVar19 == (float *)0x0) {
    return;
  }
  if (*(long *)pfVar19 == 0) {
    puVar6[0x3a] = 0;
  }
  else {
    puVar6[0x3a] = *(long *)pfVar19;
  }
  *(int *)(puVar6 + 0x39) = *(int *)(puVar6 + 0x39) + -1;
  pfVar19[0] = 0.0;
  pfVar19[1] = 0.0;
  pfVar19[2] = 0.0;
  pfVar19[8] = 0.0;
  pfVar19[9] = 0.0;
  pfVar19[10] = 0.0;
  pfVar19[0xb] = 0.0;
  pfVar19[0xc] = 3.4028235e+38;
  pfVar19[0xd] = 0.0;
  *(float **)(pfVar19 + 4) = param_2;
  pfVar19[6] = 0.0;
  pfVar19[7] = 0.0;
  fVar23 = param_1[4];
  if (fVar23 == 0.0) {
LAB_034223bc:
    uVar20 = 0x1d;
    goto LAB_034223c0;
  }
  fVar21 = (float)NEON_ucvtf(param_1[6]);
  if (fVar21 / (float)(uint)fVar23 <= 0.9) {
    pfVar9 = param_2;
    goto LAB_034224d0;
  }
  if ((uint)fVar23 < 0x1d) goto LAB_034223bc;
  if ((uint)fVar23 < 0x35) {
    uVar20 = 0x35;
LAB_034223c0:
    lVar18 = *(long *)(param_1 + 2);
    fVar21 = param_1[5];
    pfVar9[0] = 0.0;
    pfVar9[1] = 0.0;
    param_1[4] = 0.0;
    puVar4 = PTR_DAT_047e2fd0;
    param_1[5] = 0.0;
    lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0xb,0,uVar20 << 3);
    if (lVar7 != 0) {
      fVar22 = (float)uVar20;
      *(long *)(param_1 + 2) = lVar7;
      param_1[5] = fVar22;
      fVar21 = fVar22;
      while( true ) {
        fVar21 = (float)((int)fVar21 + -1);
        fVar11 = param_1[4];
        if ((uint)fVar11 < (uint)(float)uVar20) {
          param_1[4] = (float)((int)fVar11 + 1);
          if (*(long *)(param_1 + 2) != 0) {
            *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uint)fVar11 * 8) = 0;
          }
        }
        if (fVar21 == 0.0) break;
        uVar20 = (ulong)(uint)param_1[5];
      }
      if (fVar23 != 0.0) {
        uVar20 = 0;
        do {
          lVar7 = *(long *)(lVar18 + uVar20 * 8);
          while (lVar7 != 0) {
            uVar16 = *(uint *)(*(long *)(lVar7 + 0x10) + 0x68);
            uVar8 = 0;
            if (fVar22 != 0.0) {
              uVar8 = uVar16 / (uint)fVar22;
            }
            lVar15 = *(long *)(lVar7 + 0x28);
            uVar16 = uVar16 - uVar8 * (int)fVar22;
            *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(*(long *)pfVar9 + (ulong)uVar16 * 8);
            *(long *)(*(long *)pfVar9 + (ulong)uVar16 * 8) = lVar7;
            lVar7 = lVar15;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != (uint)fVar23);
      }
      if (lVar18 != 0) {
        (**(code **)(puVar4 + 0x30))(0xb,lVar18);
      }
      goto LAB_0342248c;
    }
    if (*(long *)pfVar9 != 0) {
      param_1[4] = 0.0;
      (**(code **)(puVar4 + 0x30))(0xb);
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      param_1[5] = 0.0;
    }
    *(long *)(param_1 + 2) = lVar18;
    param_1[4] = fVar23;
    param_1[5] = fVar21;
  }
  else {
    if ((uint)fVar23 < 0x61) {
      uVar20 = 0x61;
      goto LAB_034223c0;
    }
    if ((uint)fVar23 < 0xc1) {
      uVar20 = 0xc1;
      goto LAB_034223c0;
    }
    if ((uint)fVar23 < 0x185) {
      uVar20 = 0x185;
      goto LAB_034223c0;
    }
    if ((uint)fVar23 < 0x301) {
      uVar20 = 0x301;
      goto LAB_034223c0;
    }
    if ((uint)fVar23 < 0x607) {
      uVar20 = 0x607;
      goto LAB_034223c0;
    }
    if ((uint)fVar23 < 0xc07) {
      uVar20 = 0xc07;
      goto LAB_034223c0;
    }
    uVar20 = 0x1807;
    if ((uint)fVar23 < 0x1807) goto LAB_034223c0;
    if ((uint)fVar23 < 0x3001) {
      uVar20 = 0x3001;
      goto LAB_034223c0;
    }
    uVar20 = 0x6011;
    if (((((uint)fVar23 < 0x6011) || (uVar20 = 0xc005, (uint)fVar23 < 0xc005)) ||
        (uVar20 = 0x1800d, (uint)fVar23 < 0x1800d)) ||
       ((uVar20 = 0x30005, (uint)fVar23 < 0x30005 || (uVar20 = 0x60019, (uint)fVar23 < 0x60019))))
    goto LAB_034223c0;
    if ((uint)fVar23 < 0xc0001) {
      uVar20 = 0xc0001;
      goto LAB_034223c0;
    }
    uVar20 = 0x180005;
    if (((((uint)fVar23 < 0x180005) || (uVar20 = 0x30000b, (uint)fVar23 < 0x30000b)) ||
        ((uVar20 = 0x60000d, (uint)fVar23 < 0x60000d ||
         ((((uVar20 = 0xc00005, (uint)fVar23 < 0xc00005 ||
            (uVar20 = 0x1800013, (uint)fVar23 < 0x1800013)) ||
           (uVar20 = 0x3000005, (uint)fVar23 < 0x3000005)) ||
          ((uVar20 = 0x6000017, (uint)fVar23 < 0x6000017 ||
           (uVar20 = 0xc000013, (uint)fVar23 < 0xc000013)))))))) ||
       ((uVar20 = 0x18000005, (uint)fVar23 < 0x18000005 ||
        ((uVar20 = 0x30000059, (uint)fVar23 < 0x30000059 ||
         (uVar20 = 0x60000005, (uint)fVar23 < 0x60000005)))))) goto LAB_034223c0;
LAB_0342248c:
    fVar23 = param_1[4];
  }
  if (fVar23 == 0.0) {
    pfVar9 = *(float **)param_1;
    if (pfVar9 == (float *)0x0) {
LAB_03422720:
      if (_DAT_000001d0 == (float *)0x0) {
        _DAT_000001d0 = pfVar19;
        pfVar19[0] = 0.0;
        pfVar19[1] = 0.0;
      }
      else {
        *(float **)pfVar19 = _DAT_000001d0;
        _DAT_000001d0 = pfVar19;
      }
      _DAT_000001c8 = _DAT_000001c8 + 1;
      return;
    }
    if ((pfVar19 < pfVar9) || (pfVar9 + 0x70 <= pfVar19)) {
      do {
        pfVar10 = pfVar9;
        pfVar9 = *(float **)(pfVar10 + 0x70);
        if (pfVar9 == (float *)0x0) goto LAB_03422720;
      } while ((pfVar19 < pfVar9) || (pfVar9 + 0x70 <= pfVar19));
    }
    else {
      pfVar10 = (float *)0x0;
    }
    if (*(long *)(pfVar9 + 0x74) == 0) {
      *(float **)(pfVar9 + 0x74) = pfVar19;
      pfVar19[0] = 0.0;
      pfVar19[1] = 0.0;
    }
    else {
      *(long *)pfVar19 = *(long *)(pfVar9 + 0x74);
      *(float **)(pfVar9 + 0x74) = pfVar19;
    }
    fVar23 = pfVar9[0x72];
    pfVar9[0x72] = (float)((int)fVar23 + 1U);
    if ((float)((int)fVar23 + 1U) != 1.12104e-44) {
      return;
    }
    if (*(float **)param_1 != pfVar9) {
      param_1 = pfVar10 + 0x70;
    }
    *(undefined8 *)param_1 = *(undefined8 *)(pfVar9 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x034228e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb);
    return;
  }
  pfVar9 = *(float **)(pfVar19 + 4);
LAB_034224d0:
  uVar16 = 0;
  if (fVar23 != 0.0) {
    uVar16 = (uint)pfVar9[0x1a] / (uint)fVar23;
  }
  uVar16 = (int)pfVar9[0x1a] - uVar16 * (int)fVar23;
  *(undefined8 *)(pfVar19 + 10) = *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar16 * 8);
  *(float **)(*(long *)(param_1 + 2) + (ulong)uVar16 * 8) = pfVar19;
  param_1[6] = (float)((int)param_1[6] + 1);
  *(float **)(pfVar19 + 4) = param_2;
LAB_03422500:
  if (param_3 == (float *)0x0) {
    fVar23 = param_2[9];
    fVar21 = param_2[10];
    fVar22 = param_2[0xb];
    if ((((param_2[0x16] == 0.0) || (param_2[0x16] == 1.4013e-45)) ||
        (**(long **)(param_2 + 0x14) == param_4)) || ((*(long **)(param_2 + 0x14))[1] != param_4)) {
      fVar23 = -fVar23;
      fVar21 = -fVar21;
      fVar22 = -fVar22;
    }
    fVar24 = 0.0;
    fVar28 = 0.0;
    fVar11 = 1.4013e-45;
  }
  else {
    pfVar9 = *(float **)(param_3 + 4);
    uVar12 = *(ulong *)(param_2 + 0x1a);
    uVar13 = *(ulong *)(pfVar9 + 0x1a);
    uVar16 = *(uint *)(param_4 + 0x88);
    uVar20 = uVar13;
    if (uVar13 <= uVar12) {
      uVar20 = uVar12;
      uVar12 = uVar13;
    }
    if (uVar16 != 0) {
      iVar14 = 0;
      do {
        iVar1 = iVar14 + (uVar16 >> 1);
        puVar17 = (ulong *)(*(long *)(param_4 + 0x80) + (long)iVar1 * 0x48);
        uVar13 = *puVar17;
        uVar2 = puVar17[1];
        if (uVar13 == uVar12 && uVar2 == uVar20) {
          lVar7 = *(long *)(param_4 + 0x80) + (long)iVar1 * 0x48;
          fVar24 = *(float *)(lVar7 + 0x10);
          fVar27 = *(float *)(lVar7 + 0x14);
          bVar5 = fVar27 == 3.4028235e+38;
          fVar21 = param_2[1] - pfVar9[1];
          fVar23 = *param_2 - *pfVar9;
          fVar22 = param_2[2] - pfVar9[2];
          fVar25 = SQRT(fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22);
          goto LAB_03422784;
        }
        bVar5 = uVar2 < uVar20;
        if (uVar13 != uVar12) {
          bVar5 = uVar13 < uVar12;
        }
        if (bVar5 != 0) {
          iVar14 = iVar1 + 1;
        }
        uVar16 = uVar16 - bVar5 >> 1;
      } while (uVar16 != 0);
    }
    bVar5 = false;
    fVar21 = param_2[1] - pfVar9[1];
    fVar23 = *param_2 - *pfVar9;
    fVar22 = param_2[2] - pfVar9[2];
    fVar25 = SQRT(fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22);
    fVar24 = 0.0;
    fVar27 = fVar25;
LAB_03422784:
    fVar26 = param_3[3];
    fVar28 = param_3[0xc];
    fVar11 = param_3[0xd];
    if (fVar25 == 0.0) {
      fVar23 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
    }
    else {
      fVar25 = 1.0 / fVar25;
      fVar23 = fVar23 * fVar25;
      fVar21 = fVar21 * fVar25;
      fVar22 = fVar22 * fVar25;
    }
    fVar25 = (float)NEON_fminnm(*param_3 * fVar23 + fVar21 * param_3[1] + fVar22 * param_3[2],
                                0x3f800000);
    if (fVar25 <= -1.0) {
      fVar25 = -1.0;
    }
    fVar25 = acosf(fVar25);
    fVar24 = fVar26 + fVar24 + fVar25 * 0.31830987;
    if ((bool)(bVar5 | 1.0 < fVar24)) {
      return;
    }
    fVar28 = fVar28 + fVar27;
    if (param_1[0xf] < fVar28) {
      return;
    }
    if (pfVar19[0xc] < fVar28) {
      return;
    }
    fVar11 = (float)((int)fVar11 + 1);
    if ((fVar28 == pfVar19[0xc]) && ((uint)pfVar19[0xd] <= (uint)fVar11)) {
      return;
    }
  }
  *pfVar19 = fVar23;
  pfVar19[1] = fVar21;
  pfVar19[2] = fVar22;
  pfVar19[3] = fVar24;
  pfVar19[0xc] = fVar28;
  pfVar19[0xd] = fVar11;
  *(long *)(pfVar19 + 6) = param_4;
  *(float **)(pfVar19 + 8) = param_3;
  if ((uint)fVar11 < (int)param_1[0xe] - 1U) {
    fVar21 = param_1[10];
    fVar23 = param_1[0xb];
    if ((uint)fVar23 <= (uint)fVar21) {
      iVar14 = (int)fVar23 + ((uint)fVar23 >> 1);
      if (fVar23 == 0.0) {
        iVar14 = 1;
      }
      fVar23 = (float)(iVar14 + (int)fVar23);
      lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                        (9,*(undefined8 *)(param_1 + 8),(ulong)(uint)fVar23 << 4);
      if (lVar7 == 0) {
        return;
      }
      *(long *)(param_1 + 8) = lVar7;
      param_1[0xb] = fVar23;
    }
    if ((uint)fVar21 < (uint)fVar23) {
      fVar23 = param_1[10];
      uVar20 = (ulong)(uint)fVar23;
      pfVar9 = *(float **)(param_1 + 8);
      param_1[10] = (float)((int)fVar23 + 1);
      if (pfVar9 != (float *)0x0) {
        if (fVar23 == 0.0) {
          lVar7 = 0;
          *pfVar9 = fVar28;
        }
        else {
          do {
            uVar16 = (int)uVar20 - 1U >> 1;
            pfVar10 = pfVar9 + (ulong)uVar16 * 4;
            if (*pfVar10 <= fVar28) break;
            uVar3 = *(undefined8 *)(pfVar10 + 2);
            *(undefined8 *)(pfVar9 + (long)(int)uVar20 * 4) = *(undefined8 *)pfVar10;
            *(undefined8 *)(pfVar9 + (long)(int)uVar20 * 4 + 2) = uVar3;
            pfVar9 = *(float **)(param_1 + 8);
            uVar20 = (ulong)uVar16;
          } while (uVar16 != 0);
          *(float *)((long)pfVar9 + (-(uVar20 >> 0x1f) & 0xfffffff000000000 | uVar20 << 4)) = fVar28
          ;
          if (pfVar9 == (float *)0x0) {
            return;
          }
          lVar7 = (long)(int)uVar20;
        }
        *(float **)(pfVar9 + lVar7 * 4 + 2) = pfVar19;
      }
    }
  }
  return;
}


