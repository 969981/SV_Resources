/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e277e8; name: FUN_00e277e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e277e8(undefined1 param_1 [16],long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  long *local_30;
  long *local_28;
  
  fStack_38 = param_1._8_4_;
  fStack_34 = param_1._12_4_;
  local_40 = param_1._0_4_;
  fStack_3c = param_1._4_4_;
  fVar9 = *(float *)(param_2 + 0x160);
  fVar5 = *(float *)(param_2 + 0x164);
  fVar6 = *(float *)(param_2 + 0x168);
  fVar20 = *(float *)(param_2 + 0x16c) * *(float *)(param_2 + 0x16c);
  auVar11._0_4_ = fVar9 * fVar9 + fVar5 * fVar5;
  auVar11._4_4_ = fVar6 * fVar6 + fVar20;
  auVar11._8_4_ = fVar9 * fVar9 + fVar5 * fVar5;
  auVar11._12_4_ = fVar6 * fVar6 + fVar20;
  auVar11 = NEON_ext(auVar11,auVar11,4,1);
  if (0.0 < auVar11._0_4_ + auVar11._4_4_) {
    FUN_00c9e664(&local_30,param_2 + 0xe8);
    if (local_28 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)local_28[9];
      plVar1 = local_28 + 5;
      do {
        lVar7 = *plVar1;
        iVar4 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x60))();
    }
    if (plVar8 != (long *)0x0) {
      auVar36._4_4_ = fVar6;
      auVar36._0_4_ = fVar6;
      auVar36._8_4_ = fVar6;
      auVar36._12_4_ = fVar6;
      auVar37._4_12_ = auVar36._4_12_;
      auVar37._0_4_ = fVar9;
      auVar42._0_8_ = auVar37._0_8_;
      auVar42._8_4_ = fVar5;
      auVar42._12_4_ = fVar6;
      auVar40._8_8_ = auVar42._8_8_;
      auVar40._4_4_ = fVar6;
      auVar40._0_4_ = fVar9;
      auVar12._0_12_ = auVar40._0_12_;
      auVar12._12_4_ = fVar6;
      auVar35._4_4_ = fStack_38;
      auVar35._0_4_ = fStack_38;
      auVar35._8_4_ = fStack_38;
      auVar35._12_4_ = fStack_38;
      auVar36 = NEON_ext(auVar35,param_1,0xc,1);
      auVar37 = NEON_ext(auVar12,auVar12,8,1);
      auVar39._4_4_ = fStack_3c;
      auVar39._0_4_ = fStack_3c;
      auVar39._8_4_ = fStack_3c;
      auVar39._12_4_ = fStack_3c;
      fVar31 = (float)_DAT_03cab640;
      fVar32 = (float)((ulong)_DAT_03cab640 >> 0x20);
      fVar33 = (float)_UNK_03cab648;
      fVar34 = (float)((ulong)_UNK_03cab648 >> 0x20);
      fVar20 = auVar37._0_4_;
      auVar13._4_12_ = auVar12._4_12_;
      auVar13._0_4_ = fVar20;
      auVar15._0_8_ = auVar13._0_8_;
      auVar15._8_4_ = auVar37._8_4_;
      auVar15._12_4_ = fVar6;
      auVar14._8_8_ = auVar15._8_8_;
      auVar14._4_4_ = fVar9;
      auVar14._0_4_ = fVar20;
      auVar16._0_12_ = auVar14._0_12_;
      auVar16._12_4_ = fVar5;
      auVar40 = NEON_ext(auVar39,auVar36,0xc,1);
      auVar11 = NEON_ext(auVar16,auVar37,8,1);
      auVar11 = NEON_ext(auVar11,auVar11,0xc,1);
      fVar10 = -local_40;
      fVar18 = -fStack_3c;
      fVar19 = -fStack_38;
      auVar21._4_4_ = fVar19;
      auVar21._0_4_ = fVar19;
      auVar21._8_4_ = fVar19;
      auVar21._12_4_ = fVar19;
      auVar41._0_4_ =
           (fVar9 * fStack_34 + local_40 * fVar31 * 0.0 + auVar11._0_4_ * auVar40._0_4_ * fVar31) -
           auVar36._0_4_ * fVar20;
      auVar41._4_4_ =
           (fVar5 * fStack_34 + fStack_3c * fVar32 * 0.0 + auVar11._4_4_ * auVar40._4_4_ * fVar32) -
           auVar36._4_4_ * auVar37._4_4_;
      auVar41._8_4_ =
           (fVar6 * fStack_34 + fStack_38 * fVar33 * 0.0 + auVar11._8_4_ * auVar40._8_4_ * fVar33) -
           auVar36._8_4_ * auVar37._8_4_;
      auVar41._12_4_ =
           (fStack_34 * 0.0 + fVar9 * local_40 * fVar34 + auVar11._12_4_ * auVar40._12_4_ * fVar34)
           - auVar36._12_4_ * auVar37._12_4_;
      auVar22._4_12_ = auVar21._4_12_;
      auVar22._0_4_ = fVar10;
      auVar24._0_8_ = auVar22._0_8_;
      auVar24._8_4_ = fVar18;
      auVar24._12_4_ = fVar19;
      auVar23._8_8_ = auVar24._8_8_;
      auVar23._4_4_ = fVar19;
      auVar23._0_4_ = fVar10;
      auVar25._0_12_ = auVar23._0_12_;
      auVar25._12_4_ = fVar19;
      auVar30._4_4_ = auVar41._8_4_;
      auVar30._0_4_ = auVar41._8_4_;
      auVar30._8_4_ = auVar41._8_4_;
      auVar30._12_4_ = auVar41._8_4_;
      auVar38._4_4_ = auVar41._4_4_;
      auVar38._0_4_ = auVar41._4_4_;
      auVar38._8_4_ = auVar41._4_4_;
      auVar38._12_4_ = auVar41._4_4_;
      auVar37 = NEON_ext(auVar30,auVar41,0xc,1);
      auVar42 = NEON_ext(auVar25,auVar25,8,1);
      fVar9 = auVar42._0_4_;
      auVar26._4_12_ = auVar25._4_12_;
      auVar26._0_4_ = fVar9;
      auVar28._0_8_ = auVar26._0_8_;
      auVar28._8_4_ = auVar42._8_4_;
      auVar28._12_4_ = fVar19;
      auVar27._8_8_ = auVar28._8_8_;
      auVar27._4_4_ = fVar10;
      auVar27._0_4_ = fVar9;
      auVar29._0_12_ = auVar27._0_12_;
      auVar29._12_4_ = fVar18;
      auVar11 = NEON_ext(auVar29,auVar42,8,1);
      auVar40 = NEON_ext(auVar38,auVar37,0xc,1);
      auVar36 = NEON_ext(auVar11,auVar11,0xc,1);
      auVar11 = *(undefined1 (*) [16])(param_2 + 0x160);
      auVar17._0_8_ =
           CONCAT44(auVar11._4_4_ -
                    ((fVar18 * auVar41._12_4_ + fStack_34 * auVar41._4_4_ * fVar32 +
                     auVar36._4_4_ * auVar40._4_4_ * fVar32) - auVar37._4_4_ * auVar42._4_4_),
                    auVar11._0_4_ -
                    ((fVar10 * auVar41._12_4_ + fStack_34 * auVar41._0_4_ * fVar31 +
                     auVar36._0_4_ * auVar40._0_4_ * fVar31) - auVar37._0_4_ * fVar9));
      auVar17._8_4_ =
           auVar11._8_4_ -
           ((fVar19 * auVar41._12_4_ + fStack_34 * auVar41._8_4_ * fVar33 +
            auVar36._8_4_ * auVar40._8_4_ * fVar33) - auVar37._8_4_ * auVar42._8_4_);
      auVar17._12_4_ = auVar11._12_4_ - 0.0;
      plVar8[0x1d] = auVar17._8_8_;
      plVar8[0x1c] = auVar17._0_8_;
      if (*(char *)((long)plVar8 + 0xf4) == '\0') {
        *(undefined1 *)((long)plVar8 + 0xf4) = 1;
        (**(code **)(*plVar8 + 0x78))(plVar8);
      }
    }
  }
  return;
}


