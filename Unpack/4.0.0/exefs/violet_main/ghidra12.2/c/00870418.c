/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00870418; name: FUN_00870418
 */


void FUN_00870418(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 (*local_110 [5]) [16];
  uint local_e8 [2];
  undefined1 (*local_e0) [16];
  undefined1 (*pauStack_d8) [16];
  undefined1 (*local_d0) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 (*local_c0) [16];
  uint local_b8;
  undefined1 (*local_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 (*local_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined1 (*local_90) [16];
  uint local_88;
  
  local_88 = *(uint *)((long)param_1 + 0x1c);
  if (local_88 != 0) {
    lVar4 = param_2[1];
    lVar7 = 0;
    if (*param_1 != 0) {
      lVar7 = *param_1 + (long)param_1;
    }
    local_90 = (undefined1 (*) [16])(lVar7 + (ulong)local_88 * 0x30);
    pauStack_a8 = *(undefined1 (**) [16])(*local_90 + 8);
    local_b0 = *(undefined1 (**) [16])*local_90;
    pauStack_98 = *(undefined1 (**) [16])(local_90[1] + 8);
    local_a0 = *(undefined1 (**) [16])local_90[1];
    uVar30 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    fVar22 = (float)param_3[2];
    fVar23 = (float)((ulong)param_3[2] >> 0x20);
    fVar24 = (float)param_3[3];
    fVar25 = (float)((ulong)param_3[3] >> 0x20);
    fVar12 = (float)param_3[6];
    auVar21._0_4_ = (*(float *)*local_90 - fVar22) * fVar12;
    fVar13 = (float)((ulong)param_3[6] >> 0x20);
    auVar21._4_4_ = (*(float *)(*local_90 + 4) - fVar23) * fVar13;
    fVar14 = (float)param_3[7];
    auVar21._8_4_ = (*(float *)(*local_90 + 8) - fVar24) * fVar14;
    fVar15 = (float)((ulong)param_3[7] >> 0x20);
    auVar21._12_4_ = (*(float *)(*local_90 + 0xc) - fVar25) * fVar15;
    fVar12 = fVar12 * (SUB84(local_a0,0) - fVar22);
    fVar13 = fVar13 * ((float)((ulong)local_a0 >> 0x20) - fVar23);
    fVar14 = fVar14 * (SUB84(pauStack_98,0) - fVar24);
    fVar15 = fVar15 * ((float)((ulong)pauStack_98 >> 0x20) - fVar25);
    auVar11._4_4_ = fVar13;
    auVar11._0_4_ = fVar12;
    auVar11._8_4_ = fVar14;
    auVar11._12_4_ = fVar15;
    auVar18 = NEON_fmin(auVar21,auVar11,4);
    uVar16 = (undefined4)((ulong)param_3[5] >> 0x20);
    auVar2._4_4_ = fVar13;
    auVar2._0_4_ = fVar12;
    auVar2._8_4_ = fVar14;
    auVar2._12_4_ = fVar15;
    auVar11 = NEON_fmax(auVar21,auVar2,4);
    uVar32 = NEON_fmaxp(auVar18._0_8_,auVar18._0_8_,4);
    uVar32 = NEON_fmax(CONCAT44(auVar18._8_4_,auVar18._8_4_),uVar32,4);
    uVar17 = NEON_fminp(auVar11._0_8_,auVar11._0_8_,4);
    uVar17 = NEON_fmin(CONCAT44(auVar11._8_4_,auVar11._8_4_),uVar17,4);
    uVar32 = NEON_fmax(uVar32,uVar30,4);
    uVar17 = NEON_fmin(uVar17,CONCAT44(uVar16,uVar16),4);
    if ((float)uVar32 <= (float)uVar17) {
LAB_0087055c:
      while( true ) {
        uVar5 = *(uint *)(local_90[2] + 4);
        if (uVar5 == 0) break;
        local_e8[0] = uVar5;
        lVar7 = 0;
        if (*param_1 != 0) {
          lVar7 = *param_1 + (long)param_1;
        }
        pauVar8 = (undefined1 (*) [16])(lVar7 + (ulong)uVar5 * 0x30);
        local_110[4] = pauVar8;
        auVar11 = *pauVar8;
        local_110[1] = auVar11._8_8_;
        local_110[0] = auVar11._0_8_;
        local_110[3] = *(undefined1 (**) [16])(pauVar8[1] + 8);
        local_110[2] = *(undefined1 (**) [16])pauVar8[1];
        local_b8 = *(uint *)(local_90[2] + 8);
        local_c0 = (undefined1 (*) [16])(lVar7 + (ulong)local_b8 * 0x30);
        pauStack_d8 = *(undefined1 (**) [16])(*local_c0 + 8);
        local_e0 = *(undefined1 (**) [16])*local_c0;
        auVar2 = local_c0[1];
        pauStack_c8 = auVar2._8_8_;
        local_d0 = auVar2._0_8_;
        fVar12 = *(float *)(param_3 + 2);
        fVar13 = *(float *)((long)param_3 + 0x14);
        fVar14 = *(float *)(param_3 + 3);
        fVar15 = *(float *)((long)param_3 + 0x1c);
        fVar26 = (float)param_3[6];
        auVar20._0_4_ = (auVar11._0_4_ - fVar12) * fVar26;
        fVar27 = (float)((ulong)param_3[6] >> 0x20);
        auVar20._4_4_ = (auVar11._4_4_ - fVar13) * fVar27;
        fVar28 = (float)param_3[7];
        auVar20._8_4_ = (auVar11._8_4_ - fVar14) * fVar28;
        fVar29 = (float)((ulong)param_3[7] >> 0x20);
        auVar20._12_4_ = (auVar11._12_4_ - fVar15) * fVar29;
        fVar22 = fVar26 * (SUB84(local_110[2],0) - fVar12);
        fVar23 = fVar27 * ((float)((ulong)local_110[2] >> 0x20) - fVar13);
        fVar24 = fVar28 * (SUB84(local_110[3],0) - fVar14);
        fVar25 = fVar29 * ((float)((ulong)local_110[3] >> 0x20) - fVar15);
        auVar18._4_4_ = fVar23;
        auVar18._0_4_ = fVar22;
        auVar18._8_4_ = fVar24;
        auVar18._12_4_ = fVar25;
        auVar18 = NEON_fmin(auVar20,auVar18,4);
        uVar32 = NEON_fmaxp(auVar18._0_8_,auVar18._0_8_,4);
        auVar3._4_4_ = fVar23;
        auVar3._0_4_ = fVar22;
        auVar3._8_4_ = fVar24;
        auVar3._12_4_ = fVar25;
        auVar21 = NEON_fmax(auVar20,auVar3,4);
        uVar17 = NEON_fmax(CONCAT44(auVar18._8_4_,auVar18._8_4_),uVar32,4);
        uVar32 = NEON_fminp(auVar21._0_8_,auVar21._0_8_,4);
        uVar16 = (undefined4)((ulong)param_3[5] >> 0x20);
        uVar32 = NEON_fmin(CONCAT44(auVar21._8_4_,auVar21._8_4_),uVar32,4);
        uVar33 = NEON_fmax(uVar17,uVar30,4);
        uVar17 = NEON_fmin(uVar32,CONCAT44(uVar16,uVar16),4);
        auVar31._0_4_ = fVar26 * (SUB84(local_e0,0) - fVar12);
        auVar31._4_4_ = fVar27 * ((float)((ulong)local_e0 >> 0x20) - fVar13);
        auVar31._8_4_ = fVar28 * (SUB84(pauStack_d8,0) - fVar14);
        auVar31._12_4_ = fVar29 * ((float)((ulong)pauStack_d8 >> 0x20) - fVar15);
        fVar22 = (float)uVar33;
        auVar19._0_4_ = fVar26 * (auVar2._0_4_ - fVar12);
        auVar19._4_4_ = fVar27 * (auVar2._4_4_ - fVar13);
        auVar19._8_4_ = fVar28 * (auVar2._8_4_ - fVar14);
        auVar19._12_4_ = fVar29 * (auVar2._12_4_ - fVar15);
        auVar18 = NEON_fmin(auVar31,auVar19,4);
        uVar32 = NEON_fmaxp(auVar18._0_8_,auVar18._0_8_,4);
        auVar21 = NEON_fmax(auVar31,auVar19,4);
        uVar33 = NEON_fmax(CONCAT44(auVar18._8_4_,auVar18._8_4_),uVar32,4);
        uVar32 = NEON_fminp(auVar21._0_8_,auVar21._0_8_,4);
        uVar32 = NEON_fmin(CONCAT44(auVar21._8_4_,auVar21._8_4_),uVar32,4);
        uVar33 = NEON_fmax(uVar33,uVar30,4);
        fVar12 = (float)uVar33;
        uVar32 = NEON_fmin(uVar32,CONCAT44(uVar16,uVar16),4);
        bVar1 = fVar22 <= (float)uVar17 | (fVar12 <= (float)uVar32) << 1;
        if (bVar1 == 1) {
          local_b0 = auVar11._0_8_;
          pauStack_a8 = auVar11._8_8_;
          local_a0 = local_110[2];
          pauStack_98 = local_110[3];
LAB_00870760:
          local_90 = pauVar8;
          local_88 = uVar5;
        }
        else {
          if (bVar1 == 2) {
            local_b0 = local_e0;
            pauVar8 = local_c0;
            uVar5 = local_b8;
            pauStack_a8 = pauStack_d8;
            local_a0 = auVar2._0_8_;
            pauStack_98 = auVar2._8_8_;
            goto LAB_00870760;
          }
          if (bVar1 != 3) goto LAB_008706f0;
          *(uint *)(param_3 + 8) = (uint)(fVar12 < fVar22);
          iVar6 = (int)param_2[1];
          lVar7 = (long)iVar6;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar6) {
            FUN_02eb1f88(param_2,PTR_PTR_047d1a50,lVar7 + 1);
            iVar6 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar7 + 1);
          uVar9 = (ulong)(fVar12 < fVar22);
          *(uint *)(*param_2 + (long)iVar6 * 4) = local_e8[(ulong)(fVar12 >= fVar22) * 0xc];
          pauStack_a8 = local_110[uVar9 * 6 + 1];
          pauStack_98 = local_110[uVar9 * 6 + 3];
          local_a0 = local_110[uVar9 * 6 + 2];
          local_b0 = local_110[uVar9 * 6];
          local_90 = local_110[uVar9 * 6 + 4];
          local_88 = local_e8[uVar9 * 0xc];
        }
      }
      local_110[0] = (undefined1 (*) [16])
                     CONCAT44(*(undefined4 *)((long)param_3 + 0x2c),
                              *(undefined4 *)((long)param_3 + 0x2c));
      puVar10 = (undefined8 *)*param_3;
      uVar5 = (**(code **)(*(long *)*puVar10 + 0x10))
                        ((long *)*puVar10,*(undefined4 *)(local_90[2] + 8),&local_b0,local_110);
      *(uint *)(puVar10 + 1) = *(uint *)(puVar10 + 1) | uVar5;
      param_3[5] = CONCAT44((int)local_110[0],(int)param_3[5]);
      param_3[4] = param_3[4];
LAB_008706f0:
      if ((int)lVar4 < (int)param_2[1]) {
        uVar5 = (int)param_2[1] - 1;
        uVar9 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
        *(uint *)(param_2 + 1) = uVar5;
        lVar7 = 0;
        if (*param_1 != 0) {
          lVar7 = *param_1 + (long)param_1;
        }
        local_90 = (undefined1 (*) [16])(lVar7 + (ulong)*(uint *)(*param_2 + uVar9) * 0x30);
        pauStack_a8 = *(undefined1 (**) [16])(*local_90 + 8);
        local_b0 = *(undefined1 (**) [16])*local_90;
        local_a0 = *(undefined1 (**) [16])local_90[1];
        pauStack_98 = *(undefined1 (**) [16])(local_90[1] + 8);
        local_88 = *(uint *)(*param_2 + uVar9);
        goto LAB_0087055c;
      }
    }
  }
  return;
}


