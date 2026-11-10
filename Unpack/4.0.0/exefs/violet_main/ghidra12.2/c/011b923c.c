/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b923c; name: FUN_011b923c
 */


void FUN_011b923c(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *local_48;
  
  uVar6 = FUN_0210bc34(param_1,*param_4,param_4[1]);
  plVar9 = *(long **)(param_1 + 0x40);
  if (plVar9 == (long *)0x0) {
    FUN_011b5d1c(param_1,param_3,uVar6);
  }
  else {
    plVar8 = plVar9 + 5;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_011b94d4;
    FUN_011b5d1c(param_1,param_3,uVar6);
    do {
      lVar5 = *plVar8;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar5 == 0) goto LAB_011b9408;
  }
  plVar9 = *(long **)(param_1 + 0x40);
  local_48 = plVar9;
  if (plVar9 == (long *)0x0) {
    FUN_011b60c0(param_1,&local_48,param_4);
  }
  else {
    plVar8 = plVar9 + 5;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_011b94d4;
    FUN_011b60c0(param_1,&local_48,param_4);
    if (plVar9 != (long *)0x0) {
      plVar8 = plVar9 + 5;
      do {
        lVar5 = *plVar8;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar5 == 0) goto LAB_011b9408;
    }
  }
  uVar7 = *param_2;
  plVar9 = *(long **)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x48);
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 == -1) goto LAB_011b94d4;
  }
  lVar10 = *(long *)(lVar5 + 0x118);
  *(undefined4 *)(lVar5 + 0xcc) = 0;
  *(undefined2 *)(lVar5 + 0xd0) = 0;
  *(undefined4 *)(lVar5 + 0xd4) = 0;
  *(undefined4 *)(lVar5 + 0xdc) = 0;
  FUN_0109c76c(lVar5,plVar9);
  if (*(char *)(lVar10 + 0x54) != '\0') {
    **(undefined2 **)(lVar10 + 0x30) = 0;
    *(undefined2 *)(lVar10 + 0x52) = 0;
  }
  FUN_0109c334(lVar5,lVar10,plVar9,0,0);
  plVar8 = *(long **)(lVar5 + 0x118);
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
LAB_011b94d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_015514e4(uVar7,plVar8);
  plVar1 = plVar8 + 5;
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
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else if ((int)lVar5 == 0) goto LAB_011b9408;
  plVar8 = plVar9 + 5;
  do {
    lVar5 = *plVar8;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *(int *)plVar8 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011b9464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    return;
  }
  if ((int)lVar5 != 0) {
    return;
  }
LAB_011b9408:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
}


