/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cfc3c0; name: FUN_00cfc3c0
 */


void FUN_00cfc3c0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *local_48;
  long *local_28;
  
  if (((*PTR_DAT_047d8c58 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar6 != 0))
  {
    FUN_00100190(&LAB_00a2e72c,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar7;
  FUN_00cfc734(&local_28,uVar7,*(undefined8 *)(param_2 + 0x3a0));
  plVar8 = (long *)FUN_00cfcb38(&local_48,*(undefined8 *)(param_2 + 0x3a0));
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00cfc6ec;
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
    else if (sVar2 == -1) goto LAB_00cfc70c;
  }
  plVar5 = local_28;
  local_48 = plVar8;
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00cfc6ec;
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
    else if (sVar2 == -1) goto LAB_00cfc70c;
  }
  FUN_00cfd914(param_3,plVar5,&local_48);
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
    else if (sVar2 == 0) goto LAB_00cfc5b0;
  }
  plVar5 = local_28;
  if (local_28 != (long *)0x0) {
    lVar9 = local_28[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00cfc6ec;
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
    else if (sVar2 == -1) goto LAB_00cfc70c;
  }
  if (plVar8 == (long *)0x0) {
    *param_1 = plVar5;
    param_1[1] = 0;
  }
  else {
    lVar9 = plVar8[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_00cfc6ec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
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
LAB_00cfc70c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    *param_1 = plVar5;
    param_1[1] = plVar8;
    lVar9 = plVar8[6];
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
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else if (sVar2 == 0) goto LAB_00cfc5b0;
  }
  if (local_28 != (long *)0x0) {
    lVar9 = local_28[6];
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
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_00cfc5b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


