/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02026ed4; name: FUN_02026ed4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02026ed4(undefined1 *param_1,float param_2,long param_3,long *param_4)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  int iVar10;
  undefined1 *puVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  bool bVar19;
  short sVar20;
  long *plVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar38;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  int iVar54;
  int iVar55;
  undefined1 auVar51 [16];
  int iVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar57;
  int iVar66;
  undefined1 auVar58 [12];
  int iVar65;
  undefined1 auVar59 [16];
  int iVar67;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar77;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined1 auVar82 [12];
  float fVar87;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar88;
  float fVar89;
  float fVar91;
  float fVar92;
  undefined1 auVar90 [16];
  float fVar93;
  undefined1 auVar94 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_68;
  undefined8 *local_60 [2];
  
  FUN_011f3030(local_60,*(undefined8 *)(*param_4 + (ulong)*(uint *)(param_3 + 8)));
  if ((local_60[0] != (undefined8 *)0x0) && (*(short *)((long)local_60[0] + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_60[0] + 0x1a);
    sVar20 = *(short *)((long)local_60[0] + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar20) {
        cVar4 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar20 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02027028;
        bVar19 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02027028:
        bVar19 = false;
      }
      if (bVar19) {
        lVar17 = local_60[0][2];
        plVar18 = (long *)(lVar17 + -0x28);
        if (lVar17 != 0) {
          if (*(char *)(*param_4 + (ulong)*(uint *)(param_3 + 0xf8)) != '\0') goto LAB_02027060;
          lVar12 = FUN_020252cc(param_3);
          if ((((*(long *)(lVar12 + 0x150) != 0) &&
               (*(short *)(*(long *)(lVar12 + 0x150) + 0x1a) != 0)) ||
              (uVar14 = FUN_018e6a28(lVar12 + 0x138), (uVar14 & 1) != 0)) &&
             (*(long *)(lVar12 + 0x148) != 0)) {
            puVar15 = (undefined8 *)FUN_01a6a8cc();
            plVar21 = (long *)*puVar15;
            if (plVar21 != (long *)0x0) {
              lVar12 = plVar21[6];
              if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x3d);
              }
              psVar2 = (short *)(lVar12 + 0x1a);
              do {
                sVar20 = *psVar2;
                cVar4 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar19) {
                  *psVar2 = sVar20 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar20 == 0) {
                uVar16 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
                *(undefined8 *)(lVar12 + 8) = uVar16;
                *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
              }
              else if (sVar20 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
              local_90 = 0xde09aff7f94b0e5b;
              pcStack_88 = "aerial";
              local_80 = 6;
              local_78 = (long *)0x0;
              local_68 = FUN_01ea60f0(plVar21,plVar21 + 0x10,&local_90);
              FUN_01a6a8d4(plVar21,&local_68,0);
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              lVar12 = plVar21[6];
              psVar2 = (short *)(lVar12 + 0x1a);
              do {
                sVar20 = *psVar2;
                cVar4 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar19) {
                  *psVar2 = sVar20 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar20 == 1) {
                *(undefined8 *)(lVar12 + 0x10) = 0;
                (**(code **)(*plVar21 + 0x50))(plVar21);
              }
              else if (sVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
LAB_02027060:
              *(float *)(*param_4 + (ulong)*(uint *)(param_3 + 0x10c)) =
                   *(float *)(*param_4 + (ulong)*(uint *)(param_3 + 0x10c)) + param_2;
              fVar88 = *(float *)(*param_4 + (ulong)*(uint *)(param_3 + 0x10c)) *
                       (1.0 / *(float *)(*param_4 + (ulong)*(uint *)(param_3 + 0xf0)));
              if (fVar88 <= 1.0) {
                lVar12 = (**(code **)(*plVar18 + 0x68))(plVar18);
                fVar28 = *(float *)*(undefined1 (*) [12])(lVar12 + 0x30);
                fVar33 = *(float *)(lVar12 + 0x34);
                fVar35 = *(float *)(lVar12 + 0x38);
                auVar9 = *(undefined1 (*) [12])(lVar12 + 0x30);
                pfVar13 = (float *)(*param_4 + (ulong)*(uint *)(param_3 + 0x11c));
                auVar51._0_4_ = fVar28 + *pfVar13;
                auVar51._4_4_ = fVar33 + pfVar13[1];
                auVar51._8_4_ = fVar35 + pfVar13[2];
                auVar51._12_4_ = pfVar13[3] + 0.0;
                FUN_020276f8(auVar51,fVar88,param_3,param_4);
                lVar12 = *param_4;
                if (*(char *)(lVar12 + (ulong)*(uint *)(param_3 + 0xf8)) == '\0') {
                  pfVar13 = (float *)(lVar12 + (ulong)*(uint *)(param_3 + 0x120));
                  fVar28 = fVar28 - *pfVar13;
                  fVar33 = fVar33 - pfVar13[1];
                  fVar35 = fVar35 - pfVar13[2];
                  fVar37 = 0.0 - pfVar13[3];
                  auVar69._0_4_ = fVar28 * fVar28 + fVar33 * fVar33;
                  auVar69._4_4_ = fVar35 * fVar35 + fVar37 * fVar37;
                  auVar69._8_4_ = fVar28 * fVar28 + fVar33 * fVar33;
                  auVar69._12_4_ = fVar35 * fVar35 + fVar37 * fVar37;
                  auVar51 = NEON_ext(auVar69,auVar69,4,1);
                  auVar90._0_4_ = auVar51._0_4_ + auVar51._4_4_;
                  auVar90._4_4_ = auVar51._8_4_ + auVar51._12_4_;
                  auVar90._8_4_ = auVar51._0_4_ + auVar51._4_4_;
                  auVar90._12_4_ = auVar51._8_4_ + auVar51._12_4_;
                  auVar51 = NEON_frsqrte(auVar90,4);
                  auVar63._0_4_ = auVar90._0_4_ * auVar51._0_4_;
                  auVar63._4_4_ = auVar90._4_4_ * auVar51._4_4_;
                  auVar63._8_4_ = auVar90._8_4_ * auVar51._8_4_;
                  auVar63._12_4_ = auVar90._12_4_ * auVar51._12_4_;
                  auVar69 = NEON_frsqrts(auVar51,auVar63,4);
                  auVar94._0_4_ = auVar51._0_4_ * auVar69._0_4_;
                  auVar94._4_4_ = auVar51._4_4_ * auVar69._4_4_;
                  auVar94._8_4_ = auVar51._8_4_ * auVar69._8_4_;
                  auVar94._12_4_ = auVar51._12_4_ * auVar69._12_4_;
                  auVar64._0_4_ = auVar90._0_4_ * auVar94._0_4_;
                  auVar64._4_4_ = auVar90._4_4_ * auVar94._4_4_;
                  auVar64._8_4_ = auVar90._8_4_ * auVar94._8_4_;
                  auVar64._12_4_ = auVar90._12_4_ * auVar94._12_4_;
                  iVar10 = -(uint)(auVar90._0_4_ == 0.0);
                  iVar54 = -(uint)(auVar90._4_4_ == 0.0);
                  iVar55 = -(uint)(auVar90._8_4_ == 0.0);
                  iVar56 = -(uint)(auVar90._12_4_ == 0.0);
                  auVar51 = NEON_frsqrts(auVar94,auVar64,4);
                  fVar28 = fVar28 * auVar94._0_4_ * auVar51._0_4_;
                  fVar33 = fVar33 * auVar94._4_4_ * auVar51._4_4_;
                  fVar35 = fVar35 * auVar94._8_4_ * auVar51._8_4_;
                  fVar37 = fVar37 * auVar94._12_4_ * auVar51._12_4_;
                  uStack_a8._0_4_ =
                       (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                                       CONCAT12((byte)((uint)fVar35 >> 0x10) &
                                                ~(byte)((uint)iVar55 >> 0x10),
                                                CONCAT11((byte)((uint)fVar35 >> 8) &
                                                         ~(byte)((uint)iVar55 >> 8),
                                                         SUB41(fVar35,0) & ~(byte)iVar55)));
                  uStack_a8 = CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18),
                                       CONCAT16((byte)((uint)fVar37 >> 0x10) &
                                                ~(byte)((uint)iVar56 >> 0x10),
                                                CONCAT15((byte)((uint)fVar37 >> 8) &
                                                         ~(byte)((uint)iVar56 >> 8),
                                                         CONCAT14(SUB41(fVar37,0) & ~(byte)iVar56,
                                                                  (float)uStack_a8))));
                  local_b0._0_4_ =
                       (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                                       CONCAT12((byte)((uint)fVar28 >> 0x10) &
                                                ~(byte)((uint)iVar10 >> 0x10),
                                                CONCAT11((byte)((uint)fVar28 >> 8) &
                                                         ~(byte)((uint)iVar10 >> 8),
                                                         SUB41(fVar28,0) & ~(byte)iVar10)));
                  local_b0 = CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                                      CONCAT16((byte)((uint)fVar33 >> 0x10) &
                                               ~(byte)((uint)iVar54 >> 0x10),
                                               CONCAT15((byte)((uint)fVar33 >> 8) &
                                                        ~(byte)((uint)iVar54 >> 8),
                                                        CONCAT14(SUB41(fVar33,0) & ~(byte)iVar54,
                                                                 (float)local_b0))));
                }
                else {
                  pfVar13 = (float *)(**(code **)(*plVar18 + 0x68))(plVar18);
                  fVar28 = *pfVar13;
                  fVar33 = pfVar13[1];
                  fVar35 = pfVar13[2];
                  fVar37 = pfVar13[3];
                  fVar38 = pfVar13[4];
                  fVar48 = pfVar13[5];
                  fVar49 = pfVar13[6];
                  fVar50 = pfVar13[7];
                  auVar22._0_4_ = fVar28 * fVar28 + fVar33 * fVar33;
                  auVar22._4_4_ = fVar35 * fVar35 + fVar37 * fVar37;
                  auVar22._8_4_ = fVar28 * fVar28 + fVar33 * fVar33;
                  auVar22._12_4_ = fVar35 * fVar35 + fVar37 * fVar37;
                  auVar51 = NEON_ext(auVar22,auVar22,4,1);
                  auVar23._0_4_ = auVar51._0_4_ + auVar51._4_4_;
                  auVar23._4_4_ = auVar51._8_4_ + auVar51._12_4_;
                  auVar23._8_4_ = auVar51._0_4_ + auVar51._4_4_;
                  auVar23._12_4_ = auVar51._8_4_ + auVar51._12_4_;
                  auVar51 = NEON_frsqrte(auVar23,4);
                  auVar68._0_4_ = auVar23._0_4_ * auVar51._0_4_;
                  auVar68._4_4_ = auVar23._4_4_ * auVar51._4_4_;
                  auVar68._8_4_ = auVar23._8_4_ * auVar51._8_4_;
                  auVar68._12_4_ = auVar23._12_4_ * auVar51._12_4_;
                  auVar69 = NEON_frsqrts(auVar51,auVar68,4);
                  auVar59._0_4_ = auVar51._0_4_ * auVar69._0_4_;
                  auVar59._4_4_ = auVar51._4_4_ * auVar69._4_4_;
                  auVar59._8_4_ = auVar51._8_4_ * auVar69._8_4_;
                  auVar59._12_4_ = auVar51._12_4_ * auVar69._12_4_;
                  auVar70._0_4_ = auVar23._0_4_ * auVar59._0_4_;
                  auVar70._4_4_ = auVar23._4_4_ * auVar59._4_4_;
                  auVar70._8_4_ = auVar23._8_4_ * auVar59._8_4_;
                  auVar70._12_4_ = auVar23._12_4_ * auVar59._12_4_;
                  iVar10 = -(uint)(auVar23._0_4_ == 0.0);
                  iVar54 = -(uint)(auVar23._4_4_ == 0.0);
                  iVar55 = -(uint)(auVar23._8_4_ == 0.0);
                  iVar56 = -(uint)(auVar23._12_4_ == 0.0);
                  auVar51 = NEON_frsqrts(auVar59,auVar70,4);
                  fVar28 = fVar28 * auVar59._0_4_ * auVar51._0_4_;
                  fVar33 = fVar33 * auVar59._4_4_ * auVar51._4_4_;
                  fVar35 = fVar35 * auVar59._8_4_ * auVar51._8_4_;
                  fVar37 = fVar37 * auVar59._12_4_ * auVar51._12_4_;
                  auVar24._0_4_ = fVar38 * fVar38 + fVar48 * fVar48;
                  auVar24._4_4_ = fVar49 * fVar49 + fVar50 * fVar50;
                  auVar24._8_4_ = fVar38 * fVar38 + fVar48 * fVar48;
                  auVar24._12_4_ = fVar49 * fVar49 + fVar50 * fVar50;
                  auVar51 = NEON_ext(auVar24,auVar24,4,1);
                  auVar25._0_4_ = auVar51._0_4_ + auVar51._4_4_;
                  auVar25._4_4_ = auVar51._8_4_ + auVar51._12_4_;
                  auVar25._8_4_ = auVar51._0_4_ + auVar51._4_4_;
                  auVar25._12_4_ = auVar51._8_4_ + auVar51._12_4_;
                  auVar51 = NEON_frsqrte(auVar25,4);
                  auVar73._0_4_ = auVar25._0_4_ * auVar51._0_4_;
                  auVar73._4_4_ = auVar25._4_4_ * auVar51._4_4_;
                  auVar73._8_4_ = auVar25._8_4_ * auVar51._8_4_;
                  auVar73._12_4_ = auVar25._12_4_ * auVar51._12_4_;
                  auVar69 = NEON_frsqrts(auVar51,auVar73,4);
                  auVar71._0_4_ = auVar51._0_4_ * auVar69._0_4_;
                  auVar71._4_4_ = auVar51._4_4_ * auVar69._4_4_;
                  auVar71._8_4_ = auVar51._8_4_ * auVar69._8_4_;
                  auVar71._12_4_ = auVar51._12_4_ * auVar69._12_4_;
                  auVar74._0_4_ = auVar25._0_4_ * auVar71._0_4_;
                  auVar74._4_4_ = auVar25._4_4_ * auVar71._4_4_;
                  auVar74._8_4_ = auVar25._8_4_ * auVar71._8_4_;
                  auVar74._12_4_ = auVar25._12_4_ * auVar71._12_4_;
                  iVar57 = -(uint)(auVar25._0_4_ == 0.0);
                  iVar65 = -(uint)(auVar25._4_4_ == 0.0);
                  iVar66 = -(uint)(auVar25._8_4_ == 0.0);
                  iVar67 = -(uint)(auVar25._12_4_ == 0.0);
                  auVar51 = NEON_frsqrts(auVar71,auVar74,4);
                  fVar38 = fVar38 * auVar71._0_4_ * auVar51._0_4_;
                  fVar48 = fVar48 * auVar71._4_4_ * auVar51._4_4_;
                  fVar49 = fVar49 * auVar71._8_4_ * auVar51._8_4_;
                  fVar50 = fVar50 * auVar71._12_4_ * auVar51._12_4_;
                  fVar29 = pfVar13[8];
                  fVar34 = pfVar13[9];
                  fVar36 = pfVar13[10];
                  fVar77 = pfVar13[0xb] * pfVar13[0xb];
                  auVar26._0_4_ = fVar29 * fVar29 + fVar34 * fVar34;
                  auVar26._4_4_ = fVar36 * fVar36 + fVar77;
                  auVar26._8_4_ = fVar29 * fVar29 + fVar34 * fVar34;
                  auVar26._12_4_ = fVar36 * fVar36 + fVar77;
                  auVar51 = NEON_ext(auVar26,auVar26,4,1);
                  auVar27._0_4_ = auVar51._0_4_ + auVar51._4_4_;
                  auVar27._4_4_ = auVar51._8_4_ + auVar51._12_4_;
                  auVar27._8_4_ = auVar51._0_4_ + auVar51._4_4_;
                  auVar27._12_4_ = auVar51._8_4_ + auVar51._12_4_;
                  auVar51 = NEON_frsqrte(auVar27,4);
                  auVar83._0_4_ = auVar27._0_4_ * auVar51._0_4_;
                  auVar83._4_4_ = auVar27._4_4_ * auVar51._4_4_;
                  auVar83._8_4_ = auVar27._8_4_ * auVar51._8_4_;
                  auVar83._12_4_ = auVar27._12_4_ * auVar51._12_4_;
                  auVar69 = NEON_frsqrts(auVar51,auVar83,4);
                  auVar78._0_4_ = auVar51._0_4_ * auVar69._0_4_;
                  auVar78._4_4_ = auVar51._4_4_ * auVar69._4_4_;
                  auVar78._8_4_ = auVar51._8_4_ * auVar69._8_4_;
                  auVar78._12_4_ = auVar51._12_4_ * auVar69._12_4_;
                  auVar84._0_4_ = auVar27._0_4_ * auVar78._0_4_;
                  auVar84._4_4_ = auVar27._4_4_ * auVar78._4_4_;
                  auVar84._8_4_ = auVar27._8_4_ * auVar78._8_4_;
                  auVar84._12_4_ = auVar27._12_4_ * auVar78._12_4_;
                  auVar51 = NEON_frsqrts(auVar78,auVar84,4);
                  fVar81 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) &
                                           ~(byte)((uint)iVar10 >> 0x18),
                                           CONCAT12((byte)((uint)fVar28 >> 0x10) &
                                                    ~(byte)((uint)iVar10 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar28 >> 8) &
                                                             ~(byte)((uint)iVar10 >> 8),
                                                             SUB41(fVar28,0) & ~(byte)iVar10)));
                  auVar82._0_8_ =
                       CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                                CONCAT16((byte)((uint)fVar33 >> 0x10) &
                                         ~(byte)((uint)iVar54 >> 0x10),
                                         CONCAT15((byte)((uint)fVar33 >> 8) &
                                                  ~(byte)((uint)iVar54 >> 8),
                                                  CONCAT14(SUB41(fVar33,0) & ~(byte)iVar54,fVar81)))
                               );
                  auVar82[8] = SUB41(fVar35,0) & ~(byte)iVar55;
                  auVar82[9] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar55 >> 8);
                  auVar82[10] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
                  auVar82[0xb] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
                  auVar85[0xc] = SUB41(fVar37,0) & ~(byte)iVar56;
                  auVar85._0_12_ = auVar82;
                  auVar85[0xd] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar56 >> 8);
                  auVar85[0xe] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
                  auVar85[0xf] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
                  iVar10 = -(uint)(auVar27._0_4_ == 0.0);
                  iVar54 = -(uint)(auVar27._4_4_ == 0.0);
                  iVar55 = -(uint)(auVar27._8_4_ == 0.0);
                  fVar77 = (float)CONCAT13((byte)((uint)fVar38 >> 0x18) &
                                           ~(byte)((uint)iVar57 >> 0x18),
                                           CONCAT12((byte)((uint)fVar38 >> 0x10) &
                                                    ~(byte)((uint)iVar57 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar38 >> 8) &
                                                             ~(byte)((uint)iVar57 >> 8),
                                                             SUB41(fVar38,0) & ~(byte)iVar57)));
                  auVar52._0_8_ =
                       CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                                CONCAT16((byte)((uint)fVar48 >> 0x10) &
                                         ~(byte)((uint)iVar65 >> 0x10),
                                         CONCAT15((byte)((uint)fVar48 >> 8) &
                                                  ~(byte)((uint)iVar65 >> 8),
                                                  CONCAT14(SUB41(fVar48,0) & ~(byte)iVar65,fVar77)))
                               );
                  auVar52[8] = SUB41(fVar49,0) & ~(byte)iVar66;
                  auVar52[9] = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar66 >> 8);
                  auVar52[10] = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
                  auVar52[0xb] = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
                  auVar52[0xc] = SUB41(fVar50,0) & ~(byte)iVar67;
                  auVar52[0xd] = (byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar67 >> 8);
                  auVar52[0xe] = (byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
                  auVar52[0xf] = (byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
                  fVar29 = fVar29 * auVar78._0_4_ * auVar51._0_4_;
                  fVar34 = fVar34 * auVar78._4_4_ * auVar51._4_4_;
                  fVar36 = fVar36 * auVar78._8_4_ * auVar51._8_4_;
                  fVar48 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) &
                                           ~(byte)((uint)iVar10 >> 0x18),
                                           CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                                    ~(byte)((uint)iVar10 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar29 >> 8) &
                                                             ~(byte)((uint)iVar10 >> 8),
                                                             SUB41(fVar29,0) & ~(byte)iVar10)));
                  auVar58._0_8_ =
                       CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                                CONCAT16((byte)((uint)fVar34 >> 0x10) &
                                         ~(byte)((uint)iVar54 >> 0x10),
                                         CONCAT15((byte)((uint)fVar34 >> 8) &
                                                  ~(byte)((uint)iVar54 >> 8),
                                                  CONCAT14(SUB41(fVar34,0) & ~(byte)iVar54,fVar48)))
                               );
                  auVar58[8] = SUB41(fVar36,0) & ~(byte)iVar55;
                  auVar58[9] = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar55 >> 8);
                  auVar58[10] = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
                  auVar58[0xb] = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
                  auVar51 = NEON_fmov(0x3f800000,4);
                  fVar28 = (float)((ulong)auVar52._0_8_ >> 0x20);
                  fVar38 = auVar58._8_4_;
                  fVar33 = auVar51._0_4_ + (float)_DAT_03cab3a0 * fVar81 +
                           (float)_DAT_03cac210 * fVar28 + (float)_DAT_03cabb00 * fVar38;
                  fVar35 = auVar51._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar81 +
                           (float)((ulong)_DAT_03cac210 >> 0x20) * fVar28 +
                           (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar38;
                  fVar37 = auVar51._8_4_ + (float)_UNK_03cab3a8 * fVar81 +
                           (float)_UNK_03cac218 * fVar28 + (float)_UNK_03cabb08 * fVar38;
                  fVar38 = auVar51._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar81 +
                           (float)((ulong)_UNK_03cac218 >> 0x20) * fVar28 +
                           (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar38;
                  fVar49 = (float)((ulong)auVar58._0_8_ >> 0x20);
                  auVar51 = NEON_fmov(0x40800000,4);
                  auVar72._0_4_ = SQRT(fVar33) * 0.5 * auVar51._0_4_;
                  auVar72._4_4_ = SQRT(fVar35) * 0.5 * auVar51._4_4_;
                  auVar72._8_4_ = SQRT(fVar37) * 0.5 * auVar51._8_4_;
                  auVar72._12_4_ = SQRT(fVar38) * 0.5 * auVar51._12_4_;
                  auVar51 = NEON_frecpe(auVar72,4);
                  auVar90 = NEON_ext(auVar52,auVar52,8,1);
                  auVar94 = NEON_ext(auVar85,auVar85,8,1);
                  auVar69 = NEON_frecps(auVar51,auVar72,4);
                  auVar75._0_4_ = auVar51._0_4_ * auVar69._0_4_;
                  auVar75._4_4_ = auVar51._4_4_ * auVar69._4_4_;
                  auVar75._8_4_ = auVar51._8_4_ * auVar69._8_4_;
                  auVar75._12_4_ = auVar51._12_4_ * auVar69._12_4_;
                  fVar28 = auVar90._0_4_;
                  auVar51 = NEON_frecps(auVar75,auVar72,4);
                  fVar50 = auVar75._0_4_ * auVar51._0_4_;
                  fVar29 = auVar75._4_4_ * auVar51._4_4_;
                  fVar34 = auVar75._8_4_ * auVar51._8_4_;
                  fVar36 = auVar75._12_4_ * auVar51._12_4_;
                  fVar87 = (float)((ulong)auVar82._0_8_ >> 0x20);
                  fVar81 = auVar94._0_4_ + fVar48;
                  auVar8._8_4_ = fVar28 + -fVar49;
                  auVar8._4_4_ = fVar81;
                  fVar89 = (float)((uint)fVar33 ^
                                  ((uint)fVar33 ^ (uint)fVar35) & -(uint)(fVar33 <= fVar35));
                  fVar91 = (float)((uint)fVar33 ^
                                  ((uint)fVar33 ^ (uint)fVar35) & -(uint)(fVar33 <= fVar35));
                  fVar92 = (float)((uint)fVar33 ^
                                  ((uint)fVar33 ^ (uint)fVar35) & -(uint)(fVar33 <= fVar35));
                  fVar93 = (float)((uint)fVar33 ^
                                  ((uint)fVar33 ^ (uint)fVar35) & -(uint)(fVar33 <= fVar35));
                  auVar8._0_4_ = (fVar87 + fVar77) * fVar50;
                  auVar79._0_8_ = auVar8._0_8_ << 0x20;
                  auVar79._8_4_ = fVar81 * fVar50;
                  auVar79._12_4_ = (fVar28 + -fVar49) * fVar50;
                  auVar80._4_12_ = auVar79._4_12_;
                  auVar80._0_4_ = SQRT(fVar33) * 0.5;
                  auVar60._0_4_ = (auVar94._0_4_ + fVar48) * fVar34;
                  auVar60._4_4_ = (fVar28 + fVar49) * fVar34;
                  auVar60._12_4_ = (fVar87 - fVar77) * fVar34;
                  auVar53._0_4_ = (fVar28 - fVar49) * fVar36;
                  auVar53._4_4_ = (fVar48 - auVar82._8_4_) * fVar36;
                  auVar53._8_4_ = (fVar87 - fVar77) * fVar36;
                  auVar5._4_4_ = SQRT(fVar35) * 0.5;
                  auVar5._0_4_ = (fVar87 + fVar77) * fVar29;
                  auVar5._8_4_ = (fVar28 + fVar49) * fVar29;
                  auVar5._12_4_ = (fVar48 + -auVar82._8_4_) * fVar29;
                  auVar7._4_4_ = -(uint)(fVar33 <= fVar35);
                  auVar7._0_4_ = -(uint)(fVar33 <= fVar35);
                  auVar7._8_4_ = -(uint)(fVar33 <= fVar35);
                  auVar7._12_4_ = -(uint)(fVar33 <= fVar35);
                  auVar60._8_4_ = SQRT(fVar37) * 0.5;
                  auVar53._12_4_ = SQRT(fVar38) * 0.5;
                  auVar6._4_4_ = -(uint)(fVar91 <= fVar37);
                  auVar6._0_4_ = -(uint)(fVar89 <= fVar37);
                  auVar6._8_4_ = -(uint)(fVar92 <= fVar37);
                  auVar6._12_4_ = -(uint)(fVar93 <= fVar37);
                  auVar60 = auVar60 ^ (auVar60 ^ auVar80 ^ (auVar80 ^ auVar5) & auVar7) & ~auVar6;
                  auVar30._0_4_ =
                       -(uint)((float)((uint)fVar89 ^
                                      ((uint)fVar89 ^ (uint)fVar37) & -(uint)(fVar89 <= fVar37)) <=
                              fVar38);
                  auVar30._4_4_ =
                       -(uint)((float)((uint)fVar91 ^
                                      ((uint)fVar91 ^ (uint)fVar37) & -(uint)(fVar91 <= fVar37)) <=
                              fVar38);
                  auVar30._8_4_ =
                       -(uint)((float)((uint)fVar92 ^
                                      ((uint)fVar92 ^ (uint)fVar37) & -(uint)(fVar92 <= fVar37)) <=
                              fVar38);
                  auVar30._12_4_ =
                       -(uint)((float)((uint)fVar93 ^
                                      ((uint)fVar93 ^ (uint)fVar37) & -(uint)(fVar93 <= fVar37)) <=
                              fVar38);
                  auVar60 = auVar60 ^ (auVar60 ^ auVar53) & auVar30;
                  fVar28 = auVar60._0_4_;
                  auVar40._0_4_ = -fVar28;
                  fVar33 = auVar60._4_4_;
                  fVar38 = -fVar33;
                  fVar35 = auVar60._8_4_;
                  auVar39._8_4_ = -fVar35;
                  fVar37 = auVar60._12_4_;
                  auVar61._4_4_ = fVar35;
                  auVar61._0_4_ = fVar35;
                  auVar61._8_4_ = fVar35;
                  auVar61._12_4_ = fVar35;
                  auVar51 = NEON_ext(auVar61,auVar60,0xc,1);
                  auVar76._4_4_ = fVar33;
                  auVar76._0_4_ = fVar33;
                  auVar76._8_4_ = fVar33;
                  auVar76._12_4_ = fVar33;
                  auVar69 = NEON_ext(auVar76,auVar51,0xc,1);
                  fVar48 = (float)_DAT_03cab640;
                  fVar49 = (float)((ulong)_DAT_03cab640 >> 0x20);
                  fVar50 = (float)_UNK_03cab648;
                  fVar29 = (float)((ulong)_UNK_03cab648 >> 0x20);
                  auVar39._4_4_ = auVar39._8_4_;
                  auVar39._0_4_ = auVar39._8_4_;
                  auVar39._12_4_ = auVar39._8_4_;
                  auVar40._4_12_ = auVar39._4_12_;
                  auVar42._0_8_ = auVar40._0_8_;
                  auVar42._8_4_ = fVar38;
                  auVar42._12_4_ = auVar39._8_4_;
                  auVar41._8_8_ = auVar42._8_8_;
                  auVar41._4_4_ = auVar39._8_4_;
                  auVar41._0_4_ = auVar40._0_4_;
                  auVar43._0_12_ = auVar41._0_12_;
                  auVar43._12_4_ = auVar39._8_4_;
                  lVar12 = *param_4;
                  auVar86._0_4_ =
                       (float)_DAT_03caa5b0 * fVar37 + fVar28 * fVar48 * 0.0 +
                       (float)DAT_03cab620 * auVar69._0_4_ * fVar48 +
                       (float)_DAT_03caad80 * auVar51._0_4_;
                  auVar86._4_4_ =
                       (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar37 + fVar33 * fVar49 * 0.0 +
                       (float)((ulong)DAT_03cab620 >> 0x20) * auVar69._4_4_ * fVar49 +
                       (float)((ulong)_DAT_03caad80 >> 0x20) * auVar51._4_4_;
                  auVar86._8_4_ =
                       (float)_UNK_03caa5b8 * fVar37 + fVar35 * fVar50 * 0.0 +
                       (float)DAT_03cab628 * auVar69._8_4_ * fVar50 +
                       (float)_UNK_03caad88 * auVar51._8_4_;
                  auVar86._12_4_ =
                       (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar37 + fVar28 * fVar29 * 0.0 +
                       (float)((ulong)DAT_03cab628 >> 0x20) * auVar69._12_4_ * fVar29 +
                       (float)((ulong)_UNK_03caad88 >> 0x20) * auVar51._12_4_;
                  auVar31._4_4_ = auVar86._8_4_;
                  auVar31._0_4_ = auVar86._8_4_;
                  auVar31._8_4_ = auVar86._8_4_;
                  auVar31._12_4_ = auVar86._8_4_;
                  auVar51 = NEON_ext(auVar31,auVar86,0xc,1);
                  auVar62._4_4_ = auVar86._4_4_;
                  auVar62._0_4_ = auVar86._4_4_;
                  auVar62._8_4_ = auVar86._4_4_;
                  auVar62._12_4_ = auVar86._4_4_;
                  auVar90 = NEON_ext(auVar62,auVar51,0xc,1);
                  auVar94 = NEON_ext(auVar43,auVar43,8,1);
                  fVar28 = auVar94._0_4_;
                  auVar44._4_12_ = auVar43._4_12_;
                  auVar44._0_4_ = fVar28;
                  auVar46._0_8_ = auVar44._0_8_;
                  auVar46._8_4_ = auVar94._8_4_;
                  auVar46._12_4_ = auVar39._8_4_;
                  auVar45._8_8_ = auVar46._8_8_;
                  auVar45._4_4_ = auVar40._0_4_;
                  auVar45._0_4_ = fVar28;
                  auVar47._0_12_ = auVar45._0_12_;
                  auVar47._12_4_ = fVar38;
                  auVar69 = NEON_ext(auVar47,auVar94,8,1);
                  auVar69 = NEON_ext(auVar69,auVar69,0xc,1);
                  local_b0 = CONCAT44((fVar38 * auVar86._12_4_ + fVar37 * auVar86._4_4_ * fVar49 +
                                      auVar69._4_4_ * auVar90._4_4_ * fVar49) -
                                      auVar51._4_4_ * auVar94._4_4_,
                                      (auVar40._0_4_ * auVar86._12_4_ +
                                       fVar37 * auVar86._0_4_ * fVar48 +
                                      auVar69._0_4_ * auVar90._0_4_ * fVar48) -
                                      auVar51._0_4_ * fVar28);
                  uStack_a8 = (ulong)(uint)((auVar39._8_4_ * auVar86._12_4_ +
                                             fVar37 * auVar86._8_4_ * fVar50 +
                                            auVar69._8_4_ * auVar90._8_4_ * fVar50) -
                                           auVar51._8_4_ * auVar94._8_4_);
                }
                fVar28 = *(float *)(lVar12 + (ulong)*(uint *)(param_3 + 0x114));
                if (*(char *)(lVar12 + (ulong)*(uint *)(param_3 + 0xfc)) == '\0') {
                  fVar33 = *(float *)(lVar12 + (ulong)*(uint *)(param_3 + 0x10c)) /
                           *(float *)(lVar12 + (ulong)*(uint *)(param_3 + 0xf0)) + -1.0;
                  fVar35 = 1.0 - fVar33 * fVar33;
                  fVar33 = SQRT(fVar35);
                  if (NAN(fVar33)) {
                    fVar33 = sqrtf(fVar35);
                  }
                  fVar28 = fVar28 - (fVar28 * fVar33 + 0.0);
                }
                FUN_02024ffc(&local_90,param_3,param_4,1);
                if ((char)local_90 == '\0') {
                  if (fVar88 <= 1.0) {
                    auVar32._0_8_ =
                         CONCAT44(auVar9._4_4_ + local_b0._4_4_ * fVar28,
                                  auVar9._0_4_ + (float)local_b0 * fVar28);
                    auVar32._8_4_ = auVar9._8_4_ + (float)uStack_a8 * fVar28;
                    auVar32._12_4_ = uStack_a8._4_4_ * fVar28 + 0.0;
                    *(long *)(lVar17 + 0xc0) = auVar32._8_8_;
                    *(undefined8 *)(lVar17 + 0xb8) = auVar32._0_8_;
                    if (*(char *)(lVar17 + 0xcc) == '\0') {
                      *(undefined1 *)(lVar17 + 0xcc) = 1;
                      (**(code **)(*plVar18 + 0x78))(plVar18);
                    }
                  }
                  lVar17 = (**(code **)(*plVar18 + 0x68))(plVar18);
                  auVar51 = *(undefined1 (*) [16])(lVar17 + 0x30);
                  puVar15 = (undefined8 *)(*param_4 + (ulong)*(uint *)(param_3 + 0x120));
                  puVar15[1] = (ulong)auVar51._8_4_;
                  *puVar15 = auVar51._0_8_;
                }
                puVar11 = (undefined1 *)FUN_015a7158();
              }
              else {
                puVar11 = (undefined1 *)FUN_015c0588();
              }
LAB_020273d8:
              *param_1 = *puVar11;
              (**(code **)(*plVar18 + 0x60))(plVar18);
              goto LAB_02026f28;
            }
          }
          puVar11 = (undefined1 *)FUN_00f6866c();
          goto LAB_020273d8;
        }
        break;
      }
      sVar20 = sVar3;
    } while (sVar3 != 0);
  }
  puVar11 = (undefined1 *)FUN_00f6866c();
  *param_1 = *puVar11;
LAB_02026f28:
  if (local_60[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_60[0] + 3);
    do {
      sVar20 = *psVar2;
      cVar4 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar19) {
        *psVar2 = sVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar20 == 1) {
      piVar1 = (int *)((long)local_60[0] + 0x1c);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_90 = *local_60[0];
        FUN_00c44438(lVar17 + 0x8040,&local_90);
      }
    }
    else if (sVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


