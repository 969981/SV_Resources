/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008514e0; name: FUN_008514e0
 */


undefined4
FUN_008514e0(undefined8 param_1,long param_2,uint param_3,undefined1 (*param_4) [16],
            undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [12];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  long local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  undefined8 local_80;
  
  puVar10 = PTR_PTR_047d1a50;
  local_88 = 0;
  local_80 = -0x8000000000000000;
  if (0 < (int)param_3) {
    FUN_02e9b11c(&local_88,PTR_PTR_047d1a50,param_3 * 3);
    fVar33 = *(float *)(PTR_DAT_047d19b0 + 0x260);
    uVar16 = (ulong)param_3;
    uVar15 = 1;
    uVar18 = 0;
    do {
      puVar2 = (undefined8 *)(param_2 + uVar18 * 0x10);
      uVar4 = puVar2[1];
      uVar21 = (undefined4)uVar4;
      fVar19 = (float)((ulong)uVar4 >> 0x20);
      uVar4 = *puVar2;
      uVar12 = (undefined4)uVar4;
      uVar20 = (undefined4)((ulong)uVar4 >> 0x20);
      fVar22 = -fVar19;
      uVar1 = uVar18 + 1;
      if (uVar1 < uVar16) {
        uVar17 = uVar15;
        do {
          pauVar3 = (undefined1 (*) [12])(param_2 + uVar17 * 0x10);
          fVar31 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
          auVar26._4_4_ = uVar20;
          auVar26._0_4_ = uVar12;
          auVar26._8_4_ = uVar21;
          auVar26._12_4_ = fVar19;
          auVar27._4_4_ = uVar20;
          auVar27._0_4_ = uVar12;
          auVar27._8_4_ = uVar21;
          auVar27._12_4_ = fVar19;
          auVar27 = NEON_ext(auVar26,auVar27,8,1);
          auVar26 = *param_4;
          auVar29 = NEON_ext(auVar26,auVar26,8,1);
          auVar32._12_4_ = fVar31;
          auVar32._0_12_ = *pauVar3;
          auVar6._12_4_ = fVar31;
          auVar6._0_12_ = *pauVar3;
          auVar32 = NEON_ext(auVar32,auVar6,8,1);
          local_a0 = CONCAT44(auVar32._0_4_,auVar27._0_4_);
          uStack_98 = auVar29._0_8_;
          uStack_b8 = auVar26._0_8_;
          fVar31 = -fVar31;
          local_c0 = CONCAT44((int)*(undefined8 *)*pauVar3,uVar12);
          uStack_a8 = CONCAT44(auVar29._4_4_,auVar26._4_4_);
          local_b0 = CONCAT44((int)((ulong)*(undefined8 *)*pauVar3 >> 0x20),uVar20);
          fVar19 = -auVar26._12_4_;
          iVar11 = FUN_031cb558(&local_c0,&local_c0);
          if (-1 < iVar11) {
            uVar13 = 0;
            fVar28 = (float)local_c0 * fVar22 + (float)local_b0 * fVar31 + (float)local_a0 * fVar19;
            fVar30 = (float)((ulong)local_c0 >> 0x20) * fVar22 +
                     (float)((ulong)local_b0 >> 0x20) * fVar31 +
                     (float)((ulong)local_a0 >> 0x20) * fVar19;
            auVar29._0_8_ = CONCAT44(fVar30,fVar28);
            auVar29._8_4_ =
                 (float)uStack_b8 * fVar22 + (float)uStack_a8 * fVar31 + (float)uStack_98 * fVar19;
            auVar29._12_4_ =
                 (float)((ulong)uStack_b8 >> 0x20) * fVar22 +
                 (float)((ulong)uStack_a8 >> 0x20) * fVar31 +
                 (float)((ulong)uStack_98 >> 0x20) * fVar19;
            do {
              if ((uVar18 != uVar13) && (uVar17 != uVar13)) {
                puVar2 = (undefined8 *)(param_2 + uVar13 * 0x10);
                uVar5 = puVar2[1];
                fVar19 = (float)((ulong)uVar5 >> 0x20);
                uVar4 = *puVar2;
                fVar31 = fVar28 * (float)uVar4;
                fVar23 = fVar30 * (float)((ulong)uVar4 >> 0x20);
                fVar24 = auVar29._8_4_ * (float)uVar5;
                fVar25 = auVar29._12_4_ * fVar19;
                auVar7._4_4_ = fVar23;
                auVar7._0_4_ = fVar31;
                auVar7._8_4_ = fVar24;
                auVar7._12_4_ = fVar25;
                auVar8._4_4_ = fVar23;
                auVar8._0_4_ = fVar31;
                auVar8._8_4_ = fVar24;
                auVar8._12_4_ = fVar25;
                auVar26 = NEON_ext(auVar7,auVar8,8,1);
                if (fVar33 < fVar31 + fVar23 + auVar26._0_4_ + fVar19) goto LAB_008516a8;
              }
              uVar13 = uVar13 + 1;
            } while (uVar16 != uVar13);
            lVar14 = (long)(int)local_80;
            if ((int)(local_80._4_4_ & 0x7fffffff) <= (int)local_80) {
              FUN_02e9b11c(&local_88,puVar10,lVar14 + 1);
              auVar29._8_8_ = auVar29._8_8_;
            }
            puVar2 = (undefined8 *)(local_88 + (long)(int)local_80 * 0x10);
            puVar2[1] = auVar29._8_8_;
            *puVar2 = auVar29._0_8_;
            local_80 = CONCAT44(local_80._4_4_,(int)(lVar14 + 1));
          }
LAB_008516a8:
          uVar17 = uVar17 + 1;
          if (uVar17 == uVar16) break;
          puVar2 = (undefined8 *)(param_2 + uVar18 * 0x10);
          uVar4 = puVar2[1];
          uVar21 = (undefined4)uVar4;
          fVar19 = (float)((ulong)uVar4 >> 0x20);
          uVar4 = *puVar2;
          uVar12 = (undefined4)uVar4;
          uVar20 = (undefined4)((ulong)uVar4 >> 0x20);
        } while( true );
      }
      uVar15 = uVar15 + 1;
      uVar18 = uVar1;
    } while (uVar1 != uVar16);
  }
  if ((int)local_80 < 3) {
    uVar12 = 0xffffffff;
    uVar9 = local_80._4_4_;
  }
  else {
    local_d0 = local_88;
    local_c8 = (int)local_80;
    uStack_c4 = 0x10;
    uVar12 = FUN_00850404(param_1,&local_d0,param_4,param_5);
    uVar9 = local_80._4_4_;
  }
  if (-1 < local_80) {
    local_80 = (ulong)uVar9 << 0x20;
    if (local_88 != 0) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,(ulong)uVar9 << 4);
    }
  }
  return uVar12;
}


