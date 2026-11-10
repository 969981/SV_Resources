/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e4c370; name: FUN_02e4c370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e4c370(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4,short param_5)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 in_q7 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  fVar18 = param_2._12_4_;
  fVar17 = param_2._8_4_;
  fVar16 = param_2._4_4_;
  fVar15 = param_2._0_4_;
  uVar2 = *(ushort *)(*(long *)(param_4 + 0xa0) + (long)param_5 * 2);
  lVar11 = *(long *)(param_4 + 0x248);
  uVar9 = (ulong)(short)uVar2;
  puVar10 = (undefined8 *)(lVar11 + uVar9 * 0x30);
  auVar27._4_12_ = in_q7._4_12_;
  auVar27._0_4_ = fVar15;
  auVar22._12_4_ = in_q7._12_4_;
  auVar22._0_8_ = auVar27._0_8_;
  auVar22._8_4_ = fVar16;
  auVar35._8_8_ = auVar22._8_8_;
  auVar35._4_4_ = fVar17;
  auVar35._0_4_ = fVar15;
  auVar28._0_12_ = auVar35._0_12_;
  auVar28._12_4_ = fVar17;
  auVar22 = NEON_ext(auVar28,auVar28,8,1);
  puVar12 = *(uint **)(param_4 + 0x110);
  uVar20 = puVar10[1];
  uVar19 = *puVar10;
  fVar25 = (float)puVar10[3];
  fVar26 = (float)((ulong)puVar10[3] >> 0x20);
  uVar4 = *(undefined8 *)*(undefined1 (*) [12])(puVar10 + 2);
  fVar23 = (float)uVar4;
  fVar24 = (float)((ulong)uVar4 >> 0x20);
  fVar5 = *(float *)(puVar10 + 4);
  fVar6 = *(float *)((long)puVar10 + 0x24);
  fVar7 = *(float *)(puVar10 + 5);
  fVar8 = *(float *)((long)puVar10 + 0x2c);
  uVar3 = 1 << (ulong)(uVar2 & 0x1f);
  auVar33._4_4_ = fVar25;
  auVar33._0_4_ = fVar25;
  auVar33._8_4_ = fVar25;
  auVar33._12_4_ = fVar25;
  auVar21._12_4_ = fVar26;
  auVar21._0_12_ = *(undefined1 (*) [12])(puVar10 + 2);
  auVar21 = NEON_ext(auVar33,auVar21,0xc,1);
  if (((puVar12[uVar9 >> 5] & uVar3) == 0) && (*(uint **)(param_4 + 0x118) != puVar12)) {
    plVar1 = (long *)(*(long *)(param_4 + 0x68) + uVar9 * 0x40);
    *puVar12 = *puVar12 | *(uint *)*plVar1;
    lVar11 = *(long *)(param_4 + 0x110);
    if (1 < (ulong)(*(long *)(param_4 + 0x118) - lVar11 >> 2)) {
      *(uint *)(lVar11 + 4) = *(uint *)(lVar11 + 4) | *(uint *)(*plVar1 + 4);
      lVar11 = *(long *)(param_4 + 0x110);
      if (2 < (ulong)(*(long *)(param_4 + 0x118) - lVar11 >> 2)) {
        *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | *(uint *)(*plVar1 + 8);
        lVar11 = *(long *)(param_4 + 0x110);
        if (3 < (ulong)(*(long *)(param_4 + 0x118) - lVar11 >> 2)) {
          *(uint *)(lVar11 + 0xc) = *(uint *)(lVar11 + 0xc) | *(uint *)(*plVar1 + 0xc);
          lVar11 = *(long *)(param_4 + 0x110);
          if (4 < (ulong)(*(long *)(param_4 + 0x118) - lVar11 >> 2)) {
            *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | *(uint *)(*plVar1 + 0x10);
            lVar11 = *(long *)(param_4 + 0x110);
            if (5 < (ulong)(*(long *)(param_4 + 0x118) - lVar11 >> 2)) {
              *(uint *)(lVar11 + 0x14) = *(uint *)(lVar11 + 0x14) | *(uint *)(*plVar1 + 0x14);
              lVar11 = *(long *)(param_4 + 0x110);
              if (6 < (ulong)(*(long *)(param_4 + 0x118) - lVar11 >> 2)) {
                uVar13 = 6;
                do {
                  *(uint *)(lVar11 + uVar13 * 4) =
                       *(uint *)(lVar11 + uVar13 * 4) | *(uint *)(*plVar1 + uVar13 * 4);
                  uVar13 = uVar13 + 1;
                  lVar11 = *(long *)(param_4 + 0x110);
                } while (uVar13 < (ulong)(*(long *)(param_4 + 0x118) - lVar11 >> 2));
              }
            }
          }
        }
      }
    }
    lVar11 = *(long *)(param_4 + 0x248);
  }
  auVar34._4_4_ = fVar24;
  auVar34._0_4_ = fVar24;
  auVar34._8_4_ = fVar24;
  auVar34._12_4_ = fVar24;
  auVar35 = NEON_ext(auVar34,auVar21,0xc,1);
  fVar36 = (float)_DAT_03cab640;
  fVar37 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar38 = (float)_UNK_03cab648;
  fVar39 = (float)((ulong)_UNK_03cab648 >> 0x20);
  fVar14 = auVar22._0_4_;
  auVar29._4_12_ = auVar28._4_12_;
  auVar29._0_4_ = fVar14;
  auVar31._0_8_ = auVar29._0_8_;
  auVar31._8_4_ = auVar22._8_4_;
  auVar31._12_4_ = fVar17;
  auVar30._8_8_ = auVar31._8_8_;
  auVar30._4_4_ = fVar15;
  auVar30._0_4_ = fVar14;
  auVar32._0_12_ = auVar30._0_12_;
  auVar32._12_4_ = fVar16;
  auVar33 = NEON_ext(auVar32,auVar22,8,1);
  auVar33 = NEON_ext(auVar33,auVar33,0xc,1);
  puVar10 = (undefined8 *)(lVar11 + uVar9 * 0x30);
  lVar11 = (uVar9 >> 5) * 4;
  puVar10[1] = CONCAT44(param_1._12_4_ + (float)((ulong)uVar20 >> 0x20),
                        param_1._8_4_ + (float)uVar20);
  *puVar10 = CONCAT44(param_1._4_4_ + (float)((ulong)uVar19 >> 0x20),param_1._0_4_ + (float)uVar19);
  puVar10[3] = CONCAT44((fVar18 * fVar26 + fVar15 * fVar23 * fVar39 +
                        auVar33._12_4_ * auVar35._12_4_ * fVar39) - auVar21._12_4_ * auVar22._12_4_,
                        (fVar17 * fVar26 + fVar18 * fVar25 * fVar38 +
                        auVar33._8_4_ * auVar35._8_4_ * fVar38) - auVar21._8_4_ * auVar22._8_4_);
  puVar10[2] = CONCAT44((fVar16 * fVar26 + fVar18 * fVar24 * fVar37 +
                        auVar33._4_4_ * auVar35._4_4_ * fVar37) - auVar21._4_4_ * auVar22._4_4_,
                        (fVar15 * fVar26 + fVar18 * fVar23 * fVar36 +
                        auVar33._0_4_ * auVar35._0_4_ * fVar36) - auVar21._0_4_ * fVar14);
  puVar10[5] = CONCAT44(param_3._12_4_ + fVar8,param_3._8_4_ + fVar7);
  puVar10[4] = CONCAT44(param_3._4_4_ + fVar6,param_3._0_4_ + fVar5);
  *(uint *)(*(long *)(param_4 + 400) + lVar11) =
       *(uint *)(*(long *)(param_4 + 400) + lVar11) | uVar3;
  *(uint *)(*(long *)(param_4 + 0x1d0) + lVar11) =
       *(uint *)(*(long *)(param_4 + 0x1d0) + lVar11) | uVar3;
  return;
}


