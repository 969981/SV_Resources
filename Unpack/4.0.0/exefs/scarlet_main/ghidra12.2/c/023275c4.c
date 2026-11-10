/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023275c4; name: FUN_023275c4
 */


void FUN_023275c4(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_1[0x40];
  *param_1 = &PTR_FUN_04600fc0;
  param_1[4] = &PTR_LAB_04601008;
  param_1[5] = &PTR_LAB_04601028;
  param_1[0x40] = 0;
  if (lVar9 != 0) {
    FUN_0299bdf8(param_1 + 0x41);
  }
  lVar9 = param_1[0x44];
  param_1[0x44] = 0;
  if (lVar9 != 0) {
    FUN_0299c1b4(param_1 + 0x45);
  }
  lVar9 = param_1[0x48];
  param_1[0x48] = 0;
  if (lVar9 != 0) {
    FUN_0299c578(param_1 + 0x49);
  }
  lVar9 = param_1[0x4c];
  param_1[0x4c] = 0;
  if (lVar9 == 0) {
    param_1[0x4c] = 0;
  }
  else {
    FUN_0299c93c(param_1 + 0x4d);
    lVar9 = param_1[0x4c];
    param_1[0x4c] = 0;
    if (lVar9 != 0) {
      FUN_0299c93c(param_1 + 0x4d);
    }
  }
  lVar9 = param_1[0x48];
  param_1[0x48] = 0;
  if (lVar9 != 0) {
    FUN_0299c578(param_1 + 0x49);
  }
  lVar9 = param_1[0x44];
  param_1[0x44] = 0;
  if (lVar9 != 0) {
    FUN_0299c1b4(param_1 + 0x45);
  }
  lVar9 = param_1[0x40];
  param_1[0x40] = 0;
  if (lVar9 != 0) {
    FUN_0299bdf8(param_1 + 0x41);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3b));
  FUN_0299cd00(param_1 + 0x2e);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2a));
  if ((long *)param_1[0x22] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x22] + 0x20))();
  }
  if ((long *)param_1[0x21] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x21] + 0x20))();
  }
  lVar9 = param_1[0x1a];
  if (lVar9 != 0) {
    lVar3 = param_1[0x1c];
    plVar7 = (long *)param_1[0x1d];
    param_1[0x1b] = lVar9;
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar6 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar9,lVar3 - lVar9,4);
        goto LAB_023276b4;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar3 - lVar9,4);
  }
LAB_023276b4:
  FUN_0299cd40(param_1 + 0x13);
  FUN_0299cd40(param_1 + 0xc);
  plVar7 = (long *)param_1[0xb];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02327890;
  }
  plVar7 = (long *)param_1[10];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02327890;
  }
  plVar7 = (long *)param_1[9];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02327890;
  }
  plVar7 = (long *)param_1[8];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0232788c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x50))();
      return;
    }
    if (sVar2 == 0) {
LAB_02327890:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


