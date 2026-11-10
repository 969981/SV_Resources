/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00851150; name: FUN_00851150
 */


undefined4 FUN_00851150(long param_1,long param_2,uint param_3,undefined8 *param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  int iVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  ulong local_e8;
  ulong local_e0;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  
  local_70 = 0;
  local_68 = 0x8000000000000000;
  if (0 < (int)param_3) {
    FUN_02e9b11c(&local_70,PTR_PTR_047d1a50,param_3 * 3);
    uVar18 = (ulong)param_3;
    local_e0 = 2;
    local_e8 = 1;
    uVar24 = 0;
    do {
      uVar3 = uVar24 + 1;
      if (uVar3 < uVar18) {
        fVar26 = -(float)((ulong)*(undefined8 *)(param_2 + uVar24 * 0x10 + 8) >> 0x20);
        uVar21 = local_e8;
        uVar22 = local_e0;
        do {
          uVar4 = uVar21 + 1;
          if ((int)uVar4 < (int)param_3) {
            puVar17 = (undefined8 *)(param_2 + uVar21 * 0x10);
            uStack_88 = puVar17[1];
            uStack_90 = *puVar17;
            fVar28 = -(float)((ulong)uStack_88 >> 0x20);
            uVar23 = uVar22;
            do {
              auVar33 = *(undefined1 (*) [16])(param_2 + uVar23 * 0x10);
              puVar17 = (undefined8 *)(param_2 + uVar24 * 0x10);
              uStack_98 = puVar17[1];
              local_a0 = *puVar17;
              uStack_78 = auVar33._8_8_;
              local_80 = auVar33._0_8_;
              FUN_031cb6e0(&local_a0);
              iVar13 = FUN_031cb558(&local_a0,&local_a0);
              if (-1 < iVar13) {
                fStack_a4 = auVar33._12_4_;
                fStack_a4 = -fStack_a4;
                fVar34 = fVar26 * (float)local_a0 + fVar28 * (float)uStack_90 +
                         (float)local_80 * fStack_a4;
                fVar35 = fVar26 * (float)((ulong)local_a0 >> 0x20) +
                         fVar28 * (float)((ulong)uStack_90 >> 0x20) +
                         (float)((ulong)local_80 >> 0x20) * fStack_a4;
                fVar36 = fVar26 * (float)uStack_98 + fVar28 * (float)uStack_88 +
                         (float)uStack_78 * fStack_a4;
                fVar37 = fVar26 * (float)((ulong)uStack_98 >> 0x20) +
                         fVar28 * (float)((ulong)uStack_88 >> 0x20) +
                         (float)((ulong)uStack_78 >> 0x20) * fStack_a4;
                if (uVar24 == 0) {
                  uVar15 = 0;
                  bVar1 = true;
                  if (1 < uVar21) goto LAB_0085130c;
                }
                else {
                  uVar15 = 0;
                  do {
                    puVar17 = (undefined8 *)(param_2 + uVar15 * 0x10);
                    uVar27 = puVar17[1];
                    uVar19 = *puVar17;
                    uVar15 = uVar15 + 1;
                    fVar29 = fVar34 * (float)uVar19;
                    fVar30 = fVar35 * (float)((ulong)uVar19 >> 0x20);
                    fVar31 = fVar36 * (float)uVar27;
                    fVar25 = (float)((ulong)uVar27 >> 0x20);
                    fVar32 = fVar37 * fVar25;
                    auVar33._4_4_ = fVar30;
                    auVar33._0_4_ = fVar29;
                    auVar33._8_4_ = fVar31;
                    auVar33._12_4_ = fVar32;
                    auVar5._4_4_ = fVar30;
                    auVar5._0_4_ = fVar29;
                    auVar5._8_4_ = fVar31;
                    auVar5._12_4_ = fVar32;
                    auVar33 = NEON_ext(auVar33,auVar5,8,1);
                    fVar25 = fVar29 + fVar30 + auVar33._0_4_ + fVar25;
                    bVar1 = fVar25 <= 1e-05;
                  } while (fVar25 <= 1e-05 && uVar15 < uVar24);
                  uVar20 = (ulong)((int)uVar15 + 1);
                  if ((fVar25 <= 1e-05 && uVar20 <= uVar21) && (1e-05 < fVar25 || uVar21 != uVar20))
                  {
LAB_0085130c:
                    uVar15 = uVar15 & 0xffffffff;
                    do {
                      puVar17 = (undefined8 *)(param_2 + 0x10 + uVar15 * 0x10);
                      uVar27 = puVar17[1];
                      uVar19 = *puVar17;
                      uVar20 = uVar15 + 2;
                      fVar29 = fVar34 * (float)uVar19;
                      fVar30 = fVar35 * (float)((ulong)uVar19 >> 0x20);
                      fVar31 = fVar36 * (float)uVar27;
                      fVar25 = (float)((ulong)uVar27 >> 0x20);
                      fVar32 = fVar37 * fVar25;
                      auVar10._4_4_ = fVar30;
                      auVar10._0_4_ = fVar29;
                      auVar10._8_4_ = fVar31;
                      auVar10._12_4_ = fVar32;
                      auVar11._4_4_ = fVar30;
                      auVar11._0_4_ = fVar29;
                      auVar11._8_4_ = fVar31;
                      auVar11._12_4_ = fVar32;
                      auVar33 = NEON_ext(auVar10,auVar11,8,1);
                      fVar25 = fVar29 + fVar30 + auVar33._0_4_ + fVar25;
                      bVar1 = fVar25 <= 1e-05;
                      uVar15 = uVar15 + 1;
                    } while (fVar25 <= 1e-05 && uVar20 < uVar21);
                  }
                }
                uVar20 = (ulong)((int)uVar15 + 2);
                if (bVar1 && uVar20 < uVar23) {
                  uVar20 = (uVar15 & 0xffffffff) + 2;
                  do {
                    puVar17 = (undefined8 *)(param_2 + uVar20 * 0x10);
                    uVar27 = puVar17[1];
                    uVar19 = *puVar17;
                    uVar20 = uVar20 + 1;
                    fVar29 = fVar34 * (float)uVar19;
                    fVar30 = fVar35 * (float)((ulong)uVar19 >> 0x20);
                    fVar31 = fVar36 * (float)uVar27;
                    fVar25 = (float)((ulong)uVar27 >> 0x20);
                    fVar32 = fVar37 * fVar25;
                    auVar6._4_4_ = fVar30;
                    auVar6._0_4_ = fVar29;
                    auVar6._8_4_ = fVar31;
                    auVar6._12_4_ = fVar32;
                    auVar7._4_4_ = fVar30;
                    auVar7._0_4_ = fVar29;
                    auVar7._8_4_ = fVar31;
                    auVar7._12_4_ = fVar32;
                    auVar33 = NEON_ext(auVar6,auVar7,8,1);
                    fVar25 = fVar29 + fVar30 + auVar33._0_4_ + fVar25;
                    bVar1 = fVar25 <= 1e-05;
                  } while (fVar25 <= 1e-05 && uVar20 < uVar23);
                }
                uVar2 = (int)uVar20 + 1;
                if (bVar1 && (int)uVar2 < (int)param_3) {
                  puVar17 = (undefined8 *)(param_2 + (ulong)uVar2 * 0x10);
                  iVar13 = (int)uVar20 + 2;
                  do {
                    fVar29 = fVar34 * (float)*puVar17;
                    fVar30 = fVar35 * (float)((ulong)*puVar17 >> 0x20);
                    fVar31 = fVar36 * (float)puVar17[1];
                    fVar25 = (float)((ulong)puVar17[1] >> 0x20);
                    fVar32 = fVar37 * fVar25;
                    auVar8._4_4_ = fVar30;
                    auVar8._0_4_ = fVar29;
                    auVar8._8_4_ = fVar31;
                    auVar8._12_4_ = fVar32;
                    auVar9._4_4_ = fVar30;
                    auVar9._0_4_ = fVar29;
                    auVar9._8_4_ = fVar31;
                    auVar9._12_4_ = fVar32;
                    auVar33 = NEON_ext(auVar8,auVar9,8,1);
                    fVar25 = fVar29 + fVar30 + auVar33._0_4_ + fVar25;
                    bVar1 = fVar25 <= 1e-05;
                    bVar12 = iVar13 < (int)param_3;
                    puVar17 = puVar17 + 2;
                    iVar13 = iVar13 + 1;
                  } while (fVar25 <= 1e-05 && bVar12);
                }
                if (bVar1) {
                  lVar16 = (long)(int)local_68;
                  if ((int)(local_68._4_4_ & 0x7fffffff) <= (int)local_68) {
                    FUN_02e9b11c(&local_70,PTR_PTR_047d1a50,lVar16 + 1);
                  }
                  puVar17 = (undefined8 *)(local_70 + (long)(int)local_68 * 0x10);
                  puVar17[1] = CONCAT44(fVar37,fVar36);
                  *puVar17 = CONCAT44(fVar35,fVar34);
                  local_68 = CONCAT44(local_68._4_4_,(int)(lVar16 + 1));
                }
              }
              uVar23 = uVar23 + 1;
              if ((uint)uVar23 == param_3) break;
              puVar17 = (undefined8 *)(param_2 + uVar21 * 0x10);
              uStack_88 = puVar17[1];
              uStack_90 = *puVar17;
            } while( true );
          }
          uVar22 = uVar22 + 1;
          uVar21 = uVar4;
        } while (uVar4 != uVar18);
      }
      local_e0 = local_e0 + 1;
      local_e8 = local_e8 + 1;
      uVar24 = uVar3;
    } while (uVar3 != uVar18);
  }
  if ((int)local_68 < 4) {
    uVar14 = 0xffffffff;
    uVar2 = local_68._4_4_;
  }
  else {
    puVar17 = *(undefined8 **)(param_1 + 0x18);
    uVar19 = *param_4;
    *(undefined8 *)((long)puVar17 + 7) = *(undefined8 *)((long)param_4 + 7);
    *puVar17 = uVar19;
    uVar19 = param_4[2];
    puVar17[3] = param_4[3];
    puVar17[2] = uVar19;
    uVar19 = param_4[4];
    puVar17[5] = param_4[5];
    puVar17[4] = uVar19;
    uVar14 = FUN_0085f114(*(undefined8 *)(param_1 + 0x18),local_70,local_68 & 0xffffffff,0,0);
    uVar2 = local_68._4_4_;
  }
  if (-1 < (long)local_68) {
    local_68 = (ulong)uVar2 << 0x20;
    if (local_70 != 0) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_70,(ulong)uVar2 << 4);
    }
  }
  return uVar14;
}


