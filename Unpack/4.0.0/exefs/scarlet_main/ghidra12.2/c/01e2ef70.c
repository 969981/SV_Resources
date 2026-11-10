/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e2ef70; name: FUN_01e2ef70
 */


void FUN_01e2ef70(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *local_40;
  long *local_38;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    return;
  }
  plVar9 = (long *)(param_1 + 0x148);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01e2efc0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e2efc0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e2efc0:
  plVar9 = *(long **)(param_1 + 0x138);
  if (plVar9 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x148) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
    return;
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  FUN_00c9e664(&local_40,param_1 + 0xe8);
  if ((local_40 != (long *)0x0) && (*(long *)(param_1 + 0x170) != -1)) {
    if (local_38 == (long *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = local_38[9];
    }
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x28))((undefined8 *)(lVar6 + 0x28));
    if (((*PTR_DAT_047d6520 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar5 != 0)) {
      uVar8 = FUN_0151c130();
      *(undefined8 *)PTR_DAT_047d6528 = uVar8;
      __cxa_guard_release(PTR_DAT_047d6520);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)PTR_DAT_047d6528) goto LAB_01e2f0ac;
    }
    lVar6 = 0;
LAB_01e2f0ac:
    FUN_012a9048(lVar6,*(undefined8 *)(param_1 + 0x170));
    *(undefined8 *)(param_1 + 0x170) = 0xffffffffffffffff;
  }
  if (local_38 != (long *)0x0) {
    plVar7 = local_38 + 5;
    do {
      lVar6 = *plVar7;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x60))();
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
  FUN_011d775c(plVar9);
  lVar6 = plVar9[6];
  psVar1 = (short *)(lVar6 + 0x1a);
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
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*plVar9 + 0x50))();
    return;
  }
  if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


