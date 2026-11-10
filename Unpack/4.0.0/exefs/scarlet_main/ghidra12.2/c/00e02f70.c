/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e02f70; name: FUN_00e02f70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e02f70(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  uint uStack_38;
  undefined4 uStack_34;
  long *local_30;
  long *local_28;
  
  uStack_38 = param_1._8_4_;
  uStack_34 = param_1._12_4_;
  if (*(char *)(param_4 + 0x150) != '\0') {
    FUN_00c9e664(&local_30,param_4 + 0xe8);
    if (local_30 != (long *)0x0) {
      *(long *)(param_4 + 0x168) = param_1._8_8_;
      *(long *)(param_4 + 0x160) = param_1._0_8_;
      if (local_28 == (long *)0x0) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = (long *)local_28[9];
      }
      plVar9 = (long *)plVar8[0x74];
      plVar10 = (long *)plVar8[0x75];
      if (plVar9 == plVar10) {
LAB_00e02fe4:
        if (plVar9 != plVar10) {
          auVar17._0_8_ = param_3._4_8_ << 0x20;
          auVar17._12_4_ = param_3._12_4_;
          auVar17._8_4_ = 0;
          auVar4._4_8_ = auVar17._8_8_;
          auVar4._0_4_ = param_1._0_4_;
          auVar13 = NEON_ext(ZEXT816(0),param_1,4,1);
          auVar13 = NEON_ext(auVar13,ZEXT816(0),0xc,1);
          auVar18._0_8_ = auVar4._0_8_ << 0x20;
          auVar18._8_4_ = param_1._4_4_;
          auVar18._12_4_ = param_1._4_4_;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = auVar18._8_8_;
          auVar19._0_12_ = SUB1612(auVar20 << 0x40,0);
          auVar19._12_4_ = 0;
          auVar20 = NEON_ext(auVar19,ZEXT816(0),4,1);
          plVar9[7] = auVar13._8_8_;
          plVar9[6] = auVar13._0_8_;
          plVar9[9] = auVar20._8_8_;
          plVar9[8] = auVar20._0_8_;
          lVar7 = _UNK_03cabe58;
          lVar6 = _DAT_03cabe50;
          auVar5._4_8_ = 0;
          auVar5._0_4_ = uStack_38;
          auVar13._12_4_ = uStack_34;
          auVar13._0_12_ = auVar5 << 0x20;
          auVar13 = NEON_ext(ZEXT816(0),auVar13,0xc,1);
          *(undefined1 *)((long)plVar9 + 0x24) = 1;
          plVar9[0xb] = auVar13._8_8_;
          plVar9[10] = auVar13._0_8_;
          plVar9[0xd] = lVar7;
          plVar9[0xc] = lVar6;
          *(undefined1 *)((long)plVar8 + 0x4fd) = 1;
          if (*(char *)((long)plVar8 + 0xf4) == '\0') {
            *(undefined1 *)((long)plVar8 + 0xf4) = 1;
            (**(code **)(*plVar8 + 0x78))();
          }
        }
      }
      else {
        do {
          if (*plVar9 == 0x2af5476e236ce01b) goto LAB_00e02fe4;
          plVar9 = plVar9 + 0x18;
        } while (plVar10 != plVar9);
      }
      fVar12 = *(float *)(param_4 + 0x160) * *(float *)(param_4 + 0x160);
      fVar14 = *(float *)(param_4 + 0x164) * *(float *)(param_4 + 0x164);
      fVar15 = *(float *)(param_4 + 0x168) * *(float *)(param_4 + 0x168);
      fVar16 = *(float *)(param_4 + 0x16c) * *(float *)(param_4 + 0x16c);
      auVar11._0_4_ = fVar12 + fVar14;
      auVar11._4_4_ = fVar15 + fVar16;
      auVar11._8_4_ = fVar12 + fVar14;
      auVar11._12_4_ = fVar15 + fVar16;
      NEON_ext(auVar11,auVar11,4,1);
      FUN_00e030fc(param_4);
    }
    if (local_28 != (long *)0x0) {
      plVar8 = local_28 + 5;
      do {
        lVar6 = *plVar8;
        iVar3 = (int)lVar6 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
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
  }
  return;
}


