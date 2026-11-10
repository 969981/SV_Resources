/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0210b954; name: FUN_0210b954
 */


void FUN_0210b954(long param_1,undefined8 *param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *local_28;
  
  if (*(char *)(*(long *)(param_1 + 0x50) + 0x95) == *param_4) {
    uVar7 = 0x205;
  }
  else {
    uVar6 = FUN_0210bc2c(*(undefined8 *)(param_1 + 0x58));
    uVar7 = 0x206;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0x207;
    }
  }
  plVar10 = *(long **)(param_1 + 0x40);
  if (plVar10 == (long *)0x0) {
    FUN_011b5d1c(param_1,uVar7,0);
  }
  else {
    plVar9 = plVar10 + 5;
    do {
      lVar5 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_0210bc00;
    FUN_011b5d1c(param_1,uVar7,0);
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar5 == 0) goto LAB_0210bb20;
  }
  plVar10 = *(long **)(param_1 + 0x40);
  local_28 = plVar10;
  if (plVar10 == (long *)0x0) {
    FUN_011b60c0(param_1,&local_28,param_4);
  }
  else {
    plVar9 = plVar10 + 5;
    do {
      lVar5 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_0210bc00;
    FUN_011b60c0(param_1,&local_28,param_4);
    if (plVar10 != (long *)0x0) {
      plVar9 = plVar10 + 5;
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      else if ((int)lVar5 == 0) goto LAB_0210bb20;
    }
  }
  uVar8 = *param_2;
  plVar10 = *(long **)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x48);
  if (plVar10 != (long *)0x0) {
    plVar9 = plVar10 + 5;
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar11 == -1) goto LAB_0210bc00;
  }
  lVar11 = *(long *)(lVar5 + 0x118);
  *(undefined4 *)(lVar5 + 0xcc) = 0;
  *(undefined2 *)(lVar5 + 0xd0) = 0;
  *(undefined4 *)(lVar5 + 0xd4) = 0;
  *(undefined4 *)(lVar5 + 0xdc) = 0;
  FUN_0109c76c(lVar5,plVar10);
  if (*(char *)(lVar11 + 0x54) != '\0') {
    **(undefined2 **)(lVar11 + 0x30) = 0;
    *(undefined2 *)(lVar11 + 0x52) = 0;
  }
  FUN_0109c334(lVar5,lVar11,plVar10,0,0);
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
LAB_0210bc00:
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
  else if ((int)lVar5 == 0) goto LAB_0210bb20;
  plVar9 = plVar10 + 5;
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
                    /* WARNING: Could not recover jumptable at 0x0210bb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x10))(plVar10);
    return;
  }
  if ((int)lVar5 != 0) {
    return;
  }
LAB_0210bb20:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
}


