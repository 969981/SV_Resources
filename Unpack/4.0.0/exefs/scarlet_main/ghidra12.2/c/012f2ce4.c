/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012f2ce4; name: FUN_012f2ce4
 */


void FUN_012f2ce4(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long *local_48;
  long *local_40;
  undefined8 *local_38;
  long *local_18;
  
  FUN_00da3348(param_1,*(undefined8 *)PTR_DAT_047d8d98);
  *(undefined4 *)(param_1 + 0x6e) = 1;
  *param_1 = &PTR_LAB_045a1978;
  param_1[4] = &PTR_LAB_045a1a28;
  param_1[5] = &DAT_045a1a78;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  local_38 = param_1;
  FUN_012f3078(&local_18,param_1[1],&local_38);
  plVar6 = (long *)FUN_00e8f4a0(&local_38,param_1[1]);
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[6];
    plVar6[0x37] = plVar6[0x37] | 8;
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_012f3030;
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar7;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_012f3050;
  }
  plVar5 = local_18;
  pcVar8 = (code *)local_18[0x71];
  if (pcVar8 != (code *)0x0) {
    local_18[0x72] = 0;
    local_18[0x73] = 0;
    local_18[0x70] = 0;
    local_18[0x71] = 0;
    (*pcVar8)(local_18 + 0x74);
  }
  plVar5[0x70] = (long)&LAB_02b55308;
  plVar5[0x71] = (long)&LAB_02b55320;
  plVar5[0x74] = (long)param_1;
  plVar5[0x72] = (long)&LAB_02b55324;
  plVar5[0x73] = (long)&LAB_02b55330;
  local_40 = plVar5;
  if (plVar5 != (long *)0x0) {
    lVar9 = plVar5[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_012f3030;
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar7;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_012f3050;
  }
  FUN_00e8f5d4(param_1,&local_40);
  if (local_40 != (long *)0x0) {
    lVar9 = local_40[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_40 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_012f2fb4;
  }
  local_48 = plVar6;
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_012f3030:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar7;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_012f3050:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  FUN_00da3a8c(param_1,&local_48);
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_012f2fb4;
  }
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))(plVar6);
    }
    else if (sVar2 == 0) goto LAB_012f2fb4;
  }
  if (local_18 != (long *)0x0) {
    lVar9 = local_18[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_18 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_012f2fb4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


