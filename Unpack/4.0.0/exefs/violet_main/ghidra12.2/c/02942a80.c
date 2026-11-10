/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02942a80; name: FUN_02942a80
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02942a80(long *param_1,ushort param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = *(long **)(*param_1 + 400);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,param_3);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (param_2 < 0x1ed) {
    if (param_2 < 0x1e3) {
      if (param_2 == 0x17e) {
        lVar7 = 0x46df676587259b9;
        goto LAB_02942c88;
      }
      if (param_2 == 0x17f) {
        lVar7 = 0x7ad2d14f562174f7;
        goto LAB_02942c88;
      }
    }
    else {
      if (param_2 == 0x1e3) {
        lVar7 = 0x4e8b1061837f447;
        goto LAB_02942c88;
      }
      if (param_2 == 0x1e4) {
        lVar7 = 0x7215dec8d3015427;
        goto LAB_02942c88;
      }
      if (param_2 == 0x1e7) {
        lVar7 = -0x9edfcfdb5cc3a28;
        goto LAB_02942c88;
      }
    }
  }
  else if (param_2 < 0x378) {
    if (param_2 == 0x1ed) {
      uVar6 = FUN_02e1d1ec(*param_1,param_3);
      goto joined_r0x02942c70;
    }
    if (param_2 == 0x289) {
      uVar6 = FUN_02e1d39c(*param_1,param_3);
      goto joined_r0x02942c70;
    }
    if (param_2 == 0x305) {
      uVar6 = FUN_02e1d2c4(*param_1,param_3);
      goto joined_r0x02942c70;
    }
  }
  else {
    if (param_2 == 0x378) {
      lVar7 = -0x72093d1985504421;
LAB_02942c88:
      if (lVar5 == lVar7) {
        return 1;
      }
      return 0;
    }
    if (param_2 == 0x379) {
      lVar7 = 0x82f905fcefde31b;
      goto LAB_02942c88;
    }
    if (param_2 == 0x3f3) {
      if (lVar5 == -0x1ad2acae53b45c1b) {
        return 1;
      }
      if (lVar5 == 0x32a28ce73587a668) {
        return 1;
      }
      if (lVar5 == 0x5f9449331530af3b) {
        return 1;
      }
      return 0;
    }
  }
  if (((ushort)(param_2 - 0x3d2) < 0x10) && (lVar5 == 0x3f94f44c84190286)) {
    return 1;
  }
  uVar6 = FUN_02e1d114(*param_1,param_3);
joined_r0x02942c70:
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  return 1;
}


