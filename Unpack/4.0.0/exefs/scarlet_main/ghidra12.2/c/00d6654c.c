/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6654c; name: FUN_00d6654c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d6654c(float param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined1 (*pauVar1) [16];
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  short sVar23;
  long *plVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [12];
  undefined8 uVar33;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar40;
  int iVar41;
  int iVar49;
  undefined8 uVar42;
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  int iVar51;
  int iVar52;
  undefined1 auVar45 [16];
  float fVar50;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar53;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  byte bVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  uint uVar78;
  float fVar79;
  undefined8 uVar80;
  float fVar85;
  float fVar86;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined8 uVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  undefined1 auVar104 [16];
  undefined8 uVar105;
  undefined1 auVar106 [16];
  undefined8 uVar107;
  undefined1 auVar108 [16];
  undefined8 uVar109;
  undefined1 auVar110 [16];
  undefined8 uVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined8 uVar114;
  undefined4 uVar115;
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [104];
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58 [3];
  
  lVar20 = *(long *)(param_3 + 0xc0);
  if ((lVar20 != 0) && (*(short *)(lVar20 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar20 + 0x1a);
    sVar23 = *(short *)(lVar20 + 0x1a);
LAB_00d665d0:
    sVar4 = *psVar2;
    if (sVar4 == sVar23) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar23 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_00d665f4;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d665f4:
      bVar7 = false;
    }
    if (!bVar7) goto code_r0x00d665fc;
    lVar20 = *(long *)(lVar20 + 0x10);
    if (lVar20 != 0) {
      cVar6 = *(char *)(lVar20 + 0x698);
      lVar21 = *(long *)(lVar20 + 0x70);
      psVar2 = (short *)(lVar21 + 0x1a);
      do {
        sVar23 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar23 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (cVar6 == '\0') {
        if (sVar23 == 1) {
          *(undefined8 *)(lVar21 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00d666bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar20 + -0x28) + 0x50))();
          return;
        }
        if (sVar23 != 0) {
          return;
        }
LAB_00d66650:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      if (sVar23 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*(long *)(lVar20 + -0x28) + 0x50))();
      }
      else if (sVar23 == 0) goto LAB_00d66650;
    }
  }
LAB_00d66560:
  param_1 = *(float *)(param_2[0x16] + 4) - param_1;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar40 = *(float *)(param_2[0x12] + 4);
  *(float *)(param_2[0x16] + 4) = param_1;
  if (*(float *)(param_2[3] + 4) < fVar40) {
    uVar19 = (uint)(fVar40 <= *(float *)(param_2[3] + 4) + *(float *)(param_3 + 0xe4));
  }
  else {
    uVar19 = (uint)(0.0 < *(float *)(param_2[0x14] + 0xc)) << 1;
  }
  if (uVar19 == 0) {
    FUN_00d66fec();
    return;
  }
  auVar44 = param_2[2];
  auVar34 = auVar44._0_12_;
  pauVar8 = param_2 + 3;
  uVar78 = (uint)*(undefined8 *)(param_2[3] + 8);
  uVar115 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 8) >> 0x20);
  uVar114 = *(undefined8 *)*pauVar8;
  if (uVar19 == 1) {
    fVar40 = auVar44._0_4_;
    fVar37 = auVar44._4_4_;
    fVar38 = auVar44._8_4_;
    auVar25._0_4_ = fVar40 * fVar40 + fVar37 * fVar37;
    auVar25._4_4_ = fVar38 * fVar38 + 0.0;
    auVar25._8_4_ = fVar40 * fVar40 + fVar37 * fVar37;
    auVar25._12_4_ = fVar38 * fVar38 + 0.0;
    auVar44 = NEON_ext(auVar25,auVar25,4,1);
    auVar26._0_4_ = auVar44._0_4_ + auVar44._4_4_;
    auVar26._4_4_ = auVar44._8_4_ + auVar44._12_4_;
    auVar26._8_4_ = auVar44._0_4_ + auVar44._4_4_;
    auVar26._12_4_ = auVar44._8_4_ + auVar44._12_4_;
    auVar44 = NEON_frsqrte(auVar26,4);
    auVar92._0_4_ = auVar26._0_4_ * auVar44._0_4_;
    auVar92._4_4_ = auVar26._4_4_ * auVar44._4_4_;
    auVar92._8_4_ = auVar26._8_4_ * auVar44._8_4_;
    auVar92._12_4_ = auVar26._12_4_ * auVar44._12_4_;
    auVar93 = NEON_frsqrts(auVar44,auVar92,4);
    auVar81._0_4_ = auVar44._0_4_ * auVar93._0_4_;
    auVar81._4_4_ = auVar44._4_4_ * auVar93._4_4_;
    auVar81._8_4_ = auVar44._8_4_ * auVar93._8_4_;
    auVar81._12_4_ = auVar44._12_4_ * auVar93._12_4_;
    auVar94._0_4_ = auVar26._0_4_ * auVar81._0_4_;
    auVar94._4_4_ = auVar26._4_4_ * auVar81._4_4_;
    auVar94._8_4_ = auVar26._8_4_ * auVar81._8_4_;
    auVar94._12_4_ = auVar26._12_4_ * auVar81._12_4_;
    pauVar1 = param_2 + 0x11;
    uVar18 = *(undefined8 *)(param_2[0x11] + 8);
    uVar68 = (undefined1)((ulong)uVar18 >> 8);
    uVar70 = (undefined1)((ulong)uVar18 >> 0x10);
    uVar72 = (undefined1)((ulong)uVar18 >> 0x18);
    uVar74 = (undefined1)((ulong)uVar18 >> 0x20);
    uVar75 = (undefined1)((ulong)uVar18 >> 0x28);
    uVar76 = (undefined1)((ulong)uVar18 >> 0x30);
    uVar77 = (undefined1)((ulong)uVar18 >> 0x38);
    iVar41 = -(uint)(auVar26._0_4_ == 0.0);
    iVar49 = -(uint)(auVar26._4_4_ == 0.0);
    iVar51 = -(uint)(auVar26._8_4_ == 0.0);
    iVar52 = -(uint)(auVar26._12_4_ == 0.0);
    auVar44 = NEON_frsqrts(auVar81,auVar94,4);
    auVar93[9] = uVar68;
    auVar93._0_9_ = *(unkbyte9 *)*pauVar1;
    auVar93[10] = uVar70;
    auVar93[0xb] = uVar72;
    auVar93[0xc] = uVar74;
    auVar93[0xd] = uVar75;
    auVar93[0xe] = uVar76;
    auVar93[0xf] = uVar77;
    uVar105 = a64_TBL(ZEXT816(0),auVar93,DAT_03cb56c8);
    fVar40 = fVar40 * auVar81._0_4_ * auVar44._0_4_;
    fVar37 = fVar37 * auVar81._4_4_ * auVar44._4_4_;
    fVar38 = fVar38 * auVar81._8_4_ * auVar44._8_4_;
    fVar39 = auVar81._12_4_ * auVar44._12_4_ * 0.0;
    auVar82[9] = uVar68;
    auVar82._0_9_ = *(unkbyte9 *)*pauVar1;
    auVar82[10] = uVar70;
    auVar82[0xb] = uVar72;
    auVar82[0xc] = uVar74;
    auVar82[0xd] = uVar75;
    auVar82[0xe] = uVar76;
    auVar82[0xf] = uVar77;
    uVar80 = a64_TBL(ZEXT816(0),auVar82,DAT_03cb54c0);
    auVar35[0] = SUB41(fVar40,0) & ~(byte)iVar41;
    auVar35[1] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar41 >> 8);
    auVar35[2] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
    auVar35[3] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
    auVar35[4] = SUB41(fVar37,0) & ~(byte)iVar49;
    auVar35[5] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar49 >> 8);
    auVar35[6] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
    auVar35[7] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
    auVar35[8] = SUB41(fVar38,0) & ~(byte)iVar51;
    auVar35[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar51 >> 8);
    auVar35[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
    auVar35[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
    auVar35[0xc] = SUB41(fVar39,0) & ~(byte)iVar52;
    auVar35[0xd] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar52 >> 8);
    auVar35[0xe] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    auVar35[0xf] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    auVar96[9] = uVar68;
    auVar96._0_9_ = *(unkbyte9 *)*pauVar1;
    auVar96[10] = uVar70;
    auVar96[0xb] = uVar72;
    auVar96[0xc] = uVar74;
    auVar96[0xd] = uVar75;
    auVar96[0xe] = uVar76;
    auVar96[0xf] = uVar77;
    uVar91 = a64_TBL(ZEXT816(0),auVar96,DAT_03cb54d8);
    auVar9[9] = uVar68;
    auVar9._0_9_ = *(unkbyte9 *)*pauVar1;
    auVar9[10] = uVar70;
    auVar9[0xb] = uVar72;
    auVar9[0xc] = uVar74;
    auVar9[0xd] = uVar75;
    auVar9[0xe] = uVar76;
    auVar9[0xf] = uVar77;
    uVar107 = a64_TBL(ZEXT816(0),auVar9,DAT_03cb5488);
    uVar111 = a64_TBL(ZEXT816(0),auVar35,DAT_03cb56c8);
    uVar42 = a64_TBL(ZEXT816(0),auVar35,DAT_03cb5488);
    uVar109 = a64_TBL(ZEXT816(0),auVar35,DAT_03cb54c0);
    uVar33 = a64_TBL(ZEXT816(0),auVar35,DAT_03cb54d8);
    fVar53 = (float)((ulong)uVar91 >> 0x20);
    fVar56 = (float)((ulong)uVar105 >> 0x20);
    fVar57 = (float)((ulong)uVar107 >> 0x20);
    fVar50 = (float)((ulong)uVar80 >> 0x20);
    fVar38 = (float)uVar105 * (float)uVar42 - (float)uVar107 * (float)uVar111;
    fVar39 = fVar56 * (float)((ulong)uVar42 >> 0x20) - fVar57 * (float)((ulong)uVar111 >> 0x20);
    fVar40 = (float)uVar91 * (float)uVar109 - (float)uVar80 * (float)uVar33;
    fVar37 = fVar53 * (float)((ulong)uVar109 >> 0x20) - fVar50 * (float)((ulong)uVar33 >> 0x20);
    auVar27._0_4_ = fVar38 * fVar38 + fVar39 * fVar39;
    auVar27._4_4_ = fVar40 * fVar40 + fVar37 * fVar37;
    auVar27._8_4_ = fVar38 * fVar38 + fVar39 * fVar39;
    auVar27._12_4_ = fVar40 * fVar40 + fVar37 * fVar37;
    auVar44 = NEON_ext(auVar27,auVar27,4,1);
    auVar28._0_4_ = auVar44._0_4_ + auVar44._4_4_;
    auVar28._4_4_ = auVar44._8_4_ + auVar44._12_4_;
    auVar28._8_4_ = auVar44._0_4_ + auVar44._4_4_;
    auVar28._12_4_ = auVar44._8_4_ + auVar44._12_4_;
    auVar44 = NEON_frsqrte(auVar28,4);
    auVar112._0_4_ = auVar28._0_4_ * auVar44._0_4_;
    auVar112._4_4_ = auVar28._4_4_ * auVar44._4_4_;
    auVar112._8_4_ = auVar28._8_4_ * auVar44._8_4_;
    auVar112._12_4_ = auVar28._12_4_ * auVar44._12_4_;
    auVar93 = NEON_frsqrts(auVar44,auVar112,4);
    auVar110._0_4_ = auVar44._0_4_ * auVar93._0_4_;
    auVar110._4_4_ = auVar44._4_4_ * auVar93._4_4_;
    auVar110._8_4_ = auVar44._8_4_ * auVar93._8_4_;
    auVar110._12_4_ = auVar44._12_4_ * auVar93._12_4_;
    auVar113._0_4_ = auVar28._0_4_ * auVar110._0_4_;
    auVar113._4_4_ = auVar28._4_4_ * auVar110._4_4_;
    auVar113._8_4_ = auVar28._8_4_ * auVar110._8_4_;
    auVar113._12_4_ = auVar28._12_4_ * auVar110._12_4_;
    iVar41 = -(uint)(auVar28._0_4_ == 0.0);
    iVar49 = -(uint)(auVar28._4_4_ == 0.0);
    iVar51 = -(uint)(auVar28._8_4_ == 0.0);
    iVar52 = -(uint)(auVar28._12_4_ == 0.0);
    auVar44 = NEON_frsqrts(auVar110,auVar113,4);
    fVar38 = fVar38 * auVar110._0_4_ * auVar44._0_4_;
    fVar39 = fVar39 * auVar110._4_4_ * auVar44._4_4_;
    fVar40 = fVar40 * auVar110._8_4_ * auVar44._8_4_;
    fVar37 = fVar37 * auVar110._12_4_ * auVar44._12_4_;
    auVar43[0] = SUB41(fVar38,0) & ~(byte)iVar41;
    auVar43[1] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar41 >> 8);
    auVar43[2] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
    auVar43[3] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
    auVar43[4] = SUB41(fVar39,0) & ~(byte)iVar49;
    auVar43[5] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar49 >> 8);
    auVar43[6] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
    auVar43[7] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
    auVar43[8] = SUB41(fVar40,0) & ~(byte)iVar51;
    auVar43[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar51 >> 8);
    auVar43[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
    auVar43[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
    auVar45[0xc] = SUB41(fVar37,0) & ~(byte)iVar52;
    auVar45._0_12_ = auVar43;
    auVar45[0xd] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar52 >> 8);
    auVar45[0xe] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    auVar45[0xf] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    uVar33 = a64_TBL(ZEXT816(0),auVar45,DAT_03cb56c8);
    uVar42 = a64_TBL(ZEXT816(0),auVar45,DAT_03cb54d8);
    uVar109 = a64_TBL(ZEXT816(0),auVar45,DAT_03cb5488);
    uVar111 = a64_TBL(ZEXT816(0),auVar45,DAT_03cb54c0);
    auVar44._12_4_ = 0;
    auVar44._0_12_ = auVar43;
    fVar40 = (float)uVar107 * (float)uVar33 - (float)uVar105 * (float)uVar109;
    fVar37 = fVar57 * (float)((ulong)uVar33 >> 0x20) - fVar56 * (float)((ulong)uVar109 >> 0x20);
    fVar38 = (float)uVar80 * (float)uVar42 - (float)uVar91 * (float)uVar111;
    fVar39 = fVar50 * (float)((ulong)uVar42 >> 0x20) - fVar53 * (float)((ulong)uVar111 >> 0x20);
    uVar114 = CONCAT44(*(undefined4 *)(param_2[0x12] + 4),(int)uVar114);
    auVar12._12_4_ = uVar115;
    auVar12._0_12_ = *(undefined1 (*) [12])*pauVar8;
    auVar13._12_4_ = uVar115;
    auVar13._0_12_ = *(undefined1 (*) [12])*pauVar8;
    auVar93 = NEON_ext(auVar12,auVar13,8,1);
    fVar39 = fVar39 * fVar39;
    auVar29._0_4_ = fVar40 * fVar40 + fVar37 * fVar37;
    auVar29._4_4_ = fVar38 * fVar38 + fVar39;
    auVar29._8_4_ = fVar40 * fVar40 + fVar37 * fVar37;
    auVar29._12_4_ = fVar38 * fVar38 + fVar39;
    auVar82 = NEON_ext(auVar29,auVar29,4,1);
    auVar30._0_4_ = auVar82._0_4_ + auVar82._4_4_;
    auVar30._4_4_ = auVar82._8_4_ + auVar82._12_4_;
    auVar30._8_4_ = auVar82._0_4_ + auVar82._4_4_;
    auVar30._12_4_ = auVar82._8_4_ + auVar82._12_4_;
    auVar82 = NEON_frsqrte(auVar30,4);
    iVar41 = -(uint)(auVar30._0_4_ == 0.0);
    iVar49 = -(uint)(auVar30._4_4_ == 0.0);
    iVar51 = -(uint)(auVar30._8_4_ == 0.0);
    auVar95._0_4_ = auVar30._0_4_ * auVar82._0_4_;
    auVar95._4_4_ = auVar30._4_4_ * auVar82._4_4_;
    auVar95._8_4_ = auVar30._8_4_ * auVar82._8_4_;
    auVar95._12_4_ = auVar30._12_4_ * auVar82._12_4_;
    auVar96 = NEON_frsqrts(auVar82,auVar95,4);
    auVar88._0_4_ = auVar82._0_4_ * auVar96._0_4_;
    auVar88._4_4_ = auVar82._4_4_ * auVar96._4_4_;
    auVar88._8_4_ = auVar82._8_4_ * auVar96._8_4_;
    auVar88._12_4_ = auVar82._12_4_ * auVar96._12_4_;
    auVar83._0_4_ = auVar30._0_4_ * auVar88._0_4_;
    auVar83._4_4_ = auVar30._4_4_ * auVar88._4_4_;
    auVar83._8_4_ = auVar30._8_4_ * auVar88._8_4_;
    auVar83._12_4_ = auVar30._12_4_ * auVar88._12_4_;
    auVar82 = NEON_frsqrts(auVar88,auVar83,4);
    fVar40 = fVar40 * auVar88._0_4_ * auVar82._0_4_;
    fVar37 = fVar37 * auVar88._4_4_ * auVar82._4_4_;
    fVar38 = fVar38 * auVar88._8_4_ * auVar82._8_4_;
    auVar34[0] = SUB41(fVar40,0) & ~(byte)iVar41;
    auVar34[1] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar41 >> 8);
    auVar34[2] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
    auVar34[3] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
    auVar34[4] = SUB41(fVar37,0) & ~(byte)iVar49;
    auVar34[5] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar49 >> 8);
    auVar34[6] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
    auVar34[7] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
    auVar34[8] = SUB41(fVar38,0) & ~(byte)iVar51;
    auVar34[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar51 >> 8);
    auVar34[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
    auVar34[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
    fVar40 = (float)*(undefined8 *)*pauVar1;
    fVar37 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    fVar38 = (float)uVar18;
    fVar39 = (float)((ulong)uVar18 >> 0x20);
    fVar39 = fVar39 * fVar39;
    auVar31._0_4_ = fVar40 * fVar40 + fVar37 * fVar37;
    auVar31._4_4_ = fVar38 * fVar38 + fVar39;
    auVar31._8_4_ = fVar40 * fVar40 + fVar37 * fVar37;
    auVar31._12_4_ = fVar38 * fVar38 + fVar39;
    auVar82 = NEON_ext(auVar31,auVar31,4,1);
    auVar32._0_4_ = auVar82._0_4_ + auVar82._4_4_;
    auVar32._4_4_ = auVar82._8_4_ + auVar82._12_4_;
    auVar32._8_4_ = auVar82._0_4_ + auVar82._4_4_;
    auVar32._12_4_ = auVar82._8_4_ + auVar82._12_4_;
    auVar82 = NEON_frsqrte(auVar32,4);
    auVar97._0_4_ = auVar32._0_4_ * auVar82._0_4_;
    auVar97._4_4_ = auVar32._4_4_ * auVar82._4_4_;
    auVar97._8_4_ = auVar32._8_4_ * auVar82._8_4_;
    auVar97._12_4_ = auVar32._12_4_ * auVar82._12_4_;
    auVar96 = NEON_frsqrts(auVar82,auVar97,4);
    auVar89._0_4_ = auVar82._0_4_ * auVar96._0_4_;
    auVar89._4_4_ = auVar82._4_4_ * auVar96._4_4_;
    auVar89._8_4_ = auVar82._8_4_ * auVar96._8_4_;
    auVar89._12_4_ = auVar82._12_4_ * auVar96._12_4_;
    auVar98._0_4_ = auVar32._0_4_ * auVar89._0_4_;
    auVar98._4_4_ = auVar32._4_4_ * auVar89._4_4_;
    auVar98._8_4_ = auVar32._8_4_ * auVar89._8_4_;
    auVar98._12_4_ = auVar32._12_4_ * auVar89._12_4_;
    iVar41 = -(uint)(auVar32._0_4_ == 0.0);
    iVar49 = -(uint)(auVar32._4_4_ == 0.0);
    iVar51 = -(uint)(auVar32._8_4_ == 0.0);
    auVar82 = NEON_frsqrts(auVar89,auVar98,4);
    fVar40 = fVar40 * auVar89._0_4_ * auVar82._0_4_;
    fVar37 = fVar37 * auVar89._4_4_ * auVar82._4_4_;
    fVar38 = fVar38 * auVar89._8_4_ * auVar82._8_4_;
    bVar59 = SUB41(fVar40,0) & ~(byte)iVar41;
    bVar60 = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar41 >> 8);
    bVar61 = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
    bVar62 = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
    bVar63 = SUB41(fVar37,0) & ~(byte)iVar49;
    bVar64 = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar49 >> 8);
    bVar65 = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
    bVar66 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
    bVar67 = SUB41(fVar38,0) & ~(byte)iVar51;
    bVar69 = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar51 >> 8);
    bVar71 = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
    bVar73 = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
    uVar68 = 0;
    uVar70 = 0;
    uVar72 = 0;
    uVar74 = 0;
    uVar78 = auVar93._0_4_;
  }
  else {
    auVar44 = *param_2;
    uVar18 = *(undefined8 *)(param_2[1] + 8);
    bVar67 = (byte)uVar18;
    bVar69 = (byte)((ulong)uVar18 >> 8);
    bVar71 = (byte)((ulong)uVar18 >> 0x10);
    bVar73 = (byte)((ulong)uVar18 >> 0x18);
    uVar68 = (undefined1)((ulong)uVar18 >> 0x20);
    uVar70 = (undefined1)((ulong)uVar18 >> 0x28);
    uVar72 = (undefined1)((ulong)uVar18 >> 0x30);
    uVar74 = (undefined1)((ulong)uVar18 >> 0x38);
    uVar18 = *(undefined8 *)param_2[1];
    bVar59 = (byte)uVar18;
    bVar60 = (byte)((ulong)uVar18 >> 8);
    bVar61 = (byte)((ulong)uVar18 >> 0x10);
    bVar62 = (byte)((ulong)uVar18 >> 0x18);
    bVar63 = (byte)((ulong)uVar18 >> 0x20);
    bVar64 = (byte)((ulong)uVar18 >> 0x28);
    bVar65 = (byte)((ulong)uVar18 >> 0x30);
    bVar66 = (byte)((ulong)uVar18 >> 0x38);
  }
  auVar93 = NEON_fmov(0x3f800000,4);
  fVar38 = auVar44._0_4_;
  fVar40 = (float)CONCAT13(bVar66,CONCAT12(bVar65,CONCAT11(bVar64,bVar63)));
  fVar39 = auVar34._4_4_;
  fVar50 = auVar44._4_4_;
  fVar37 = auVar34._8_4_;
  fVar53 = auVar93._0_4_ + (float)_DAT_03cab3a0 * fVar38 + (float)_DAT_03cac210 * fVar40 +
           (float)_DAT_03cabb00 * fVar37;
  fVar56 = auVar93._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar38 +
           (float)((ulong)_DAT_03cac210 >> 0x20) * fVar40 +
           (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar37;
  fVar57 = auVar93._8_4_ + (float)_UNK_03cab3a8 * fVar38 + (float)_UNK_03cac218 * fVar40 +
           (float)_UNK_03cabb08 * fVar37;
  fVar58 = auVar93._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar38 +
           (float)((ulong)_UNK_03cac218 >> 0x20) * fVar40 +
           (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar37;
  auVar10[1] = bVar60;
  auVar10[0] = bVar59;
  auVar10[2] = bVar61;
  auVar10[3] = bVar62;
  auVar10[4] = bVar63;
  auVar10[5] = bVar64;
  auVar10[6] = bVar65;
  auVar10[7] = bVar66;
  auVar10[8] = bVar67;
  auVar10[9] = bVar69;
  auVar10[10] = bVar71;
  auVar10[0xb] = bVar73;
  auVar10[0xc] = uVar68;
  auVar10[0xd] = uVar70;
  auVar10[0xe] = uVar72;
  auVar10[0xf] = uVar74;
  auVar11[1] = bVar60;
  auVar11[0] = bVar59;
  auVar11[2] = bVar61;
  auVar11[3] = bVar62;
  auVar11[4] = bVar63;
  auVar11[5] = bVar64;
  auVar11[6] = bVar65;
  auVar11[7] = bVar66;
  auVar11[8] = bVar67;
  auVar11[9] = bVar69;
  auVar11[10] = bVar71;
  auVar11[0xb] = bVar73;
  auVar11[0xc] = uVar68;
  auVar11[0xd] = uVar70;
  auVar11[0xe] = uVar72;
  auVar11[0xf] = uVar74;
  auVar82 = NEON_ext(auVar10,auVar11,8,1);
  auVar93 = NEON_fmov(0x40800000,4);
  auVar96 = NEON_ext(auVar44,auVar44,8,1);
  fVar37 = auVar82._0_4_;
  auVar84._0_4_ = SQRT(fVar53) * 0.5 * auVar93._0_4_;
  auVar84._4_4_ = SQRT(fVar56) * 0.5 * auVar93._4_4_;
  auVar84._8_4_ = SQRT(fVar57) * 0.5 * auVar93._8_4_;
  auVar84._12_4_ = SQRT(fVar58) * 0.5 * auVar93._12_4_;
  fVar38 = auVar34._0_4_;
  fVar40 = fVar50 - (float)CONCAT13(bVar62,CONCAT12(bVar61,CONCAT11(bVar60,bVar59)));
  auVar93 = NEON_frecpe(auVar84,4);
  fVar103 = auVar96._0_4_ + fVar38;
  auVar14._8_4_ = fVar37 + -fVar39;
  auVar14._4_4_ = fVar103;
  auVar82 = NEON_frecps(auVar93,auVar84,4);
  auVar99._4_4_ = fVar53;
  auVar99._0_4_ = fVar53;
  auVar99._8_4_ = fVar53;
  auVar99._12_4_ = fVar53;
  auVar90._4_4_ = fVar56;
  auVar90._0_4_ = fVar56;
  auVar90._8_4_ = fVar56;
  auVar90._12_4_ = fVar56;
  auVar104._0_4_ = -(uint)(fVar53 <= fVar56);
  auVar104._4_4_ = -(uint)(fVar53 <= fVar56);
  auVar104._8_4_ = -(uint)(fVar53 <= fVar56);
  auVar104._12_4_ = -(uint)(fVar53 <= fVar56);
  auVar90 = auVar90 ^ (auVar90 ^ auVar99) & ~auVar104;
  auVar100._0_4_ = auVar93._0_4_ * auVar82._0_4_;
  auVar100._4_4_ = auVar93._4_4_ * auVar82._4_4_;
  auVar100._8_4_ = auVar93._8_4_ * auVar82._8_4_;
  auVar100._12_4_ = auVar93._12_4_ * auVar82._12_4_;
  auVar106._4_4_ = fVar57;
  auVar106._0_4_ = fVar57;
  auVar106._8_4_ = fVar57;
  auVar106._12_4_ = fVar57;
  auVar108._0_4_ = -(uint)(auVar90._0_4_ <= fVar57);
  auVar108._4_4_ = -(uint)(auVar90._4_4_ <= fVar57);
  auVar108._8_4_ = -(uint)(auVar90._8_4_ <= fVar57);
  auVar108._12_4_ = -(uint)(auVar90._12_4_ <= fVar57);
  auVar93 = NEON_frecps(auVar100,auVar84,4);
  auVar90 = auVar90 ^ (auVar90 ^ auVar106) & auVar108;
  fVar79 = auVar100._0_4_ * auVar93._0_4_;
  fVar85 = auVar100._4_4_ * auVar93._4_4_;
  fVar86 = auVar100._8_4_ * auVar93._8_4_;
  fVar87 = auVar100._12_4_ * auVar93._12_4_;
  auVar14._0_4_ =
       ((float)CONCAT13(bVar62,CONCAT12(bVar61,CONCAT11(bVar60,bVar59))) + fVar50) * fVar79;
  auVar46._0_8_ = auVar14._0_8_ << 0x20;
  auVar46._8_4_ = fVar103 * fVar79;
  auVar46._12_4_ = (fVar37 + -fVar39) * fVar79;
  auVar101._0_4_ =
       (fVar50 + (float)CONCAT13(bVar62,CONCAT12(bVar61,CONCAT11(bVar60,bVar59)))) * fVar85;
  auVar101._4_4_ = fVar85 * 0.0;
  auVar101._8_4_ = (fVar37 + fVar39) * fVar85;
  auVar101._12_4_ = (fVar38 + -auVar44._8_4_) * fVar85;
  auVar36._0_4_ = (auVar96._0_4_ + fVar38) * fVar86;
  auVar36._4_4_ = (fVar37 + fVar39) * fVar86;
  auVar36._12_4_ = fVar40 * fVar86;
  auVar47._4_12_ = auVar46._4_12_;
  auVar47._0_4_ = SQRT(fVar53) * 0.5;
  auVar102._8_8_ = auVar101._8_8_;
  auVar102._4_4_ = SQRT(fVar56) * 0.5;
  auVar102._0_4_ = auVar101._0_4_;
  auVar36._8_4_ = SQRT(fVar57) * 0.5;
  auVar36 = auVar36 ^ (auVar36 ^ auVar47 ^ (auVar47 ^ auVar102) & auVar104) & ~auVar108;
  auVar48._0_4_ = -(uint)(auVar90._0_4_ <= fVar58);
  auVar48._4_4_ = -(uint)(auVar90._4_4_ <= fVar58);
  auVar48._8_4_ = -(uint)(auVar90._8_4_ <= fVar58);
  auVar48._12_4_ = -(uint)(auVar90._12_4_ <= fVar58);
  auVar54._0_4_ = (fVar37 - fVar39) * fVar87;
  auVar54._4_4_ = (fVar38 - auVar44._8_4_) * fVar87;
  auVar54._8_4_ = fVar40 * fVar87;
  auVar54._12_4_ = SQRT(fVar58) * 0.5;
  auVar36 = auVar36 ^ (auVar36 ^ auVar54) & auVar48;
  if (*(uint *)param_2[0x16] == uVar19) {
    lVar20 = *(long *)param_2[0x15];
    if ((lVar20 != 0) && (*(short *)(lVar20 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar20 + 0x1a);
      sVar23 = *(short *)(lVar20 + 0x1a);
      do {
        sVar4 = *psVar2;
        if (sVar4 == sVar23) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar23 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00d66aa8;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d66aa8:
          bVar7 = false;
        }
        if (bVar7) {
          lVar20 = *(long *)(lVar20 + 0x10);
          if (lVar20 == 0) {
            return;
          }
          local_68 = (undefined8 *)0x0;
          uStack_60 = 0;
          FUN_00ca1a48(&local_68,lVar20 + 0x20);
          if (local_68 == (undefined8 *)0x0) goto LAB_00d66adc;
          if (*(short *)((long)local_68 + 0x1a) == 0) goto LAB_00d66e4c;
          if (local_68 == (undefined8 *)0x0) goto LAB_00d66adc;
          if (*(short *)((long)local_68 + 0x1a) == 0) goto LAB_00d66e4c;
          psVar2 = (short *)((long)local_68 + 0x1a);
          sVar23 = *(short *)((long)local_68 + 0x1a);
          goto LAB_00d66b54;
        }
        sVar23 = sVar4;
      } while (sVar4 != 0);
    }
  }
  else {
    FUN_00d66fec();
    lVar20 = *(long *)(param_3 + 0x70);
    if ((lVar20 != 0) && (*(short *)(lVar20 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar20 + 0x1a);
      sVar23 = *(short *)(lVar20 + 0x1a);
      do {
        sVar4 = *psVar2;
        if (sVar4 == sVar23) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar23 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00d66a54;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d66a54:
          bVar7 = false;
        }
        if (bVar7) {
          lVar20 = *(long *)(lVar20 + 0x10);
          if (lVar20 != 0) {
            plVar16 = (long *)(lVar20 + -0x28);
            puVar17 = (undefined8 *)FUN_015a8a54(plVar16);
            plVar24 = (long *)*puVar17;
            if (plVar24 != (long *)0x0) {
              lVar21 = plVar24[6];
              if (*(long *)(lVar21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x3d);
              }
              psVar2 = (short *)(lVar21 + 0x1a);
              do {
                sVar23 = *psVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar7) {
                  *psVar2 = sVar23 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar23 == 0) {
                uVar18 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
                *(undefined8 *)(lVar21 + 8) = uVar18;
                *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
              }
              else if (sVar23 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
              if (uVar19 == 1) {
                iVar41 = *(int *)(param_3 + 0xf0) + 0x36;
                if (2 < *(int *)(param_3 + 0xf0) - 1U) {
                  iVar41 = 0x36;
                }
              }
              else {
                iVar41 = 0x3a;
              }
              local_f0 = FUN_00a9df90;
              local_e8 = FUN_00a9e014;
              local_e0 = &LAB_00a9e018;
              puStack_d8 = &LAB_00a9e01c;
              auVar55._8_8_ = _UNK_03d310f8;
              auVar55._0_8_ = _DAT_03d310f0;
              auVar15._8_4_ = uVar78;
              auVar15._0_8_ = uVar114;
              auVar15._12_4_ = 0;
              FUN_01e22628(&local_68,auVar15,auVar36,auVar55,plVar24,iVar41,&local_f0);
              FUN_01535fd0(param_2 + 0x15,&local_68);
              puVar17 = local_68;
              if (local_68 != (undefined8 *)0x0) {
                psVar2 = (short *)(local_68 + 3);
                do {
                  sVar23 = *psVar2;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar7) {
                    *psVar2 = sVar23 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar23 == 1) {
                  piVar3 = (int *)((long)local_68 + 0x1c);
                  do {
                    iVar41 = *piVar3;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar7) {
                      *piVar3 = -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar41 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar41 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar41 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar21 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar21;
                    local_58[0] = *puVar17;
                    FUN_00c44438(lVar21 + 0x8040,local_58);
                  }
                }
                else if (sVar23 == 0) {
LAB_00d66e74:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x33,"Reference counter underflows.");
                }
              }
              pcVar22 = local_e8;
              if (local_e8 != (code *)0x0) {
                local_e0 = (undefined1 *)0x0;
                puStack_d8 = (undefined1 *)0x0;
                local_f0 = (code *)0x0;
                local_e8 = (code *)0x0;
                (*pcVar22)(auStack_d0);
              }
              *(uint *)param_2[0x16] = uVar19;
              lVar21 = plVar24[6];
              psVar2 = (short *)(lVar21 + 0x1a);
              do {
                sVar23 = *psVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar7) {
                  *psVar2 = sVar23 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar23 == 1) {
                *(undefined8 *)(lVar21 + 0x10) = 0;
                (**(code **)(*plVar24 + 0x50))(plVar24);
              }
              else if (sVar23 == 0) goto LAB_00d66b04;
            }
            lVar20 = *(long *)(lVar20 + 0x70);
            psVar2 = (short *)(lVar20 + 0x1a);
            do {
              sVar23 = *psVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar7) {
                *psVar2 = sVar23 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar23 == 1) {
              *(undefined8 *)(lVar20 + 0x10) = 0;
              pcVar22 = *(code **)(*plVar16 + 0x50);
LAB_00d66b98:
              (*pcVar22)(plVar16);
              return;
            }
LAB_00d66b00:
            if (sVar23 != 0) {
              return;
            }
LAB_00d66b04:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          break;
        }
        sVar23 = sVar4;
        if (sVar4 == 0) {
          return;
        }
      } while( true );
    }
  }
  return;
code_r0x00d665fc:
  sVar23 = sVar4;
  if (sVar4 == 0) goto LAB_00d66560;
  goto LAB_00d665d0;
LAB_00d66b54:
  sVar4 = *psVar2;
  if (sVar4 == sVar23) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar23 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_00d66b78;
    bVar7 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00d66b78:
    bVar7 = false;
  }
  if (!bVar7) goto code_r0x00d66b80;
  lVar21 = local_68[2];
  if (lVar21 != 0) {
    plVar16 = (long *)(lVar21 + -0x28);
    *(ulong *)(lVar21 + 0xc0) = (ulong)uVar78;
    *(undefined8 *)(lVar21 + 0xb8) = uVar114;
    if (*(char *)(lVar21 + 0xcc) == '\0') {
      *(undefined1 *)(lVar21 + 0xcc) = 1;
      (**(code **)(*(long *)(lVar21 + -0x28) + 0x78))(plVar16);
      *(long *)(lVar21 + 0xb0) = auVar36._8_8_;
      *(long *)(lVar21 + 0xa8) = auVar36._0_8_;
      if (*(char *)(lVar21 + 0xcc) != '\0') goto LAB_00d66ea4;
      *(undefined1 *)(lVar21 + 0xcc) = 1;
      (**(code **)(*(long *)(lVar21 + -0x28) + 0x78))(plVar16);
      uVar114 = _DAT_03caa980;
      *(undefined8 *)(lVar21 + 0xa0) = _UNK_03caa988;
      *(undefined8 *)(lVar21 + 0x98) = uVar114;
      if (*(char *)(lVar21 + 0xcc) == '\0') {
        *(undefined1 *)(lVar21 + 0xcc) = 1;
        (**(code **)(*plVar16 + 0x78))(plVar16);
      }
    }
    else {
      *(long *)(lVar21 + 0xb0) = auVar36._8_8_;
      *(long *)(lVar21 + 0xa8) = auVar36._0_8_;
LAB_00d66ea4:
      uVar114 = _DAT_03caa980;
      *(undefined8 *)(lVar21 + 0xa0) = _UNK_03caa988;
      *(undefined8 *)(lVar21 + 0x98) = uVar114;
    }
    lVar21 = *(long *)(lVar21 + 8);
    psVar2 = (short *)(lVar21 + 0x1a);
    do {
      sVar23 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar23 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar23 == 1) {
      *(undefined8 *)(lVar21 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar23 == 0) goto LAB_00d66b04;
  }
  goto LAB_00d66e4c;
code_r0x00d66b80:
  sVar23 = sVar4;
  if (sVar4 == 0) {
LAB_00d66e4c:
    puVar17 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_68 + 3);
      do {
        sVar23 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar23 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar23 == 1) {
        piVar3 = (int *)((long)local_68 + 0x1c);
        do {
          iVar41 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar41 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar41 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar41 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_58[0] = *puVar17;
          FUN_00c44438(lVar21 + 0x8040,local_58);
        }
      }
      else if (sVar23 == 0) goto LAB_00d66e74;
    }
LAB_00d66adc:
    lVar21 = *(long *)(lVar20 + 8);
    plVar16 = (long *)(lVar20 + -0x28);
    psVar2 = (short *)(lVar21 + 0x1a);
    do {
      sVar23 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar23 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar23 == 1) {
      *(undefined8 *)(lVar21 + 0x10) = 0;
      pcVar22 = *(code **)(*plVar16 + 0x50);
      goto LAB_00d66b98;
    }
    goto LAB_00d66b00;
  }
  goto LAB_00d66b54;
}


