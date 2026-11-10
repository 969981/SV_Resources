/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031887ec; name: FUN_031887ec
 */


void FUN_031887ec(long param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar26;
  int iVar29;
  undefined1 auVar23 [12];
  float fVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar31;
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint local_34;
  
  lVar13 = *(long *)(param_1 + 0x918);
  lVar17 = *(long *)(lVar13 + 0x28);
  lVar18 = *(long *)(lVar13 + 0x38);
  iVar1 = *(int *)(param_2 + 0x18) + 1;
  lVar13 = *(long *)(*(long *)(lVar13 + 0x18) + 0x50);
  do {
    puVar2 = (ulong *)(*(long *)(param_1 + 0x4c0) +
                      (long)*(int *)(*(long *)(param_1 + 0x70) + (long)iVar1 * 0x40) * 0x40);
    do {
      uVar14 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uint)uVar14 < (uint)(uVar14 >> 0x20)) {
      local_34 = (uint)uVar14;
    }
    else {
      iVar19 = FUN_03232ac8(param_1 + 0x30,iVar1,1,&local_34);
      if (iVar19 == 0) {
        return;
      }
      uVar14 = (ulong)local_34;
    }
    uVar12 = (uint)uVar14;
    lVar15 = *(long *)(lVar13 + (long)(int)uVar12 * 8);
    lVar16 = *(long *)(lVar15 + 0x100);
    uVar6 = *(undefined4 *)(lVar15 + 0xa0);
    iVar19 = -(uint)(*(float *)(lVar16 + 0x40) == 0.0);
    iVar26 = -(uint)(*(float *)(lVar16 + 0x44) == 0.0);
    iVar29 = -(uint)(*(float *)(lVar16 + 0x48) == 0.0);
    bVar49 = (byte)uVar6;
    bVar37 = (byte)((uint)uVar6 >> 8);
    bVar50 = (byte)((uint)uVar6 >> 0x10);
    bVar38 = (byte)((uint)uVar6 >> 0x18);
    fVar20 = (float)CONCAT13(bVar38 & (byte)((uint)iVar19 >> 0x18),
                             CONCAT12(bVar50 & (byte)((uint)iVar19 >> 0x10),
                                      CONCAT11(bVar37 & (byte)((uint)iVar19 >> 8),
                                               bVar49 & (byte)iVar19)));
    auVar23._0_8_ =
         CONCAT17(bVar38 & (byte)((uint)iVar26 >> 0x18),
                  CONCAT16(bVar50 & (byte)((uint)iVar26 >> 0x10),
                           CONCAT15(bVar37 & (byte)((uint)iVar26 >> 8),
                                    CONCAT14(bVar49 & (byte)iVar26,fVar20))));
    auVar23[8] = bVar49 & (byte)iVar29;
    auVar23[9] = bVar37 & (byte)((uint)iVar29 >> 8);
    auVar23[10] = bVar50 & (byte)((uint)iVar29 >> 0x10);
    auVar23[0xb] = bVar38 & (byte)((uint)iVar29 >> 0x18);
    fVar21 = (float)*(undefined8 *)(lVar15 + 0x30);
    fVar31 = fVar21 + fVar20;
    fVar27 = (float)((ulong)auVar23._0_8_ >> 0x20);
    fVar28 = (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20);
    fVar35 = fVar28 + fVar27;
    fVar30 = (float)*(undefined8 *)(lVar15 + 0x38);
    fVar36 = fVar30 + auVar23._8_4_;
    fVar21 = fVar21 - fVar20;
    fVar28 = fVar28 - fVar27;
    fVar30 = fVar30 - auVar23._8_4_;
    puVar3 = (uint *)(lVar18 + (long)(int)uVar12 * 0x20);
    *puVar3 = (((int)fVar21 >> 0x1f | 0x80000000U) ^ (uint)fVar21) >> 1;
    puVar3[1] = (((int)fVar28 >> 0x1f | 0x80000000U) ^ (uint)fVar28) >> 1;
    puVar3[4] = ((((int)fVar31 >> 0x1f | 0x80000000U) ^ (uint)fVar31) >> 1) + 1;
    puVar3[5] = ((((int)fVar35 >> 0x1f | 0x80000000U) ^ (uint)fVar35) >> 1) + 1;
    puVar3[2] = (((int)fVar30 >> 0x1f | 0x80000000U) ^ (uint)fVar30) >> 1;
    puVar3[3] = uVar12;
    puVar3[6] = ((((int)fVar36 >> 0x1f | 0x80000000U) ^ (uint)fVar36) >> 1) + 1;
    if (*(char *)(lVar15 + 0xf8) != '\0') {
      lVar16 = *(long *)(lVar15 + 0x100);
      fVar8 = *(float *)(lVar16 + 0x40);
      fVar9 = *(float *)(lVar16 + 0x44);
      fVar10 = *(float *)(lVar16 + 0x48);
      fVar11 = *(float *)(lVar16 + 0x4c);
      fVar22 = *(float *)(lVar15 + 0xb0);
      fVar32 = -*(float *)(lVar15 + 0xb4);
      uVar6 = *(undefined4 *)(lVar15 + 0xac);
      bVar49 = (byte)uVar6;
      bVar50 = (byte)((uint)uVar6 >> 8);
      bVar51 = (byte)((uint)uVar6 >> 0x10);
      bVar52 = (byte)((uint)uVar6 >> 0x18);
      iVar19 = -(uint)(fVar8 == 0.0);
      iVar26 = -(uint)(fVar9 == 0.0);
      iVar29 = -(uint)(fVar10 == 0.0);
      iVar7 = -(uint)(fVar11 == 0.0);
      bVar37 = bVar49 & (byte)iVar19;
      bVar38 = bVar50 & (byte)((uint)iVar19 >> 8);
      bVar39 = bVar51 & (byte)((uint)iVar19 >> 0x10);
      bVar40 = bVar52 & (byte)((uint)iVar19 >> 0x18);
      bVar41 = bVar49 & (byte)iVar26;
      bVar42 = bVar50 & (byte)((uint)iVar26 >> 8);
      bVar43 = bVar51 & (byte)((uint)iVar26 >> 0x10);
      bVar44 = bVar52 & (byte)((uint)iVar26 >> 0x18);
      bVar45 = bVar49 & (byte)iVar29;
      bVar46 = bVar50 & (byte)((uint)iVar29 >> 8);
      bVar47 = bVar51 & (byte)((uint)iVar29 >> 0x10);
      bVar48 = bVar52 & (byte)((uint)iVar29 >> 0x18);
      bVar49 = bVar49 & (byte)iVar7;
      bVar50 = bVar50 & (byte)((uint)iVar7 >> 8);
      bVar51 = bVar51 & (byte)((uint)iVar7 >> 0x10);
      bVar52 = bVar52 & (byte)((uint)iVar7 >> 0x18);
      puVar3 = (uint *)(lVar17 + (long)*(int *)(lVar15 + 0x10c) * 0x20);
      fVar27 = *(float *)(lVar15 + 0x30) +
               (float)CONCAT13(bVar40,CONCAT12(bVar39,CONCAT11(bVar38,bVar37)));
      fVar31 = *(float *)(lVar15 + 0x34) +
               (float)CONCAT13(bVar44,CONCAT12(bVar43,CONCAT11(bVar42,bVar41)));
      fVar35 = *(float *)(lVar15 + 0x38) +
               (float)CONCAT13(bVar48,CONCAT12(bVar47,CONCAT11(bVar46,bVar45)));
      fVar36 = *(float *)(lVar15 + 0x3c) +
               (float)CONCAT13(bVar52,CONCAT12(bVar51,CONCAT11(bVar50,bVar49)));
      fVar21 = *(float *)(lVar15 + 0x30) -
               (float)CONCAT13(bVar40,CONCAT12(bVar39,CONCAT11(bVar38,bVar37)));
      fVar28 = *(float *)(lVar15 + 0x34) -
               (float)CONCAT13(bVar44,CONCAT12(bVar43,CONCAT11(bVar42,bVar41)));
      fVar30 = *(float *)(lVar15 + 0x38) -
               (float)CONCAT13(bVar48,CONCAT12(bVar47,CONCAT11(bVar46,bVar45)));
      fVar20 = *(float *)(lVar15 + 0x3c) -
               (float)CONCAT13(bVar52,CONCAT12(bVar51,CONCAT11(bVar50,bVar49)));
      auVar53._0_4_ = fVar27 + fVar8 * fVar22;
      auVar53._4_4_ = fVar31 + fVar9 * fVar22;
      auVar53._8_4_ = fVar35 + fVar10 * fVar22;
      auVar53._12_4_ = fVar36 + fVar11 * fVar22;
      auVar24._0_4_ = fVar21 + fVar8 * fVar22;
      auVar24._4_4_ = fVar28 + fVar9 * fVar22;
      auVar24._8_4_ = fVar30 + fVar10 * fVar22;
      auVar24._12_4_ = fVar20 + fVar11 * fVar22;
      auVar54[4] = SUB41(fVar31,0);
      auVar54._0_4_ = fVar27;
      auVar54[5] = (char)((uint)fVar31 >> 8);
      auVar54[6] = (char)((uint)fVar31 >> 0x10);
      auVar54[7] = (char)((uint)fVar31 >> 0x18);
      auVar54[8] = SUB41(fVar35,0);
      auVar54[9] = (char)((uint)fVar35 >> 8);
      auVar54[10] = (char)((uint)fVar35 >> 0x10);
      auVar54[0xb] = (char)((uint)fVar35 >> 0x18);
      auVar54[0xc] = SUB41(fVar36,0);
      auVar54[0xd] = (char)((uint)fVar36 >> 8);
      auVar54[0xe] = (char)((uint)fVar36 >> 0x10);
      auVar54[0xf] = (char)((uint)fVar36 >> 0x18);
      auVar54 = NEON_fmax(auVar54,auVar53,4);
      auVar25[4] = SUB41(fVar28,0);
      auVar25._0_4_ = fVar21;
      auVar25[5] = (char)((uint)fVar28 >> 8);
      auVar25[6] = (char)((uint)fVar28 >> 0x10);
      auVar25[7] = (char)((uint)fVar28 >> 0x18);
      auVar25[8] = SUB41(fVar30,0);
      auVar25[9] = (char)((uint)fVar30 >> 8);
      auVar25[10] = (char)((uint)fVar30 >> 0x10);
      auVar25[0xb] = (char)((uint)fVar30 >> 0x18);
      auVar25[0xc] = SUB41(fVar20,0);
      auVar25[0xd] = (char)((uint)fVar20 >> 8);
      auVar25[0xe] = (char)((uint)fVar20 >> 0x10);
      auVar25[0xf] = (char)((uint)fVar20 >> 0x18);
      auVar25 = NEON_fmin(auVar25,auVar24,4);
      fVar21 = auVar54._4_4_ + fVar9 * fVar32;
      fVar28 = auVar54._8_4_ + fVar10 * fVar32;
      fVar30 = auVar54._12_4_ + fVar11 * fVar32;
      auVar33._0_4_ = auVar25._0_4_ + fVar8 * fVar32;
      auVar33._4_4_ = auVar25._4_4_ + fVar9 * fVar32;
      auVar33._8_4_ = auVar25._8_4_ + fVar10 * fVar32;
      auVar33._12_4_ = auVar25._12_4_ + fVar11 * fVar32;
      auVar25 = NEON_fmin(auVar25,auVar33,4);
      auVar34[4] = SUB41(fVar21,0);
      auVar34._0_4_ = auVar54._0_4_ + fVar8 * fVar32;
      auVar34[5] = (char)((uint)fVar21 >> 8);
      auVar34[6] = (char)((uint)fVar21 >> 0x10);
      auVar34[7] = (char)((uint)fVar21 >> 0x18);
      auVar34[8] = SUB41(fVar28,0);
      auVar34[9] = (char)((uint)fVar28 >> 8);
      auVar34[10] = (char)((uint)fVar28 >> 0x10);
      auVar34[0xb] = (char)((uint)fVar28 >> 0x18);
      auVar34[0xc] = SUB41(fVar30,0);
      auVar34[0xd] = (char)((uint)fVar30 >> 8);
      auVar34[0xe] = (char)((uint)fVar30 >> 0x10);
      auVar34[0xf] = (char)((uint)fVar30 >> 0x18);
      auVar34 = NEON_fmax(auVar54,auVar34,4);
      *puVar3 = (((int)auVar25._0_4_ >> 0x1f | 0x80000000U) ^ auVar25._0_4_) >> 1;
      puVar3[1] = (((int)auVar25._4_4_ >> 0x1f | 0x80000000U) ^ auVar25._4_4_) >> 1;
      puVar3[2] = (((int)auVar25._8_4_ >> 0x1f | 0x80000000U) ^ auVar25._8_4_) >> 1;
      puVar3[3] = uVar12;
      puVar3[4] = ((((int)auVar34._0_4_ >> 0x1f | 0x80000000U) ^ auVar34._0_4_) >> 1) + 1;
      puVar3[5] = ((((int)auVar34._4_4_ >> 0x1f | 0x80000000U) ^ auVar34._4_4_) >> 1) + 1;
      puVar3[6] = ((((int)auVar34._8_4_ >> 0x1f | 0x80000000U) ^ auVar34._8_4_) >> 1) + 1;
    }
  } while( true );
}


