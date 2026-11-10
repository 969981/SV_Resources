/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ec7208; name: FUN_02ec7208
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02ec7208(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  char cVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar33 [16];
  float fVar41;
  float fVar45;
  undefined8 uVar42;
  undefined8 uVar43;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined8 uVar53;
  ulong uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  float fVar71;
  float fVar73;
  undefined8 uVar72;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  undefined1 auVar77 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  byte *local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  byte *local_78;
  
  if ((int)param_1[1] != 0) {
    uVar24 = param_1[3];
    local_d0 = param_1[2];
    fVar41 = *(float *)(param_1 + 2);
    fVar45 = *(float *)((long)param_1 + 0x14);
    fVar46 = *(float *)(param_1 + 3);
    fVar30 = *(float *)((long)param_1 + 0x1c);
    uVar26 = param_1[5];
    local_c0 = param_1[4];
    fVar34 = *(float *)(param_1 + 4);
    fVar37 = *(float *)((long)param_1 + 0x24);
    fVar47 = *(float *)(param_1 + 5);
    fVar48 = *(float *)((long)param_1 + 0x2c);
    fVar31 = (float)local_c0;
    fVar52 = (float)local_d0;
    iVar27 = -(uint)(fVar31 < fVar52);
    fVar35 = (float)((ulong)local_c0 >> 0x20);
    fVar32 = (float)((ulong)local_d0 >> 0x20);
    iVar28 = -(uint)(fVar35 < fVar32);
    fVar38 = (float)uVar26;
    fVar36 = (float)uVar24;
    iVar29 = -(uint)(fVar38 < fVar36);
    lVar12 = param_2[1];
    if (CONCAT13((byte)((uint)iVar28 >> 0x18) | (byte)((uint)iVar27 >> 0x18) |
                 (byte)((uint)iVar29 >> 0x18),
                 CONCAT12((byte)((uint)iVar28 >> 0x10) | (byte)((uint)iVar27 >> 0x10) |
                          (byte)((uint)iVar29 >> 0x10),
                          CONCAT11((byte)((uint)iVar28 >> 8) | (byte)((uint)iVar27 >> 8) |
                                   (byte)((uint)iVar29 >> 8),
                                   (byte)iVar28 | (byte)iVar27 | (byte)iVar29))) == 0) {
      fVar30 = (fVar52 + fVar31) * 0.5;
      fVar34 = (fVar32 + fVar35) * 0.5;
      fVar37 = (fVar36 + fVar38) * 0.5;
      fVar41 = (fVar31 - fVar52) * 0.5;
      fVar45 = (fVar35 - fVar32) * 0.5;
      fVar46 = (fVar38 - fVar36) * 0.5;
      fVar47 = (float)*(undefined8 *)(param_3 + 400);
      fVar48 = (float)((ulong)*(undefined8 *)(param_3 + 400) >> 0x20);
      fVar32 = (float)*(undefined8 *)(param_3 + 0x198);
      fVar36 = (float)((ulong)*(undefined8 *)(param_3 + 0x198) >> 0x20);
      auVar33 = *(undefined1 (*) [16])(param_3 + 0x1a0);
      fVar31 = ABS(auVar33._0_4_ * fVar46) +
               ABS(*(float *)(param_3 + 0x180) * fVar41) + ABS(fVar47 * fVar45);
      fVar35 = ABS(auVar33._4_4_ * fVar46) +
               ABS(*(float *)(param_3 + 0x184) * fVar41) + ABS(fVar48 * fVar45);
      fVar38 = ABS(auVar33._8_4_ * fVar46) +
               ABS(*(float *)(param_3 + 0x188) * fVar41) + ABS(fVar32 * fVar45);
      fVar52 = ABS(auVar33._12_4_ * fVar46) +
               ABS(*(float *)(param_3 + 0x18c) * fVar41) + ABS(fVar36 * fVar45);
      fVar41 = (float)*(undefined8 *)(param_3 + 0x1b0) +
               auVar33._0_4_ * fVar37 + *(float *)(param_3 + 0x180) * fVar30 + fVar47 * fVar34;
      fVar45 = (float)((ulong)*(undefined8 *)(param_3 + 0x1b0) >> 0x20) +
               auVar33._4_4_ * fVar37 + *(float *)(param_3 + 0x184) * fVar30 + fVar48 * fVar34;
      fVar46 = (float)*(undefined8 *)(param_3 + 0x1b8) +
               auVar33._8_4_ * fVar37 + *(float *)(param_3 + 0x188) * fVar30 + fVar32 * fVar34;
      fVar30 = (float)((ulong)*(undefined8 *)(param_3 + 0x1b8) >> 0x20) +
               auVar33._12_4_ * fVar37 + *(float *)(param_3 + 0x18c) * fVar30 + fVar36 * fVar34;
      fVar34 = fVar31 + fVar41;
      fVar37 = fVar35 + fVar45;
      fVar47 = fVar38 + fVar46;
      fVar48 = fVar52 + fVar30;
      fVar41 = fVar41 - fVar31;
      fVar45 = fVar45 - fVar35;
      fVar46 = fVar46 - fVar38;
      fVar30 = fVar30 - fVar52;
    }
    fVar31 = (float)*(undefined8 *)(param_3 + 0x160);
    auVar33._0_4_ = ((fVar41 - *(float *)(param_3 + 0x170)) - *(float *)(param_3 + 0x140)) * fVar31;
    fVar41 = (float)((ulong)*(undefined8 *)(param_3 + 0x160) >> 0x20);
    auVar33._4_4_ = ((fVar45 - *(float *)(param_3 + 0x174)) - *(float *)(param_3 + 0x144)) * fVar41;
    fVar45 = (float)*(undefined8 *)(param_3 + 0x168);
    auVar33._8_4_ = ((fVar46 - *(float *)(param_3 + 0x178)) - *(float *)(param_3 + 0x148)) * fVar45;
    fVar46 = (float)((ulong)*(undefined8 *)(param_3 + 0x168) >> 0x20);
    auVar33._12_4_ = ((fVar30 - *(float *)(param_3 + 0x17c)) - *(float *)(param_3 + 0x14c)) * fVar46
    ;
    auVar77._0_4_ = fVar31 * ((fVar34 + *(float *)(param_3 + 0x170)) - *(float *)(param_3 + 0x140));
    auVar77._4_4_ = fVar41 * ((fVar37 + *(float *)(param_3 + 0x174)) - *(float *)(param_3 + 0x144));
    auVar77._8_4_ = fVar45 * ((fVar47 + *(float *)(param_3 + 0x178)) - *(float *)(param_3 + 0x148));
    auVar77._12_4_ = fVar46 * ((fVar48 + *(float *)(param_3 + 0x17c)) - *(float *)(param_3 + 0x14c))
    ;
    auVar49 = NEON_fmin(auVar33,auVar77,4);
    auVar33 = NEON_fmax(auVar33,auVar77,4);
    uVar42 = NEON_fmaxp(auVar49._0_8_,auVar49._0_8_,4);
    uVar43 = NEON_fmax(CONCAT44(auVar49._8_4_,auVar49._8_4_),uVar42,4);
    uVar42 = NEON_fminp(auVar33._0_8_,auVar33._0_8_,4);
    uVar42 = NEON_fmin(CONCAT44(auVar33._8_4_,auVar33._8_4_),uVar42,4);
    uVar43 = NEON_fmax(uVar43,0,4);
    uVar42 = NEON_fmin(uVar42,*(undefined8 *)(*(long *)(param_3 + 0x128) + 0x10),4);
    if (!(bool)(~((float)uVar43 <= (float)uVar42) & 1)) {
      pbVar18 = (byte *)(*param_1 + (long)param_1);
      uVar13 = 0;
LAB_02ec738c:
      while( true ) {
        uVar25 = (uint)uVar13;
        if (-1 < (char)pbVar18[3]) break;
        uVar15 = (long)(int)uVar25 + 1;
        local_b0._0_4_ = (int)uVar15;
        local_90 = (float)local_c0;
        fVar34 = (float)local_d0;
        fStack_8c = (float)((ulong)local_c0 >> 0x20);
        fVar47 = (float)((ulong)local_d0 >> 0x20);
        local_88 = (float)uVar26;
        fVar37 = (float)uVar24;
        uVar13 = ((ulong)pbVar18[4] << 1 | ((ulong)pbVar18[3] & 0x7f) << 9) + (long)(int)uVar25;
        local_80 = (int)uVar13;
        pbVar18 = (byte *)((long)param_1 + uVar15 * 5 + *param_1);
        local_78 = (byte *)((long)param_1 + uVar13 * 5 + *param_1);
        local_a8 = pbVar18;
        bVar6 = *pbVar18 >> 4;
        fVar31 = (local_90 - fVar34) * 0.0044247787;
        fVar35 = (fStack_8c - fVar47) * 0.0044247787;
        fVar38 = (local_88 - fVar37) * 0.0044247787;
        bVar2 = *pbVar18 & 0xf;
        bVar7 = pbVar18[1] >> 4;
        bVar8 = pbVar18[2] >> 4;
        bVar3 = pbVar18[2] & 0xf;
        fVar48 = fVar34 + (float)(byte)(bVar6 * bVar6) * fVar31;
        fVar41 = fVar47 + (float)(byte)(bVar7 * bVar7) * fVar35;
        local_d0 = CONCAT44(fVar41,fVar48);
        bVar6 = pbVar18[1] & 0xf;
        fVar45 = fVar37 + (float)(byte)(bVar8 * bVar8) * fVar38;
        uStack_c8 = (ulong)(uint)fVar45;
        uVar24 = uStack_c8;
        bVar9 = *local_78 >> 4;
        fVar52 = local_90 - (float)(byte)(bVar2 * bVar2) * fVar31;
        bVar10 = local_78[1] >> 4;
        bVar11 = local_78[2] >> 4;
        bVar2 = *local_78 & 0xf;
        bVar7 = local_78[1] & 0xf;
        bVar8 = local_78[2] & 0xf;
        fVar46 = fStack_8c - (float)(byte)(bVar6 * bVar6) * fVar35;
        local_c0 = CONCAT44(fVar46,fVar52);
        fVar30 = local_88 - (float)(byte)(bVar3 * bVar3) * fVar38;
        local_b8 = (ulong)(uint)fVar30;
        uVar26 = local_b8;
        fVar34 = fVar34 + (float)(byte)(bVar9 * bVar9) * fVar31;
        fVar47 = fVar47 + (float)(byte)(bVar10 * bVar10) * fVar35;
        uStack_84 = 0;
        local_a0 = CONCAT44(fVar47,fVar34);
        fVar37 = fVar37 + (float)(byte)(bVar11 * bVar11) * fVar38;
        uStack_98 = (ulong)(uint)fVar37;
        local_90 = local_90 - (float)(byte)(bVar2 * bVar2) * fVar31;
        fStack_8c = fStack_8c - (float)(byte)(bVar7 * bVar7) * fVar35;
        local_88 = local_88 - (float)(byte)(bVar8 * bVar8) * fVar38;
        uStack_c8._4_4_ = 0.0;
        local_b8._4_4_ = 0.0;
        iVar27 = -(uint)(fVar52 < fVar48);
        iVar28 = -(uint)(fVar46 < fVar41);
        iVar29 = -(uint)(fVar30 < fVar45);
        if (CONCAT13((byte)((uint)iVar28 >> 0x18) | (byte)((uint)iVar27 >> 0x18) |
                     (byte)((uint)iVar29 >> 0x18),
                     CONCAT12((byte)((uint)iVar28 >> 0x10) | (byte)((uint)iVar27 >> 0x10) |
                              (byte)((uint)iVar29 >> 0x10),
                              CONCAT11((byte)((uint)iVar28 >> 8) | (byte)((uint)iVar27 >> 8) |
                                       (byte)((uint)iVar29 >> 8),
                                       (byte)iVar28 | (byte)iVar27 | (byte)iVar29))) == 0) {
          fVar31 = (fVar48 + fVar52) * 0.5;
          fVar35 = (fVar41 + fVar46) * 0.5;
          fVar38 = (fVar45 + fVar30) * 0.5;
          fVar48 = (fVar52 - fVar48) * 0.5;
          fVar52 = (fVar46 - fVar41) * 0.5;
          fVar39 = (fVar30 - fVar45) * 0.5;
          fVar41 = (float)*(undefined8 *)(param_3 + 0x1a0);
          fVar45 = (float)((ulong)*(undefined8 *)(param_3 + 0x1a0) >> 0x20);
          fVar46 = (float)*(undefined8 *)(param_3 + 0x1a8);
          fVar30 = (float)((ulong)*(undefined8 *)(param_3 + 0x1a8) >> 0x20);
          fVar32 = ABS(fVar41 * fVar39) +
                   ABS(*(float *)(param_3 + 0x180) * fVar48) +
                   ABS(*(float *)(param_3 + 400) * fVar52);
          fVar36 = ABS(fVar45 * fVar39) +
                   ABS(*(float *)(param_3 + 0x184) * fVar48) +
                   ABS(*(float *)(param_3 + 0x194) * fVar52);
          fVar40 = ABS(fVar46 * fVar39) +
                   ABS(*(float *)(param_3 + 0x188) * fVar48) +
                   ABS(*(float *)(param_3 + 0x198) * fVar52);
          fVar39 = ABS(fVar30 * fVar39) +
                   ABS(*(float *)(param_3 + 0x18c) * fVar48) +
                   ABS(*(float *)(param_3 + 0x19c) * fVar52);
          fVar48 = *(float *)(param_3 + 0x1b0) +
                   fVar41 * fVar38 +
                   *(float *)(param_3 + 0x180) * fVar31 + *(float *)(param_3 + 400) * fVar35;
          fVar41 = *(float *)(param_3 + 0x1b4) +
                   fVar45 * fVar38 +
                   *(float *)(param_3 + 0x184) * fVar31 + *(float *)(param_3 + 0x194) * fVar35;
          fVar45 = *(float *)(param_3 + 0x1b8) +
                   fVar46 * fVar38 +
                   *(float *)(param_3 + 0x188) * fVar31 + *(float *)(param_3 + 0x198) * fVar35;
          uStack_c8._4_4_ =
               *(float *)(param_3 + 0x1bc) +
               fVar30 * fVar38 +
               *(float *)(param_3 + 0x18c) * fVar31 + *(float *)(param_3 + 0x19c) * fVar35;
          fVar52 = fVar32 + fVar48;
          fVar46 = fVar36 + fVar41;
          fVar30 = fVar40 + fVar45;
          local_b8._4_4_ = fVar39 + uStack_c8._4_4_;
          fVar48 = fVar48 - fVar32;
          fVar41 = fVar41 - fVar36;
          fVar45 = fVar45 - fVar40;
          uStack_c8._4_4_ = uStack_c8._4_4_ - fVar39;
        }
        iVar27 = -(uint)(local_90 < fVar34);
        iVar28 = -(uint)(fStack_8c < fVar47);
        iVar29 = -(uint)(local_88 < fVar37);
        uVar63 = SUB41(local_88,0);
        uVar64 = (undefined1)((uint)local_88 >> 8);
        uVar65 = (undefined1)((uint)local_88 >> 0x10);
        uVar66 = (undefined1)((uint)local_88 >> 0x18);
        uVar67 = 0;
        uVar68 = 0;
        uVar69 = 0;
        uVar70 = 0;
        uVar55 = SUB41(local_90,0);
        uVar56 = (undefined1)((uint)local_90 >> 8);
        uVar57 = (undefined1)((uint)local_90 >> 0x10);
        uVar58 = (undefined1)((uint)local_90 >> 0x18);
        uVar59 = SUB41(fStack_8c,0);
        uVar60 = (undefined1)((uint)fStack_8c >> 8);
        uVar61 = (undefined1)((uint)fStack_8c >> 0x10);
        uVar62 = (undefined1)((uint)fStack_8c >> 0x18);
        lVar19 = local_a0;
        uVar54 = uStack_98;
        if (CONCAT13((byte)((uint)iVar28 >> 0x18) | (byte)((uint)iVar27 >> 0x18) |
                     (byte)((uint)iVar29 >> 0x18),
                     CONCAT12((byte)((uint)iVar28 >> 0x10) | (byte)((uint)iVar27 >> 0x10) |
                              (byte)((uint)iVar29 >> 0x10),
                              CONCAT11((byte)((uint)iVar28 >> 8) | (byte)((uint)iVar27 >> 8) |
                                       (byte)((uint)iVar29 >> 8),
                                       (byte)iVar28 | (byte)iVar27 | (byte)iVar29))) == 0) {
          fVar31 = (fVar34 + local_90) * 0.5;
          fVar35 = (fVar47 + fStack_8c) * 0.5;
          fVar38 = (fVar37 + local_88) * 0.5;
          fVar34 = (local_90 - fVar34) * 0.5;
          fVar47 = (fStack_8c - fVar47) * 0.5;
          fVar37 = (local_88 - fVar37) * 0.5;
          fVar32 = (float)*(undefined8 *)(param_3 + 400);
          fVar36 = (float)((ulong)*(undefined8 *)(param_3 + 400) >> 0x20);
          fVar39 = (float)*(undefined8 *)(param_3 + 0x198);
          fVar40 = (float)((ulong)*(undefined8 *)(param_3 + 0x198) >> 0x20);
          fVar71 = ABS(*(float *)(param_3 + 0x1a0) * fVar37) +
                   ABS(*(float *)(param_3 + 0x180) * fVar34) + ABS(fVar32 * fVar47);
          fVar73 = ABS(*(float *)(param_3 + 0x1a4) * fVar37) +
                   ABS(*(float *)(param_3 + 0x184) * fVar34) + ABS(fVar36 * fVar47);
          fVar74 = ABS(*(float *)(param_3 + 0x1a8) * fVar37) +
                   ABS(*(float *)(param_3 + 0x188) * fVar34) + ABS(fVar39 * fVar47);
          fVar75 = ABS(*(float *)(param_3 + 0x1ac) * fVar37) +
                   ABS(*(float *)(param_3 + 0x18c) * fVar34) + ABS(fVar40 * fVar47);
          fVar37 = (float)*(undefined8 *)(param_3 + 0x1b0) +
                   *(float *)(param_3 + 0x1a0) * fVar38 +
                   *(float *)(param_3 + 0x180) * fVar31 + fVar32 * fVar35;
          fVar47 = (float)((ulong)*(undefined8 *)(param_3 + 0x1b0) >> 0x20) +
                   *(float *)(param_3 + 0x1a4) * fVar38 +
                   *(float *)(param_3 + 0x184) * fVar31 + fVar36 * fVar35;
          fVar32 = (float)*(undefined8 *)(param_3 + 0x1b8) +
                   *(float *)(param_3 + 0x1a8) * fVar38 +
                   *(float *)(param_3 + 0x188) * fVar31 + fVar39 * fVar35;
          fVar31 = (float)((ulong)*(undefined8 *)(param_3 + 0x1b8) >> 0x20) +
                   *(float *)(param_3 + 0x1ac) * fVar38 +
                   *(float *)(param_3 + 0x18c) * fVar31 + fVar40 * fVar35;
          fVar34 = fVar71 + fVar37;
          uVar55 = SUB41(fVar34,0);
          uVar56 = (undefined1)((uint)fVar34 >> 8);
          uVar57 = (undefined1)((uint)fVar34 >> 0x10);
          uVar58 = (undefined1)((uint)fVar34 >> 0x18);
          fVar34 = fVar73 + fVar47;
          uVar59 = SUB41(fVar34,0);
          uVar60 = (undefined1)((uint)fVar34 >> 8);
          uVar61 = (undefined1)((uint)fVar34 >> 0x10);
          uVar62 = (undefined1)((uint)fVar34 >> 0x18);
          fVar34 = fVar74 + fVar32;
          uVar63 = SUB41(fVar34,0);
          uVar64 = (undefined1)((uint)fVar34 >> 8);
          uVar65 = (undefined1)((uint)fVar34 >> 0x10);
          uVar66 = (undefined1)((uint)fVar34 >> 0x18);
          fVar34 = fVar75 + fVar31;
          uVar67 = SUB41(fVar34,0);
          uVar68 = (undefined1)((uint)fVar34 >> 8);
          uVar69 = (undefined1)((uint)fVar34 >> 0x10);
          uVar70 = (undefined1)((uint)fVar34 >> 0x18);
          lVar19 = CONCAT44(fVar47 - fVar73,fVar37 - fVar71);
          uVar54 = CONCAT44(fVar31 - fVar75,fVar32 - fVar74);
        }
        fVar47 = *(float *)(param_3 + 0x170);
        fVar31 = *(float *)(param_3 + 0x174);
        fVar35 = *(float *)(param_3 + 0x178);
        fVar38 = *(float *)(param_3 + 0x17c);
        uVar72 = *(undefined8 *)(*(long *)(param_3 + 0x128) + 0x10);
        fVar32 = *(float *)(param_3 + 0x140);
        fVar36 = *(float *)(param_3 + 0x144);
        fVar39 = *(float *)(param_3 + 0x148);
        fVar40 = *(float *)(param_3 + 0x14c);
        fVar34 = (float)*(undefined8 *)(param_3 + 0x160);
        auVar44._0_4_ = ((fVar48 - fVar47) - fVar32) * fVar34;
        fVar37 = (float)((ulong)*(undefined8 *)(param_3 + 0x160) >> 0x20);
        auVar44._4_4_ = ((fVar41 - fVar31) - fVar36) * fVar37;
        fVar41 = (float)*(undefined8 *)(param_3 + 0x168);
        auVar44._8_4_ = ((fVar45 - fVar35) - fVar39) * fVar41;
        fVar45 = (float)((ulong)*(undefined8 *)(param_3 + 0x168) >> 0x20);
        auVar44._12_4_ = ((uStack_c8._4_4_ - fVar38) - fVar40) * fVar45;
        auVar50._0_4_ = fVar34 * ((fVar52 + fVar47) - fVar32);
        auVar50._4_4_ = fVar37 * ((fVar46 + fVar31) - fVar36);
        auVar50._8_4_ = fVar41 * ((fVar30 + fVar35) - fVar39);
        auVar50._12_4_ = fVar45 * ((local_b8._4_4_ + fVar38) - fVar40);
        auVar77 = NEON_fmin(auVar44,auVar50,4);
        auVar33 = NEON_fmax(auVar44,auVar50,4);
        uVar42 = NEON_fmaxp(auVar77._0_8_,auVar77._0_8_,4);
        uVar42 = NEON_fmax(CONCAT44(auVar77._8_4_,auVar77._8_4_),uVar42,4);
        uVar43 = NEON_fminp(auVar33._0_8_,auVar33._0_8_,4);
        uVar76 = NEON_fmin(CONCAT44(auVar33._8_4_,auVar33._8_4_),uVar43,4);
        uVar43 = NEON_fmax(uVar42,0,4);
        auVar51._0_4_ = (((float)lVar19 - fVar47) - fVar32) * fVar34;
        auVar51._4_4_ = (((float)((ulong)lVar19 >> 0x20) - fVar31) - fVar36) * fVar37;
        auVar51._8_4_ = (((float)uVar54 - fVar35) - fVar39) * fVar41;
        auVar51._12_4_ = (((float)(uVar54 >> 0x20) - fVar38) - fVar40) * fVar45;
        uVar53 = NEON_fmin(uVar76,uVar72,4);
        fVar34 = fVar34 * (((float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) +
                           fVar47) - fVar32);
        fVar37 = fVar37 * (((float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59))) +
                           fVar31) - fVar36);
        uVar55 = (undefined1)((uint)fVar37 >> 8);
        uVar56 = (undefined1)((uint)fVar37 >> 0x10);
        uVar57 = (undefined1)((uint)fVar37 >> 0x18);
        fVar41 = fVar41 * (((float)CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63))) +
                           fVar35) - fVar39);
        uVar58 = (undefined1)((uint)fVar41 >> 8);
        uVar59 = (undefined1)((uint)fVar41 >> 0x10);
        uVar60 = (undefined1)((uint)fVar41 >> 0x18);
        fVar45 = fVar45 * (((float)CONCAT13(uVar70,CONCAT12(uVar69,CONCAT11(uVar68,uVar67))) +
                           fVar38) - fVar40);
        uVar61 = (undefined1)((uint)fVar45 >> 8);
        uVar62 = (undefined1)((uint)fVar45 >> 0x10);
        uVar63 = (undefined1)((uint)fVar45 >> 0x18);
        auVar49[4] = SUB41(fVar37,0);
        auVar49._0_4_ = fVar34;
        auVar49[5] = uVar55;
        auVar49[6] = uVar56;
        auVar49[7] = uVar57;
        auVar49[8] = SUB41(fVar41,0);
        auVar49[9] = uVar58;
        auVar49[10] = uVar59;
        auVar49[0xb] = uVar60;
        auVar49[0xc] = SUB41(fVar45,0);
        auVar49[0xd] = uVar61;
        auVar49[0xe] = uVar62;
        auVar49[0xf] = uVar63;
        auVar77 = NEON_fmin(auVar51,auVar49,4);
        auVar5[4] = SUB41(fVar37,0);
        auVar5._0_4_ = fVar34;
        auVar5[5] = uVar55;
        auVar5[6] = uVar56;
        auVar5[7] = uVar57;
        auVar5[8] = SUB41(fVar41,0);
        auVar5[9] = uVar58;
        auVar5[10] = uVar59;
        auVar5[0xb] = uVar60;
        auVar5[0xc] = SUB41(fVar45,0);
        auVar5[0xd] = uVar61;
        auVar5[0xe] = uVar62;
        auVar5[0xf] = uVar63;
        auVar33 = NEON_fmax(auVar51,auVar5,4);
        uVar42 = NEON_fmaxp(auVar77._0_8_,auVar77._0_8_,4);
        uVar76 = NEON_fmax(CONCAT17(auVar77[0xb],
                                    CONCAT16(auVar77[10],
                                             CONCAT15(auVar77[9],CONCAT14(auVar77[8],auVar77._8_4_))
                                            )),uVar42,4);
        uVar42 = NEON_fminp(auVar33._0_8_,auVar33._0_8_,4);
        uVar42 = NEON_fmin(CONCAT44(auVar33._8_4_,auVar33._8_4_),uVar42,4);
        uVar76 = NEON_fmax(uVar76,0,4);
        uVar42 = NEON_fmin(uVar42,uVar72,4);
        cVar23 = '\0';
        if (!(bool)(~((float)uVar76 <= (float)uVar42) & 1)) {
          cVar23 = '\x02';
        }
        cVar23 = cVar23 + ((float)uVar43 <= (float)uVar53);
        if (cVar23 == '\x01') {
          uVar13 = uVar15 & 0xffffffff;
        }
        else if (cVar23 == '\x02') {
          pbVar18 = local_78;
          local_c0 = CONCAT44(fStack_8c,local_90);
          uVar26 = (ulong)(uint)local_88;
          local_d0 = local_a0;
          uVar24 = uStack_98;
        }
        else {
          if (cVar23 != '\x03') goto LAB_02ec7520;
          uVar25 = -(uint)((float)uVar76 < (float)uVar43);
          *(uint *)(param_3 + 0x1c0) = uVar25 & 1;
          uVar24 = (ulong)~uVar25 & 1;
          iVar27 = (int)param_2[1];
          lVar19 = (long)iVar27;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar27) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar19 + 1);
            iVar27 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar19 + 1);
          uVar42 = (&local_b0)[uVar24 * 6 + -4];
          puVar14 = (undefined8 *)(*param_2 + (long)iVar27 * 0x30);
          puVar14[1] = (&local_b0)[uVar24 * 6 + -3];
          *puVar14 = uVar42;
          uVar42 = (&local_b0)[uVar24 * 6 + -2];
          puVar14[3] = (&local_b0)[uVar24 * 6 + -1];
          puVar14[2] = uVar42;
          *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(&local_b0 + uVar24 * 6);
          uVar15 = (ulong)uVar25 & 1;
          uVar13 = (ulong)*(uint *)(&local_b0 + uVar15 * 6);
          uVar24 = (&local_b0)[uVar15 * 6 + -3];
          local_d0 = (&local_b0)[uVar15 * 6 + -4];
          uVar26 = (&local_b0)[uVar15 * 6 + -1];
          local_c0 = (&local_b0)[uVar15 * 6 + -2];
          pbVar18 = (byte *)(&local_b0)[uVar15 * 6 + 1];
        }
      }
      lVar19 = *(long *)(param_3 + 0xa8);
      if (lVar19 != 0) {
        lVar21 = *(long *)(lVar19 + 0x20);
        lVar1 = 0;
        if (lVar21 != 0) {
          lVar1 = lVar21 + lVar19 + 0x20;
        }
        lVar22 = *(long *)(lVar1 + 0x48);
        lVar21 = 0;
        if (lVar22 != 0) {
          lVar21 = lVar22 + lVar1 + 0x48;
        }
        uVar4 = uVar25 + 0x1f;
        if (-1 < (int)uVar25) {
          uVar4 = uVar25;
        }
        if ((*(uint *)(lVar19 + 0x28 +
                      (long)((int)uVar4 >> 5) * 4 +
                      (long)(*(int *)(lVar21 + 0x68) << 3) * 4 + *(long *)(lVar19 + 0x28)) >>
             (ulong)(uVar25 & 0x1f) & 1) == 0) goto LAB_02ec7520;
      }
      lVar21 = (long)(param_1 + 8) + (ulong)CONCAT11(pbVar18[3],pbVar18[4]) * 0x60 + param_1[8];
      lVar22 = *(long *)(param_3 + 0x50);
      lVar17 = *(long *)(lVar22 + 0x40);
      lVar19 = lVar17 + lVar22 + 0x40;
      lVar1 = 0;
      if (lVar17 != 0) {
        lVar1 = lVar19;
      }
      iVar27 = (int)(lVar21 - lVar1 >> 5) * -0x55555555;
      if (*(int *)(param_3 + 0x94) != iVar27 || *(int *)(param_3 + 0x98) != iVar27) {
        lVar19 = lVar19 + (long)iVar27 * 0x60;
        *(long *)(param_3 + 0x60) = lVar19;
        *(int *)(param_3 + 0x94) = iVar27;
        *(int *)(param_3 + 0x98) = iVar27;
        lVar17 = *(long *)(lVar22 + 0x70);
        lVar1 = 0;
        if (lVar17 != 0) {
          lVar1 = lVar17 + lVar22 + 0x70;
        }
        *(ulong *)(param_3 + 0x70) = lVar1 + (ulong)*(uint *)(lVar19 + 0x48) * 4;
        lVar17 = *(long *)(lVar22 + 0x80);
        lVar1 = 0;
        if (lVar17 != 0) {
          lVar1 = lVar17 + lVar22 + 0x80;
        }
        *(ulong *)(param_3 + 0x78) = lVar1 + (ulong)*(byte *)(lVar19 + 0x5b) * 0x80000;
        lVar17 = *(long *)(lVar22 + 0x60);
        lVar1 = 0;
        if (lVar17 != 0) {
          lVar1 = lVar17 + lVar22 + 0x60;
        }
        lVar1 = lVar1 + (ulong)*(uint *)(lVar19 + 0x4c) * 2;
        *(long *)(param_3 + 0x80) = lVar1;
        lVar20 = *(long *)(lVar22 + 0x90);
        lVar17 = 0;
        if (lVar20 != 0) {
          lVar17 = lVar20 + lVar22 + 0x90;
        }
        *(ulong *)(param_3 + 0x88) = lVar17 + (ulong)*(uint *)(lVar19 + 0x54) * 4;
        *(uint *)(param_3 + 0x90) = (uint)*(byte *)(lVar19 + 0x58);
        lVar20 = *(long *)(lVar22 + 0x50);
        lVar17 = 0;
        if (lVar20 != 0) {
          lVar17 = lVar20 + lVar22 + 0x50;
        }
        *(ulong *)(param_3 + 0x68) = lVar17 + (ulong)*(uint *)(lVar19 + 0x50) * 4;
        uVar42 = *(undefined8 *)(lVar19 + 0x30);
        *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar19 + 0x38);
        *(undefined8 *)(param_3 + 0x30) = uVar42;
        uVar42 = *(undefined8 *)(lVar19 + 0x3c);
        *(ulong *)(param_3 + 0x48) = (ulong)*(uint *)(lVar19 + 0x44);
        *(undefined8 *)(param_3 + 0x40) = uVar42;
        *(ulong *)(param_3 + 0x80) = lVar1 + (ulong)*(byte *)(lVar19 + 0x58) * -2;
      }
      FUN_02ec7984(lVar21,param_2,param_3);
LAB_02ec7520:
      if ((int)lVar12 < (int)param_2[1]) {
        iVar27 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar27;
        plVar16 = (long *)(*param_2 + (long)iVar27 * 0x30);
        uVar13 = (ulong)(int)plVar16[4];
        pbVar18 = (byte *)((long)param_1 + uVar13 * 5 + *param_1);
        local_c0 = plVar16[2];
        uVar26 = plVar16[3];
        local_d0 = *plVar16;
        uVar24 = plVar16[1];
        goto LAB_02ec738c;
      }
    }
  }
  return;
}


