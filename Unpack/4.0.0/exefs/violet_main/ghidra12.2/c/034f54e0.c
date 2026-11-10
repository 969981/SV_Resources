/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f54e0; name: FUN_034f54e0
 */


/* WARNING: Removing unreachable block (ram,0x034f5668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_034f54e0(float param_1,float param_2,undefined8 *param_3,long *param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  pauVar13 = (undefined1 (*) [16])*param_3;
  bVar1 = *(byte *)(param_4 + 1);
  uVar2 = *(ushort *)(param_3 + 2);
  if (param_1 == param_2) {
    uVar3 = (uint)bVar1 * (uint)uVar2 >> 2;
    if (uVar3 != 0) {
      param_1 = param_1 * 32767.0;
      lVar18 = 0;
      puVar15 = (undefined8 *)*param_4;
      do {
        pauVar14 = pauVar13 + lVar18;
        lVar18 = lVar18 + 2;
        auVar24._0_8_ =
             CONCAT44((int)(*(float *)(*pauVar14 + 4) * param_1),
                      (int)(*(float *)*pauVar14 * param_1));
        auVar24._8_4_ = (int)(*(float *)(*pauVar14 + 8) * param_1);
        auVar24._12_4_ = (int)(*(float *)(*pauVar14 + 0xc) * param_1);
        auVar25._8_8_ = auVar24._8_8_;
        auVar25._0_8_ = NEON_sqxtn(auVar24._0_8_,auVar24,4);
        auVar6._4_4_ = (int)((float)((ulong)*(undefined8 *)pauVar14[1] >> 0x20) * param_1);
        auVar6._0_4_ = (int)((float)*(undefined8 *)pauVar14[1] * param_1);
        auVar6._8_4_ = (int)((float)*(undefined8 *)(pauVar14[1] + 8) * param_1);
        auVar6._12_4_ = (int)((float)((ulong)*(undefined8 *)(pauVar14[1] + 8) >> 0x20) * param_1);
        auVar26 = NEON_sqxtn2(auVar25,auVar6,4);
        puVar15[1] = auVar26._8_8_;
        *puVar15 = auVar26._0_8_;
        puVar15 = puVar15 + 2;
      } while ((uint)lVar18 < uVar3);
    }
  }
  else if ((bVar1 != 0) && (uVar2 >> 2 != 0)) {
    param_1 = param_1 * 32767.0;
    fVar30 = (param_2 * 32767.0 - param_1) / (float)uVar2;
    fVar20 = param_1 + (float)_DAT_03caaf10 * fVar30;
    fVar21 = param_1 + (float)((ulong)_DAT_03caaf10 >> 0x20) * fVar30;
    fVar22 = param_1 + (float)_UNK_03caaf18 * fVar30;
    param_1 = param_1 + (float)((ulong)_UNK_03caaf18 >> 0x20) * fVar30;
    auVar26 = NEON_fmov(0x40800000,4);
    fVar23 = fVar30 * 8.0;
    fVar27 = fVar30 * 8.0;
    fVar28 = fVar30 * 8.0;
    fVar29 = fVar30 * 8.0;
    fVar31 = fVar20 + auVar26._0_4_ * fVar30;
    fVar32 = fVar21 + auVar26._4_4_ * fVar30;
    fVar33 = fVar22 + auVar26._8_4_ * fVar30;
    fVar30 = param_1 + auVar26._12_4_ * fVar30;
    uVar4 = (uVar2 >> 2) - 1 >> 1;
    uVar3 = uVar4 + 1;
    uVar17 = 0;
    puVar15 = (undefined8 *)*param_4;
    do {
      if (uVar4 == 0) {
        fVar35 = fVar31;
        fVar37 = fVar32;
        fVar39 = fVar33;
        fVar41 = fVar30;
        fVar43 = fVar20;
        fVar47 = fVar21;
        fVar49 = fVar22;
        fVar51 = param_1;
LAB_034f562c:
        pauVar14 = pauVar13 + 2;
        auVar26 = *pauVar13;
        auVar44._0_8_ = CONCAT44((int)(auVar26._4_4_ * fVar47),(int)(auVar26._0_4_ * fVar43));
        auVar44._8_4_ = (int)(auVar26._8_4_ * fVar49);
        auVar44._12_4_ = (int)(auVar26._12_4_ * fVar51);
        auVar45._8_8_ = auVar44._8_8_;
        auVar45._0_8_ = NEON_sqxtn(auVar44._0_8_,auVar44,4);
        auVar7._4_4_ = (int)((float)((ulong)*(undefined8 *)pauVar13[1] >> 0x20) * fVar37);
        auVar7._0_4_ = (int)((float)*(undefined8 *)pauVar13[1] * fVar35);
        auVar7._8_4_ = (int)((float)*(undefined8 *)(pauVar13[1] + 8) * fVar39);
        auVar7._12_4_ = (int)((float)((ulong)*(undefined8 *)(pauVar13[1] + 8) >> 0x20) * fVar41);
        auVar26 = NEON_sqxtn2(auVar45,auVar7,4);
        puVar16 = puVar15 + 2;
        puVar15[1] = auVar26._8_8_;
        *puVar15 = auVar26._0_8_;
      }
      else {
        fVar35 = fVar31;
        fVar37 = fVar32;
        fVar39 = fVar33;
        fVar41 = fVar30;
        iVar19 = -(uVar3 & 0xfffffffe);
        fVar43 = fVar20;
        fVar47 = fVar21;
        fVar49 = fVar22;
        fVar51 = param_1;
        do {
          iVar19 = iVar19 + 2;
          fVar34 = fVar35 + fVar23;
          fVar36 = fVar37 + fVar27;
          fVar38 = fVar39 + fVar28;
          fVar40 = fVar41 + fVar29;
          fVar42 = fVar43 + fVar23;
          fVar46 = fVar47 + fVar27;
          fVar48 = fVar49 + fVar28;
          fVar50 = fVar51 + fVar29;
          auVar52._0_8_ =
               CONCAT44((int)(*(float *)(*pauVar13 + 4) * fVar47),
                        (int)(*(float *)*pauVar13 * fVar43));
          auVar52._8_4_ = (int)(*(float *)(*pauVar13 + 8) * fVar49);
          auVar52._12_4_ = (int)(*(float *)(*pauVar13 + 0xc) * fVar51);
          auVar53._8_8_ = auVar52._8_8_;
          auVar53._0_8_ = NEON_sqxtn(auVar52._0_8_,auVar52,4);
          auVar26._4_4_ = (int)((float)((ulong)*(undefined8 *)pauVar13[1] >> 0x20) * fVar37);
          auVar26._0_4_ = (int)((float)*(undefined8 *)pauVar13[1] * fVar35);
          auVar26._8_4_ = (int)((float)*(undefined8 *)(pauVar13[1] + 8) * fVar39);
          auVar26._12_4_ = (int)((float)((ulong)*(undefined8 *)(pauVar13[1] + 8) >> 0x20) * fVar41);
          auVar26 = NEON_sqxtn2(auVar53,auVar26,4);
          puVar15[1] = auVar26._8_8_;
          *puVar15 = auVar26._0_8_;
          pauVar14 = pauVar13 + 2;
          pauVar10 = pauVar13 + 2;
          pauVar11 = pauVar13 + 2;
          pauVar12 = pauVar13 + 2;
          pauVar5 = pauVar13 + 3;
          pauVar9 = pauVar13 + 3;
          pauVar13 = pauVar13 + 4;
          fVar35 = fVar34 + fVar23;
          fVar37 = fVar36 + fVar27;
          fVar39 = fVar38 + fVar28;
          fVar41 = fVar40 + fVar29;
          fVar43 = fVar42 + fVar23;
          fVar47 = fVar46 + fVar27;
          fVar49 = fVar48 + fVar28;
          fVar51 = fVar50 + fVar29;
          auVar54._0_8_ =
               CONCAT44((int)(*(float *)(*pauVar10 + 4) * fVar46),
                        (int)(*(float *)*pauVar14 * fVar42));
          auVar54._8_4_ = (int)(*(float *)(*pauVar11 + 8) * fVar48);
          auVar54._12_4_ = (int)(*(float *)(*pauVar12 + 0xc) * fVar50);
          auVar55._8_8_ = auVar54._8_8_;
          auVar55._0_8_ = NEON_sqxtn(auVar54._0_8_,auVar54,4);
          auVar8._4_4_ = (int)((float)((ulong)*(undefined8 *)*pauVar5 >> 0x20) * fVar36);
          auVar8._0_4_ = (int)((float)*(undefined8 *)*pauVar5 * fVar34);
          auVar8._8_4_ = (int)((float)*(undefined8 *)(*pauVar9 + 8) * fVar38);
          auVar8._12_4_ = (int)((float)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20) * fVar40);
          auVar26 = NEON_sqxtn2(auVar55,auVar8,4);
          puVar15[3] = auVar26._8_8_;
          puVar15[2] = auVar26._0_8_;
          puVar15 = puVar15 + 4;
        } while (iVar19 != 0);
        pauVar14 = pauVar13;
        puVar16 = puVar15;
        if ((uVar3 & 1) != 0) goto LAB_034f562c;
      }
      uVar17 = uVar17 + 1;
      pauVar13 = pauVar14;
      puVar15 = puVar16;
    } while (uVar17 != bVar1);
  }
  return;
}


