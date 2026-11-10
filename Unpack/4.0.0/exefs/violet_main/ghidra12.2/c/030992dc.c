/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030992dc; name: FUN_030992dc
 */


undefined1  [16]
FUN_030992dc(long param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5)

{
  short sVar1;
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 (*pauVar7) [12];
  float *pfVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  long lVar18;
  long *plVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  float fVar28;
  float fVar32;
  undefined8 uVar29;
  ulong uVar30;
  float fVar33;
  undefined8 uVar34;
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  float fVar51;
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  float in_s17;
  float in_register_00005224;
  float in_register_00005228;
  float fVar53;
  float fVar55;
  float fVar56;
  undefined1 auVar54 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar64;
  float fVar65;
  undefined1 auVar63 [16];
  ulong uVar66;
  ulong uVar67;
  
  lVar18 = *(long *)(param_1 + 0x20);
  iVar24 = *param_2;
  if (iVar24 < *(int *)(lVar18 + 0x20)) {
    lVar21 = *(long *)(lVar18 + 0x18);
    iVar20 = iVar24;
    if (*(int *)(lVar18 + 0x98) != 0) {
      iVar20 = *(int *)(*(long *)(lVar18 + 0x90) + (long)iVar24 * 4);
    }
    if (iVar20 != -1) {
      plVar19 = (long *)(lVar18 + 0xb0);
      iVar24 = iVar20;
      goto LAB_03099324;
    }
  }
  else {
    plVar19 = (long *)(lVar18 + 0xd0);
    iVar24 = iVar24 - *(int *)(lVar18 + 0x20);
LAB_03099324:
    lVar21 = *plVar19;
  }
  piVar4 = (int *)(lVar21 + (long)iVar24 * 0x10);
  iVar24 = *piVar4;
  pauVar2 = (undefined1 (*) [12])(param_1 + 0x60);
  fVar42 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  fVar40 = (float)*(undefined8 *)*pauVar2;
  fVar41 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  pauVar7 = (undefined1 (*) [12])(param_1 + 0x70);
  fVar45 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  fVar43 = (float)*(undefined8 *)*pauVar7;
  fVar44 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
  iVar20 = *(int *)(lVar18 + 0x30);
  pauVar3 = (undefined1 (*) [12])(param_1 + 0x80);
  fVar48 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  fVar46 = (float)*(undefined8 *)*pauVar3;
  fVar47 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  if (iVar24 < iVar20) {
    iVar22 = iVar24;
    if (*(int *)(lVar18 + 0x78) != 0) {
      iVar22 = *(int *)(*(long *)(lVar18 + 0x70) + (long)iVar24 * 4);
    }
    if (iVar22 == -1) {
      lVar21 = *(long *)(lVar18 + 0x28);
      iVar22 = iVar24;
      goto LAB_03099394;
    }
    plVar19 = (long *)(lVar18 + 0xc0);
  }
  else {
    iVar22 = iVar24 - iVar20;
    plVar19 = (long *)(lVar18 + 0xe0);
  }
  lVar21 = *plVar19;
LAB_03099394:
  piVar23 = (int *)(lVar21 + (long)iVar22 * 0x14);
  iVar22 = *(int *)(lVar18 + 0x40);
  iVar6 = *piVar23;
  lVar21 = 0x38;
  if (iVar22 <= iVar6) {
    lVar21 = 0xf0;
  }
  sVar1 = (short)*(undefined8 *)(piVar4 + 2);
  iVar5 = iVar24 + 1;
  iVar26 = 0;
  if (iVar22 <= iVar6) {
    iVar26 = iVar22;
  }
  fVar37 = (float)*(undefined8 *)(param_1 + 0x90);
  fVar38 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  fVar39 = (float)*(undefined8 *)(param_1 + 0x98);
  if (iVar5 == iVar24 + sVar1 + -1) {
    uVar30 = 0x5f7ffff05f7ffff0;
  }
  else {
    auVar49._12_4_ = fVar48;
    auVar49._0_12_ = *pauVar3;
    auVar12._12_4_ = fVar48;
    auVar12._0_12_ = *pauVar3;
    auVar49 = NEON_ext(auVar49,auVar12,8,1);
    auVar50._12_4_ = fVar42;
    auVar50._0_12_ = *pauVar2;
    auVar52._12_4_ = fVar42;
    auVar52._0_12_ = *pauVar2;
    auVar50 = NEON_ext(auVar50,auVar52,8,1);
    auVar10._12_4_ = fVar45;
    auVar10._0_12_ = *pauVar7;
    auVar11._12_4_ = fVar45;
    auVar11._0_12_ = *pauVar7;
    auVar52 = NEON_ext(auVar10,auVar11,8,1);
    fVar28 = (float)*param_4 - fVar37;
    fVar32 = (float)((ulong)*param_4 >> 0x20) - fVar38;
    fVar33 = (float)param_4[1] - fVar39;
    iVar24 = piVar23[1];
    pfVar8 = (float *)(*(long *)(lVar18 + lVar21) + (long)(iVar6 - iVar26) * 0x10);
    fVar15 = *pfVar8;
    fVar16 = pfVar8[1];
    fVar17 = pfVar8[2];
    lVar21 = 0x38;
    if (iVar22 <= iVar24) {
      lVar21 = 0xf0;
    }
    in_s17 = fVar41 * fVar32;
    in_register_00005224 = fVar44 * fVar32;
    in_register_00005228 = fVar47 * fVar32;
    iVar6 = 0;
    if (iVar22 <= iVar24) {
      iVar6 = iVar22;
    }
    iVar26 = sVar1 + -2;
    fVar32 = auVar50._0_4_ * fVar33 + fVar40 * fVar28 + in_s17;
    fVar51 = auVar52._0_4_ * fVar33 + fVar43 * fVar28 + in_register_00005224;
    fVar28 = auVar49._0_4_ * fVar33 + fVar46 * fVar28 + in_register_00005228;
    puVar9 = (undefined8 *)(*(long *)(lVar18 + lVar21) + (long)(iVar24 - iVar6) * 0x10);
    uVar34 = puVar9[1];
    uVar29 = *puVar9;
    lVar21 = (long)iVar5;
    lVar25 = (long)iVar5 * 0x14 + (long)iVar20 * -0x14;
    auVar54._0_4_ = (float)uVar29 - fVar15;
    auVar54._4_4_ = (float)((ulong)uVar29 >> 0x20) - fVar16;
    auVar54._8_4_ = (float)uVar34 - fVar17;
    auVar54._12_4_ = (float)((ulong)uVar34 >> 0x20) - pfVar8[3];
    uVar30 = 0x5f7ffff05f7ffff0;
    do {
      if (lVar21 < iVar20) {
        if (*(int *)(lVar18 + 0x78) == 0) {
          iVar24 = (int)lVar21;
        }
        else {
          iVar24 = *(int *)(*(long *)(lVar18 + 0x70) + lVar21 * 4);
        }
        if (iVar24 == -1) {
          lVar27 = *(long *)(lVar18 + 0x28) + lVar21 * 0x14;
        }
        else {
          lVar27 = *(long *)(lVar18 + 0xc0) + (long)iVar24 * 0x14;
        }
      }
      else {
        lVar27 = *(long *)(lVar18 + 0xe0) + lVar25;
      }
      iVar24 = *(int *)(lVar27 + 4);
      lVar27 = 0x38;
      if (iVar22 <= iVar24) {
        lVar27 = 0xf0;
      }
      iVar6 = 0;
      if (iVar22 <= iVar24) {
        iVar6 = iVar22;
      }
      puVar9 = (undefined8 *)(*(long *)(lVar18 + lVar27) + (long)(iVar24 - iVar6) * 0x10);
      uVar34 = puVar9[1];
      uVar29 = *puVar9;
      fVar57 = (float)uVar29 - fVar15;
      fVar58 = (float)((ulong)uVar29 >> 0x20) - fVar16;
      fVar59 = (float)uVar34 - fVar17;
      fVar60 = (float)((ulong)uVar34 >> 0x20) - pfVar8[3];
      auVar50 = NEON_ext(auVar54,auVar54,4,1);
      auVar13._4_4_ = fVar58;
      auVar13._0_4_ = fVar57;
      auVar13._8_4_ = fVar59;
      auVar13._12_4_ = fVar60;
      auVar14._4_4_ = fVar58;
      auVar14._0_4_ = fVar57;
      auVar14._8_4_ = fVar59;
      auVar14._12_4_ = fVar60;
      auVar52 = NEON_ext(auVar13,auVar14,4,1);
      auVar63._0_4_ = auVar54._0_4_ * auVar52._0_4_ - auVar50._0_4_ * fVar57;
      auVar63._4_4_ = auVar54._4_4_ * auVar52._4_4_ - auVar50._4_4_ * fVar58;
      auVar63._8_4_ = auVar54._8_4_ * fVar57 - auVar54._0_4_ * fVar59;
      auVar63._12_4_ = auVar54._12_4_ * fVar58 - auVar54._4_4_ * fVar60;
      auVar50 = NEON_ext(auVar63,auVar63,4,1);
      fVar35 = (float)*param_3;
      fVar61 = fVar35 * auVar50._0_4_;
      fVar36 = (float)((ulong)*param_3 >> 0x20);
      fVar64 = fVar36 * auVar50._4_4_;
      fVar65 = (float)param_3[1] * auVar63._0_4_;
      fVar62 = fVar61 + fVar64 + fVar65;
      fVar33 = 1.8446726e+19;
      fVar53 = 1.8446726e+19;
      if (fVar62 != 0.0) {
        fVar53 = (fVar32 - fVar15) * auVar50._0_4_;
        fVar55 = (fVar51 - fVar16) * auVar50._4_4_;
        fVar56 = (fVar28 - fVar17) * auVar63._0_4_;
        fVar33 = (fVar56 + fVar53 + fVar55) / fVar62;
        fVar53 = (fVar56 + fVar53 + fVar55) / (fVar61 + fVar64 + fVar65);
      }
      lVar21 = lVar21 + 1;
      uVar66 = CONCAT44(-(uint)(ABS(fVar53) < (float)(uVar30 >> 0x20)),
                        -(uint)(ABS(fVar33) < (float)uVar30));
      uVar67 = uVar66 & 0x100000001;
      uVar30 = uVar30 ^ (uVar30 ^ CONCAT44(ABS(fVar53),ABS(fVar33))) & uVar66;
      iVar24 = (int)uVar67;
      in_s17 = (float)((uint)in_s17 ^
                      ((uint)in_s17 ^ (uint)(fVar32 - fVar35 * fVar33)) & (iVar24 << 0x1f) >> 0x1f);
      in_register_00005224 =
           (float)((uint)in_register_00005224 ^
                  ((uint)in_register_00005224 ^ (uint)(fVar51 - fVar36 * fVar53)) &
                  ((int)(uVar67 >> 0x20) << 0x1f) >> 0x1f);
      in_register_00005228 =
           (float)((uint)in_register_00005228 ^
                  ((uint)in_register_00005228 ^ (uint)(fVar28 - (float)param_3[1] * fVar33)) &
                  (iVar24 << 0x1f) >> 0x1f);
      auVar54._12_4_ = fVar60;
      auVar54._8_4_ = fVar59;
      auVar54._4_4_ = fVar58;
      auVar54._0_4_ = fVar57;
      lVar25 = lVar25 + 0x14;
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
  }
  param_5[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                        fVar48 * in_register_00005228 +
                        fVar42 * in_s17 + fVar45 * in_register_00005224,
                        fVar39 + (float)*(undefined8 *)(param_1 + 0x88) * in_register_00005228 +
                                 (float)*(undefined8 *)(param_1 + 0x68) * in_s17 +
                                 (float)*(undefined8 *)(param_1 + 0x78) * in_register_00005224);
  *param_5 = CONCAT44(fVar38 + fVar47 * in_register_00005228 +
                               fVar41 * in_s17 + fVar44 * in_register_00005224,
                      fVar37 + fVar46 * in_register_00005228 +
                               fVar40 * in_s17 + fVar43 * in_register_00005224);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar30;
  return auVar31;
}


