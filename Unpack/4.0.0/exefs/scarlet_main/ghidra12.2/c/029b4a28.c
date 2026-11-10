/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b4a28; name: FUN_029b4a28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029b4a28(long param_1,ulong param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  int iVar10;
  int iVar15;
  undefined1 auVar11 [12];
  int iVar14;
  undefined1 auVar12 [16];
  int iVar16;
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  float fVar62;
  float fVar63;
  undefined1 auVar61 [16];
  float fVar65;
  undefined1 auVar64 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  long **local_110;
  long local_108;
  undefined8 *puStack_100;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    lVar7 = FUN_00c8dda0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
    if ((lVar7 == 0) || (plVar9 = *(long **)(lVar7 + 0x120), plVar9 == (long *)0x0)) {
      iVar10 = _DAT_00000194;
    }
    else {
      plVar1 = plVar9 + 5;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      iVar10 = *(int *)((long)plVar9 + 0x194);
      do {
        lVar7 = *plVar1;
        iVar14 = (int)lVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (iVar10 < *(int *)(PTR_DAT_047ddf68 + 0xc)) {
      if (((param_2 & 1) == 0) &&
         ((int)(uint)*(byte *)(*(long *)(param_1 + 0x58) + 0x1fc) <= *(int *)(param_1 + 0x1a8))) {
        local_b0 = 0xf;
        local_48 = *(long **)(param_1 + 0xb8);
        (**(code **)(*local_48 + 0x10))(local_48,&local_b0);
        local_110 = &local_48;
        local_130 = &LAB_02e4b9f4;
        local_128 = FUN_02e4ba14;
        local_120 = &LAB_02e4ba18;
        local_118 = &LAB_02e4ba24;
        (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))(*(long **)(param_1 + 0xd8),&local_130);
        pcVar6 = local_128;
        if (local_128 != (code *)0x0) {
          local_120 = (undefined1 *)0x0;
          local_118 = (undefined1 *)0x0;
          local_130 = (undefined1 *)0x0;
          local_128 = (code *)0x0;
          (*pcVar6)(&local_110);
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      local_130 = &LAB_02e4b9d4;
      local_128 = FUN_02e4b9e8;
      local_120 = &LAB_02e4b9ec;
      local_118 = &LAB_02e4b9f0;
      (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))(*(long **)(param_1 + 0xd8),&local_130);
      pcVar6 = local_128;
      if (local_128 != (code *)0x0) {
        local_120 = (undefined1 *)0x0;
        local_118 = (undefined1 *)0x0;
        local_130 = (undefined1 *)0x0;
        local_128 = (code *)0x0;
        (*pcVar6)(&local_110);
      }
      if (((*(char *)(param_1 + 0xe0) != '\0') || (*(char *)(param_1 + 0xe1) != '\0')) &&
         (*(undefined1 **)(*(long *)(param_1 + 0x58) + 0x1d0) == &DAT_afc4d6c05abef19e)) {
        lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x30) + 0xe8);
        if (lVar7 == 0) {
          plVar9 = (long *)0x0;
        }
        else {
          plVar9 = *(long **)(lVar7 + 0x48);
        }
        if (*(char *)(param_1 + 0xe0) != '\0') {
          fVar17 = *(float *)(param_1 + 0x120);
          fVar65 = *(float *)(param_1 + 0x124);
          fVar18 = *(float *)(param_1 + 0x128);
          fVar22 = *(float *)(param_1 + 300);
          auVar45._4_4_ = fVar18;
          auVar45._0_4_ = fVar18;
          auVar45._8_4_ = fVar18;
          auVar45._12_4_ = fVar18;
          auVar12 = *(undefined1 (*) [16])(plVar9 + 0x1a);
          fVar43 = auVar12._8_4_;
          auVar61._4_4_ = fVar43;
          auVar61._0_4_ = fVar43;
          auVar61._8_4_ = fVar43;
          auVar61._12_4_ = fVar43;
          auVar19 = NEON_ext(auVar61,auVar12,0xc,1);
          fVar42 = auVar12._4_4_;
          auVar23._4_4_ = fVar42;
          auVar23._0_4_ = fVar42;
          auVar23._8_4_ = fVar42;
          auVar23._12_4_ = fVar42;
          fVar44 = auVar12._12_4_;
          auVar46._4_12_ = auVar45._4_12_;
          auVar46._0_4_ = fVar17;
          auVar48._0_8_ = auVar46._0_8_;
          auVar48._8_4_ = fVar65;
          auVar48._12_4_ = fVar18;
          auVar47._8_8_ = auVar48._8_8_;
          auVar47._4_4_ = fVar18;
          auVar47._0_4_ = fVar17;
          auVar49._0_12_ = auVar47._0_12_;
          auVar49._12_4_ = fVar18;
          auVar24 = NEON_ext(auVar23,auVar19,0xc,1);
          auVar61 = NEON_ext(auVar49,auVar49,8,1);
          fVar62 = (float)((ulong)_DAT_03cab640 >> 0x20);
          fVar63 = (float)((ulong)_UNK_03cab648 >> 0x20);
          fVar28 = auVar61._0_4_;
          auVar50._4_12_ = auVar49._4_12_;
          auVar50._0_4_ = fVar28;
          auVar52._0_8_ = auVar50._0_8_;
          auVar52._8_4_ = auVar61._8_4_;
          auVar52._12_4_ = fVar18;
          auVar51._8_8_ = auVar52._8_8_;
          auVar51._4_4_ = fVar17;
          auVar51._0_4_ = fVar28;
          auVar53._0_12_ = auVar51._0_12_;
          auVar53._12_4_ = fVar65;
          auVar54 = NEON_ext(auVar53,auVar61,8,1);
          auVar54 = NEON_ext(auVar54,auVar54,0xc,1);
          fVar28 = (fVar17 * fVar44 + fVar22 * auVar12._0_4_ * (float)_DAT_03cab640 +
                   auVar54._0_4_ * auVar24._0_4_ * (float)_DAT_03cab640) - auVar19._0_4_ * fVar28;
          fVar42 = (fVar65 * fVar44 + fVar22 * fVar42 * fVar62 +
                   auVar54._4_4_ * auVar24._4_4_ * fVar62) - auVar19._4_4_ * auVar61._4_4_;
          fVar43 = (fVar18 * fVar44 + fVar22 * fVar43 * (float)_UNK_03cab648 +
                   auVar54._8_4_ * auVar24._8_4_ * (float)_UNK_03cab648) -
                   auVar19._8_4_ * auVar61._8_4_;
          fVar44 = (fVar22 * fVar44 + fVar17 * auVar12._0_4_ * fVar63 +
                   auVar54._12_4_ * auVar24._12_4_ * fVar63) - auVar19._12_4_ * auVar61._12_4_;
          auVar12._0_4_ = fVar28 * fVar28 + fVar42 * fVar42;
          auVar12._4_4_ = fVar43 * fVar43 + fVar44 * fVar44;
          auVar12._8_4_ = fVar28 * fVar28 + fVar42 * fVar42;
          auVar12._12_4_ = fVar43 * fVar43 + fVar44 * fVar44;
          auVar12 = NEON_ext(auVar12,auVar12,4,1);
          auVar19._0_4_ = auVar12._0_4_ + auVar12._4_4_;
          auVar19._4_4_ = auVar12._8_4_ + auVar12._12_4_;
          auVar19._8_4_ = auVar12._0_4_ + auVar12._4_4_;
          auVar19._12_4_ = auVar12._8_4_ + auVar12._12_4_;
          auVar12 = NEON_frsqrte(auVar19,4);
          auVar25._0_4_ = auVar19._0_4_ * auVar12._0_4_;
          auVar25._4_4_ = auVar19._4_4_ * auVar12._4_4_;
          auVar25._8_4_ = auVar19._8_4_ * auVar12._8_4_;
          auVar25._12_4_ = auVar19._12_4_ * auVar12._12_4_;
          auVar24 = NEON_frsqrts(auVar12,auVar25,4);
          auVar20._0_4_ = auVar12._0_4_ * auVar24._0_4_;
          auVar20._4_4_ = auVar12._4_4_ * auVar24._4_4_;
          auVar20._8_4_ = auVar12._8_4_ * auVar24._8_4_;
          auVar20._12_4_ = auVar12._12_4_ * auVar24._12_4_;
          auVar26._0_4_ = auVar19._0_4_ * auVar20._0_4_;
          auVar26._4_4_ = auVar19._4_4_ * auVar20._4_4_;
          auVar26._8_4_ = auVar19._8_4_ * auVar20._8_4_;
          auVar26._12_4_ = auVar19._12_4_ * auVar20._12_4_;
          iVar10 = -(uint)(auVar19._0_4_ == 0.0);
          iVar14 = -(uint)(auVar19._4_4_ == 0.0);
          iVar15 = -(uint)(auVar19._8_4_ == 0.0);
          iVar16 = -(uint)(auVar19._12_4_ == 0.0);
          auVar12 = NEON_frsqrts(auVar20,auVar26,4);
          fVar28 = fVar28 * auVar20._0_4_ * auVar12._0_4_;
          fVar42 = fVar42 * auVar20._4_4_ * auVar12._4_4_;
          fVar43 = fVar43 * auVar20._8_4_ * auVar12._8_4_;
          fVar44 = fVar44 * auVar20._12_4_ * auVar12._12_4_;
          fVar28 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                                   CONCAT12((byte)((uint)fVar28 >> 0x10) &
                                            ~(byte)((uint)iVar10 >> 0x10),
                                            CONCAT11((byte)((uint)fVar28 >> 8) &
                                                     ~(byte)((uint)iVar10 >> 8),
                                                     SUB41(fVar28,0) & ~(byte)iVar10)));
          auVar11._0_8_ =
               CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                        CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                 CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                          CONCAT14(SUB41(fVar42,0) & ~(byte)iVar14,fVar28))));
          auVar11[8] = SUB41(fVar43,0) & ~(byte)iVar15;
          auVar11[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar15 >> 8);
          auVar11[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10);
          auVar11[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18);
          auVar54[0xc] = SUB41(fVar44,0) & ~(byte)iVar16;
          auVar54._0_12_ = auVar11;
          auVar54[0xd] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar16 >> 8);
          auVar54[0xe] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10);
          auVar54[0xf] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18);
          fVar42 = (float)((ulong)auVar11._0_8_ >> 0x20);
          fVar42 = fVar42 * fVar42;
          fVar43 = auVar11._8_4_ * auVar11._8_4_;
          fVar44 = auVar54._12_4_ * auVar54._12_4_;
          auVar24._0_4_ = fVar28 * fVar28 + fVar42;
          auVar24._4_4_ = fVar43 + fVar44;
          auVar24._8_4_ = fVar28 * fVar28 + fVar42;
          auVar24._12_4_ = fVar43 + fVar44;
          auVar12 = NEON_ext(auVar24,auVar24,4,1);
          if (0.0 < auVar12._0_4_ + auVar12._4_4_) {
            plVar9[0x1b] = auVar54._8_8_;
            plVar9[0x1a] = auVar11._0_8_;
            if (*(char *)((long)plVar9 + 0xf4) == '\0') {
              *(undefined1 *)((long)plVar9 + 0xf4) = 1;
              (**(code **)(*plVar9 + 0x78))(plVar9);
            }
          }
          *(float *)(param_1 + 0x108) = fVar18;
          *(float *)(param_1 + 0x10c) = fVar22;
          *(float *)(param_1 + 0x100) = fVar17;
          *(float *)(param_1 + 0x104) = fVar65;
        }
        if (*(char *)(param_1 + 0xe1) != '\0') {
          lVar7 = *(long *)(param_1 + 0x58);
          if (*(char *)(lVar7 + 0xec) == '\0') {
            fVar17 = 1.0;
          }
          else {
            fVar17 = *(float *)(lVar7 + 0x1cc) * *(float *)(lVar7 + 0x1c8);
          }
          fVar18 = *(float *)(param_1 + 0x130) * *(float *)(plVar9 + 0x18) * fVar17;
          fVar22 = *(float *)(param_1 + 0x134) * *(float *)((long)plVar9 + 0xc4) * fVar17;
          fVar17 = *(float *)(param_1 + 0x138) * *(float *)(plVar9 + 0x19) * fVar17;
          auVar12 = *(undefined1 (*) [16])(plVar9 + 0x1a);
          auVar55._4_4_ = fVar17;
          auVar55._0_4_ = fVar17;
          auVar55._8_4_ = fVar17;
          auVar55._12_4_ = fVar17;
          fVar65 = auVar12._0_4_;
          fVar44 = -fVar65;
          fVar28 = auVar12._4_4_;
          fVar62 = -fVar28;
          fVar42 = auVar12._8_4_;
          fVar63 = -fVar42;
          fVar43 = auVar12._12_4_;
          auVar64._4_4_ = fVar42;
          auVar64._0_4_ = fVar42;
          auVar64._8_4_ = fVar42;
          auVar64._12_4_ = fVar42;
          auVar56._4_12_ = auVar55._4_12_;
          auVar56._0_4_ = fVar18;
          auVar58._0_8_ = auVar56._0_8_;
          auVar58._8_4_ = fVar22;
          auVar58._12_4_ = fVar17;
          auVar57._8_8_ = auVar58._8_8_;
          auVar57._4_4_ = fVar17;
          auVar57._0_4_ = fVar18;
          auVar59._0_12_ = auVar57._0_12_;
          auVar59._12_4_ = fVar17;
          auVar54 = NEON_ext(auVar64,auVar12,0xc,1);
          fVar66 = (float)_DAT_03cab640;
          auVar29._0_4_ = fVar65 * fVar66;
          fVar67 = (float)((ulong)_DAT_03cab640 >> 0x20);
          auVar29._4_4_ = fVar28 * fVar67;
          fVar68 = (float)_UNK_03cab648;
          auVar29._8_4_ = fVar42 * fVar68;
          fVar42 = (float)((ulong)_UNK_03cab648 >> 0x20);
          auVar29._12_4_ = fVar65 * fVar42;
          auVar12 = NEON_ext(auVar59,auVar59,8,1);
          fVar65 = auVar12._0_4_;
          auVar30._4_12_ = auVar29._4_12_;
          auVar30._0_4_ = fVar65;
          auVar32._0_8_ = auVar30._0_8_;
          auVar32._8_4_ = auVar12._8_4_;
          auVar32._12_4_ = auVar29._12_4_;
          auVar31._8_8_ = auVar32._8_8_;
          auVar31._4_4_ = fVar18;
          auVar31._0_4_ = fVar65;
          auVar33._0_12_ = auVar31._0_12_;
          auVar33._12_4_ = fVar22;
          auVar5._4_4_ = fVar28;
          auVar5._0_4_ = fVar28;
          auVar5._8_4_ = fVar28;
          auVar5._12_4_ = fVar28;
          auVar24 = NEON_ext(auVar5,auVar54,0xc,1);
          auVar19 = NEON_ext(auVar33,auVar12,8,1);
          auVar19 = NEON_ext(auVar19,auVar19,0xc,1);
          auVar36._12_4_ = auVar19._12_4_;
          auVar21._0_4_ =
               (fVar18 * fVar43 + auVar29._0_4_ * 0.0 + auVar19._0_4_ * auVar24._0_4_ * fVar66) -
               auVar54._0_4_ * fVar65;
          auVar21._4_4_ =
               (fVar22 * fVar43 + auVar29._4_4_ * 0.0 + auVar19._4_4_ * auVar24._4_4_ * fVar67) -
               auVar54._4_4_ * auVar12._4_4_;
          auVar21._8_4_ =
               (fVar17 * fVar43 + auVar29._8_4_ * 0.0 + auVar19._8_4_ * auVar24._8_4_ * fVar68) -
               auVar54._8_4_ * auVar12._8_4_;
          auVar21._12_4_ =
               (fVar43 * 0.0 + fVar18 * auVar29._12_4_ + auVar36._12_4_ * auVar24._12_4_ * fVar42) -
               auVar54._12_4_ * auVar12._12_4_;
          auVar34._4_12_ = auVar19._4_12_;
          auVar34._0_4_ = fVar44;
          auVar36._0_8_ = auVar34._0_8_;
          auVar36._8_4_ = fVar62;
          auVar35._8_8_ = auVar36._8_8_;
          auVar35._4_4_ = fVar63;
          auVar35._0_4_ = fVar44;
          auVar37._0_12_ = auVar35._0_12_;
          auVar37._12_4_ = fVar63;
          auVar27._4_4_ = auVar21._8_4_;
          auVar27._0_4_ = auVar21._8_4_;
          auVar27._8_4_ = auVar21._8_4_;
          auVar27._12_4_ = auVar21._8_4_;
          auVar60._4_4_ = auVar21._4_4_;
          auVar60._0_4_ = auVar21._4_4_;
          auVar60._8_4_ = auVar21._4_4_;
          auVar60._12_4_ = auVar21._4_4_;
          auVar12 = NEON_ext(auVar27,auVar21,0xc,1);
          auVar24 = NEON_ext(auVar60,auVar12,0xc,1);
          auVar54 = NEON_ext(auVar37,auVar37,8,1);
          fVar17 = auVar54._0_4_;
          auVar38._4_12_ = auVar37._4_12_;
          auVar38._0_4_ = fVar17;
          auVar40._0_8_ = auVar38._0_8_;
          auVar40._8_4_ = auVar54._8_4_;
          auVar40._12_4_ = fVar63;
          auVar39._8_8_ = auVar40._8_8_;
          auVar39._4_4_ = fVar44;
          auVar39._0_4_ = fVar17;
          auVar41._0_12_ = auVar39._0_12_;
          auVar41._12_4_ = fVar62;
          auVar19 = NEON_ext(auVar41,auVar54,8,1);
          auVar19 = NEON_ext(auVar19,auVar19,0xc,1);
          fVar17 = (fVar44 * auVar21._12_4_ + fVar43 * auVar21._0_4_ * fVar66 +
                   auVar19._0_4_ * auVar24._0_4_ * fVar66) - auVar12._0_4_ * fVar17;
          fVar65 = (fVar62 * auVar21._12_4_ + fVar43 * auVar21._4_4_ * fVar67 +
                   auVar19._4_4_ * auVar24._4_4_ * fVar67) - auVar12._4_4_ * auVar54._4_4_;
          fVar18 = (fVar63 * auVar21._12_4_ + fVar43 * auVar21._8_4_ * fVar68 +
                   auVar19._8_4_ * auVar24._8_4_ * fVar68) - auVar12._8_4_ * auVar54._8_4_;
          auVar13._0_8_ =
               CONCAT44((float)((ulong)plVar9[0x1c] >> 0x20) + fVar65,(float)plVar9[0x1c] + fVar17);
          auVar13._8_4_ = (float)plVar9[0x1d] + fVar18;
          auVar13._12_4_ = (float)((ulong)plVar9[0x1d] >> 0x20) + 0.0;
          plVar9[0x1d] = auVar13._8_8_;
          plVar9[0x1c] = auVar13._0_8_;
          if (*(char *)((long)plVar9 + 0xf4) == '\0') {
            *(undefined1 *)((long)plVar9 + 0xf4) = 1;
            (**(code **)(*plVar9 + 0x78))(plVar9);
          }
          *(ulong *)(param_1 + 0xf8) = (ulong)(uint)fVar18;
          *(ulong *)(param_1 + 0xf0) = CONCAT44(fVar65,fVar17);
        }
      }
      if (bVar4) {
        local_50 = *(long **)(param_1 + 0xb8);
        local_48 = (long *)0x20;
        (**(code **)(*local_50 + 0x10))(local_50,&local_48);
        for (plVar9 = *(long **)(param_1 + 0x170); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9)
        {
          *(undefined4 *)(plVar9 + 6) = 0x3f800000;
        }
        local_b0 = 0x898255d4ad0f6542;
        pcStack_a8 = "Physics";
        local_a0 = 7;
        local_98 = (long *)0x0;
        local_90 = &DAT_ea8325e5dbb45b47;
        puStack_88 = &DAT_03bd5885;
        local_80 = 4;
        local_78 = (long *)0x0;
        local_70 = 0xaa95b52d79d5cd73;
        pcStack_68 = "WindNoise";
        local_60 = 9;
        local_58 = (long *)0x0;
        puStack_100 = &local_b0;
        local_110 = &local_50;
        local_120 = &LAB_02e4ba34;
        local_130 = &LAB_029b59e4;
        local_128 = FUN_02e4ba30;
        local_118 = &LAB_02e4ba48;
        local_108 = param_1 + 0x140;
        (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))(*(long **)(param_1 + 0xd8),&local_130);
        pcVar6 = local_128;
        if (local_128 != (code *)0x0) {
          local_120 = (undefined1 *)0x0;
          local_118 = (undefined1 *)0x0;
          local_130 = (undefined1 *)0x0;
          local_128 = (code *)0x0;
          (*pcVar6)(&local_110);
        }
        lVar7 = *(long *)(param_1 + 0x58) + 0xf8;
        if (*(long *)(*(long *)(param_1 + 0x58) + 0x150) == *(long *)(param_1 + 0x198)) {
          for (plVar9 = *(long **)(param_1 + 0x170); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9
              ) {
            uVar2 = *(undefined4 *)(plVar9 + 6);
            puVar8 = (undefined4 *)FUN_00c42268(lVar7,plVar9 + 2);
            *puVar8 = uVar2;
          }
        }
        else {
          FUN_00e9f0ac(lVar7,param_1 + 0x140);
        }
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        *(undefined4 *)(param_1 + 0x1a8) = 0;
      }
      else if ((param_2 & 1) == 0) {
        *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
      }
    }
  }
  return;
}


