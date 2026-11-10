/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e24468; name: FUN_01e24468
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e24468(long param_1,byte param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 auVar5 [12];
  long lVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  undefined8 local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  if ((param_2 & 1) == 0) {
    FUN_00c9e664(&local_50,param_1 + 0xe8);
    if (local_50 != (long *)0x0) {
      if (local_48 == (long *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = local_48[9];
      }
      local_90 = 0x2af5476e236ce01b;
      pcStack_88 = "PokemonModelComponentLayerNode";
      local_80 = 0x1e;
      local_78 = (long *)0x0;
      FUN_0146d138(lVar6,&local_90);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
    }
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 5;
      do {
        lVar6 = *plVar1;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_01e24678;
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x60))();
    }
    *(byte *)(param_1 + 0x150) = param_2 & 1;
  }
  else {
    *(byte *)(param_1 + 0x150) = param_2 & 1;
    FUN_00c9e664(&local_30,param_1 + 0xe8);
    if (local_30 != (long *)0x0) {
      if (local_28 == (long *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = local_28[9];
      }
      local_40 = 0x1e;
      local_38 = (long *)0x0;
      local_50 = (long *)0x2af5476e236ce01b;
      local_48 = (long *)0x3c8b46f;
      auVar13 = *(undefined1 (*) [16])(param_1 + 0x160);
      auVar8 = NEON_ext(ZEXT816(0),auVar13,4,1);
      auVar8 = NEON_ext(auVar8,ZEXT816(0),0xc,1);
      auVar12 = NEON_ext(ZEXT416(auVar13._4_4_) << 0x40,ZEXT816(0),4,1);
      pcStack_88 = auVar8._8_8_;
      local_90 = auVar8._0_8_;
      local_78 = auVar12._8_8_;
      local_80 = auVar12._0_8_;
      auVar5._4_8_ = 0;
      auVar5._0_4_ = auVar13._8_4_;
      auVar13._12_4_ = auVar13._12_4_;
      auVar13._0_12_ = auVar5 << 0x20;
      auVar13 = NEON_ext(ZEXT816(0),auVar13,0xc,1);
      uStack_68 = auVar13._8_8_;
      local_70 = auVar13._0_8_;
      uStack_58 = _UNK_03cabe58;
      uStack_60 = _DAT_03cabe50;
      FUN_011f87e8(lVar6,&local_50,0,&local_90,0);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
    }
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        lVar6 = *plVar1;
        iVar4 = (int)lVar6 + -1;
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
      else if ((int)lVar6 == 0) {
LAB_01e24678:
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
    if (*(char *)(param_1 + 0x150) != '\0') {
      fVar7 = *(float *)(param_1 + 0x160) * *(float *)(param_1 + 0x160);
      fVar9 = *(float *)(param_1 + 0x164) * *(float *)(param_1 + 0x164);
      fVar10 = *(float *)(param_1 + 0x168) * *(float *)(param_1 + 0x168);
      fVar11 = *(float *)(param_1 + 0x16c) * *(float *)(param_1 + 0x16c);
      auVar8._0_4_ = fVar7 + fVar9;
      auVar8._4_4_ = fVar10 + fVar11;
      auVar8._8_4_ = fVar7 + fVar9;
      auVar8._12_4_ = fVar10 + fVar11;
      NEON_ext(auVar8,auVar8,4,1);
    }
  }
  FUN_00e030fc(param_1);
  return;
}


