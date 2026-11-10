/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d3a14; name: FUN_012d3a14
 */


void FUN_012d3a14(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 local_34;
  
  FUN_012d3c00();
  *param_1 = &PTR_FUN_045ec740;
  param_1[4] = &PTR_LAB_045ec7f0;
  param_1[5] = &DAT_045ec840;
  FUN_012d3424(param_1 + 0x6c);
  FUN_012d3424(param_1 + 0x7a);
  FUN_012d3424(param_1 + 0x88);
  param_1[0x96] = 0;
  *(undefined4 *)((long)param_1 + 0x4c4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x97,0,1);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x99),false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x9d));
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0xa1] = param_2;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  *(undefined4 *)((long)param_1 + 0x514) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)((long)param_1 + 0x504) = 0;
  local_34 = 0;
  lVar6 = FUN_012d3670(param_3,&local_34);
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar8;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar2 = param_1 + 0x9e;
  plVar7 = (long *)*plVar2;
  *plVar2 = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *plVar2 = lVar6;
  return;
}


