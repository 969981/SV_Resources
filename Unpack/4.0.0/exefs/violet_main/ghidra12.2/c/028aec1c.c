/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028aec1c; name: FUN_028aec1c
 */


void FUN_028aec1c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_045e6a88;
  param_1[4] = &PTR_LAB_045e6b38;
  param_1[5] = &DAT_045e6b88;
  FUN_028ae704();
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x82));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x7e));
  if (*(char *)(param_1 + 0x7c) != '\0') {
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  plVar5 = (long *)param_1[0x7b];
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[6];
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
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_028aece8(param_1 + 0x6d);
  FUN_01a6aa10(param_1);
  return;
}


