/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013057c4; name: FUN_013057c4
 */


void FUN_013057c4(long param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = FUN_01305c24(*(undefined8 *)(param_1 + 8));
  if (lVar5 != 0) {
    lVar10 = *(long *)(lVar5 + 0x30);
    *(ulong *)(lVar5 + 0x1b8) = *(ulong *)(lVar5 + 0x1b8) | 8;
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
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
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar6 = (long *)*param_2;
  *param_2 = 0;
  if (plVar6 != (long *)0x0) {
    lVar10 = plVar6[6];
    psVar1 = (short *)(lVar10 + 0x1a);
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
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *param_2 = lVar5;
  FUN_01305a80(lVar5,1);
  lVar5 = *param_2;
  pcVar8 = *(code **)(lVar5 + 0x388);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x390) = 0;
    *(undefined8 *)(lVar5 + 0x398) = 0;
    *(undefined8 *)(lVar5 + 0x380) = 0;
    *(undefined8 *)(lVar5 + 0x388) = 0;
    (*pcVar8)(lVar5 + 0x3a0);
  }
  *(undefined1 **)(lVar5 + 0x380) = &LAB_02de5dc8;
  *(undefined1 **)(lVar5 + 0x388) = &LAB_02de5e1c;
  *(long *)(lVar5 + 0x3a0) = param_1;
  *(undefined8 *)(lVar5 + 0x3a8) = param_6;
  *(undefined8 *)(lVar5 + 0x3b0) = param_7;
  *(undefined8 *)(lVar5 + 0x3b8) = param_4;
  *(undefined8 *)(lVar5 + 0x3c0) = param_5;
  *(undefined1 **)(lVar5 + 0x390) = &LAB_02de5e20;
  *(undefined1 **)(lVar5 + 0x398) = &LAB_02de5e34;
  lVar10 = *param_2;
  plVar6 = (long *)(lVar10 + 0x1d0);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_013058f8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x1d8));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x1d8));
        while (*plVar6 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_013058f8;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_013058f8:
  lVar9 = *param_3;
  lVar5 = lVar9;
  if (*(long *)(lVar9 + 0x1a8) != 0) {
    lVar5 = *(long *)(lVar9 + 0x1a8);
  }
  if (*(long *)(lVar9 + 0x1b0) != 0) {
    lVar9 = *(long *)(lVar9 + 0x1b0);
  }
  if (lVar5 == lVar9) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("input != output","InsertDependencyToTarget",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
               ,700);
  }
  FUN_00da3100(lVar10);
  *(undefined8 *)(lVar10 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x01305958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x68))((long *)*param_2,0);
  return;
}


