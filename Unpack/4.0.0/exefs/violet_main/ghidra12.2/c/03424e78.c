/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03424e78; name: FUN_03424e78
 */


void FUN_03424e78(undefined8 param_1,float *param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  
  FUN_03424470(param_2,param_1,param_4);
  fVar14 = param_2[0xc];
  fVar15 = param_2[0xd];
  fStack_ac = param_2[1] - param_2[7] * fVar15;
  local_a8 = param_2[2] - param_2[8] * fVar15;
  local_b0 = *param_2 - param_2[6] * fVar15;
  local_a0 = *param_2 + fVar15 * param_2[6];
  fStack_9c = param_2[1] + fVar15 * param_2[7];
  local_98 = param_2[2] + fVar15 * param_2[8];
  local_88 = -fVar14;
  fVar15 = param_2[3] * fVar14;
  fVar17 = param_2[4] * fVar14;
  local_90 = param_2[3] * local_88;
  fStack_8c = param_2[4] * local_88;
  local_88 = param_2[5] * local_88;
  fVar14 = param_2[5] * fVar14;
  fStack_7c = fStack_ac + fStack_8c;
  fStack_8c = fStack_9c + fStack_8c;
  fStack_9c = fStack_9c + fVar17;
  local_80 = local_b0 + local_90;
  local_78 = local_a8 + local_88;
  local_90 = local_a0 + local_90;
  local_88 = local_98 + local_88;
  local_a0 = local_a0 + fVar15;
  local_98 = local_98 + fVar14;
  local_b0 = local_b0 + fVar15;
  fStack_ac = fStack_ac + fVar17;
  local_a8 = local_a8 + fVar14;
  if (param_3 == (float *)0x0) {
    uVar12 = 0;
    lVar11 = 0;
  }
  else {
    fVar15 = *param_3;
    fVar17 = param_3[1];
    fVar16 = param_3[2];
    fVar14 = SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16);
    fVar19 = 1.0 / fVar14;
    fVar14 = param_3[3] / fVar14;
    fVar15 = fVar19 * fVar15;
    fVar17 = fVar19 * fVar17;
    fVar18 = fVar15 * fVar14;
    fVar19 = fVar19 * fVar16;
    fVar16 = fVar17 * fVar14;
    fVar14 = fVar19 * fVar14;
    fVar20 = (fVar18 - local_80) * fVar15 + fVar17 * (fVar16 - fStack_7c) +
             fVar19 * (fVar14 - local_78);
    fVar22 = (fVar18 - local_90) * fVar15 + fVar17 * (fVar16 - fStack_8c) +
             fVar19 * (fVar14 - local_88);
    fStack_7c = fStack_7c + fVar17 * fVar20;
    fVar21 = (fVar18 - local_a0) * fVar15 + fVar17 * (fVar16 - fStack_9c) +
             fVar19 * (fVar14 - local_98);
    local_80 = local_80 + fVar15 * fVar20;
    local_78 = local_78 + fVar19 * fVar20;
    local_90 = local_90 + fVar15 * fVar22;
    fStack_8c = fStack_8c + fVar17 * fVar22;
    local_88 = local_88 + fVar19 * fVar22;
    local_a0 = local_a0 + fVar15 * fVar21;
    fStack_9c = fStack_9c + fVar17 * fVar21;
    local_98 = local_98 + fVar19 * fVar21;
    fVar14 = (fVar18 - local_b0) * fVar15 + fVar17 * (fVar16 - fStack_ac) +
             fVar19 * (fVar14 - local_a8);
    local_b0 = local_b0 + fVar15 * fVar14;
    fStack_ac = fStack_ac + fVar17 * fVar14;
    local_a8 = local_a8 + fVar19 * fVar14;
    uVar12 = *(undefined8 *)(param_3 + 0xc);
    lVar11 = *(long *)(param_3 + 0xe);
  }
  FUN_034177fc(param_2 + (ulong)param_4 * 0xa4 + 0x34,&local_80,&local_90,&local_a0);
  (param_2 + (ulong)param_4 * 0xa4 + 0x40)[0] = 0.0;
  (param_2 + (ulong)param_4 * 0xa4 + 0x40)[1] = 0.0;
  *(long *)(param_2 + (ulong)param_4 * 0xa4 + 0x42) = lVar11;
  FUN_034177fc(param_2 + (ulong)param_4 * 0xa4 + 0x44,&local_a0,&local_b0,&local_80);
  (param_2 + (ulong)param_4 * 0xa4 + 0x50)[0] = 0.0;
  (param_2 + (ulong)param_4 * 0xa4 + 0x50)[1] = 0.0;
  *(long *)(param_2 + (ulong)param_4 * 0xa4 + 0x52) = lVar11;
  fStack_bc = fStack_7c * 2.0 - fStack_ac;
  local_c0 = local_80 * 2.0 - local_b0;
  pfVar1 = param_2 + (ulong)param_4 * 0xa4 + 0x54;
  local_b8 = local_78 * 2.0 - local_a8;
  *(undefined8 *)(param_2 + (ulong)param_4 * 0xa4 + 0x60) = uVar12;
  FUN_03419cb4(pfVar1,&local_80,&local_90,&local_c0,param_3);
  pfVar2 = param_2 + (ulong)param_4 * 0xa4 + 0x74;
  fStack_cc = fStack_9c * 2.0 - fStack_8c;
  local_d0 = local_a0 * 2.0 - local_90;
  local_c8 = local_98 * 2.0 - local_88;
  *(undefined8 *)(param_2 + (ulong)param_4 * 0xa4 + 0x80) = uVar12;
  FUN_03419cb4(pfVar2,&local_b0,&local_a0,&local_d0,param_3);
  pfVar3 = param_2 + (ulong)param_4 * 0xa4 + 0x94;
  fStack_dc = fStack_8c * 2.0 - fStack_7c;
  local_e0 = local_90 * 2.0 - local_80;
  local_d8 = local_88 * 2.0 - local_78;
  *(undefined8 *)(param_2 + (ulong)param_4 * 0xa4 + 0xa0) = uVar12;
  FUN_03419cb4(pfVar3,&local_90,&local_a0,&local_e0,param_3);
  pfVar4 = param_2 + (ulong)param_4 * 0xa4 + 0xb4;
  fStack_ec = fStack_7c * 2.0 - fStack_8c;
  local_f0 = local_80 * 2.0 - local_90;
  local_e8 = local_78 * 2.0 - local_88;
  *(undefined8 *)(param_2 + (ulong)param_4 * 0xa4 + 0xc0) = uVar12;
  FUN_03419cb4(pfVar4,&local_80,&local_b0,&local_f0,param_3);
  puVar6 = PTR_DAT_047e2fd0;
  if (lVar11 == 0) {
    return;
  }
  uVar10 = *(uint *)(lVar11 + 0x28);
  uVar13 = *(uint *)(lVar11 + 0x2c);
  if (uVar10 < uVar13) {
LAB_034251f0:
    if (uVar10 < uVar13) {
      uVar13 = *(uint *)(lVar11 + 0x28);
      *(uint *)(lVar11 + 0x28) = uVar13 + 1;
      if (*(long *)(lVar11 + 0x20) != 0) {
        *(float **)(*(long *)(lVar11 + 0x20) + (ulong)uVar13 * 8) =
             param_2 + (ulong)param_4 * 0xa4 + 0x34;
      }
    }
  }
  else {
    iVar5 = uVar13 + (uVar13 >> 1);
    if (uVar13 == 0) {
      iVar5 = 1;
    }
    uVar13 = iVar5 + uVar13;
    lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                      (9,*(undefined8 *)(lVar11 + 0x20),(ulong)uVar13 << 3);
    if (lVar7 != 0) {
      *(long *)(lVar11 + 0x20) = lVar7;
      *(uint *)(lVar11 + 0x2c) = uVar13;
      goto LAB_034251f0;
    }
  }
  uVar10 = *(uint *)(lVar11 + 0x28);
  uVar13 = *(uint *)(lVar11 + 0x2c);
  if (uVar10 < uVar13) {
LAB_0342524c:
    if (uVar10 < uVar13) {
      uVar13 = *(uint *)(lVar11 + 0x28);
      *(uint *)(lVar11 + 0x28) = uVar13 + 1;
      if (*(long *)(lVar11 + 0x20) != 0) {
        *(float **)(*(long *)(lVar11 + 0x20) + (ulong)uVar13 * 8) =
             param_2 + (ulong)param_4 * 0xa4 + 0x44;
      }
    }
  }
  else {
    iVar5 = uVar13 + (uVar13 >> 1);
    if (uVar13 == 0) {
      iVar5 = 1;
    }
    uVar13 = iVar5 + uVar13;
    lVar7 = (**(code **)(puVar6 + 0x20))(9,*(undefined8 *)(lVar11 + 0x20),(ulong)uVar13 << 3);
    if (lVar7 != 0) {
      *(long *)(lVar11 + 0x20) = lVar7;
      *(uint *)(lVar11 + 0x2c) = uVar13;
      goto LAB_0342524c;
    }
  }
  plVar8 = *(long **)(lVar11 + 0x30);
  uVar13 = *(uint *)(lVar11 + 0x38);
  if (uVar13 != 0) {
    lVar7 = (ulong)uVar13 << 3;
    plVar9 = plVar8;
    do {
      if ((float *)*plVar9 == pfVar1) goto LAB_034252ec;
      lVar7 = lVar7 + -8;
      plVar9 = plVar9 + 1;
    } while (lVar7 != 0);
  }
  uVar10 = *(uint *)(lVar11 + 0x3c);
  if (uVar13 < uVar10) {
LAB_034252d0:
    if (uVar10 <= uVar13) goto LAB_034252ec;
    uVar10 = *(uint *)(lVar11 + 0x38);
    uVar13 = uVar10 + 1;
    *(uint *)(lVar11 + 0x38) = uVar13;
    plVar9 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar8[uVar10] = (long)pfVar1;
      goto LAB_034252ec;
    }
  }
  else {
    iVar5 = uVar10 + (uVar10 >> 1);
    if (uVar10 == 0) {
      iVar5 = 1;
    }
    uVar10 = iVar5 + uVar10;
    plVar8 = (long *)(**(code **)(puVar6 + 0x20))(9,plVar8,(ulong)uVar10 << 3);
    if (plVar8 != (long *)0x0) {
      *(long **)(lVar11 + 0x30) = plVar8;
      *(uint *)(lVar11 + 0x3c) = uVar10;
      goto LAB_034252d0;
    }
LAB_034252ec:
    uVar13 = *(uint *)(lVar11 + 0x38);
    plVar9 = *(long **)(lVar11 + 0x30);
  }
  if (uVar13 != 0) {
    lVar7 = (ulong)uVar13 << 3;
    plVar8 = plVar9;
    do {
      if ((float *)*plVar8 == pfVar2) goto LAB_03425370;
      lVar7 = lVar7 + -8;
      plVar8 = plVar8 + 1;
    } while (lVar7 != 0);
  }
  uVar10 = *(uint *)(lVar11 + 0x3c);
  if (uVar13 < uVar10) {
LAB_03425354:
    if (uVar10 <= uVar13) goto LAB_03425370;
    uVar10 = *(uint *)(lVar11 + 0x38);
    uVar13 = uVar10 + 1;
    *(uint *)(lVar11 + 0x38) = uVar13;
    plVar8 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar9[uVar10] = (long)pfVar2;
      goto LAB_03425370;
    }
  }
  else {
    iVar5 = uVar10 + (uVar10 >> 1);
    if (uVar10 == 0) {
      iVar5 = 1;
    }
    uVar10 = iVar5 + uVar10;
    plVar9 = (long *)(**(code **)(puVar6 + 0x20))(9,plVar9,(ulong)uVar10 << 3);
    if (plVar9 != (long *)0x0) {
      *(long **)(lVar11 + 0x30) = plVar9;
      *(uint *)(lVar11 + 0x3c) = uVar10;
      goto LAB_03425354;
    }
LAB_03425370:
    uVar13 = *(uint *)(lVar11 + 0x38);
    plVar8 = *(long **)(lVar11 + 0x30);
  }
  if (uVar13 != 0) {
    lVar7 = (ulong)uVar13 << 3;
    plVar9 = plVar8;
    do {
      if ((float *)*plVar9 == pfVar3) goto LAB_034253f4;
      lVar7 = lVar7 + -8;
      plVar9 = plVar9 + 1;
    } while (lVar7 != 0);
  }
  uVar10 = *(uint *)(lVar11 + 0x3c);
  if (uVar13 < uVar10) {
LAB_034253d8:
    if (uVar13 < uVar10) {
      uVar10 = *(uint *)(lVar11 + 0x38);
      uVar13 = uVar10 + 1;
      *(uint *)(lVar11 + 0x38) = uVar13;
      plVar9 = (long *)0x0;
      if (plVar8 == (long *)0x0) goto LAB_034253fc;
      plVar8[uVar10] = (long)pfVar3;
    }
  }
  else {
    iVar5 = uVar10 + (uVar10 >> 1);
    if (uVar10 == 0) {
      iVar5 = 1;
    }
    uVar10 = iVar5 + uVar10;
    plVar8 = (long *)(**(code **)(puVar6 + 0x20))(9,plVar8,(ulong)uVar10 << 3);
    if (plVar8 != (long *)0x0) {
      *(long **)(lVar11 + 0x30) = plVar8;
      *(uint *)(lVar11 + 0x3c) = uVar10;
      goto LAB_034253d8;
    }
  }
LAB_034253f4:
  uVar13 = *(uint *)(lVar11 + 0x38);
  plVar9 = *(long **)(lVar11 + 0x30);
LAB_034253fc:
  if (uVar13 != 0) {
    lVar7 = (ulong)uVar13 << 3;
    plVar8 = plVar9;
    do {
      if ((float *)*plVar8 == pfVar4) {
        return;
      }
      lVar7 = lVar7 + -8;
      plVar8 = plVar8 + 1;
    } while (lVar7 != 0);
  }
  uVar10 = *(uint *)(lVar11 + 0x3c);
  if (uVar10 <= uVar13) {
    iVar5 = uVar10 + (uVar10 >> 1);
    if (uVar10 == 0) {
      iVar5 = 1;
    }
    uVar10 = iVar5 + uVar10;
    plVar9 = (long *)(**(code **)(puVar6 + 0x20))(9,plVar9,(ulong)uVar10 << 3);
    if (plVar9 == (long *)0x0) {
      return;
    }
    *(long **)(lVar11 + 0x30) = plVar9;
    *(uint *)(lVar11 + 0x3c) = uVar10;
  }
  if (uVar13 < uVar10) {
    uVar13 = *(uint *)(lVar11 + 0x38);
    *(uint *)(lVar11 + 0x38) = uVar13 + 1;
    if (plVar9 != (long *)0x0) {
      plVar9[uVar13] = (long)pfVar4;
    }
  }
  return;
}


