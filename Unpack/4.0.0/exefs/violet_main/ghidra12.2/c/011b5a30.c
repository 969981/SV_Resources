/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b5a30; name: FUN_011b5a30
 */


void FUN_011b5a30(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *local_48;
  
  uVar6 = FUN_014c0c04(param_1,*param_4);
  if (uVar6 < 4) {
    uVar7 = *(undefined4 *)(&DAT_03cbef44 + *(long *)(&DAT_03cbf7c0 + (long)(int)uVar6 * 8) * 8);
  }
  else {
    uVar7 = 0;
  }
  plVar11 = *(long **)(param_1 + 0x40);
  if (plVar11 == (long *)0x0) {
    FUN_011b5d1c(param_1,param_3,uVar7);
  }
  else {
    plVar9 = plVar11 + 5;
    do {
      lVar5 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_011b5cf0;
    FUN_011b5d1c(param_1,param_3,uVar7);
    do {
      lVar5 = *plVar9;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else if ((int)lVar5 == 0) goto LAB_011b5c24;
  }
  plVar11 = *(long **)(param_1 + 0x40);
  local_48 = plVar11;
  if (plVar11 == (long *)0x0) {
    FUN_011b60c0(param_1,&local_48,param_4);
  }
  else {
    plVar9 = plVar11 + 5;
    do {
      lVar5 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_011b5cf0;
    FUN_011b60c0(param_1,&local_48,param_4);
    if (plVar11 != (long *)0x0) {
      plVar9 = plVar11 + 5;
      do {
        lVar5 = *plVar9;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      else if ((int)lVar5 == 0) goto LAB_011b5c24;
    }
  }
  uVar8 = *param_2;
  plVar11 = *(long **)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x48);
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 5;
    do {
      lVar10 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 == -1) goto LAB_011b5cf0;
  }
  lVar10 = *(long *)(lVar5 + 0x118);
  *(undefined4 *)(lVar5 + 0xcc) = 0;
  *(undefined2 *)(lVar5 + 0xd0) = 0;
  *(undefined4 *)(lVar5 + 0xd4) = 0;
  *(undefined4 *)(lVar5 + 0xdc) = 0;
  FUN_0109c76c(lVar5,plVar11);
  if (*(char *)(lVar10 + 0x54) != '\0') {
    **(undefined2 **)(lVar10 + 0x30) = 0;
    *(undefined2 *)(lVar10 + 0x52) = 0;
  }
  FUN_0109c334(lVar5,lVar10,plVar11,0,0);
  plVar9 = *(long **)(lVar5 + 0x118);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
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
LAB_011b5cf0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_015514e4(uVar8,plVar9);
  plVar1 = plVar9 + 5;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  else if ((int)lVar5 == 0) goto LAB_011b5c24;
  plVar9 = plVar11 + 5;
  do {
    lVar5 = *plVar9;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *(int *)plVar9 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011b5c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x10))(plVar11);
    return;
  }
  if ((int)lVar5 != 0) {
    return;
  }
LAB_011b5c24:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
}


