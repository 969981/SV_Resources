/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028beaec; name: FUN_028beaec
 */


void FUN_028beaec(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  lVar8 = *(long *)PTR_DAT_047d4248;
  *(long *)PTR_DAT_047d4250 = lVar8;
  if (lVar8 == 0) {
    plVar7 = (long *)0x0;
    bVar6 = true;
LAB_028beb30:
    plVar1 = param_1 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    if (bVar6) {
      return;
    }
    *plVar7 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    return;
  }
  plVar7 = (long *)(lVar8 + 0x28);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar6) {
      *plVar7 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_028bebe8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x30));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x30));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *plVar7 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_028bebe8;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar6) {
      *plVar7 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_028bebe8:
  bVar6 = false;
  goto LAB_028beb30;
}


