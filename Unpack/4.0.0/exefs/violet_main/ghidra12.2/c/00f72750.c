/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f72750; name: FUN_00f72750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f72750(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined4 *param_4,float *param_5,undefined1 (*param_6) [16],undefined8 param_7)

{
  int iVar1;
  undefined4 *__dest;
  size_t __n;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  undefined1 auVar10 [16];
  undefined1 auVar9 [16];
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar47;
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  float fVar48;
  undefined1 local_a0 [64];
  float local_60;
  float fStack_5c;
  undefined8 uStack_58;
  float local_50;
  undefined1 auStack_4c [12];
  
  iVar1 = FUN_00f729f0(param_7);
  if (iVar1 == 1) {
    *param_4 = 1;
    FUN_00f72edc(local_a0,param_7);
    FUN_00f729c4(CONCAT44(local_a0._4_4_ + param_5[1],local_a0._0_4_ + *param_5),&local_60);
    param_4[8] = local_50;
    *(ulong *)(param_4 + 4) = CONCAT44(fStack_5c,local_60);
    *(undefined8 *)(param_4 + 6) = uStack_58;
  }
  else {
    if (iVar1 == 2) {
      __dest = param_4 + 0xc;
      *param_4 = 2;
      FUN_00f730b4(param_7);
      auVar6 = *param_6;
      fVar23 = auVar6._8_4_;
      auVar25._4_4_ = fVar23;
      auVar25._0_4_ = fVar23;
      auVar25._8_4_ = fVar23;
      auVar25._12_4_ = fVar23;
      fVar7 = param_2._8_4_;
      auVar37._4_4_ = fVar7;
      auVar37._0_4_ = fVar7;
      auVar37._8_4_ = fVar7;
      auVar37._12_4_ = fVar7;
      fVar22 = auVar6._4_4_;
      auVar33._4_4_ = fVar22;
      auVar33._0_4_ = fVar22;
      auVar33._8_4_ = fVar22;
      auVar33._12_4_ = fVar22;
      fVar2 = param_2._0_4_;
      auVar38._4_12_ = auVar37._4_12_;
      auVar38._0_4_ = fVar2;
      fVar4 = param_2._4_4_;
      auVar40._0_8_ = auVar38._0_8_;
      auVar40._8_4_ = fVar4;
      auVar40._12_4_ = fVar7;
      auVar39._8_8_ = auVar40._8_8_;
      auVar39._4_4_ = fVar7;
      auVar39._0_4_ = fVar2;
      auVar41._0_12_ = auVar39._0_12_;
      auVar41._12_4_ = fVar7;
      auVar30 = NEON_ext(auVar25,auVar6,0xc,1);
      fVar8 = param_2._12_4_;
      fVar24 = auVar6._12_4_;
      auVar34 = NEON_ext(auVar33,auVar30,0xc,1);
      auVar5 = NEON_ext(auVar41,auVar41,8,1);
      fVar3 = auVar5._0_4_;
      auVar42._4_12_ = auVar41._4_12_;
      auVar42._0_4_ = fVar3;
      auVar44._0_8_ = auVar42._0_8_;
      auVar44._8_4_ = auVar5._8_4_;
      auVar44._12_4_ = fVar7;
      auVar43._8_8_ = auVar44._8_8_;
      auVar43._4_4_ = fVar2;
      auVar43._0_4_ = fVar3;
      auVar45._0_12_ = auVar43._0_12_;
      auVar45._12_4_ = fVar4;
      fVar47 = (float)((ulong)_DAT_03cab640 >> 0x20);
      fVar48 = (float)((ulong)_UNK_03cab648 >> 0x20);
      auVar46 = NEON_ext(auVar45,auVar5,8,1);
      auVar46 = NEON_ext(auVar46,auVar46,0xc,1);
      auVar26._0_4_ =
           (fVar2 * fVar24 + fVar8 * auVar6._0_4_ * (float)_DAT_03cab640 +
           auVar46._0_4_ * auVar34._0_4_ * (float)_DAT_03cab640) - auVar30._0_4_ * fVar3;
      auVar26._4_4_ =
           (fVar4 * fVar24 + fVar8 * fVar22 * fVar47 + auVar46._4_4_ * auVar34._4_4_ * fVar47) -
           auVar30._4_4_ * auVar5._4_4_;
      auVar26._8_4_ =
           (fVar7 * fVar24 + fVar8 * fVar23 * (float)_UNK_03cab648 +
           auVar46._8_4_ * auVar34._8_4_ * (float)_UNK_03cab648) - auVar30._8_4_ * auVar5._8_4_;
      auVar26._12_4_ =
           (fVar8 * fVar24 + fVar2 * auVar6._0_4_ * fVar48 +
           auVar46._12_4_ * auVar34._12_4_ * fVar48) - auVar30._12_4_ * auVar5._12_4_;
      FUN_015e8ddc(param_3._0_8_,auVar26,local_a0);
      __n = 0x30;
    }
    else {
      if (iVar1 != 3) {
        *param_4 = 0;
        return;
      }
      __dest = param_4 + 0x18;
      *param_4 = 3;
      FUN_00f73388(&local_60,param_7);
      auVar5._4_12_ = auStack_4c;
      auVar5._0_4_ = local_50;
      auVar34._12_4_ = auStack_4c._8_4_;
      fVar22 = auStack_4c._4_4_;
      auVar6 = *param_6;
      fVar4 = auVar6._8_4_;
      auVar27._4_4_ = fVar4;
      auVar27._0_4_ = fVar4;
      auVar27._8_4_ = fVar4;
      auVar27._12_4_ = fVar4;
      fVar7 = auVar6._12_4_;
      fVar8 = auStack_4c._0_4_;
      auVar30 = NEON_ext(auVar27,auVar6,0xc,1);
      fVar3 = auVar6._4_4_;
      auVar28._4_4_ = fVar3;
      auVar28._0_4_ = fVar3;
      auVar28._8_4_ = fVar3;
      auVar28._12_4_ = fVar3;
      auVar34._0_8_ = auVar5._0_8_;
      auVar34._8_4_ = fVar8;
      auVar35._8_8_ = auVar34._8_8_;
      auVar35._4_4_ = fVar22;
      auVar35._0_4_ = local_50;
      auVar46._0_12_ = auVar35._0_12_;
      auVar46._12_4_ = fVar22;
      auVar35 = NEON_ext(auVar46,auVar46,8,1);
      fVar2 = auVar35._0_4_;
      auVar9._4_12_ = auVar46._4_12_;
      auVar9._0_4_ = fVar2;
      auVar11._0_8_ = auVar9._0_8_;
      auVar11._8_4_ = auVar35._8_4_;
      auVar11._12_4_ = fVar22;
      auVar10._8_8_ = auVar11._8_8_;
      auVar10._4_4_ = local_50;
      auVar10._0_4_ = fVar2;
      auVar12._0_12_ = auVar10._0_12_;
      auVar12._12_4_ = fVar8;
      auVar46 = NEON_ext(auVar28,auVar30,0xc,1);
      fVar23 = (float)_DAT_03cab640;
      fVar24 = (float)((ulong)_DAT_03cab640 >> 0x20);
      fVar47 = (float)_UNK_03cab648;
      fVar48 = (float)((ulong)_UNK_03cab648 >> 0x20);
      auVar5 = NEON_ext(auVar12,auVar35,8,1);
      auVar5 = NEON_ext(auVar5,auVar5,0xc,1);
      auVar31._0_4_ =
           (local_50 * fVar7 + auVar34._12_4_ * auVar6._0_4_ * fVar23 +
           auVar5._0_4_ * auVar46._0_4_ * fVar23) - auVar30._0_4_ * fVar2;
      auVar31._4_4_ =
           (fVar8 * fVar7 + auVar34._12_4_ * fVar3 * fVar24 + auVar5._4_4_ * auVar46._4_4_ * fVar24)
           - auVar30._4_4_ * auVar35._4_4_;
      auVar31._8_4_ =
           (fVar22 * fVar7 + auVar34._12_4_ * fVar4 * fVar47 + auVar5._8_4_ * auVar46._8_4_ * fVar47
           ) - auVar30._8_4_ * auVar35._8_4_;
      auVar31._12_4_ =
           (auVar34._12_4_ * fVar7 + local_50 * auVar6._0_4_ * fVar48 +
           auVar5._12_4_ * auVar46._12_4_ * fVar48) - auVar30._12_4_ * auVar35._12_4_;
      auVar14._0_4_ = -auVar31._0_4_;
      auVar13._8_4_ = -auVar31._8_4_;
      auVar6._4_4_ = auVar31._8_4_;
      auVar6._0_4_ = auVar31._8_4_;
      auVar6._8_4_ = auVar31._8_4_;
      auVar6._12_4_ = auVar31._8_4_;
      auVar6 = NEON_ext(auVar6,auVar31,0xc,1);
      auVar29._4_4_ = auVar31._4_4_;
      auVar29._0_4_ = auVar31._4_4_;
      auVar29._8_4_ = auVar31._4_4_;
      auVar29._12_4_ = auVar31._4_4_;
      auVar5 = NEON_ext(auVar29,auVar6,0xc,1);
      auVar13._4_4_ = auVar13._8_4_;
      auVar13._0_4_ = auVar13._8_4_;
      auVar13._12_4_ = auVar13._8_4_;
      auVar14._4_12_ = auVar13._4_12_;
      auVar16._0_8_ = auVar14._0_8_;
      auVar16._8_4_ = -auVar31._4_4_;
      auVar16._12_4_ = auVar13._8_4_;
      auVar15._8_8_ = auVar16._8_8_;
      auVar15._4_4_ = auVar13._8_4_;
      auVar15._0_4_ = auVar14._0_4_;
      auVar17._0_12_ = auVar15._0_12_;
      auVar17._12_4_ = auVar13._8_4_;
      auVar36._0_4_ =
           (float)_DAT_03cabe60 * auVar31._12_4_ + auVar31._0_4_ * fVar23 * 0.0 +
           (float)_DAT_03caaaa0 * auVar5._0_4_ * fVar23 + (float)_DAT_03cab1d0 * auVar6._0_4_;
      auVar36._4_4_ =
           (float)((ulong)_DAT_03cabe60 >> 0x20) * auVar31._12_4_ + auVar31._4_4_ * fVar24 * 0.0 +
           (float)((ulong)_DAT_03caaaa0 >> 0x20) * auVar5._4_4_ * fVar24 +
           (float)((ulong)_DAT_03cab1d0 >> 0x20) * auVar6._4_4_;
      auVar36._8_4_ =
           (float)_UNK_03cabe68 * auVar31._12_4_ + auVar31._8_4_ * fVar47 * 0.0 +
           (float)_UNK_03caaaa8 * auVar5._8_4_ * fVar47 + (float)_UNK_03cab1d8 * auVar6._8_4_;
      auVar36._12_4_ =
           (float)((ulong)_UNK_03cabe68 >> 0x20) * auVar31._12_4_ + auVar31._0_4_ * fVar48 * 0.0 +
           (float)((ulong)_UNK_03caaaa8 >> 0x20) * auVar5._12_4_ * fVar48 +
           (float)((ulong)_UNK_03cab1d8 >> 0x20) * auVar6._12_4_;
      auVar30._4_4_ = auVar36._8_4_;
      auVar30._0_4_ = auVar36._8_4_;
      auVar30._8_4_ = auVar36._8_4_;
      auVar30._12_4_ = auVar36._8_4_;
      auVar6 = NEON_ext(auVar30,auVar36,0xc,1);
      auVar32._4_4_ = auVar36._4_4_;
      auVar32._0_4_ = auVar36._4_4_;
      auVar32._8_4_ = auVar36._4_4_;
      auVar32._12_4_ = auVar36._4_4_;
      NEON_ext(auVar32,auVar6,0xc,1);
      auVar6 = NEON_ext(auVar17,auVar17,8,1);
      auVar18._4_12_ = auVar17._4_12_;
      auVar18._0_4_ = auVar6._0_4_;
      auVar20._0_8_ = auVar18._0_8_;
      auVar20._8_4_ = auVar6._8_4_;
      auVar20._12_4_ = auVar13._8_4_;
      auVar19._8_8_ = auVar20._8_8_;
      auVar19._4_4_ = auVar14._0_4_;
      auVar19._0_4_ = auVar6._0_4_;
      auVar21._0_12_ = auVar19._0_12_;
      auVar21._12_4_ = -auVar31._4_4_;
      auVar6 = NEON_ext(auVar21,auVar6,8,1);
      NEON_ext(auVar6,auVar6,0xc,1);
      FUN_00f73294(CONCAT44(fStack_5c + (float)((ulong)*(undefined8 *)param_5 >> 0x20),
                            local_60 + (float)*(undefined8 *)param_5),local_a0);
      __n = 0x34;
    }
    memcpy(__dest,local_a0,__n);
  }
  return;
}


