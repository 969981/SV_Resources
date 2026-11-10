/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018e7748; name: FUN_018e7748
 */


void FUN_018e7748(long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  undefined1 auStack_58 [8];
  
  plVar6 = (long *)FUN_00f124d8(auStack_58,*(undefined8 *)(param_1 + 8),PTR_DAT_047dadc0);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = (int)lVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar7 == -1) {
LAB_018e79d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_018e7a04(param_3,plVar6);
  cVar4 = FUN_018e79fc(param_3);
  lVar9 = *(long *)(param_3 + 0x70);
  plVar1 = (long *)(lVar9 + 0x20);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar2) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_018e77e0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x28));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x28));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar2) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_018e77e0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar2) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_018e77e0:
  iVar5 = FUN_0100bd94(lVar9);
  *(undefined8 *)(lVar9 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x28));
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = (int)lVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar7 == -1) goto LAB_018e79d4;
  }
  if (iVar5 - 1U < 10) {
    uVar8 = *(undefined4 *)(&DAT_03d5ef58 + (long)(int)(iVar5 - 1U) * 4);
  }
  else {
    uVar8 = 0;
  }
  if (cVar4 == '\0') {
    lVar7 = 0;
  }
  else if (cVar4 == '\x01') {
    lVar7 = 1;
  }
  else {
    if (((*PTR_DAT_047d8c98 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000,uVar8);
      __cxa_guard_release(PTR_DAT_047d8c98);
    }
    lVar7 = *(long *)PTR_DAT_047d8ca0;
    *(long *)PTR_DAT_047d8ca8 = lVar7;
    lVar7 = (ulong)(*(int *)(lVar7 + 0x2b0) == 5) << 1;
  }
  FUN_011b87e8(param_1,param_2,plVar6,uVar8,lVar7,0);
  plVar1 = plVar6 + 5;
  do {
    lVar7 = *plVar1;
    iVar5 = (int)lVar7 + -1;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar2) {
      *(int *)plVar1 = iVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  else if ((int)lVar7 == 0) goto LAB_018e79ac;
  do {
    lVar7 = *plVar1;
    iVar5 = (int)lVar7 + -1;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar2) {
      *(int *)plVar1 = iVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  else if ((int)lVar7 == 0) {
LAB_018e79ac:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


