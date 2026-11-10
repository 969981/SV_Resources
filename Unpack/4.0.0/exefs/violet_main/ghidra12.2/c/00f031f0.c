/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f031f0; name: FUN_00f031f0
 */


void FUN_00f031f0(float *param_1,float *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  undefined8 uVar12;
  float *pfVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  undefined8 local_60;
  undefined8 local_58;
  float local_50;
  
LAB_00f03210:
  pfVar13 = param_2 + -8;
  pfVar4 = param_1;
LAB_00f03218:
  param_1 = pfVar4;
  lVar11 = (long)param_2 - (long)param_1;
  uVar6 = lVar11 >> 5;
  if (uVar6 < 2) {
    return;
  }
  switch(uVar6) {
  case 2:
    if (param_1[4] <= param_2[-4]) {
      return;
    }
    local_58 = *(undefined8 *)(param_1 + 2);
    local_60 = *(undefined8 *)param_1;
    local_50 = (float)*(undefined8 *)(param_1 + 4);
    uVar12 = *(undefined8 *)pfVar13;
    uVar15 = *(undefined8 *)(param_2 + -6);
    param_1[4] = param_2[-4];
    *(undefined8 *)param_1 = uVar12;
    *(undefined8 *)(param_1 + 2) = uVar15;
    break;
  case 3:
    fVar18 = param_1[0xc];
    pfVar4 = param_1 + 8;
    if (param_1[4] <= fVar18) {
      if (fVar18 <= param_2[-4]) {
        return;
      }
      uVar8 = *(undefined8 *)(param_1 + 10);
      uVar16 = *(undefined8 *)pfVar4;
      uVar7 = *(undefined8 *)(param_1 + 0xc);
      uVar12 = *(undefined8 *)pfVar13;
      uVar15 = *(undefined8 *)(param_2 + -6);
      param_1[0xc] = param_2[-4];
      *(undefined8 *)pfVar4 = uVar12;
      *(undefined8 *)(param_1 + 10) = uVar15;
      local_50 = (float)uVar7;
      param_2[-4] = local_50;
      *(undefined8 *)pfVar13 = uVar16;
      *(undefined8 *)(param_2 + -6) = uVar8;
      goto LAB_00f035d8;
    }
    uVar15 = *(undefined8 *)(param_1 + 2);
    uVar12 = *(undefined8 *)param_1;
    local_50 = (float)*(undefined8 *)(param_1 + 4);
    if (param_2[-4] < fVar18) {
      fVar18 = param_2[-4];
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -6);
      uVar16 = *(undefined8 *)pfVar13;
      param_1[4] = fVar18;
      *(undefined8 *)param_1 = uVar16;
      param_2[-4] = local_50;
      *(undefined8 *)pfVar13 = uVar12;
      *(undefined8 *)(param_2 + -6) = uVar15;
      return;
    }
    param_1[4] = param_1[0xc];
    *(undefined8 *)param_1 = *(undefined8 *)pfVar4;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
    param_1[0xc] = local_50;
    *(undefined8 *)pfVar4 = uVar12;
    *(undefined8 *)(param_1 + 10) = uVar15;
    if (param_1[0xc] <= param_2[-4]) {
      return;
    }
    local_58 = *(undefined8 *)(param_1 + 10);
    local_60 = *(undefined8 *)pfVar4;
    local_50 = (float)*(undefined8 *)(param_1 + 0xc);
    uVar12 = *(undefined8 *)pfVar13;
    uVar15 = *(undefined8 *)(param_2 + -6);
    param_1[0xc] = param_2[-4];
    *(undefined8 *)pfVar4 = uVar12;
    *(undefined8 *)(param_1 + 10) = uVar15;
    break;
  case 4:
    fVar18 = param_1[0xc];
    pfVar4 = param_1 + 8;
    pfVar5 = param_1 + 0x10;
    if (param_1[4] <= fVar18) {
      if (param_1[0x14] < fVar18) {
        uVar16 = *(undefined8 *)(param_1 + 10);
        uVar12 = *(undefined8 *)pfVar4;
        uVar15 = *(undefined8 *)(param_1 + 0xc);
        param_1[0xc] = param_1[0x14];
        *(undefined8 *)pfVar4 = *(undefined8 *)pfVar5;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
        local_50 = (float)uVar15;
        param_1[0x14] = local_50;
        *(undefined8 *)pfVar5 = uVar12;
        *(undefined8 *)(param_1 + 0x12) = uVar16;
        if (param_1[0xc] < param_1[4]) {
          uVar15 = *(undefined8 *)(param_1 + 2);
          uVar12 = *(undefined8 *)param_1;
          uVar16 = *(undefined8 *)(param_1 + 4);
          param_1[4] = param_1[0xc];
          *(undefined8 *)param_1 = *(undefined8 *)pfVar4;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
          local_50 = (float)uVar16;
          param_1[0xc] = local_50;
          *(undefined8 *)pfVar4 = uVar12;
          *(undefined8 *)(param_1 + 10) = uVar15;
        }
      }
    }
    else {
      uVar15 = *(undefined8 *)(param_1 + 2);
      uVar12 = *(undefined8 *)param_1;
      local_50 = (float)*(undefined8 *)(param_1 + 4);
      if (param_1[0x14] < fVar18) {
        param_1[4] = param_1[0x14];
        *(undefined8 *)param_1 = *(undefined8 *)pfVar5;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x12);
        param_1[0x14] = local_50;
        *(undefined8 *)pfVar5 = uVar12;
        *(undefined8 *)(param_1 + 0x12) = uVar15;
      }
      else {
        param_1[4] = param_1[0xc];
        *(undefined8 *)param_1 = *(undefined8 *)pfVar4;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
        param_1[0xc] = local_50;
        *(undefined8 *)pfVar4 = uVar12;
        *(undefined8 *)(param_1 + 10) = uVar15;
        if (param_1[0x14] < param_1[0xc]) {
          uVar16 = *(undefined8 *)(param_1 + 10);
          uVar12 = *(undefined8 *)pfVar4;
          uVar15 = *(undefined8 *)(param_1 + 0xc);
          param_1[0xc] = param_1[0x14];
          *(undefined8 *)pfVar4 = *(undefined8 *)pfVar5;
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
          local_50 = (float)uVar15;
          param_1[0x14] = local_50;
          *(undefined8 *)pfVar5 = uVar12;
          *(undefined8 *)(param_1 + 0x12) = uVar16;
        }
      }
    }
    if (param_1[0x14] <= param_2[-4]) {
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x12);
    uVar16 = *(undefined8 *)pfVar5;
    uVar7 = *(undefined8 *)(param_1 + 0x14);
    uVar12 = *(undefined8 *)pfVar13;
    uVar15 = *(undefined8 *)(param_2 + -6);
    param_1[0x14] = param_2[-4];
    *(undefined8 *)pfVar5 = uVar12;
    *(undefined8 *)(param_1 + 0x12) = uVar15;
    local_50 = (float)uVar7;
    param_2[-4] = local_50;
    *(undefined8 *)pfVar13 = uVar16;
    *(undefined8 *)(param_2 + -6) = uVar8;
    if (param_1[0xc] <= param_1[0x14]) {
      return;
    }
    uVar16 = *(undefined8 *)(param_1 + 10);
    uVar12 = *(undefined8 *)pfVar4;
    uVar15 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = param_1[0x14];
    *(undefined8 *)pfVar4 = *(undefined8 *)pfVar5;
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
    local_50 = (float)uVar15;
    param_1[0x14] = local_50;
    *(undefined8 *)pfVar5 = uVar12;
    *(undefined8 *)(param_1 + 0x12) = uVar16;
LAB_00f035d8:
    if (param_1[0xc] < param_1[4]) {
      uVar15 = *(undefined8 *)(param_1 + 2);
      uVar12 = *(undefined8 *)param_1;
      uVar16 = *(undefined8 *)(param_1 + 4);
      param_1[4] = param_1[0xc];
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
      local_50 = (float)uVar16;
      param_1[0xc] = local_50;
      *(undefined8 *)(param_1 + 8) = uVar12;
      *(undefined8 *)(param_1 + 10) = uVar15;
      return;
    }
    return;
  case 5:
    FUN_00f06c60(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18);
    return;
  default:
    if (0x3df < lVar11) {
      uVar3 = uVar6;
      if ((long)uVar6 < 0) {
        uVar3 = uVar6 + 1;
      }
      pfVar4 = param_1 + ((long)uVar3 >> 1) * 8;
      if (lVar11 < 0x7ce1) {
        pfVar5 = pfVar4 + 4;
        fVar18 = *pfVar5;
        if (param_1[4] <= fVar18) {
          if (fVar18 <= param_2[-4]) {
            iVar2 = 0;
            goto LAB_00f03a14;
          }
          uVar7 = *(undefined8 *)(pfVar4 + 2);
          uVar16 = *(undefined8 *)pfVar4;
          uVar8 = *(undefined8 *)(pfVar4 + 4);
          uVar12 = *(undefined8 *)pfVar13;
          uVar15 = *(undefined8 *)(param_2 + -6);
          pfVar4[4] = param_2[-4];
          *(undefined8 *)pfVar4 = uVar12;
          *(undefined8 *)(pfVar4 + 2) = uVar15;
          local_50 = (float)uVar8;
          param_2[-4] = local_50;
          *(undefined8 *)pfVar13 = uVar16;
          *(undefined8 *)(param_2 + -6) = uVar7;
          if (*pfVar5 < param_1[4]) {
            uVar7 = *(undefined8 *)(param_1 + 2);
            uVar16 = *(undefined8 *)param_1;
            uVar8 = *(undefined8 *)(param_1 + 4);
            uVar12 = *(undefined8 *)pfVar4;
            uVar15 = *(undefined8 *)(pfVar4 + 2);
            param_1[4] = pfVar4[4];
            *(undefined8 *)param_1 = uVar12;
            *(undefined8 *)(param_1 + 2) = uVar15;
            local_50 = (float)uVar8;
            pfVar4[4] = local_50;
            *(undefined8 *)pfVar4 = uVar16;
            *(undefined8 *)(pfVar4 + 2) = uVar7;
            goto LAB_00f0392c;
          }
        }
        else {
          uVar15 = *(undefined8 *)(param_1 + 2);
          uVar12 = *(undefined8 *)param_1;
          local_50 = (float)*(undefined8 *)(param_1 + 4);
          if (param_2[-4] < fVar18) {
            fVar18 = param_2[-4];
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -6);
            uVar16 = *(undefined8 *)pfVar13;
            param_1[4] = fVar18;
            *(undefined8 *)param_1 = uVar16;
            param_2[-4] = local_50;
            *(undefined8 *)pfVar13 = uVar12;
            *(undefined8 *)(param_2 + -6) = uVar15;
          }
          else {
            fVar18 = pfVar4[4];
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(pfVar4 + 2);
            uVar16 = *(undefined8 *)pfVar4;
            param_1[4] = fVar18;
            *(undefined8 *)param_1 = uVar16;
            *(undefined8 *)pfVar4 = uVar12;
            *(undefined8 *)(pfVar4 + 2) = uVar15;
            pfVar4[4] = local_50;
            if (param_2[-4] < *pfVar5) {
              uVar7 = *(undefined8 *)(pfVar4 + 2);
              uVar16 = *(undefined8 *)pfVar4;
              uVar8 = *(undefined8 *)(pfVar4 + 4);
              uVar12 = *(undefined8 *)pfVar13;
              uVar15 = *(undefined8 *)(param_2 + -6);
              pfVar4[4] = param_2[-4];
              *(undefined8 *)pfVar4 = uVar12;
              *(undefined8 *)(pfVar4 + 2) = uVar15;
              local_50 = (float)uVar8;
              param_2[-4] = local_50;
              *(undefined8 *)pfVar13 = uVar16;
              *(undefined8 *)(param_2 + -6) = uVar7;
LAB_00f0392c:
              iVar2 = 2;
              goto LAB_00f03a14;
            }
          }
        }
        iVar2 = 1;
      }
      else {
        uVar3 = uVar6 + 3;
        if (-1 < (long)uVar6) {
          uVar3 = uVar6;
        }
        iVar2 = FUN_00f06c60(param_1,param_1 + (uVar3 & 0x1ffffffffffffffc) * 2,pfVar4,
                             pfVar4 + (uVar3 & 0x1ffffffffffffffc) * 2,pfVar13);
      }
LAB_00f03a14:
      fVar18 = param_1[4];
      if (pfVar4[4] <= fVar18) {
        pfVar5 = param_2;
LAB_00f03c4c:
        pfVar9 = pfVar5;
        if (param_1 + 0x10 != pfVar9) goto code_r0x00f03c54;
        pfVar5 = param_1 + 8;
        if (param_2[-4] <= fVar18) {
          if (pfVar5 == pfVar13) {
            return;
          }
          pfVar5 = param_1 + 0x10;
          while (pfVar5[-4] <= fVar18) {
            pfVar5 = pfVar5 + 8;
            if (param_2 == pfVar5) {
              return;
            }
          }
          uVar7 = *(undefined8 *)(pfVar5 + -6);
          uVar16 = *(undefined8 *)(pfVar5 + -8);
          uVar8 = *(undefined8 *)(pfVar5 + -4);
          uVar12 = *(undefined8 *)pfVar13;
          uVar15 = *(undefined8 *)(param_2 + -6);
          pfVar5[-4] = param_2[-4];
          *(undefined8 *)(pfVar5 + -8) = uVar12;
          *(undefined8 *)(pfVar5 + -6) = uVar15;
          local_50 = (float)uVar8;
          param_2[-4] = local_50;
          *(undefined8 *)pfVar13 = uVar16;
          *(undefined8 *)(param_2 + -6) = uVar7;
        }
        pfVar9 = pfVar13;
        if (pfVar5 == pfVar13) {
          return;
        }
        while( true ) {
          pfVar4 = pfVar5 + -8;
          do {
            pfVar17 = pfVar4;
            pfVar4 = pfVar17 + 8;
          } while (pfVar17[0xc] <= param_1[4]);
          pfVar5 = pfVar17 + 0x10;
          do {
            pfVar10 = pfVar9;
            pfVar9 = pfVar10 + -8;
          } while (param_1[4] < pfVar10[-4]);
          if (pfVar9 <= pfVar4) break;
          uVar7 = *(undefined8 *)(pfVar17 + 10);
          uVar16 = *(undefined8 *)pfVar4;
          uVar8 = *(undefined8 *)(pfVar17 + 0xc);
          uVar12 = *(undefined8 *)pfVar9;
          uVar15 = *(undefined8 *)(pfVar10 + -6);
          pfVar17[0xc] = pfVar10[-4];
          *(undefined8 *)pfVar4 = uVar12;
          *(undefined8 *)(pfVar17 + 10) = uVar15;
          local_50 = (float)uVar8;
          pfVar10[-4] = local_50;
          *(undefined8 *)pfVar9 = uVar16;
          *(undefined8 *)(pfVar10 + -6) = uVar7;
        }
        goto LAB_00f03bb8;
      }
      pfVar5 = pfVar13;
      goto LAB_00f03a28;
    }
    fVar19 = param_1[0xc];
    pfVar4 = param_1 + 0x10;
    pfVar13 = param_1 + 8;
    fVar18 = param_1[0x14];
    if (param_1[4] <= fVar19) {
      if (fVar18 < fVar19) {
        uVar16 = *(undefined8 *)(param_1 + 10);
        uVar12 = *(undefined8 *)pfVar13;
        uVar15 = *(undefined8 *)(param_1 + 0xc);
        param_1[0xc] = param_1[0x14];
        *(undefined8 *)pfVar13 = *(undefined8 *)pfVar4;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
        local_50 = (float)uVar15;
        param_1[0x14] = local_50;
        *(undefined8 *)pfVar4 = uVar12;
        *(undefined8 *)(param_1 + 0x12) = uVar16;
        if (param_1[0xc] < param_1[4]) {
          uVar15 = *(undefined8 *)(param_1 + 2);
          uVar12 = *(undefined8 *)param_1;
          uVar16 = *(undefined8 *)(param_1 + 4);
          param_1[4] = param_1[0xc];
          *(undefined8 *)param_1 = *(undefined8 *)pfVar13;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
          local_50 = (float)uVar16;
          param_1[0xc] = local_50;
          *(undefined8 *)pfVar13 = uVar12;
          *(undefined8 *)(param_1 + 10) = uVar15;
        }
      }
    }
    else {
      uVar15 = *(undefined8 *)(param_1 + 2);
      uVar12 = *(undefined8 *)param_1;
      local_50 = (float)*(undefined8 *)(param_1 + 4);
      if (fVar18 < fVar19) {
        param_1[4] = param_1[0x14];
        *(undefined8 *)param_1 = *(undefined8 *)pfVar4;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x12);
        param_1[0x14] = local_50;
        *(undefined8 *)pfVar4 = uVar12;
        *(undefined8 *)(param_1 + 0x12) = uVar15;
      }
      else {
        param_1[4] = param_1[0xc];
        *(undefined8 *)param_1 = *(undefined8 *)pfVar13;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
        param_1[0xc] = local_50;
        *(undefined8 *)pfVar13 = uVar12;
        *(undefined8 *)(param_1 + 10) = uVar15;
        if (fVar18 < param_1[0xc]) {
          uVar16 = *(undefined8 *)(param_1 + 10);
          uVar12 = *(undefined8 *)pfVar13;
          uVar15 = *(undefined8 *)(param_1 + 0xc);
          param_1[0xc] = param_1[0x14];
          *(undefined8 *)pfVar13 = *(undefined8 *)pfVar4;
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
          local_50 = (float)uVar15;
          param_1[0x14] = local_50;
          *(undefined8 *)pfVar4 = uVar12;
          *(undefined8 *)(param_1 + 0x12) = uVar16;
        }
      }
    }
    if (param_1 + 0x18 == param_2) {
      return;
    }
    lVar11 = 0;
    pfVar13 = param_1 + 0x18;
    goto LAB_00f0396c;
  }
  param_2[-4] = local_50;
  *(undefined8 *)pfVar13 = local_60;
  *(undefined8 *)(param_2 + -6) = local_58;
  return;
code_r0x00f03c54:
  pfVar5 = pfVar9 + -8;
  if (pfVar9[-0xc] < pfVar4[4]) goto code_r0x00f03c64;
  goto LAB_00f03c4c;
code_r0x00f03c64:
  uVar12 = *(undefined8 *)param_1;
  uVar16 = *(undefined8 *)(param_1 + 2);
  iVar2 = iVar2 + 1;
  uVar15 = *(undefined8 *)(param_1 + 4);
  pfVar5 = pfVar9 + -0x10;
  uVar7 = *(undefined8 *)pfVar5;
  uVar8 = *(undefined8 *)(pfVar9 + -0xe);
  param_1[4] = pfVar9[-0xc];
  *(undefined8 *)param_1 = uVar7;
  *(undefined8 *)(param_1 + 2) = uVar8;
  local_50 = (float)uVar15;
  pfVar9[-0xc] = local_50;
  *(undefined8 *)pfVar5 = uVar12;
  *(undefined8 *)(pfVar9 + -0xe) = uVar16;
LAB_00f03a28:
  pfVar9 = param_1 + 8;
  if (pfVar9 < pfVar5) {
    while( true ) {
      fVar18 = pfVar4[4];
      pfVar17 = pfVar9 + 8;
      if (pfVar9[4] < fVar18) {
        pfVar10 = pfVar9 + 0x10;
        if (pfVar9[0xc] < fVar18) {
          if (pfVar9[0x14] < fVar18) {
            do {
              pfVar17 = pfVar10;
              pfVar9 = pfVar17 + 8;
              pfVar10 = pfVar9;
            } while (pfVar17[0xc] < fVar18);
            pfVar17 = pfVar17 + 0x10;
          }
          else {
            pfVar17 = pfVar9 + 0x18;
            pfVar9 = pfVar10;
          }
        }
        else {
          pfVar9 = pfVar17;
          pfVar17 = pfVar10;
        }
      }
      if (pfVar5[-4] < fVar18) {
        pfVar5 = pfVar5 + -8;
      }
      else if (fVar18 <= pfVar5[-0xc]) {
        pfVar10 = pfVar5 + -0x14;
        do {
          pfVar5 = pfVar10;
          pfVar10 = pfVar5 + -8;
        } while (fVar18 <= *pfVar5);
        pfVar5 = pfVar5 + -4;
      }
      else {
        pfVar5 = pfVar5 + -0x10;
      }
      if (pfVar5 < pfVar9) break;
      iVar2 = iVar2 + 1;
      uVar7 = *(undefined8 *)(pfVar9 + 2);
      uVar16 = *(undefined8 *)pfVar9;
      uVar8 = *(undefined8 *)(pfVar9 + 4);
      uVar12 = *(undefined8 *)pfVar5;
      uVar15 = *(undefined8 *)(pfVar5 + 2);
      pfVar9[4] = pfVar5[4];
      pfVar10 = pfVar5;
      if (pfVar4 != pfVar9) {
        pfVar10 = pfVar4;
      }
      *(undefined8 *)pfVar9 = uVar12;
      *(undefined8 *)(pfVar9 + 2) = uVar15;
      local_50 = (float)uVar8;
      pfVar5[4] = local_50;
      *(undefined8 *)pfVar5 = uVar16;
      *(undefined8 *)(pfVar5 + 2) = uVar7;
      pfVar4 = pfVar10;
      pfVar9 = pfVar17;
    }
  }
  if ((pfVar9 != pfVar4) && (pfVar4[4] < pfVar9[4])) {
    iVar2 = iVar2 + 1;
    uVar7 = *(undefined8 *)(pfVar9 + 2);
    uVar16 = *(undefined8 *)pfVar9;
    uVar8 = *(undefined8 *)(pfVar9 + 4);
    uVar12 = *(undefined8 *)pfVar4;
    uVar15 = *(undefined8 *)(pfVar4 + 2);
    pfVar9[4] = pfVar4[4];
    *(undefined8 *)pfVar9 = uVar12;
    *(undefined8 *)(pfVar9 + 2) = uVar15;
    local_50 = (float)uVar8;
    pfVar4[4] = local_50;
    *(undefined8 *)pfVar4 = uVar16;
    *(undefined8 *)(pfVar4 + 2) = uVar7;
  }
  if (iVar2 == 0) {
    uVar6 = FUN_020df1e0(param_1,pfVar9);
    uVar3 = FUN_020df1e0(pfVar9 + 8,param_2);
    if ((uVar3 & 1) != 0) goto LAB_00f03c04;
    pfVar4 = pfVar9 + 8;
    if ((uVar6 & 1) != 0) goto LAB_00f03218;
  }
  if ((long)param_2 - (long)pfVar9 <= (long)pfVar9 - (long)param_1) {
    FUN_00f031f0(pfVar9 + 8,param_2);
    param_2 = pfVar9;
    goto LAB_00f03210;
  }
  FUN_00f031f0(param_1,pfVar9);
  pfVar4 = pfVar9 + 8;
LAB_00f03bb8:
  goto LAB_00f03218;
LAB_00f03c04:
  param_2 = pfVar9;
  if ((uVar6 & 1) != 0) {
    return;
  }
  goto LAB_00f03210;
LAB_00f0396c:
  fVar18 = pfVar13[4];
  if (fVar18 < pfVar4[4]) {
    uVar15 = *(undefined8 *)(pfVar13 + 2);
    uVar12 = *(undefined8 *)pfVar13;
    lVar1 = lVar11;
    do {
      lVar14 = lVar1;
      *(undefined8 *)((long)param_1 + lVar14 + 0x60) =
           *(undefined8 *)((long)param_1 + lVar14 + 0x40);
      *(undefined8 *)((long)param_1 + lVar14 + 0x68) =
           *(undefined8 *)((long)param_1 + lVar14 + 0x48);
      *(undefined4 *)((long)param_1 + lVar14 + 0x70) =
           *(undefined4 *)((long)param_1 + lVar14 + 0x50);
      if (lVar14 == -0x40) {
        pfVar4 = param_1;
        goto LAB_00f039bc;
      }
      lVar1 = lVar14 + -0x20;
    } while (fVar18 < *(float *)((long)param_1 + lVar14 + 0x30));
    pfVar4 = (float *)((long)param_1 + lVar14 + 0x40);
LAB_00f039bc:
    pfVar4[4] = fVar18;
    *(undefined8 *)(pfVar4 + 2) = uVar15;
    *(undefined8 *)pfVar4 = uVar12;
  }
  pfVar5 = pfVar13 + 8;
  lVar11 = lVar11 + 0x20;
  pfVar4 = pfVar13;
  pfVar13 = pfVar5;
  if (pfVar5 == param_2) {
    return;
  }
  goto LAB_00f0396c;
}


