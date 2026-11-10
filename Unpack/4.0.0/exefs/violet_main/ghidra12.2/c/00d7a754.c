/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d7a754; name: FUN_00d7a754
 */


void FUN_00d7a754(undefined1 param_1 [16],long param_2,uint param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_38 [8];
  
  plVar8 = *(long **)(param_2 + 0x30);
  if (plVar8 == (long *)0x0) {
    if ((param_4 & 1) != 0) {
      *(undefined8 *)(param_2 + 0x30) = 0;
    }
  }
  else {
    fVar10 = (float)plVar8[10] - param_1._0_4_;
    fVar11 = (float)plVar8[0xb] - param_1._8_4_;
    fVar12 = fVar10 * fVar10 + fVar11 * fVar11;
    fVar10 = *(float *)((long)plVar8 + 0x2c) * 1.5;
    fVar11 = fVar10 * fVar10;
    fVar10 = fVar10 * 10.0 * fVar10 * 10.0;
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    if (fVar12 <= fVar10) {
      bVar5 = false;
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar12) && !NAN(fVar11)) {
        bVar5 = fVar12 < fVar11;
        bVar6 = fVar12 == fVar11;
        bVar7 = false;
      }
    }
    if ((bVar6 || bVar5 != bVar7) && ((param_4 & 1) == 0)) goto LAB_00d7a7b8;
    if ((fVar10 < fVar12) || ((param_4 & 1) != 0)) {
      plVar9 = plVar8 + 5;
      *(undefined8 *)(param_2 + 0x30) = 0;
      do {
        lVar4 = *plVar9;
        iVar3 = (int)lVar4 + -1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = iVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar4 == 0) goto LAB_00d7a890;
    }
  }
  plVar8 = (long *)FUN_00d7ab14(auStack_38,*(undefined8 *)(param_2 + 8));
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 5;
    do {
      lVar4 = *plVar9;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar4 == -1) {
LAB_00d7a924:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_00d7ad50(param_1._0_8_,plVar8,*(undefined8 *)(param_2 + 0x30),0x50);
    do {
      lVar4 = *plVar9;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar4 == -1) goto LAB_00d7a924;
  }
  plVar9 = *(long **)(param_2 + 0x30);
  *(long **)(param_2 + 0x30) = plVar8;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar4 = *plVar1;
      iVar3 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_00d7a890;
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 5;
    do {
      lVar4 = *plVar9;
      iVar3 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar4 == 0) {
LAB_00d7a890:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
LAB_00d7a7b8:
  if (*(long *)(param_2 + 0x30) != 0) {
    FUN_00d7a94c(*(long *)(param_2 + 0x30),param_3 & 1);
  }
  return;
}


