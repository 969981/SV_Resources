/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03255624; name: FUN_03255624
 */


void FUN_03255624(long param_1,long *param_2,long param_3,int param_4,int param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  uVar3 = 0xff7fffee;
  puVar8 = (undefined8 *)(param_3 + ((long)param_5 + (long)param_4) * 0x80 + -0x40);
  do {
    if (*(char *)(puVar8 + 6) == '\0') {
      lVar9 = *(long *)(param_1 + 8);
      pauVar1 = (undefined1 (*) [16])(lVar9 + (ulong)*(uint *)(puVar8 + 4) * 0x20);
      auVar19 = *pauVar1;
      uVar13 = (undefined4)*(undefined8 *)(pauVar1[1] + 8);
      uVar14 = (undefined4)((ulong)*(undefined8 *)(pauVar1[1] + 8) >> 0x20);
      uVar11 = (undefined4)*(undefined8 *)pauVar1[1];
      uVar12 = (undefined4)((ulong)*(undefined8 *)pauVar1[1] >> 0x20);
      pauVar1 = (undefined1 (*) [16])(lVar9 + (ulong)*(uint *)((long)puVar8 + 0x24) * 0x20);
      auVar24 = *pauVar1;
      uVar17 = (undefined4)*(undefined8 *)(pauVar1[1] + 8);
      uVar18 = (undefined4)((ulong)*(undefined8 *)(pauVar1[1] + 8) >> 0x20);
      uVar15 = (undefined4)*(undefined8 *)pauVar1[1];
      uVar16 = (undefined4)((ulong)*(undefined8 *)pauVar1[1] >> 0x20);
      pauVar1 = (undefined1 (*) [16])(lVar9 + (ulong)*(uint *)(puVar8 + 5) * 0x20);
      pauVar2 = (undefined1 (*) [16])(lVar9 + (ulong)*(uint *)((long)puVar8 + 0x2c) * 0x20);
      auVar29 = *pauVar1;
      uVar22 = (undefined4)*(undefined8 *)(pauVar1[1] + 8);
      uVar23 = (undefined4)((ulong)*(undefined8 *)(pauVar1[1] + 8) >> 0x20);
      uVar20 = (undefined4)*(undefined8 *)pauVar1[1];
      uVar21 = (undefined4)((ulong)*(undefined8 *)pauVar1[1] >> 0x20);
      auVar31 = *pauVar2;
      uVar27 = (undefined4)*(undefined8 *)(pauVar2[1] + 8);
      uVar28 = (undefined4)((ulong)*(undefined8 *)(pauVar2[1] + 8) >> 0x20);
      uVar25 = (undefined4)*(undefined8 *)pauVar2[1];
      uVar26 = (undefined4)((ulong)*(undefined8 *)pauVar2[1] >> 0x20);
    }
    else {
      lVar9 = *param_2;
      auVar24._8_8_ = 0x7f7fffee7f7fffee;
      auVar24._0_8_ = 0x7f7fffee7f7fffee;
      puVar10 = (undefined8 *)(lVar9 + (ulong)*(uint *)(puVar8 + 4) * 0x18);
      uVar13 = (undefined4)puVar10[1];
      uVar14 = (undefined4)((ulong)puVar10[1] >> 0x20);
      uVar11 = (undefined4)*puVar10;
      uVar12 = (undefined4)((ulong)*puVar10 >> 0x20);
      auVar19._0_8_ = puVar10[2];
      uVar15 = uVar3;
      uVar16 = uVar3;
      uVar17 = uVar3;
      uVar18 = uVar3;
      if (*(uint *)((long)puVar8 + 0x24) != 0xffffffff) {
        puVar10 = (undefined8 *)(lVar9 + (ulong)*(uint *)((long)puVar8 + 0x24) * 0x18);
        uVar17 = (undefined4)puVar10[1];
        uVar18 = (undefined4)((ulong)puVar10[1] >> 0x20);
        uVar15 = (undefined4)*puVar10;
        uVar16 = (undefined4)((ulong)*puVar10 >> 0x20);
        auVar24._0_8_ = puVar10[2];
        auVar24._12_4_ = uVar18;
        auVar24._8_4_ = uVar18;
      }
      auVar29._8_8_ = 0x7f7fffee7f7fffee;
      auVar29._0_8_ = 0x7f7fffee7f7fffee;
      uVar20 = uVar3;
      uVar21 = uVar3;
      uVar22 = uVar3;
      uVar23 = uVar3;
      if (*(uint *)(puVar8 + 5) != 0xffffffff) {
        puVar10 = (undefined8 *)(lVar9 + (ulong)*(uint *)(puVar8 + 5) * 0x18);
        uVar22 = (undefined4)puVar10[1];
        uVar23 = (undefined4)((ulong)puVar10[1] >> 0x20);
        uVar20 = (undefined4)*puVar10;
        uVar21 = (undefined4)((ulong)*puVar10 >> 0x20);
        auVar29._0_8_ = puVar10[2];
        auVar29._12_4_ = uVar23;
        auVar29._8_4_ = uVar23;
      }
      auVar19._12_4_ = uVar14;
      auVar19._8_4_ = uVar14;
      if (*(uint *)((long)puVar8 + 0x2c) == 0xffffffff) {
        auVar31._8_8_ = 0x7f7fffee7f7fffee;
        auVar31._0_8_ = 0x7f7fffee7f7fffee;
        uVar25 = uVar3;
        uVar26 = uVar3;
        uVar27 = uVar3;
        uVar28 = uVar3;
      }
      else {
        puVar10 = (undefined8 *)(lVar9 + (ulong)*(uint *)((long)puVar8 + 0x2c) * 0x18);
        uVar28 = (undefined4)((ulong)puVar10[1] >> 0x20);
        auVar31._0_8_ = puVar10[2];
        auVar31._12_4_ = uVar28;
        auVar31._8_4_ = uVar28;
        uVar25 = (int)*puVar10;
        uVar26 = (int)((ulong)*puVar10 >> 0x20);
        uVar27 = (int)puVar10[1];
      }
    }
    auVar33 = NEON_fmin(auVar19,auVar24,4);
    auVar37._4_4_ = uVar12;
    auVar37._0_4_ = uVar11;
    auVar37._8_4_ = uVar13;
    auVar37._12_4_ = uVar14;
    auVar38._4_4_ = uVar16;
    auVar38._0_4_ = uVar15;
    auVar38._8_4_ = uVar17;
    auVar38._12_4_ = uVar18;
    auVar35 = NEON_fmax(auVar37,auVar38,4);
    puVar10 = (undefined8 *)
              (*(long *)(param_1 + 8) +
              (((long)puVar8 + (-0x40 - param_3)) * 0x2000000 >> 0x20) * 0x20);
    auVar37 = NEON_fmin(auVar29,auVar31,4);
    auVar30._4_4_ = uVar21;
    auVar30._0_4_ = uVar20;
    auVar30._8_4_ = uVar22;
    auVar30._12_4_ = uVar23;
    auVar32._4_4_ = uVar26;
    auVar32._0_4_ = uVar25;
    auVar32._8_4_ = uVar27;
    auVar32._12_4_ = uVar28;
    auVar38 = NEON_fmax(auVar30,auVar32,4);
    auVar33 = NEON_fmin(auVar33,auVar37,4);
    auVar37 = NEON_ext(auVar19,auVar19,8,1);
    auVar35 = NEON_fmax(auVar35,auVar38,4);
    auVar38 = NEON_ext(auVar24,auVar24,8,1);
    auVar30 = NEON_ext(auVar29,auVar29,8,1);
    puVar10[1] = auVar33._8_8_;
    *puVar10 = auVar33._0_8_;
    puVar10[3] = auVar35._8_8_;
    puVar10[2] = auVar35._0_8_;
    auVar32 = NEON_ext(auVar31,auVar31,8,1);
    auVar33._4_4_ = uVar12;
    auVar33._0_4_ = uVar11;
    auVar33._8_4_ = uVar13;
    auVar33._12_4_ = uVar14;
    auVar35._4_4_ = uVar12;
    auVar35._0_4_ = uVar11;
    auVar35._8_4_ = uVar13;
    auVar35._12_4_ = uVar14;
    auVar33 = NEON_ext(auVar33,auVar35,8,1);
    auVar34._4_4_ = uVar16;
    auVar34._0_4_ = uVar15;
    auVar34._8_4_ = uVar17;
    auVar34._12_4_ = uVar18;
    auVar36._4_4_ = uVar16;
    auVar36._0_4_ = uVar15;
    auVar36._8_4_ = uVar17;
    auVar36._12_4_ = uVar18;
    auVar35 = NEON_ext(auVar34,auVar36,8,1);
    auVar4._4_4_ = uVar21;
    auVar4._0_4_ = uVar20;
    auVar4._8_4_ = uVar22;
    auVar4._12_4_ = uVar23;
    auVar5._4_4_ = uVar21;
    auVar5._0_4_ = uVar20;
    auVar5._8_4_ = uVar22;
    auVar5._12_4_ = uVar23;
    auVar34 = NEON_ext(auVar4,auVar5,8,1);
    puVar10 = puVar8 + -0x18;
    auVar6._4_4_ = uVar26;
    auVar6._0_4_ = uVar25;
    auVar6._8_4_ = uVar27;
    auVar6._12_4_ = uVar28;
    auVar7._4_4_ = uVar26;
    auVar7._0_4_ = uVar25;
    auVar7._8_4_ = uVar27;
    auVar7._12_4_ = uVar28;
    auVar36 = NEON_ext(auVar6,auVar7,8,1);
    puVar8[-7] = CONCAT44(auVar31._0_4_,auVar29._0_4_);
    puVar8[-8] = CONCAT44(auVar24._0_4_,auVar19._0_4_);
    puVar8[-5] = CONCAT44(uVar25,uVar20);
    puVar8[-6] = CONCAT44(uVar15,uVar11);
    puVar8[1] = CONCAT44(auVar32._0_4_,auVar30._0_4_);
    *puVar8 = CONCAT44(auVar38._0_4_,auVar37._0_4_);
    puVar8[3] = CONCAT44(auVar36._0_4_,auVar34._0_4_);
    puVar8[2] = CONCAT44(auVar35._0_4_,auVar33._0_4_);
    puVar8[-3] = CONCAT44(auVar31._4_4_,auVar29._4_4_);
    puVar8[-4] = CONCAT44(auVar24._4_4_,auVar19._4_4_);
    puVar8[-1] = CONCAT44(uVar26,uVar21);
    puVar8[-2] = CONCAT44(uVar16,uVar12);
    puVar8 = puVar8 + -0x10;
  } while ((undefined8 *)(param_3 + (long)param_4 * 0x80) <= puVar10);
  return;
}


