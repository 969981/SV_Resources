/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106cf7c; name: FUN_0106cf7c
 */


void FUN_0106cf7c(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  bVar5 = (**(code **)(*param_1 + 0xa8))(param_1,param_2 + 1);
  *(byte *)*param_2 = bVar5 & *(byte *)*param_2;
  plVar7 = (long *)param_1[0xf];
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[6];
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0106d250;
    psVar1 = (short *)(lVar8 + 0x1a);
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
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar6;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_0106d270;
    lVar8 = plVar7[6];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))(plVar7);
    }
    else if (sVar2 == 0) goto LAB_0106d298;
    plVar7 = (long *)param_1[0xf];
    if (plVar7 == (long *)0x0) {
      FUN_0106cf7c(0,param_2);
    }
    else {
      lVar8 = plVar7[6];
      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0106d250;
      psVar1 = (short *)(lVar8 + 0x1a);
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
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar6;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_0106d270;
      FUN_0106cf7c(plVar7,param_2);
      lVar8 = plVar7[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar2 == 0) goto LAB_0106d298;
    }
  }
  plVar7 = (long *)param_1[0xe];
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar8 = plVar7[6];
  if (*(long *)(lVar8 + 0x10) != 0) {
    psVar1 = (short *)(lVar8 + 0x1a);
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
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar6;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_0106d270;
    lVar8 = plVar7[6];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))(plVar7);
    }
    else if (sVar2 == 0) goto LAB_0106d298;
    plVar7 = (long *)param_1[0xe];
    lVar8 = plVar7[6];
    if (*(long *)(lVar8 + 0x10) != 0) {
      psVar1 = (short *)(lVar8 + 0x1a);
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
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar6;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_0106d270:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      FUN_0106cf7c(plVar7,param_2);
      lVar8 = plVar7[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0106d234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x50))(plVar7);
        return;
      }
      if (sVar2 != 0) {
        return;
      }
LAB_0106d298:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_0106d250:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x3d);
}


