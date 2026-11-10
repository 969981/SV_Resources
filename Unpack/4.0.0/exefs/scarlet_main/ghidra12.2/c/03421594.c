/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03421594; name: FUN_03421594
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03421594(float param_1,float *param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_e0;
  float local_d8 [7];
  undefined8 local_bc;
  float local_b4;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float fStack_88;
  float fStack_84;
  
  puVar1 = (undefined8 *)FUN_034ebdd8(param_4,2,1);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  lVar2 = *(long *)(param_5 + 8);
  fVar23 = 0.0;
  fVar12 = *(float *)(param_5 + 0x78);
  fVar13 = *(float *)(param_5 + 0x7c);
  fVar9 = param_2[2];
  lVar4 = *(long *)(lVar2 + 0x58);
  fVar6 = *(float *)(lVar4 + 0x90) +
          *(float *)(lVar4 + 0x98) * (*(float *)(lVar4 + 0x78) - *(float *)(lVar4 + 0x90));
  fVar5 = param_2[0x27];
  if (param_2[0x27] <= fVar6) {
    fVar5 = fVar6;
  }
  fVar11 = *(float *)(param_5 + 0x80);
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar21 = fVar13 - fVar8;
  fVar18 = fVar12 - fVar7;
  fVar25 = fVar11 - fVar9;
  fVar16 = param_2[0xc];
  fVar15 = param_2[0xd];
  fVar22 = ABS(fVar18 * param_2[3] + param_2[4] * fVar21 + param_2[5] * fVar25);
  fVar6 = fVar22 - fVar16;
  fVar26 = ABS(fVar18 * param_2[6] + param_2[7] * fVar21 + param_2[8] * fVar25);
  fVar6 = fVar6 * fVar6;
  if (fVar22 <= fVar16) {
    fVar6 = 0.0;
  }
  fVar28 = fVar26 - fVar15;
  fVar22 = param_2[0xe];
  fVar21 = ABS(fVar18 * param_2[9] + param_2[10] * fVar21 + param_2[0xb] * fVar25);
  fVar25 = fVar21 - fVar22;
  fVar18 = fVar6 + fVar28 * fVar28;
  if (fVar26 <= fVar15) {
    fVar18 = fVar6;
  }
  fVar6 = fVar18 + fVar25 * fVar25;
  if (fVar21 <= fVar22) {
    fVar6 = fVar18;
  }
  fVar6 = SQRT(fVar6);
  if (0.0 < fVar6) {
    fVar23 = fVar16 * param_2[3];
    fVar26 = fVar16 * param_2[4];
    fVar25 = fVar15 * param_2[6];
    fVar16 = fVar16 * param_2[5];
    fVar29 = fVar8 - fVar26;
    fVar18 = fVar7 - fVar23;
    fVar28 = fVar15 * param_2[7];
    local_e0._0_4_ = fVar18 - fVar25;
    fVar23 = fVar23 + fVar7;
    fVar18 = fVar25 + fVar18;
    fVar21 = fVar22 * param_2[9];
    fVar7 = fVar23 - fVar25;
    fVar14 = fVar28 + fVar29;
    fVar25 = fVar25 + fVar23;
    local_d8[0] = fVar9 - fVar16;
    fVar15 = fVar15 * param_2[8];
    fVar17 = fVar22 * param_2[10];
    fVar22 = fVar22 * param_2[0xb];
    fVar26 = fVar26 + fVar8;
    fVar16 = fVar16 + fVar9;
    fVar9 = (fVar18 - fVar12) + fVar21;
    fVar29 = fVar29 - fVar28;
    fVar19 = fVar21 + fVar12;
    fVar10 = fVar26 - fVar28;
    local_a8 = fVar15 + local_d8[0];
    fVar28 = fVar28 + fVar26;
    fVar8 = ((float)local_e0 - fVar12) + fVar21;
    local_b4 = fVar16 - fVar15;
    fVar23 = (fVar7 - fVar12) + fVar21;
    fVar7 = fVar7 - fVar19;
    fVar24 = fVar25 - fVar19;
    fVar26 = (fVar10 - fVar13) + fVar17;
    fVar27 = (fVar14 - fVar13) + fVar17;
    local_d8[0] = local_d8[0] - fVar15;
    local_e0._0_4_ = (float)local_e0 - fVar19;
    fVar30 = fVar13 + fVar17;
    fVar15 = fVar15 + fVar16;
    local_e0._4_4_ = fVar29 - fVar30;
    local_d8[3] = (local_d8[0] - fVar11) + fVar22;
    fVar14 = fVar14 - fVar30;
    fVar21 = (fVar25 - fVar12) + fVar21;
    fVar16 = (fVar29 - fVar13) + fVar17;
    fVar17 = (fVar28 - fVar13) + fVar17;
    fVar18 = fVar18 - fVar19;
    local_9c = (local_a8 - fVar11) + fVar22;
    fVar28 = fVar28 - fVar30;
    local_d8[6] = (local_b4 - fVar11) + fVar22;
    fVar10 = fVar10 - fVar30;
    local_90 = (fVar15 - fVar11) + fVar22;
    fVar22 = fVar11 + fVar22;
    local_d8[0] = local_d8[0] - fVar22;
    local_b4 = local_b4 - fVar22;
    local_a8 = local_a8 - fVar22;
    fVar15 = fVar15 - fVar22;
    fVar22 = SQRT((float)local_e0 * (float)local_e0 + local_e0._4_4_ * local_e0._4_4_ +
                  local_d8[0] * local_d8[0]);
    if (fVar22 == 0.0) {
      local_d8[0] = 0.0;
      local_e0._0_4_ = 0.0;
      local_e0._4_4_ = 0.0;
    }
    else {
      fVar22 = 1.0 / fVar22;
      local_e0._0_4_ = (float)local_e0 * fVar22;
      local_e0._4_4_ = local_e0._4_4_ * fVar22;
      local_d8[0] = local_d8[0] * fVar22;
    }
    fVar22 = SQRT(fVar8 * fVar8 + fVar16 * fVar16 + local_d8[3] * local_d8[3]);
    if (fVar22 == 0.0) {
      local_d8[1] = 0.0;
      local_d8[2] = 0.0;
      local_d8[3] = 0.0;
    }
    else {
      fVar22 = 1.0 / fVar22;
      local_d8[3] = local_d8[3] * fVar22;
      local_d8[1] = fVar8 * fVar22;
      local_d8[2] = fVar16 * fVar22;
    }
    fVar8 = SQRT(fVar23 * fVar23 + fVar26 * fVar26 + local_d8[6] * local_d8[6]);
    if (fVar8 == 0.0) {
      fVar26 = 0.0;
      local_d8[4] = 0.0;
      local_d8[5] = 0.0;
      fVar23 = 0.0;
      local_d8[6] = 0.0;
    }
    else {
      fVar8 = 1.0 / fVar8;
      fVar23 = fVar23 * fVar8;
      fVar26 = fVar26 * fVar8;
      local_d8[6] = local_d8[6] * fVar8;
      local_d8[5] = fVar26;
      local_d8[4] = fVar23;
    }
    fVar8 = SQRT(fVar7 * fVar7 + fVar10 * fVar10 + local_b4 * local_b4);
    if (fVar8 == 0.0) {
      fVar10 = 0.0;
      local_bc = 0;
      fVar7 = 0.0;
      local_b4 = 0.0;
    }
    else {
      fVar8 = 1.0 / fVar8;
      fVar7 = fVar7 * fVar8;
      fVar10 = fVar10 * fVar8;
      local_b4 = local_b4 * fVar8;
      local_bc = CONCAT44(fVar10,fVar7);
    }
    fVar8 = SQRT(fVar18 * fVar18 + fVar14 * fVar14 + local_a8 * local_a8);
    if (fVar8 == 0.0) {
      fVar14 = 0.0;
      local_b0 = 0;
      fVar18 = 0.0;
      local_a8 = 0.0;
    }
    else {
      fVar8 = 1.0 / fVar8;
      fVar18 = fVar18 * fVar8;
      fVar14 = fVar14 * fVar8;
      local_a8 = local_a8 * fVar8;
      local_b0 = CONCAT44(fVar14,fVar18);
    }
    fVar8 = SQRT(fVar9 * fVar9 + fVar27 * fVar27 + local_9c * local_9c);
    if (fVar8 == 0.0) {
      fVar27 = 0.0;
      local_a4 = 0;
      fVar9 = 0.0;
      local_9c = 0.0;
    }
    else {
      fVar8 = 1.0 / fVar8;
      fVar9 = fVar9 * fVar8;
      fVar27 = fVar27 * fVar8;
      local_9c = local_9c * fVar8;
      local_a4 = CONCAT44(fVar27,fVar9);
    }
    fVar8 = SQRT(fVar21 * fVar21 + fVar17 * fVar17 + local_90 * local_90);
    if (fVar8 == 0.0) {
      fVar17 = 0.0;
      local_98 = 0;
      fVar21 = 0.0;
      local_90 = 0.0;
    }
    else {
      fVar8 = 1.0 / fVar8;
      fVar21 = fVar21 * fVar8;
      fVar17 = fVar17 * fVar8;
      local_90 = local_90 * fVar8;
      local_98 = CONCAT44(fVar17,fVar21);
    }
    fVar8 = SQRT(fVar24 * fVar24 + fVar28 * fVar28 + fVar15 * fVar15);
    if (fVar8 == 0.0) {
      local_8c = 0.0;
      fStack_88 = 0.0;
      fStack_84 = 0.0;
    }
    else {
      fVar8 = 1.0 / fVar8;
      fStack_84 = fVar15 * fVar8;
      local_8c = fVar24 * fVar8;
      fStack_88 = fVar28 * fVar8;
    }
    lVar2 = 0;
    uVar20 = 0x3f800000;
    fVar8 = (float)local_e0;
    do {
      if (lVar2 == 0) {
        fVar15 = local_d8[0];
        fVar16 = local_e0._4_4_;
LAB_03421b28:
        uVar20 = NEON_fminnm(fVar8 * local_d8[1] + local_d8[3] * fVar15 + local_d8[2] * fVar16,
                             uVar20);
        if (lVar2 != 0x18) goto LAB_03421b40;
LAB_03421b58:
        uVar20 = NEON_fminnm(fVar8 * fVar7 + local_b4 * fVar15 + fVar10 * fVar16,uVar20);
        if (lVar2 != 0x30) goto LAB_03421b70;
LAB_03421b88:
        uVar20 = NEON_fminnm(fVar8 * fVar9 + local_9c * fVar15 + fVar27 * fVar16,uVar20);
        if (lVar2 != 0x48) goto LAB_03421ba0;
      }
      else {
        fVar16 = *(float *)((long)local_d8 + lVar2 + -4);
        fVar15 = *(float *)((long)local_d8 + lVar2);
        uVar20 = NEON_fminnm(fVar8 * (float)local_e0 + local_e0._4_4_ * fVar16 +
                             local_d8[0] * fVar15,uVar20);
        if (lVar2 != 0xc) goto LAB_03421b28;
LAB_03421b40:
        uVar20 = NEON_fminnm(fVar8 * fVar23 + local_d8[6] * fVar15 + fVar26 * fVar16,uVar20);
        if (lVar2 != 0x24) goto LAB_03421b58;
LAB_03421b70:
        uVar20 = NEON_fminnm(fVar8 * fVar18 + local_a8 * fVar15 + fVar14 * fVar16,uVar20);
        if (lVar2 != 0x3c) goto LAB_03421b88;
LAB_03421ba0:
        uVar20 = NEON_fminnm(fVar8 * fVar21 + local_90 * fVar15 + fVar17 * fVar16,uVar20);
        if (lVar2 == 0x54) goto LAB_03421bd4;
      }
      uVar20 = NEON_fminnm(fVar8 * local_8c + fStack_84 * fVar15 + fStack_88 * fVar16,uVar20);
      fVar8 = *(float *)((long)local_d8 + lVar2 + 4);
      lVar2 = lVar2 + 0xc;
    } while( true );
  }
  fVar7 = 100.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
LAB_03421c68:
  local_e0 = *(undefined8 *)(param_2 + 9);
  local_d8[0] = param_2[0xb];
  local_d8[3] = param_2[8];
  local_d8[1] = (float)*(undefined8 *)(param_2 + 6);
  local_d8[2] = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
  uVar3 = *(undefined8 *)(lVar2 + 0x78);
  *(float *)((long)puVar1 + 0x4c) = fVar7;
  *(float *)(puVar1 + 3) = fVar12 + fVar6 * fVar23;
  *puVar1 = local_e0;
  puVar1[1] = CONCAT44(local_d8[1],local_d8[0]);
  puVar1[2] = CONCAT44(local_d8[3],local_d8[2]);
  *(float *)((long)puVar1 + 0x1c) = fVar13 + fVar6 * fVar8;
  *(float *)(puVar1 + 4) = fVar11 + fVar6 * fVar9;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined4 *)(puVar1 + 10) = 0x42c80000;
  puVar1[0xb] = 0xffffffff;
  puVar1[0xc] = uVar3;
  *(undefined4 *)((long)puVar1 + 0x44) = 0;
  *(float *)(puVar1 + 9) = fVar5 * 100.0;
  FUN_03447c20(param_5,*(undefined8 *)(param_3 + 0x28),puVar1);
  fVar5 = param_2[0x27];
  if (param_2[0x27] <= param_1) {
    fVar5 = param_1;
  }
  FUN_034211b4(fVar5,param_2,param_3,10,param_4);
  return;
LAB_03421bd4:
  fVar8 = (local_d8[2] + local_e0._4_4_ + fVar26 + fVar10 + fVar14 + fVar27 + fVar17 + fStack_88) *
          0.125;
  fVar23 = (local_d8[1] + (float)local_e0 + fVar23 + fVar7 + fVar18 + fVar9 + fVar21 + local_8c) *
           0.125;
  fVar9 = (local_d8[3] + local_d8[0] + local_d8[6] + local_b4 + local_a8 + local_9c + local_90 +
          fStack_84) * 0.125;
  fVar7 = SQRT(fVar8 * fVar8 + fVar23 * fVar23 + fVar9 * fVar9);
  if (fVar7 == 0.0) {
    fVar23 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
  }
  else {
    fVar7 = 1.0 / fVar7;
    fVar23 = fVar23 * fVar7;
    fVar8 = fVar8 * fVar7;
    fVar9 = fVar9 * fVar7;
  }
  fVar7 = (float)NEON_fminnm(uVar20,0x3f800000);
  if (fVar7 <= -1.0) {
    fVar7 = -1.0;
  }
  fVar7 = acosf(fVar7);
  fVar7 = fVar7 * 15.915494;
  lVar2 = *(long *)(param_5 + 8);
  goto LAB_03421c68;
}


