/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eeb8dc; name: FUN_02eeb8dc
 */


/* WARNING: Removing unreachable block (ram,0x02eeb974) */

ulong FUN_02eeb8dc(int *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  uint *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar43;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  
  lVar4 = 0;
  if (*param_1 != 0) {
    lVar4 = (long)*param_1 + (long)param_1;
  }
  if (param_1[5] == 0) {
    uVar8 = param_2 >> 0x18;
    puVar20 = (undefined8 *)(lVar4 + (ulong)uVar8 * 0xc);
    uVar29 = *puVar20;
    fVar31 = *(float *)(puVar20 + 1);
    uVar9 = param_2 >> 0x10 & 0xff;
    puVar21 = (undefined8 *)(lVar4 + (ulong)uVar9 * 0xc);
    uVar40 = *puVar21;
    uVar10 = param_2 >> 8 & 0xff;
    puVar20 = (undefined8 *)(lVar4 + (ulong)uVar10 * 0xc);
    uVar46 = *puVar20;
    fVar28 = (float)uVar29;
    fVar35 = (float)uVar46;
    fVar47 = fVar35 - fVar28;
    fVar30 = (float)((ulong)uVar29 >> 0x20);
    fVar37 = (float)((ulong)uVar46 >> 0x20);
    fVar48 = fVar37 - fVar30;
    fVar34 = *(float *)(puVar20 + 1);
    param_2 = param_2 & 0xff;
    puVar20 = (undefined8 *)(lVar4 + (ulong)param_2 * 0xc);
    uVar29 = *puVar20;
    fVar44 = *(float *)(puVar20 + 1) - *(float *)(puVar21 + 1);
    fVar39 = (float)uVar29 - (float)uVar40;
    fVar43 = (float)((ulong)uVar29 >> 0x20) - (float)((ulong)uVar40 >> 0x20);
    uVar40 = NEON_ext(CONCAT44(fVar48,fVar47),(ulong)(uint)(fVar34 - fVar31),4,1);
    uVar29 = NEON_ext(CONCAT44(fVar43,fVar39),(ulong)(uint)fVar44,4,1);
    fVar35 = (fVar35 - fVar28) * (float)uVar29 - fVar39 * (float)uVar40;
    fVar37 = (fVar37 - fVar30) * (float)((ulong)uVar29 >> 0x20) -
             fVar43 * (float)((ulong)uVar40 >> 0x20);
    fVar39 = (fVar34 - fVar31) * fVar39 - fVar47 * fVar44;
    fVar34 = (fVar34 - fVar31) * fVar43 - fVar48 * fVar44;
    auVar41._4_4_ = fVar37;
    auVar41._0_4_ = fVar35;
    auVar41._8_4_ = fVar39;
    auVar41._12_4_ = fVar34;
    auVar15._4_4_ = fVar37;
    auVar15._0_4_ = fVar35;
    auVar15._8_4_ = fVar39;
    auVar15._12_4_ = fVar34;
    auVar41 = NEON_ext(auVar41,auVar15,4,1);
    fVar34 = auVar41._0_4_;
    fVar39 = auVar41._4_4_;
    auVar32._8_4_ = fVar35;
    auVar32._0_8_ = auVar41._0_8_;
    auVar32._12_4_ = 0;
    fVar37 = fVar34 * fVar34 + fVar39 * fVar39 + fVar35 * fVar35;
    fVar43 = fVar34 * fVar34 + fVar39 * fVar39 + fVar35 * fVar35;
    uVar19 = CONCAT44(-(uint)(0.0 < fVar43),-(uint)(0.0 < fVar37)) & 0x100000001;
    iVar36 = (int)uVar19;
    iVar38 = (int)(uVar19 >> 0x20);
    param_3[1] = (ulong)(uint)fVar35;
    *param_3 = auVar41._0_8_;
    if (fVar37 == 0.0) {
      fVar37 = 0.0;
      fVar43 = 0.0;
    }
    else {
      uVar29 = NEON_fmov(0x3f800000,4);
      fVar37 = (float)uVar29 / SQRT(fVar37);
      fVar43 = (float)((ulong)uVar29 >> 0x20) / SQRT(fVar43);
    }
    auVar42._0_4_ = fVar34 * fVar37;
    auVar42._4_4_ = fVar39 * fVar43;
    auVar42._8_4_ = fVar35 * fVar37;
    auVar42._12_4_ = fVar43 * 0.0;
    auVar16._4_4_ = (iVar38 << 0x1f) >> 0x1f;
    auVar16._0_4_ = (iVar36 << 0x1f) >> 0x1f;
    auVar16._8_4_ = (iVar36 << 0x1f) >> 0x1f;
    auVar16._12_4_ = (iVar38 << 0x1f) >> 0x1f;
    auVar32 = auVar32 ^ (auVar32 ^ auVar42) & auVar16;
    auVar33._0_12_ = auVar32._0_12_;
    auVar33._12_4_ = -(fVar28 * auVar32._0_4_ + fVar30 * auVar32._4_4_ + fVar31 * auVar32._8_4_);
    param_3[1] = auVar33._8_8_;
    *param_3 = auVar32._0_8_;
    lVar4 = 0;
    if (*param_1 != 0) {
      lVar4 = (long)*param_1 + (long)param_1;
    }
    puVar21 = (undefined8 *)(lVar4 + (ulong)uVar8 * 0xc);
    puVar25 = (undefined8 *)(lVar4 + (ulong)uVar9 * 0xc);
    puVar27 = (undefined8 *)(lVar4 + (ulong)uVar10 * 0xc);
    puVar20 = (undefined8 *)(lVar4 + (ulong)param_2 * 0xc);
    uVar11 = *(undefined4 *)(puVar21 + 1);
    uVar45 = *puVar21;
    uVar12 = *(undefined4 *)(puVar25 + 1);
    uVar13 = *(undefined4 *)(puVar27 + 1);
    uVar14 = *(undefined4 *)(puVar20 + 1);
    uVar40 = *puVar25;
    uVar46 = *puVar27;
    uVar29 = *puVar20;
    param_4[1] = CONCAT44(uVar11,uVar11);
    *param_4 = uVar45;
    param_4[3] = CONCAT44(uVar12,uVar12);
    param_4[2] = uVar40;
    *(uint *)((long)param_4 + 0xc) = uVar8 | 0x3f000000;
    *(uint *)((long)param_4 + 0x1c) = uVar9 | 0x3f000000;
    param_4[5] = CONCAT44(uVar13,uVar13);
    param_4[4] = uVar46;
    param_4[7] = CONCAT44(uVar14,uVar14);
    param_4[6] = uVar29;
    *(uint *)((long)param_4 + 0x2c) = uVar10 | 0x3f000000;
    *(uint *)((long)param_4 + 0x3c) = param_2 | 0x3f000000;
    uVar19 = 4;
  }
  else {
    piVar18 = param_1 + 6;
    iVar36 = *piVar18;
    puVar1 = (ushort *)((long)param_1 + (long)(int)param_2 * 4 + (long)param_1[4] + 0x10);
    bVar7 = (byte)puVar1[1];
    uVar19 = (ulong)bVar7;
    uVar26 = (ulong)*puVar1;
    puVar20 = (undefined8 *)((long)(param_1 + 2) + (long)(int)param_2 * 0x10 + (long)param_1[2]);
    uVar29 = *puVar20;
    pbVar2 = (byte *)((long)piVar18 + uVar26 + (long)iVar36);
    param_3[1] = puVar20[1];
    *param_3 = uVar29;
    bVar5 = *pbVar2;
    bVar6 = pbVar2[1];
    puVar20 = (undefined8 *)(lVar4 + (ulong)bVar5 * 0xc);
    uVar46 = *puVar20;
    puVar21 = (undefined8 *)(lVar4 + (ulong)bVar6 * 0xc);
    uVar29 = *puVar21;
    uVar40 = puVar21[1];
    param_4[1] = puVar20[1];
    *param_4 = uVar46;
    param_4[3] = uVar40;
    param_4[2] = uVar29;
    *(uint *)((long)param_4 + 0xc) = bVar5 | 0x3f000000;
    *(uint *)((long)param_4 + 0x1c) = bVar6 | 0x3f000000;
    if (2 < bVar7) {
      if (bVar7 == 3) {
        lVar22 = 2;
      }
      else {
        uVar17 = 0;
        puVar24 = (uint *)((long)param_4 + 0x3c);
        do {
          uVar23 = uVar17;
          pbVar3 = (byte *)((long)piVar18 + uVar23 + uVar26 + (long)iVar36 + 2);
          bVar7 = *pbVar3;
          puVar20 = (undefined8 *)(lVar4 + (ulong)bVar7 * 0xc);
          uVar29 = *puVar20;
          *(undefined8 *)(puVar24 + -5) = puVar20[1];
          *(undefined8 *)(puVar24 + -7) = uVar29;
          puVar24[-4] = bVar7 | 0x3f000000;
          bVar7 = pbVar3[1];
          puVar20 = (undefined8 *)(lVar4 + (ulong)bVar7 * 0xc);
          uVar29 = *puVar20;
          *(undefined8 *)(puVar24 + -1) = puVar20[1];
          *(undefined8 *)(puVar24 + -3) = uVar29;
          *puVar24 = bVar7 | 0x3f000000;
          uVar17 = uVar23 + 2;
          puVar24 = puVar24 + 8;
        } while ((uVar19 - 2 & 0xfffffffffffffffe) != uVar23 + 2);
        lVar22 = uVar23 + 4;
        if ((uVar19 - 2 & 1) == 0) {
          return uVar19;
        }
      }
      bVar7 = pbVar2[lVar22];
      param_4 = param_4 + lVar22 * 2;
      puVar20 = (undefined8 *)(lVar4 + (ulong)bVar7 * 0xc);
      uVar29 = *puVar20;
      param_4[1] = puVar20[1];
      *param_4 = uVar29;
      *(uint *)((long)param_4 + 0xc) = bVar7 | 0x3f000000;
    }
  }
  return uVar19;
}


