/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2bcb4; name: FUN_01a2bcb4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01a2bcb4(long param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  int extraout_s0;
  undefined4 uVar11;
  undefined4 extraout_var;
  undefined8 uVar12;
  undefined1 auVar10 [16];
  undefined8 extraout_var_00;
  
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 == (long *)0x0) {
    lVar8 = _DAT_00000048;
  }
  else {
    plVar1 = plVar6 + 5;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar8 = plVar6[9];
    do {
      lVar5 = *plVar1;
      iVar9 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (lVar8 != 0) {
    piVar7 = *(int **)(lVar8 + 0x50);
    piVar2 = *(int **)(lVar8 + 0x58);
    if (piVar7 == piVar2) {
LAB_01a2bd28:
      if (piVar7 != piVar2) {
        iVar9 = piVar7[1];
        uVar11 = 0;
        uVar12 = 0;
        goto LAB_01a2bd38;
      }
    }
    else {
      do {
        if (*piVar7 == param_2) goto LAB_01a2bd28;
        piVar7 = piVar7 + 5;
      } while (piVar2 != piVar7);
    }
  }
  if (*(long *)(param_1 + 0x148) == 0) {
    iVar9 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    FUN_01a2bcb4(*(long *)(param_1 + 0x148),param_2);
    iVar9 = extraout_s0;
    uVar11 = extraout_var;
    uVar12 = extraout_var_00;
  }
LAB_01a2bd38:
  auVar10._4_4_ = uVar11;
  auVar10._0_4_ = iVar9;
  auVar10._8_8_ = uVar12;
  return auVar10;
}


