/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9e164; name: FUN_01f9e164
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01f9e164(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  long lVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar23;
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar26;
  float fVar32;
  float fVar33;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar35;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  undefined1 auVar65 [16];
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  undefined1 auVar76 [16];
  int iVar77;
  int iVar78;
  int iVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined1 auVar84 [16];
  long *local_40;
  long *local_38;
  
  FUN_00c9e664(&local_40,param_1 + 0xe8);
  puVar11 = (undefined8 *)(**(code **)(*(long *)local_38[9] + 0x68))();
  fVar24 = (float)puVar11[1];
  fVar25 = (float)((ulong)puVar11[1] >> 0x20);
  fVar18 = (float)*puVar11;
  fVar23 = (float)((ulong)*puVar11 >> 0x20);
  uVar83 = puVar11[3];
  uVar82 = puVar11[2];
  uVar81 = puVar11[5];
  uVar80 = puVar11[4];
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
    do {
      lVar10 = *plVar1;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  fVar26 = (float)uVar82;
  fVar32 = (float)((ulong)uVar82 >> 0x20);
  fVar33 = (float)uVar83;
  fVar34 = (float)((ulong)uVar83 >> 0x20);
  auVar12._0_4_ = fVar18 * fVar18 + fVar23 * fVar23;
  auVar12._4_4_ = fVar24 * fVar24 + fVar25 * fVar25;
  auVar12._8_4_ = fVar18 * fVar18 + fVar23 * fVar23;
  auVar12._12_4_ = fVar24 * fVar24 + fVar25 * fVar25;
  auVar13._0_4_ = fVar26 * fVar26 + fVar32 * fVar32;
  auVar13._4_4_ = fVar33 * fVar33 + fVar34 * fVar34;
  auVar13._8_4_ = fVar26 * fVar26 + fVar32 * fVar32;
  auVar13._12_4_ = fVar33 * fVar33 + fVar34 * fVar34;
  fVar35 = (float)uVar80;
  fVar42 = (float)((ulong)uVar80 >> 0x20);
  fVar43 = (float)uVar81;
  fVar44 = (float)((ulong)uVar81 >> 0x20);
  fVar44 = fVar44 * fVar44;
  auVar19 = NEON_ext(auVar12,auVar12,4,1);
  auVar14._0_4_ = fVar35 * fVar35 + fVar42 * fVar42;
  auVar14._4_4_ = fVar43 * fVar43 + fVar44;
  auVar14._8_4_ = fVar35 * fVar35 + fVar42 * fVar42;
  auVar14._12_4_ = fVar43 * fVar43 + fVar44;
  auVar36 = NEON_ext(auVar14,auVar14,4,1);
  auVar27 = NEON_ext(auVar13,auVar13,4,1);
  auVar84 = NEON_fmov(0x3f800000,4);
  auVar15._0_4_ = auVar19._0_4_ + auVar19._4_4_;
  auVar15._4_4_ = auVar19._8_4_ + auVar19._12_4_;
  auVar15._8_4_ = auVar19._0_4_ + auVar19._4_4_;
  auVar15._12_4_ = auVar19._8_4_ + auVar19._12_4_;
  auVar16._0_4_ = auVar27._0_4_ + auVar27._4_4_;
  auVar16._4_4_ = auVar27._8_4_ + auVar27._12_4_;
  auVar16._8_4_ = auVar27._0_4_ + auVar27._4_4_;
  auVar16._12_4_ = auVar27._8_4_ + auVar27._12_4_;
  auVar19 = NEON_frsqrte(auVar15,4);
  auVar17._0_4_ = auVar36._0_4_ + auVar36._4_4_;
  auVar17._4_4_ = auVar36._8_4_ + auVar36._12_4_;
  auVar17._8_4_ = auVar36._0_4_ + auVar36._4_4_;
  auVar17._12_4_ = auVar36._8_4_ + auVar36._12_4_;
  auVar27 = NEON_frsqrte(auVar16,4);
  auVar70._0_4_ = auVar15._0_4_ * auVar19._0_4_;
  auVar70._4_4_ = auVar15._4_4_ * auVar19._4_4_;
  auVar70._8_4_ = auVar15._8_4_ * auVar19._8_4_;
  auVar70._12_4_ = auVar15._12_4_ * auVar19._12_4_;
  auVar73._0_4_ = auVar16._0_4_ * auVar27._0_4_;
  auVar73._4_4_ = auVar16._4_4_ * auVar27._4_4_;
  auVar73._8_4_ = auVar16._8_4_ * auVar27._8_4_;
  auVar73._12_4_ = auVar16._12_4_ * auVar27._12_4_;
  auVar36 = NEON_frsqrts(auVar19,auVar70,4);
  auVar76 = NEON_frsqrte(auVar17,4);
  auVar74 = NEON_frsqrts(auVar27,auVar73,4);
  auVar45._0_4_ = auVar19._0_4_ * auVar36._0_4_;
  auVar45._4_4_ = auVar19._4_4_ * auVar36._4_4_;
  auVar45._8_4_ = auVar19._8_4_ * auVar36._8_4_;
  auVar45._12_4_ = auVar19._12_4_ * auVar36._12_4_;
  auVar71._0_4_ = auVar17._0_4_ * auVar76._0_4_;
  auVar71._4_4_ = auVar17._4_4_ * auVar76._4_4_;
  auVar71._8_4_ = auVar17._8_4_ * auVar76._8_4_;
  auVar71._12_4_ = auVar17._12_4_ * auVar76._12_4_;
  iVar4 = -(uint)(auVar15._0_4_ == 0.0);
  iVar5 = -(uint)(auVar15._4_4_ == 0.0);
  iVar6 = -(uint)(auVar15._8_4_ == 0.0);
  iVar7 = -(uint)(auVar15._12_4_ == 0.0);
  auVar36 = NEON_frsqrts(auVar76,auVar71,4);
  auVar65._0_4_ = auVar27._0_4_ * auVar74._0_4_;
  auVar65._4_4_ = auVar27._4_4_ * auVar74._4_4_;
  auVar65._8_4_ = auVar27._8_4_ * auVar74._8_4_;
  auVar65._12_4_ = auVar27._12_4_ * auVar74._12_4_;
  auVar20._0_4_ = auVar15._0_4_ * auVar45._0_4_;
  auVar20._4_4_ = auVar15._4_4_ * auVar45._4_4_;
  auVar20._8_4_ = auVar15._8_4_ * auVar45._8_4_;
  auVar20._12_4_ = auVar15._12_4_ * auVar45._12_4_;
  iVar66 = -(uint)(auVar16._0_4_ == 0.0);
  iVar67 = -(uint)(auVar16._4_4_ == 0.0);
  iVar68 = -(uint)(auVar16._8_4_ == 0.0);
  iVar69 = -(uint)(auVar16._12_4_ == 0.0);
  auVar19 = NEON_frsqrts(auVar45,auVar20,4);
  auVar28._0_4_ = auVar16._0_4_ * auVar65._0_4_;
  auVar28._4_4_ = auVar16._4_4_ * auVar65._4_4_;
  auVar28._8_4_ = auVar16._8_4_ * auVar65._8_4_;
  auVar28._12_4_ = auVar16._12_4_ * auVar65._12_4_;
  auVar72._0_4_ = auVar76._0_4_ * auVar36._0_4_;
  auVar72._4_4_ = auVar76._4_4_ * auVar36._4_4_;
  auVar72._8_4_ = auVar76._8_4_ * auVar36._8_4_;
  auVar72._12_4_ = auVar76._12_4_ * auVar36._12_4_;
  iVar77 = -(uint)(auVar17._0_4_ == 0.0);
  iVar78 = -(uint)(auVar17._4_4_ == 0.0);
  iVar79 = -(uint)(auVar17._8_4_ == 0.0);
  auVar27 = NEON_frsqrts(auVar65,auVar28,4);
  auVar37._0_4_ = auVar17._0_4_ * auVar72._0_4_;
  auVar37._4_4_ = auVar17._4_4_ * auVar72._4_4_;
  auVar37._8_4_ = auVar17._8_4_ * auVar72._8_4_;
  auVar37._12_4_ = auVar17._12_4_ * auVar72._12_4_;
  auVar36 = NEON_frsqrts(auVar72,auVar37,4);
  fVar18 = fVar18 * auVar45._0_4_ * auVar19._0_4_;
  fVar23 = fVar23 * auVar45._4_4_ * auVar19._4_4_;
  fVar24 = fVar24 * auVar45._8_4_ * auVar19._8_4_;
  fVar25 = fVar25 * auVar45._12_4_ * auVar19._12_4_;
  bVar49 = SUB41(fVar18,0) & ~(byte)iVar4;
  bVar50 = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar4 >> 8);
  bVar51 = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10);
  bVar52 = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18);
  bVar53 = SUB41(fVar23,0) & ~(byte)iVar5;
  bVar54 = (byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar5 >> 8);
  bVar55 = (byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10);
  bVar56 = (byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18);
  bVar57 = SUB41(fVar24,0) & ~(byte)iVar6;
  bVar58 = (byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar6 >> 8);
  bVar59 = (byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10);
  bVar60 = (byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18);
  bVar61 = SUB41(fVar25,0) & ~(byte)iVar7;
  bVar62 = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar7 >> 8);
  bVar63 = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
  bVar64 = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
  fVar26 = fVar26 * auVar65._0_4_ * auVar27._0_4_;
  fVar32 = fVar32 * auVar65._4_4_ * auVar27._4_4_;
  fVar33 = fVar33 * auVar65._8_4_ * auVar27._8_4_;
  fVar34 = fVar34 * auVar65._12_4_ * auVar27._12_4_;
  fVar18 = (float)CONCAT13(bVar52,CONCAT12(bVar51,CONCAT11(bVar50,bVar49)));
  fVar23 = (float)CONCAT13(bVar56,CONCAT12(bVar55,CONCAT11(bVar54,bVar53)));
  auVar76._0_8_ =
       CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                CONCAT16((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10),
                         CONCAT15((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar67 >> 8),
                                  CONCAT14(SUB41(fVar32,0) & ~(byte)iVar67,
                                           CONCAT13((byte)((uint)fVar26 >> 0x18) &
                                                    ~(byte)((uint)iVar66 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                                             ~(byte)((uint)iVar66 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar26 >> 8) &
                                                                      ~(byte)((uint)iVar66 >> 8),
                                                                      SUB41(fVar26,0) &
                                                                      ~(byte)iVar66)))))));
  auVar76[8] = SUB41(fVar33,0) & ~(byte)iVar68;
  auVar76[9] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar68 >> 8);
  auVar76[10] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
  auVar76[0xb] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
  auVar76[0xc] = SUB41(fVar34,0) & ~(byte)iVar69;
  auVar76[0xd] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar69 >> 8);
  auVar76[0xe] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
  auVar76[0xf] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
  fVar35 = fVar35 * auVar72._0_4_ * auVar36._0_4_;
  fVar42 = fVar42 * auVar72._4_4_ * auVar36._4_4_;
  fVar43 = fVar43 * auVar72._8_4_ * auVar36._8_4_;
  fVar25 = (float)((ulong)auVar76._0_8_ >> 0x20);
  fVar24 = (float)CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,bVar57)));
  fVar26 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18),
                           CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10),
                                    CONCAT11((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar77 >> 8),
                                             SUB41(fVar35,0) & ~(byte)iVar77)));
  fVar32 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18),
                           CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10),
                                    CONCAT11((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar79 >> 8),
                                             SUB41(fVar43,0) & ~(byte)iVar79)));
  fVar33 = auVar84._0_4_ + (float)_DAT_03cab3a0 * fVar18 + (float)_DAT_03cac210 * fVar25 +
           (float)_DAT_03cabb00 * fVar32;
  fVar34 = auVar84._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar18 +
           (float)((ulong)_DAT_03cac210 >> 0x20) * fVar25 +
           (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar32;
  fVar35 = auVar84._8_4_ + (float)_UNK_03cab3a8 * fVar18 + (float)_UNK_03cac218 * fVar25 +
           (float)_UNK_03cabb08 * fVar32;
  fVar32 = auVar84._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar18 +
           (float)((ulong)_UNK_03cac218 >> 0x20) * fVar25 +
           (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar32;
  fVar25 = (float)(CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                            CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10),
                                     CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar78 >> 8)
                                              ,CONCAT14(SUB41(fVar42,0) & ~(byte)iVar78,fVar26))))
                  >> 0x20);
  auVar19 = NEON_fmov(0x40800000,4);
  auVar21._0_4_ = SQRT(fVar33) * 0.5 * auVar19._0_4_;
  auVar21._4_4_ = SQRT(fVar34) * 0.5 * auVar19._4_4_;
  auVar21._8_4_ = SQRT(fVar35) * 0.5 * auVar19._8_4_;
  auVar21._12_4_ = SQRT(fVar32) * 0.5 * auVar19._12_4_;
  auVar19 = NEON_frecpe(auVar21,4);
  auVar27 = NEON_frecps(auVar19,auVar21,4);
  auVar29._0_4_ = auVar19._0_4_ * auVar27._0_4_;
  auVar29._4_4_ = auVar19._4_4_ * auVar27._4_4_;
  auVar29._8_4_ = auVar19._8_4_ * auVar27._8_4_;
  auVar29._12_4_ = auVar19._12_4_ * auVar27._12_4_;
  auVar38._4_4_ = fVar34;
  auVar38._0_4_ = fVar34;
  auVar38._8_4_ = fVar34;
  auVar38._12_4_ = fVar34;
  auVar19 = NEON_frecps(auVar29,auVar21,4);
  auVar84._0_8_ = CONCAT44(auVar29._4_4_ * auVar19._4_4_,auVar29._0_4_ * auVar19._0_4_);
  auVar84._8_4_ = auVar29._8_4_ * auVar19._8_4_;
  auVar84._12_4_ = auVar29._12_4_ * auVar19._12_4_;
  auVar36 = NEON_ext(auVar76,auVar76,8,1);
  auVar19[1] = bVar50;
  auVar19[0] = bVar49;
  auVar19[2] = bVar51;
  auVar19[3] = bVar52;
  auVar19[4] = bVar53;
  auVar19[5] = bVar54;
  auVar19[6] = bVar55;
  auVar19[7] = bVar56;
  auVar19[8] = bVar57;
  auVar19[9] = bVar58;
  auVar19[10] = bVar59;
  auVar19[0xb] = bVar60;
  auVar19[0xc] = bVar61;
  auVar19[0xd] = bVar62;
  auVar19[0xe] = bVar63;
  auVar19[0xf] = bVar64;
  auVar27[1] = bVar50;
  auVar27[0] = bVar49;
  auVar27[2] = bVar51;
  auVar27[3] = bVar52;
  auVar27[4] = bVar53;
  auVar27[5] = bVar54;
  auVar27[6] = bVar55;
  auVar27[7] = bVar56;
  auVar27[8] = bVar57;
  auVar27[9] = bVar58;
  auVar27[10] = bVar59;
  auVar27[0xb] = bVar60;
  auVar27[0xc] = bVar61;
  auVar27[0xd] = bVar62;
  auVar27[0xe] = bVar63;
  auVar27[0xf] = bVar64;
  auVar19 = NEON_ext(auVar19,auVar27,8,1);
  fVar18 = auVar36._0_4_;
  auVar30._4_4_ = fVar33;
  auVar30._0_4_ = fVar33;
  auVar30._8_4_ = fVar33;
  auVar30._12_4_ = fVar33;
  auVar36._4_4_ = -(uint)(fVar33 <= fVar34);
  auVar36._0_4_ = -(uint)(fVar33 <= fVar34);
  auVar36._8_4_ = -(uint)(fVar33 <= fVar34);
  auVar36._12_4_ = -(uint)(fVar33 <= fVar34);
  auVar30 = auVar30 ^ (auVar30 ^ auVar38) & auVar36;
  auVar74._0_8_ = CONCAT44(fVar35,fVar35);
  auVar74._8_4_ = fVar35;
  auVar74._12_4_ = fVar35;
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x60))();
    auVar74._8_8_ = auVar74._8_8_;
    auVar76._8_8_ = auVar76._8_8_;
    auVar84._8_8_ = auVar84._8_8_;
  }
  auVar22._0_4_ = -(uint)(auVar30._0_4_ <= auVar74._0_4_);
  auVar22._4_4_ = -(uint)(auVar30._4_4_ <= auVar74._4_4_);
  auVar22._8_4_ = -(uint)(auVar30._8_4_ <= auVar74._8_4_);
  auVar22._12_4_ = -(uint)(auVar30._12_4_ <= auVar74._12_4_);
  auVar30 = auVar30 ^ (auVar30 ^ auVar74) & auVar22;
  auVar31._0_4_ = -(uint)(auVar30._0_4_ <= fVar32);
  auVar31._4_4_ = -(uint)(auVar30._4_4_ <= fVar32);
  auVar31._8_4_ = -(uint)(auVar30._8_4_ <= fVar32);
  auVar31._12_4_ = -(uint)(auVar30._12_4_ <= fVar32);
  fVar75 = auVar76._0_4_;
  fVar42 = auVar19._0_4_ + fVar26;
  auVar9._8_4_ = fVar18 + -fVar25;
  auVar9._4_4_ = fVar42;
  fVar43 = fVar26 + -fVar24;
  fVar44 = auVar84._0_4_;
  auVar9._0_4_ = ((float)CONCAT13(bVar56,CONCAT12(bVar55,CONCAT11(bVar54,bVar53))) + fVar75) *
                 fVar44;
  auVar39._0_8_ = auVar9._0_8_ << 0x20;
  auVar39._8_4_ = fVar42 * fVar44;
  auVar39._12_4_ = (fVar18 + -fVar25) * fVar44;
  fVar42 = fVar23 - fVar75;
  auVar40._4_12_ = auVar39._4_12_;
  auVar40._0_4_ = SQRT(fVar33) * 0.5;
  fVar44 = auVar84._4_4_;
  auVar46._0_4_ = (fVar23 + fVar75) * fVar44;
  auVar46._4_4_ = fVar44 * 0.0;
  auVar46._8_4_ = (fVar18 + fVar25) * fVar44;
  auVar46._12_4_ =
       (float)(CONCAT17((char)((uint)fVar43 >> 0x18),
                        CONCAT16((char)((uint)fVar43 >> 0x10),
                                 CONCAT15((char)((uint)fVar43 >> 8),
                                          CONCAT14(SUB41(fVar43,0),fVar18 + fVar25)))) >> 0x20) *
       fVar44;
  auVar47._8_8_ = auVar46._8_8_;
  auVar47._4_4_ = SQRT(fVar34) * 0.5;
  auVar47._0_4_ = auVar46._0_4_;
  auVar8._4_4_ = -(uint)(fVar33 <= fVar34);
  auVar8._0_4_ = -(uint)(fVar33 <= fVar34);
  auVar8._8_4_ = -(uint)(fVar33 <= fVar34);
  auVar8._12_4_ = -(uint)(fVar33 <= fVar34);
  auVar40 = auVar40 ^ (auVar40 ^ auVar47) & auVar8;
  fVar23 = auVar84._8_4_;
  auVar48._0_4_ = (auVar19._0_4_ + fVar26) * fVar23;
  auVar48._4_4_ = (fVar18 + fVar25) * fVar23;
  auVar48._12_4_ = fVar42 * fVar23;
  auVar48._8_4_ = SQRT(fVar35) * 0.5;
  auVar40 = auVar40 ^ (auVar40 ^ auVar48) & auVar22;
  fVar23 = auVar84._12_4_;
  auVar41._0_4_ = (fVar18 - fVar25) * fVar23;
  auVar41._4_4_ = (fVar26 - fVar24) * fVar23;
  auVar41._8_4_ = fVar42 * fVar23;
  auVar41._12_4_ = SQRT(fVar32) * 0.5;
  return auVar40 ^ (auVar40 ^ auVar41) & auVar31;
}


