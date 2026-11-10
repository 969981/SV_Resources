/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02780e38; name: FUN_02780e38
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_02780e38(long param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined1 (*pauVar3) [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  float *pfVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 uVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  float fVar33;
  float fVar34;
  
  auVar22._8_8_ = _UNK_03cabe58;
  auVar22._0_8_ = _DAT_03cabe50;
  auVar23._8_8_ = _UNK_03cabe68;
  auVar23._0_8_ = _DAT_03cabe60;
  lVar6 = *(long *)(*(long *)(param_1 + 0x138) + 0x70);
  plVar8 = *(long **)(lVar6 + 0x30);
  plVar1 = *(long **)(lVar6 + 0x38);
  fVar17 = (float)DAT_03cab628;
  fVar18 = (float)((ulong)DAT_03cab628 >> 0x20);
  fVar33 = (float)DAT_03cab620;
  fVar16 = (float)((ulong)DAT_03cab620 >> 0x20);
  if (plVar8 == plVar1) {
LAB_02780f84:
    auVar15._4_4_ = fVar16;
    auVar15._0_4_ = fVar33;
    auVar15._8_4_ = fVar17;
    auVar15._12_4_ = fVar18;
    return auVar15;
  }
  uVar9 = *param_2;
LAB_02780e7c:
  uVar10 = *(ulong *)(*plVar8 + 0x40);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else {
      uVar12 = uVar9;
      if (uVar10 <= uVar9) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar9 / uVar10;
        }
        uVar12 = uVar9 - uVar12 * uVar10;
      }
    }
    plVar13 = *(long **)(*(long *)(*plVar8 + 0x38) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_02780f70;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_02780f70;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar2 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  goto LAB_02780f78;
LAB_02780f70:
  if (-1 < (short)plVar13[6]) {
    if ((~((uint)*(ushort *)((long)plVar8 + 10) + (int)(short)plVar13[6]) & 0xffff) != 0) {
      pfVar7 = (float *)FUN_00c472c8(fVar33,auVar23,(int)_DAT_03caa5b0,auVar22);
      fVar18 = *pfVar7;
      pauVar3 = (undefined1 (*) [12])(pfVar7 + 4);
      fVar16 = (float)*(undefined8 *)(pfVar7 + 6);
      fVar21 = (float)((ulong)*(undefined8 *)(pfVar7 + 6) >> 0x20);
      fVar33 = (float)*(undefined8 *)*pauVar3;
      fVar17 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
      fVar33 = fVar33 * fVar33;
      fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ 0x2b8cbccc) & -(uint)(ABS(fVar18) < 1e-12));
      auVar4._12_4_ = fVar21;
      auVar4._0_12_ = *pauVar3;
      auVar5._12_4_ = fVar21;
      auVar5._0_12_ = *pauVar3;
      auVar23 = NEON_ext(auVar4,auVar5,0xc,1);
      fVar34 = fVar16 * fVar16 + fVar16 * fVar16;
      uVar14 = SUB124(*pauVar3,0);
      auVar24._4_12_ = auVar23._4_12_;
      auVar24._0_4_ = uVar14;
      auVar26._12_4_ = auVar23._12_4_;
      auVar26._0_8_ = auVar24._0_8_;
      auVar26._8_4_ = SUB124(*pauVar3,4);
      auVar25._8_8_ = auVar26._8_8_;
      auVar25._4_4_ = auVar23._0_4_;
      auVar25._0_4_ = uVar14;
      auVar27._0_12_ = auVar25._0_12_;
      auVar27._12_4_ = auVar23._4_4_;
      auVar23 = NEON_ext(auVar27,auVar27,8,1);
      fVar19 = auVar23._4_4_ * SUB124(*pauVar3,8);
      fVar20 = auVar23._8_4_ * fVar17;
      auVar23 = NEON_fmov(0x3f800000,4);
      auVar28._0_4_ = auVar23._0_4_ - (fVar33 + fVar33);
      auVar28._4_4_ = auVar23._4_4_ - (fVar17 * fVar17 + fVar17 * fVar17);
      auVar28._8_4_ = auVar23._8_4_ - fVar34;
      auVar28._12_4_ = auVar23._12_4_ - (fVar21 * fVar21 + fVar21 * fVar21);
      auVar29._4_12_ = auVar28._4_12_;
      auVar29._0_4_ = auVar28._0_4_;
      auVar31._0_8_ = auVar29._0_8_;
      auVar31._8_4_ = auVar28._4_4_;
      auVar31._12_4_ = auVar28._12_4_;
      auVar30._8_8_ = auVar31._8_8_;
      auVar30._4_4_ = auVar28._0_4_;
      auVar30._0_4_ = auVar28._0_4_;
      auVar32._0_12_ = auVar30._0_12_;
      auVar32._12_4_ = auVar28._4_4_;
      auVar23 = NEON_ext(auVar32,auVar32,0xc,1);
      fVar33 = (auVar23._0_4_ - fVar34) * fVar18;
      fVar16 = (fVar20 + fVar20 + fVar16 * fVar21 + fVar16 * fVar21) * fVar18;
      fVar17 = ((fVar19 + fVar19) - (fVar17 * fVar21 + fVar17 * fVar21)) * fVar18;
      fVar18 = fVar18 * 0.0;
    }
    goto LAB_02780f84;
  }
LAB_02780f78:
  plVar8 = plVar8 + 2;
  if (plVar8 == plVar1) goto LAB_02780f84;
  goto LAB_02780e7c;
}


