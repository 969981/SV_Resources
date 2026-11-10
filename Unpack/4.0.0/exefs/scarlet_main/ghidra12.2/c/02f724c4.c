/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f724c4; name: FUN_02f724c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_02f724c4(undefined8 param_1,long param_2,long param_3,long param_4,long *param_5,long *param_6,
            long param_7,uint *param_8,long *param_9)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  uint *puVar15;
  uint uVar16;
  long *plVar17;
  uint *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  float fVar23;
  float fVar22;
  int iVar24;
  undefined4 uVar25;
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar40;
  float fVar41;
  undefined1 auVar39 [12];
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  ulong uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar54 [16];
  float fVar59;
  int iVar60;
  float fVar61;
  int iVar62;
  undefined8 uVar63;
  float fVar65;
  ulong uVar64;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  int iVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long local_170;
  uint *puStack_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 local_150;
  float fStack_148;
  float fStack_134;
  undefined1 local_130 [16];
  float fStack_114;
  undefined8 local_110;
  float afStack_108 [3];
  undefined8 uStack_fc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 local_90 [2];
  undefined4 local_88 [6];
  
  lVar13 = param_5[5];
  iVar24 = *(int *)(lVar13 + 0x40);
  puVar19 = (undefined8 *)((long)*(int *)(param_6[5] + 0x40) + param_6[5] + 0x40);
  *param_9 = *(long *)(param_4 + 0x70) + 0x30;
  fVar70 = *(float *)(param_5[5] + 0x20);
  fVar59 = *(float *)(param_6[5] + 0x20);
  auVar68 = *(undefined1 (*) [16])(param_4 + 0x20);
  auVar32 = NEON_ext(auVar68,auVar68,8,1);
  pauVar1 = (undefined1 (*) [12])(param_4 + 0x30);
  uVar25 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x38) >> 0x20);
  auVar33 = *(undefined1 (*) [16])(param_4 + 0x40);
  auVar49 = NEON_ext(auVar33,auVar33,8,1);
  auVar43._12_4_ = uVar25;
  auVar43._0_12_ = *pauVar1;
  auVar50._12_4_ = uVar25;
  auVar50._0_12_ = *pauVar1;
  auVar43 = NEON_ext(auVar43,auVar50,8,1);
  fVar29 = auVar33._4_4_;
  puVar2 = (undefined8 *)((long)iVar24 + lVar13 + 0x40);
  fVar57 = (float)*(undefined8 *)*pauVar1;
  fVar55 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar53 = (float)*(undefined8 *)(param_4 + 0x58);
  bVar5 = *(byte *)(param_7 + 9);
  fVar23 = (float)*(undefined8 *)(param_4 + 0x50);
  fVar38 = (float)*puVar19 - fVar23;
  fVar8 = (float)((ulong)*(undefined8 *)(param_4 + 0x50) >> 0x20);
  fVar40 = (float)((ulong)*puVar19 >> 0x20) - fVar8;
  fVar41 = *(float *)(puVar19 + 1) - fVar53;
  fVar22 = auVar49._4_4_;
  fVar71 = auVar32._0_4_ * fVar41 + auVar68._0_4_ * fVar38 + auVar68._4_4_ * fVar40;
  fVar72 = auVar43._0_4_ * fVar41 + fVar57 * fVar38 + fVar55 * fVar40;
  local_b0 = CONCAT44(fVar72,fVar71);
  fVar73 = auVar49._0_4_ * fVar41 + auVar33._0_4_ * fVar38 + fVar29 * fVar40;
  fVar40 = fVar22 * fVar41 + fVar29 * fVar38 + fVar22 * fVar40;
  uStack_a8 = CONCAT44(fVar40,fVar73);
  uVar42 = *(undefined8 *)((long)puVar19 + 0xc);
  fVar38 = *(float *)((long)puVar19 + 0x14);
  *(undefined1 *)((long)param_8 + 0x92) = 0;
  fVar23 = (float)uVar42 - fVar23;
  fVar8 = (float)((ulong)uVar42 >> 0x20) - fVar8;
  fVar38 = fVar38 - fVar53;
  *(undefined1 *)(param_8 + 0x25) = 0;
  *(undefined1 *)((long)param_8 + 0x96) = 0;
  fVar53 = auVar32._0_4_ * fVar38 + auVar68._0_4_ * fVar23 + auVar68._4_4_ * fVar8;
  fVar55 = auVar43._0_4_ * fVar38 + fVar57 * fVar23 + fVar55 * fVar8;
  fVar57 = auVar49._0_4_ * fVar38 + auVar33._0_4_ * fVar23 + fVar29 * fVar8;
  fVar38 = fVar22 * fVar38 + fVar29 * fVar23 + fVar22 * fVar8;
  local_a0 = fVar53;
  fStack_9c = fVar55;
  fStack_98 = fVar57;
  fStack_94 = fVar38;
  if (bVar5 < 3) {
    *(undefined2 *)(param_7 + 0xc) = 0;
    memset((void *)(param_7 + 0x20),0,0xc0);
    *(undefined2 *)(param_7 + 0x36) = 0x5f7f;
    *(undefined2 *)(param_7 + 0x2a) = 0x3ff;
    *(undefined1 *)(param_7 + 9) = 10;
    *(undefined4 *)(param_7 + 0x18) = 0xa7f7f7f;
    *(undefined4 *)(param_7 + 0x1c) = 0xaaa00;
    *(undefined8 *)(param_7 + 0x40) = 0;
    *(undefined8 *)(param_7 + 0x48) = 0;
    *(undefined8 *)(param_7 + 0x50) = 0;
    *(undefined8 *)(param_7 + 0x58) = 0;
    *(undefined8 *)(param_7 + 0x60) = 0;
    *(undefined8 *)(param_7 + 0x68) = 0;
  }
  if ((*(byte *)(param_7 + 10) >> 4 & 1) != 0) {
    afStack_108[0] = *(float *)(puVar2 + 1);
    fVar41 = *(float *)((long)puVar2 + 0x14);
    fVar23 = (float)*puVar2;
    fVar8 = (float)((ulong)*puVar2 >> 0x20);
    fVar61 = (float)*(undefined8 *)((long)puVar2 + 0xc);
    fVar22 = fVar61 - fVar23;
    fVar65 = (float)((ulong)*(undefined8 *)((long)puVar2 + 0xc) >> 0x20);
    fVar29 = fVar65 - fVar8;
    uVar42 = NEON_ext(CONCAT44(fVar29,fVar22),(ulong)(uint)(fVar41 - afStack_108[0]),4,1);
    auVar32._0_4_ = fVar53 - fVar71;
    auVar32._4_4_ = fVar55 - fVar72;
    auVar32._8_4_ = fVar57 - fVar73;
    auVar32._12_4_ = fVar38 - fVar40;
    fVar53 = fVar71 - fVar23;
    fVar56 = fVar72 - fVar8;
    fVar58 = fVar73 - afStack_108[0];
    auVar33._0_4_ = fVar61 - fVar23;
    auVar33._4_4_ = fVar65 - fVar8;
    auVar33._8_4_ = fVar41 - afStack_108[0];
    fVar41 = fVar41 - afStack_108[0];
    auVar50 = NEON_ext(auVar32,auVar32,4,1);
    auVar67._0_4_ = fVar53 * auVar33._0_4_;
    auVar67._4_4_ = fVar56 * auVar33._4_4_;
    auVar67._8_4_ = fVar58 * auVar33._8_4_;
    auVar67._12_4_ = (fVar40 - afStack_108[0]) * fVar41;
    fVar38 = auVar32._0_4_ * (float)uVar42 - auVar50._0_4_ * auVar33._0_4_;
    auVar68._0_8_ =
         CONCAT44(auVar32._4_4_ * (float)((ulong)uVar42 >> 0x20) - auVar50._4_4_ * auVar33._4_4_,
                  fVar38);
    auVar68._8_4_ = auVar32._8_4_ * fVar22 - auVar32._0_4_ * auVar33._8_4_;
    auVar68._12_4_ = auVar32._12_4_ * fVar29 - auVar32._4_4_ * fVar41;
    auVar43 = NEON_ext(auVar68,auVar68,4,1);
    uVar63 = NEON_ext(auVar43._0_8_,auVar68._0_8_,4,1);
    fVar55 = auVar43._0_4_;
    fVar57 = auVar43._4_4_;
    fVar29 = fVar55 * fVar55 + fVar57 * fVar57 + fVar38 * fVar38;
    fVar61 = fVar55 * fVar55 + fVar57 * fVar57 + fVar38 * fVar38;
    uVar42 = NEON_fmov(0x3f800000,4);
    iVar24 = -(uint)(fVar29 == 0.0);
    fVar22 = (float)((ulong)uVar42 >> 0x20);
    auVar49._0_4_ = auVar50._0_4_ * fVar55 - auVar32._0_4_ * (float)uVar63;
    auVar49._4_4_ = auVar50._4_4_ * fVar57 - auVar32._4_4_ * (float)((ulong)uVar63 >> 0x20);
    auVar49._8_4_ = auVar32._0_4_ * fVar38 - auVar32._8_4_ * fVar55;
    auVar49._12_4_ = auVar32._4_4_ * 0.0 - auVar32._12_4_ * fVar57;
    auVar43 = NEON_ext(auVar49,auVar49,4,1);
    uVar25 = CONCAT13(~(byte)((uint)iVar24 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar24 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar24 >> 8),~(byte)iVar24)));
    uVar48 = CONCAT44(fVar22 / fVar61,(float)uVar42 / fVar29) & CONCAT44(uVar25,uVar25);
    fVar55 = 0.0;
    fVar57 = 0.0;
    iVar60 = -(uint)(fVar29 == 0.0);
    iVar62 = -(uint)(fVar61 == 0.0);
    fVar38 = fVar53 * auVar43._0_4_;
    fVar29 = fVar56 * auVar43._4_4_;
    fVar61 = auVar32._0_4_ * auVar33._0_4_ + auVar32._4_4_ * auVar33._4_4_ +
             auVar32._8_4_ * auVar33._8_4_;
    fVar65 = auVar32._0_4_ * auVar33._0_4_ + auVar32._4_4_ * auVar33._4_4_ +
             auVar32._8_4_ * auVar33._8_4_;
    uVar63 = NEON_fminnm(CONCAT44((float)(uVar48 >> 0x20) *
                                  (fVar38 + fVar29 + fVar58 * auVar49._0_4_),
                                  (float)uVar48 * (fVar38 + fVar29 + fVar58 * auVar49._0_4_)),uVar42
                         ,4);
    auVar66._0_4_ = auVar32._0_4_ * auVar32._0_4_;
    auVar66._4_4_ = auVar32._4_4_ * auVar32._4_4_;
    auVar66._8_4_ = auVar32._8_4_ * auVar32._8_4_;
    auVar66._12_4_ = auVar32._12_4_ * auVar32._12_4_;
    uVar48 = NEON_fmax(uVar63,0,4);
    auVar51._0_4_ = auVar33._0_4_ * auVar33._0_4_;
    auVar51._4_4_ = auVar33._4_4_ * auVar33._4_4_;
    auVar51._8_4_ = auVar33._8_4_ * auVar33._8_4_;
    auVar51._12_4_ = fVar41 * fVar41;
    auVar54._0_4_ = auVar32._0_4_ * fVar53;
    auVar54._4_4_ = auVar32._4_4_ * fVar56;
    auVar54._8_4_ = auVar32._8_4_ * fVar58;
    auVar54._12_4_ = auVar32._12_4_ * (fVar40 - afStack_108[0]);
    auVar49 = NEON_ext(auVar51,auVar51,8,1);
    auVar68 = NEON_ext(auVar67,auVar67,8,1);
    auVar50 = NEON_ext(auVar66,auVar66,8,1);
    auVar43 = NEON_ext(auVar54,auVar54,8,1);
    fVar38 = auVar50._0_4_ + auVar66._0_4_ + auVar66._4_4_;
    fVar29 = auVar43._0_4_ + auVar54._0_4_ + auVar54._4_4_;
    fVar53 = auVar49._0_4_ + auVar51._0_4_ + auVar51._4_4_;
    fVar41 = auVar68._0_4_ + auVar67._0_4_ + auVar67._4_4_;
    auVar43 = NEON_fmov(0x3f800000,4);
    iVar24 = -(uint)(fVar53 == 0.0);
    iVar69 = -(uint)(fVar38 == 0.0);
    fVar53 = auVar43._0_4_ / fVar53;
    fVar38 = auVar43._8_4_ / fVar38;
    fVar40 = (float)CONCAT13((byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                             CONCAT12((byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                      CONCAT11((byte)((uint)fVar53 >> 8) &
                                               ~(byte)((uint)iVar24 >> 8),
                                               SUB41(fVar53,0) & ~(byte)iVar24)));
    fVar38 = (float)CONCAT13((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                             CONCAT12((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10),
                                      CONCAT11((byte)((uint)fVar38 >> 8) &
                                               ~(byte)((uint)iVar69 >> 8),
                                               SUB41(fVar38,0) & ~(byte)iVar69)));
    fVar53 = ((float)uVar48 * fVar61 - fVar29) * fVar38;
    fVar38 = ((float)(uVar48 >> 0x20) * fVar65 - fVar29) * fVar38;
    uVar63 = NEON_fminnm(CONCAT44(fVar38,fVar53),uVar42,4);
    uVar63 = NEON_fmax(uVar63,0,4);
    fVar29 = (float)uVar63;
    fVar56 = (float)((ulong)uVar63 >> 0x20);
    iVar24 = -(uint)(fVar29 == fVar53);
    iVar69 = -(uint)(fVar56 == fVar38);
    uVar63 = NEON_fminnm(CONCAT44((fVar56 * fVar65 + fVar41) * fVar40,
                                  (fVar29 * fVar61 + fVar41) * fVar40),uVar42,4);
    uVar64 = NEON_fmax(uVar63,0,4);
    uVar48 = uVar48 ^ (uVar48 ^ uVar64) &
                      CONCAT17(~(byte)((uint)iVar69 >> 0x18) | (byte)((uint)iVar62 >> 0x18),
                               CONCAT16(~(byte)((uint)iVar69 >> 0x10) | (byte)((uint)iVar62 >> 0x10)
                                        ,CONCAT15(~(byte)((uint)iVar69 >> 8) |
                                                  (byte)((uint)iVar62 >> 8),
                                                  CONCAT14(~(byte)iVar69 | (byte)iVar62,
                                                           CONCAT13(~(byte)((uint)iVar24 >> 0x18) |
                                                                    (byte)((uint)iVar60 >> 0x18),
                                                                    CONCAT12(~(byte)((uint)iVar24 >>
                                                                                    0x10) |
                                                                             (byte)((uint)iVar60 >>
                                                                                   0x10),
                                                                             CONCAT11(~(byte)((uint)
                                                  iVar24 >> 8) | (byte)((uint)iVar60 >> 8),
                                                  ~(byte)iVar24 | (byte)iVar60)))))));
    fVar38 = (float)uVar48;
    fVar23 = fVar23 + auVar33._0_4_ * fVar38;
    fVar8 = fVar8 + auVar33._4_4_ * (float)(uVar48 >> 0x20);
    afStack_108[0] = afStack_108[0] + auVar33._8_4_ * fVar38;
    fVar38 = fVar23 - (fVar71 + auVar32._0_4_ * fVar29);
    fVar53 = fVar8 - (fVar72 + auVar32._4_4_ * fVar56);
    fVar29 = afStack_108[0] - (fVar73 + auVar32._8_4_ * fVar29);
    fVar40 = fVar38 * fVar38 + fVar53 * fVar53 + fVar29 * fVar29;
    if (fVar40 < 1.4210855e-14) {
      auVar33._12_4_ = 0;
      auVar44._8_8_ = _UNK_03caaa68;
      auVar44._0_8_ = _DAT_03caaa60;
      auVar50 = a64_TBL(ZEXT816(0),auVar33,auVar44);
      auVar9._8_4_ = (int)_UNK_03cabbb8;
      auVar9._0_8_ = _DAT_03cabbb0;
      auVar9._12_4_ = (int)((ulong)_UNK_03cabbb8 >> 0x20);
      auVar43 = a64_TBL(ZEXT816(0),auVar33,auVar9);
      fVar53 = auVar43._0_4_;
      auVar52._0_4_ = fVar53 * fVar53;
      auVar52._4_4_ = auVar43._4_4_ * auVar43._4_4_;
      auVar52._8_4_ = auVar43._8_4_ * auVar43._8_4_;
      auVar52._12_4_ = auVar43._12_4_ * auVar43._12_4_;
      auVar68 = NEON_ext(auVar52,auVar52,8,1);
      fVar38 = auVar68._0_4_ + auVar68._4_4_;
      auVar45._4_12_ = auVar50._4_12_;
      auVar45._0_4_ = -auVar50._0_4_;
      auVar34._4_12_ = auVar43._4_12_;
      auVar34._0_4_ = -fVar53;
      uVar48 = CONCAT44(-(uint)(auVar51._0_4_ + auVar51._4_4_ <
                               auVar52._0_4_ + auVar52._4_4_ + fVar38),
                        -(uint)(auVar51._0_4_ + auVar51._4_4_ <
                               auVar52._0_4_ + auVar52._4_4_ + fVar38)) & 0x100000001;
      iVar24 = (int)uVar48;
      iVar69 = (int)(uVar48 >> 0x20);
      auVar10._4_4_ = (iVar69 << 0x1f) >> 0x1f;
      auVar10._0_4_ = (iVar24 << 0x1f) >> 0x1f;
      auVar10._8_4_ = (iVar24 << 0x1f) >> 0x1f;
      auVar10._12_4_ = (iVar69 << 0x1f) >> 0x1f;
      auVar34 = auVar34 ^ (auVar34 ^ auVar45) & ~auVar10;
      fVar29 = auVar34._0_4_;
      fVar40 = auVar34._4_4_;
      fVar41 = auVar34._8_4_;
      fVar71 = fVar29 * fVar29 + fVar40 * fVar40 + fVar41 * fVar41;
      fVar72 = fVar29 * fVar29 + fVar40 * fVar40 + fVar41 * fVar41;
      uVar48 = CONCAT44(-(uint)(fVar72 < 1.4210855e-14),-(uint)(fVar71 < 1.4210855e-14)) &
               0x100000001;
      iVar24 = (int)uVar48;
      auVar46._8_8_ = DAT_03cab628;
      auVar46._0_8_ = DAT_03cab620;
      fVar38 = 0.0;
      fVar53 = 0.0;
      if (fVar71 != 0.0) {
        fVar38 = (float)uVar42 / SQRT(fVar71);
        fVar53 = fVar22 / SQRT(fVar72);
      }
      auVar30._0_4_ = fVar29 * fVar38;
      auVar30._4_4_ = fVar40 * fVar53;
      auVar30._8_4_ = fVar41 * fVar38;
      auVar39._0_4_ = (iVar24 << 0x1f) >> 0x1f;
      auVar39._4_4_ = ((int)(uVar48 >> 0x20) << 0x1f) >> 0x1f;
      auVar39._8_4_ = (iVar24 << 0x1f) >> 0x1f;
      auVar31 = auVar30 ^ (auVar30 ^ auVar46._0_12_) & auVar39;
    }
    else {
      fVar55 = SQRT(fVar40);
      fVar57 = SQRT(fVar38 * fVar38 + fVar53 * fVar53 + fVar29 * fVar29);
      auVar31._0_4_ = fVar38 / fVar55;
      auVar31._4_4_ = fVar53 / fVar57;
      auVar31._8_4_ = fVar29 / fVar55;
    }
    fVar38 = fVar70 + fVar59;
    auVar26._0_4_ = fVar55 - fVar38;
    auVar26._4_4_ = fVar57 - fVar38;
    auVar26._8_8_ = 0;
    afStack_108[1] = auVar31._0_4_;
    afStack_108[2] = auVar31._4_4_;
    fVar38 = auVar31._8_4_;
    if ((float)*(undefined8 *)(param_4 + 0x18) <= auVar26._0_4_) {
      puVar19 = (undefined8 *)param_5[6];
      uVar42 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x48);
      auVar28._0_8_ =
           CONCAT44((int)(auVar26._4_4_ * (float)((ulong)uVar42 >> 0x20)),
                    (int)(auVar26._0_4_ * (float)uVar42));
      auVar28._8_8_ = auVar28._0_8_;
      auVar36._0_8_ =
           CONCAT26((short)(int)((*(float *)((long)puVar19 + 0x2c) * fVar38 +
                                 (float)((ulong)puVar19[1] >> 0x20) * afStack_108[1] +
                                 *(float *)((long)puVar19 + 0x1c) * afStack_108[2]) * 127.0) + 0x7f,
                    CONCAT24((short)(int)((*(float *)(puVar19 + 5) * fVar38 +
                                          (float)puVar19[1] * afStack_108[1] +
                                          *(float *)(puVar19 + 3) * afStack_108[2]) * 127.0) + 0x7f,
                             CONCAT22((short)(int)((*(float *)((long)puVar19 + 0x24) * fVar38 +
                                                   (float)((ulong)*puVar19 >> 0x20) * afStack_108[1]
                                                   + *(float *)((long)puVar19 + 0x14) *
                                                     afStack_108[2]) * 127.0) + 0x7f,
                                      (short)(int)((*(float *)(puVar19 + 4) * fVar38 +
                                                   (float)*puVar19 * afStack_108[1] +
                                                   *(float *)(puVar19 + 2) * afStack_108[2]) * 127.0
                                                  ) + 0x7f)));
      auVar36._8_8_ = auVar36._0_8_;
      uVar42 = NEON_sqxtun(auVar28._0_8_,auVar28,4);
      *(short *)(param_7 + 0xc) = (short)uVar42;
      uVar42 = NEON_sqxtun(uVar42,auVar36,2);
      *(int *)(param_7 + 0x18) = (int)uVar42;
      *(undefined1 *)(param_7 + 0x1b) = *(undefined1 *)(param_7 + 0x1b);
      if (*(byte *)(param_7 + 9) < 3) {
        return 0;
      }
      if (*(int *)(param_7 + 0x1c) != 0xaaa00) {
        lVar12 = *param_5;
        lVar13 = *param_6;
        local_110 = CONCAT44(local_110._4_4_,(int)param_5[3]);
        local_170 = CONCAT44(local_170._4_4_,(int)param_6[3]);
        lVar20 = *(long *)(param_2 + 0x40);
        uVar16 = *(uint *)(param_7 + 0x2c);
        if ((*(uint *)(lVar20 + 0x108) & uVar16) != 0) {
          lVar21 = 0;
          puVar19 = (undefined8 *)(lVar20 + 0x118);
          do {
            if ((*(uint *)(puVar19 + -1) & uVar16) != 0) {
              (**(code **)(*(long *)*puVar19 + 0x30))
                        ((long *)*puVar19,param_2,param_3,lVar12 + 0x50,lVar13 + 0x50,&local_110,
                         &local_170,param_7);
            }
            lVar21 = lVar21 + 1;
            puVar19 = puVar19 + 2;
          } while (lVar21 < *(int *)(lVar20 + 0x10c));
        }
        puVar18 = *(uint **)(param_7 + 0x20);
        if (puVar18 != (uint *)0x0) {
          plVar17 = *(long **)(param_4 + 0x68);
          puVar15 = (uint *)plVar17[3];
          if (puVar15 == puVar18) {
            iVar24 = (int)plVar17[4] + 1;
          }
          else {
            if ((puVar15 != (uint *)0x0) && (lVar13 = *plVar17, lVar13 != 0)) {
              uVar16 = *(uint *)(plVar17 + 4);
              if (uVar16 == (*puVar15 & 0xffff)) {
                puVar19 = (undefined8 *)plVar17[2];
                *(undefined8 *)(*(long *)(lVar13 + 0x10) + (long)(int)puVar15[1] * 8) = 0;
                *(undefined1 *)(lVar13 + 0xc) = 1;
                iVar24 = *(int *)(puVar19 + 0xb);
                lVar13 = puVar19[1];
                *(uint **)(lVar13 + (long)iVar24 * 8) = puVar15;
                *(int *)(puVar19 + 0xb) = iVar24 + 1;
                if (*(int *)((long)puVar19 + 0x5c) <= iVar24 + 1) {
                  (**(code **)(*(long *)*puVar19 + 0x28))
                            ((long *)*puVar19,lVar13 + (long)(iVar24 + -5) * 8,6);
                  *(int *)(puVar19 + 0xb) = iVar24 + -5;
                }
              }
              else {
                do {
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
                  if (bVar11) {
                    *puVar15 = *puVar15 - uVar16;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
            }
            iVar24 = 1;
            plVar17[3] = (long)puVar18;
          }
          *(int *)(plVar17 + 4) = iVar24;
        }
      }
      *(undefined1 *)(param_7 + 0x15) = 0;
      *(undefined4 *)(param_7 + 0x1c) = 0;
      *(undefined1 *)(param_7 + 0x1b) = 0;
      *(undefined1 *)(param_7 + 9) = 2;
      return 0;
    }
    auVar47._4_4_ = fVar38;
    auVar47._0_4_ = afStack_108[1];
    auVar47._8_4_ = afStack_108[1];
    auVar47._12_4_ = fVar38;
    auVar43 = NEON_ext(auVar47,auVar26,0xc,1);
    fVar8 = fVar8 - afStack_108[2] * fVar70;
    afStack_108[0] = afStack_108[0] - fVar38 * fVar70;
    local_110 = CONCAT26((short)((uint)fVar8 >> 0x10),
                         CONCAT24(SUB42(fVar8,0),fVar23 - afStack_108[1] * fVar70));
    uStack_fc = auVar43._0_8_;
    uVar48 = FUN_02f76100(param_2,param_3,param_5,param_6,(undefined1 (*) [16])(param_4 + 0x20),
                          &local_110,bVar5 < 3,param_7,param_8);
    if ((uVar48 & 1) != 0) {
      return 1;
    }
  }
  local_b4 = 0;
  fStack_154 = (float)*(undefined8 *)(param_4 + 0x18);
  uStack_188 = CONCAT44(*(undefined4 *)(puVar2 + 1),*(undefined4 *)(puVar2 + 1));
  local_190 = *puVar2;
  uStack_178 = CONCAT44(*(undefined4 *)((long)puVar2 + 0x14),*(undefined4 *)((long)puVar2 + 0x14));
  local_180 = *(undefined8 *)((long)puVar2 + 0xc);
  fStack_134 = fStack_154;
  fStack_114 = fStack_154;
  FUN_031bfcac(fVar70,fVar59,&local_190,&local_b0,&local_170);
  pfVar14 = (float *)param_5[6];
  fVar40 = (float)*(undefined8 *)(pfVar14 + 10);
  fVar8 = *pfVar14;
  fVar55 = pfVar14[1];
  fVar57 = pfVar14[2];
  fVar22 = pfVar14[4];
  fVar53 = pfVar14[5];
  fVar29 = pfVar14[6];
  fVar38 = (float)*(undefined8 *)(pfVar14 + 8);
  fVar23 = (float)((ulong)*(undefined8 *)(pfVar14 + 8) >> 0x20);
  fVar59 = fVar38 * fStack_158 + fVar8 * local_160 + fVar22 * fStack_15c;
  fVar70 = fVar23 * fStack_158 + fVar55 * local_160 + fVar53 * fStack_15c;
  fVar71 = fVar40 * fStack_158 + fVar57 * local_160 + fVar29 * fStack_15c;
  fVar72 = (float)((ulong)*(undefined8 *)(pfVar14 + 10) >> 0x20) * fStack_158 +
           pfVar14[3] * local_160 + pfVar14[7] * fStack_15c;
  fVar41 = (float)*(undefined8 *)(param_4 + 0x18);
  if (fVar41 <= fStack_154) {
    uVar42 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x48);
    auVar35._0_8_ =
         CONCAT44((int)((float)((ulong)uVar42 >> 0x20) * fStack_154),
                  (int)((float)uVar42 * fStack_154));
    auVar35._8_8_ = auVar35._0_8_;
    auVar27._0_8_ =
         CONCAT26((short)(int)(fVar72 * 127.0) + 0x7f,
                  CONCAT24((short)(int)(fVar71 * 127.0) + 0x7f,
                           CONCAT22((short)(int)(fVar70 * 127.0) + 0x7f,
                                    (short)(int)(fVar59 * 127.0) + 0x7f)));
    auVar27._8_8_ = auVar27._0_8_;
    uVar42 = NEON_sqxtun(auVar35._0_8_,auVar35,4);
    *(short *)(param_7 + 0xc) = (short)uVar42;
    uVar42 = NEON_sqxtun(auVar27._0_8_,auVar27,2);
    *(int *)(param_7 + 0x18) = (int)uVar42;
    *(undefined1 *)(param_7 + 0x1b) = *(undefined1 *)(param_7 + 0x1b);
    if (2 < *(byte *)(param_7 + 9)) {
      if (*(int *)(param_7 + 0x1c) != 0xaaa00) {
        local_88[0] = (undefined4)param_5[3];
        lVar12 = *param_5;
        lVar13 = *param_6;
        local_90[0] = (undefined4)param_6[3];
        lVar20 = *(long *)(param_2 + 0x40);
        uVar16 = *(uint *)(param_7 + 0x2c);
        if ((*(uint *)(lVar20 + 0x108) & uVar16) != 0) {
          lVar21 = 0;
          puVar19 = (undefined8 *)(lVar20 + 0x118);
          do {
            if ((*(uint *)(puVar19 + -1) & uVar16) != 0) {
              (**(code **)(*(long *)*puVar19 + 0x30))
                        ((long *)*puVar19,param_2,param_3,lVar12 + 0x50,lVar13 + 0x50,local_88,
                         local_90,param_7);
            }
            lVar21 = lVar21 + 1;
            puVar19 = puVar19 + 2;
          } while (lVar21 < *(int *)(lVar20 + 0x10c));
        }
        puVar18 = *(uint **)(param_7 + 0x20);
        if (puVar18 != (uint *)0x0) {
          plVar17 = *(long **)(param_4 + 0x68);
          puVar15 = (uint *)plVar17[3];
          if (puVar15 == puVar18) {
            iVar24 = (int)plVar17[4] + 1;
          }
          else {
            if ((puVar15 != (uint *)0x0) && (lVar13 = *plVar17, lVar13 != 0)) {
              uVar16 = *(uint *)(plVar17 + 4);
              if (uVar16 == (*puVar15 & 0xffff)) {
                puVar19 = (undefined8 *)plVar17[2];
                *(undefined8 *)(*(long *)(lVar13 + 0x10) + (long)(int)puVar15[1] * 8) = 0;
                *(undefined1 *)(lVar13 + 0xc) = 1;
                iVar24 = *(int *)(puVar19 + 0xb);
                lVar13 = puVar19[1];
                *(uint **)(lVar13 + (long)iVar24 * 8) = puVar15;
                *(int *)(puVar19 + 0xb) = iVar24 + 1;
                if (*(int *)((long)puVar19 + 0x5c) <= iVar24 + 1) {
                  (**(code **)(*(long *)*puVar19 + 0x28))
                            ((long *)*puVar19,lVar13 + (long)(iVar24 + -5) * 8,6);
                  *(int *)(puVar19 + 0xb) = iVar24 + -5;
                }
              }
              else {
                do {
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
                  if (bVar11) {
                    *puVar15 = *puVar15 - uVar16;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
            }
            iVar24 = 1;
            plVar17[3] = (long)puVar18;
          }
          *(int *)(plVar17 + 4) = iVar24;
        }
      }
      *(undefined1 *)(param_7 + 0x15) = 0;
      *(undefined4 *)(param_7 + 0x1c) = 0;
      *(undefined1 *)(param_7 + 0x1b) = 0;
      *(undefined1 *)(param_7 + 9) = 2;
    }
    return 0;
  }
  bVar11 = fStack_154 < fVar41;
  uStack_c8 = CONCAT44(fVar72,fVar71);
  local_d0 = CONCAT44(fVar70,fVar59);
  if (bVar11) {
    fVar59 = (float)local_170;
    fVar70 = (float)((ulong)local_170 >> 0x20);
    auVar43 = *(undefined1 (*) [16])(pfVar14 + 0x10);
    afStack_108[0] =
         pfVar14[0xe] +
         auVar43._8_4_ + fVar40 * puStack_168._0_4_ + fVar57 * fVar59 + fVar29 * fVar70;
    afStack_108[1] = fStack_154;
    local_110 = CONCAT44(pfVar14[0xd] +
                         auVar43._4_4_ +
                         fVar23 * puStack_168._0_4_ + fVar55 * fVar59 + fVar53 * fVar70,
                         pfVar14[0xc] +
                         auVar43._0_4_ +
                         fVar38 * puStack_168._0_4_ + fVar8 * fVar59 + fVar22 * fVar70);
  }
  uVar48 = (ulong)bVar11;
  if (fStack_134 < fVar41) {
    fVar71 = (float)local_150;
    fVar72 = (float)((ulong)local_150 >> 0x20);
    fVar59 = pfVar14[0xc];
    fVar70 = pfVar14[0xd];
    auVar43 = *(undefined1 (*) [16])(pfVar14 + 0x10);
    *(ulong *)(afStack_108 + uVar48 * 4) =
         CONCAT44(fStack_134,
                  pfVar14[0xe] +
                  auVar43._8_4_ + fVar40 * fStack_148 + fVar57 * fVar71 + fVar29 * fVar72);
    *(ulong *)(afStack_108 + uVar48 * 4 + -2) =
         CONCAT44(fVar70 + auVar43._4_4_ + fVar23 * fStack_148 + fVar55 * fVar71 + fVar53 * fVar72,
                  fVar59 + auVar43._0_4_ + fVar38 * fStack_148 + fVar8 * fVar71 + fVar22 * fVar72);
    uVar48 = (ulong)(bVar11 + 1);
  }
  uVar16 = (uint)uVar48;
  if (fStack_114 < fVar41) {
    fVar70 = local_130._0_4_;
    fVar71 = local_130._4_4_;
    fVar72 = local_130._8_4_;
    uVar42 = *(undefined8 *)(pfVar14 + 0xc);
    fVar41 = pfVar14[0x10];
    fVar59 = pfVar14[0x11];
    afStack_108[uVar48 * 4] =
         (float)*(undefined8 *)(pfVar14 + 0xe) +
         pfVar14[0x12] + fVar40 * fVar72 + fVar57 * fVar70 + fVar29 * fVar71;
    afStack_108[uVar48 * 4 + 1] = fStack_114;
    afStack_108[uVar48 * 4 + -2] =
         (float)uVar42 + fVar41 + fVar38 * fVar72 + fVar8 * fVar70 + fVar22 * fVar71;
    afStack_108[uVar48 * 4 + -1] =
         (float)((ulong)uVar42 >> 0x20) +
         fVar59 + fVar23 * fVar72 + fVar55 * fVar70 + fVar53 * fVar71;
    uVar16 = uVar16 + 1;
  }
  local_b8 = 0x1c71;
  *(undefined2 *)(param_7 + 0x94) = 0x1c71;
  *(undefined8 *)(param_8 + 6) = uStack_c8;
  *(undefined8 *)(param_8 + 4) = local_d0;
  *(undefined8 *)(param_8 + 10) = uStack_c8;
  *(undefined8 *)(param_8 + 8) = local_d0;
  uVar6 = *(ushort *)(param_7 + 10);
  if ((uVar6 & 4) != 0) {
    uVar16 = 1;
  }
  uVar48 = (ulong)uVar16;
  param_8[0xe] = 0x7f7fffee;
  param_8[0xf] = 0x7f7fffee;
  param_8[0xc] = 0x7f7fffee;
  param_8[0xd] = 0x7f7fffee;
  param_8[0x12] = (uint)afStack_108[0];
  param_8[0x13] = (uint)afStack_108[1];
  param_8[0x10] = (uint)local_110;
  param_8[0x11] = local_110._4_4_;
  uVar42 = CONCAT44(afStack_108[1],afStack_108[1]);
  *(undefined1 *)(param_7 + 0x96) = 0x1c;
  *(char *)(param_7 + 0x2b) = (char)uVar16;
  *param_8 = uVar16;
  param_8[0xc] = (uint)afStack_108[1];
  if (1 < uVar16) {
    lVar13 = 0;
    do {
      auVar43 = *(undefined1 (*) [16])(afStack_108 + lVar13 * 4 + 2);
      *(long *)(param_8 + lVar13 * 4 + 0x14 + 2) = auVar43._8_8_;
      *(long *)(param_8 + lVar13 * 4 + 0x14) = auVar43._0_8_;
      uVar42 = NEON_fmin(uVar42,CONCAT26(auVar43._14_2_,CONCAT24(auVar43._12_2_,auVar43._12_4_)),4);
      lVar12 = lVar13 + 1;
      param_8[lVar13 + 0xd] = auVar43._12_4_;
      lVar13 = lVar12;
    } while (uVar48 - 1 != lVar12);
    if (3 < uVar16) goto LAB_02f72f08;
  }
  if ((uVar16 & 1) == 0) {
    uVar64 = uVar48;
  }
  else {
    uVar64 = uVar48 + 1;
    param_8[uVar48 * 4 + 0x12] = 0x7fc00000;
    param_8[uVar48 * 4 + 0x13] = 0x7fc00000;
    (param_8 + uVar48 * 4 + 0x10)[0] = 0x7fc00000;
    (param_8 + uVar48 * 4 + 0x10)[1] = 0x7fc00000;
    param_8[uVar48 + 0xc] = 0x7f7fffee;
  }
  if (uVar16 != 3) {
    iVar24 = (int)uVar64 + -4;
    puVar18 = param_8 + uVar64 + 0xd;
    puVar15 = param_8 + uVar64 * 4 + 0x14;
    do {
      puVar15[-2] = 0x7fc00000;
      puVar15[-1] = 0x7fc00000;
      puVar15[-4] = 0x7fc00000;
      puVar15[-3] = 0x7fc00000;
      iVar24 = iVar24 + 2;
      puVar18[-1] = 0x7f7fffee;
      puVar15[2] = 0x7fc00000;
      puVar15[3] = 0x7fc00000;
      puVar15[0] = 0x7fc00000;
      puVar15[1] = 0x7fc00000;
      *puVar18 = 0x7f7fffee;
      puVar18 = puVar18 + 2;
      puVar15 = puVar15 + 8;
    } while (iVar24 != 0);
  }
LAB_02f72f08:
  param_8[1] = (uint)uVar42;
  uVar42 = *(undefined8 *)(param_4 + 0x10);
  *(long *)(param_8 + 0x26) = param_7;
  auVar37._0_12_ = SUB1612(*(undefined1 (*) [16])(param_8 + 0x10),0);
  auVar37._12_4_ = (float)param_8[0xc] + (float)uVar42;
  *(long *)(param_8 + 0x22) = auVar37._8_8_;
  *(long *)(param_8 + 0x20) = SUB168(*(undefined1 (*) [16])(param_8 + 0x10),0);
  lVar13 = param_5[2];
  lVar12 = param_6[2];
  *(long *)(param_8 + 0x2a) = lVar13;
  *(long *)(param_8 + 0x2c) = lVar12;
  uVar16 = *(uint *)(param_6 + 3);
  param_8[0x28] = *(uint *)(param_5 + 3);
  param_8[0x29] = uVar16;
  *(byte *)((long)param_8 + 0x91) = (byte)(uVar6 >> 6) & 1;
  *(undefined1 *)(param_8 + 0x24) = 0;
  *(undefined1 *)((long)param_8 + 0x95) = 0;
  *(undefined1 *)((long)param_8 + 0x93) = 0;
  uVar16 = *(uint *)(lVar12 + 0x14) | *(uint *)(lVar13 + 0x14);
  iVar24 = *(int *)(param_7 + 0x1c);
  param_8[0x2f] = uVar16;
  if (iVar24 == 0xaaa00) {
    uVar16 = *(uint *)(*param_5 + 0x54) | uVar16 | *(uint *)(*param_6 + 0x54);
    bVar5 = *(byte *)(param_7 + 0xe) & 3;
    uVar3 = *(uint *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_5[1] + 0x58) * 0x70 + 4);
    uVar4 = *(uint *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_6[1] + 0x58) * 0x70 + 4);
    if (bVar5 == 1) {
      uVar16 = uVar16 & 0xffffff7f;
    }
    else if (bVar5 == 2) {
      uVar16 = uVar16 | 0x80;
    }
    if (*(long *)(param_2 + 8) != 0) {
      uVar16 = *(uint *)(*(long *)(param_2 + 8) + 0x81c) | uVar16;
    }
    *(undefined2 *)((long)param_8 + 0x92) = 0x101;
    *(undefined4 *)(param_7 + 0x1c) = 0;
    *(uint *)(param_7 + 0x2c) = uVar4 | uVar3 | uVar16 | *(uint *)(param_7 + 0x2c);
    FUN_02f526d4(param_7,lVar13,lVar12,param_5[5],param_6[5]);
    lVar13 = *(long *)(param_2 + 0x40);
    uVar16 = *(uint *)(param_7 + 0x2c);
    if ((*(uint *)(lVar13 + 0x108) & uVar16) != 0) {
      lVar12 = 0;
      puVar19 = (undefined8 *)(lVar13 + 0x118);
      local_170 = param_7;
      puStack_168 = param_8;
      do {
        if ((*(uint *)(puVar19 + -1) & uVar16) != 0) {
          (**(code **)(*(long *)*puVar19 + 0x20))
                    ((long *)*puVar19,param_2,param_3,param_5,param_6,&local_170);
        }
        lVar12 = lVar12 + 1;
        puVar19 = puVar19 + 2;
      } while (lVar12 < *(int *)(lVar13 + 0x10c));
    }
  }
  return 1;
}


