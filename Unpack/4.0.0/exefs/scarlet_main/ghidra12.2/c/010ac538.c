/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ac538; name: FUN_010ac538
 */


void FUN_010ac538(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  puVar6 = (undefined4 *)FUN_01053840();
  lVar7 = nn::os::GetTlsValue(*puVar6);
  lVar10 = 0;
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x80) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  plVar9 = param_1 + 7;
  *param_1 = (long)&PTR_LAB_045ed890;
  param_1[1] = lVar10;
  param_1[4] = (long)&PTR_LAB_045ed8d8;
  param_1[5] = 0;
  memset(plVar9,0,0x58);
  *(undefined1 *)(param_1 + 0x12) = 5;
  memset(param_1 + 0x15,0,100);
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((long)param_1 + 0x114) = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((long)param_1 + 0x9d) = 0;
  lVar7 = FUN_010ac860(lVar10);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) goto LAB_010ac81c;
  }
  plVar8 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 5;
    do {
      lVar10 = *plVar9;
      iVar2 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_010ac7a4;
  }
  param_1[7] = lVar7;
  lVar7 = FUN_010ac994(param_1[1]);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) goto LAB_010ac81c;
  }
  plVar9 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
    do {
      lVar10 = *plVar8;
      iVar2 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_010ac7a4;
  }
  param_1[8] = lVar7;
  lVar7 = FUN_010acac8(param_1[1]);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) goto LAB_010ac81c;
  }
  plVar9 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
    do {
      lVar10 = *plVar8;
      iVar2 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_010ac7a4;
  }
  param_1[9] = lVar7;
  lVar7 = FUN_010acbfc(param_1[1]);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) goto LAB_010ac81c;
  }
  plVar9 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
    do {
      lVar10 = *plVar8;
      iVar2 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_010ac7a4;
  }
  param_1[10] = lVar7;
  lVar7 = FUN_010acd30(param_1[1]);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) {
LAB_010ac81c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
    do {
      lVar10 = *plVar8;
      iVar2 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_010ac7a4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[0xb] = lVar7;
  return;
}


