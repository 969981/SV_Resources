/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01514abc; name: FUN_01514abc
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_01514abc(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined4 uVar9;
  
  plVar7 = (long *)(param_1 + 0xf0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01514af4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
        while (*plVar7 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01514af4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01514af4:
  lVar6 = *param_2;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == -1) goto LAB_01514d04;
  }
  plVar7 = *(long **)(param_1 + 0x2c8);
  *(long *)(param_1 + 0x2c8) = lVar6;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar6 = *plVar2;
      iVar8 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_01514c8c;
  }
  lVar6 = param_2[1];
  lVar3 = param_2[2];
  *(int *)(param_1 + 0x2e0) = (int)param_2[3];
  *(long *)(param_1 + 0x2d8) = lVar3;
  *(long *)(param_1 + 0x2d0) = lVar6;
  FUN_01514d30(*(undefined8 *)(param_1 + 0x2f0),*(undefined8 *)(param_1 + 0x2c8),DAT_04842748);
  iVar8 = *(int *)(param_1 + 0x2d0);
  if (iVar8 < 4) {
    lVar6 = *(long *)(param_1 + 0x2f0);
    uVar9 = *(undefined4 *)(param_1 + 0x2d4);
    *(int *)(lVar6 + 0x60) = iVar8;
    *(undefined4 *)(lVar6 + 0x78) = uVar9;
    *(undefined4 *)(lVar6 + 0x7c) = 0;
    iVar8 = *(int *)(param_1 + 0x2d0);
  }
  *(uint *)(param_1 + 0x2fc) = (uint)(iVar8 != 0) << 2;
  if (*(char *)(param_1 + 0x2db) != '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x2f0) + 0x28a) = 1;
    *(undefined4 *)(*(long *)(param_1 + 0x2f0) + 0x36c) = *(undefined4 *)(param_1 + 0x2e0);
  }
  if (**(char **)(param_1 + 0x150) != '\0') {
    plVar7 = *(long **)(param_1 + 200);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    plVar2 = plVar7 + 5;
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)lVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar6 == -1) {
LAB_01514d04:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    (**(code **)(*plVar7 + 0x70))(plVar7,param_1 + 0x148,0);
    do {
      lVar6 = *plVar2;
      iVar8 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar6 == 0) {
LAB_01514c8c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if ((*(char *)(param_1 + 0x2d8) == '\0') || (*(int *)(param_1 + 0x2e8) != 0)) {
    if (*(int *)(param_1 + 0x2e8) != 4) goto LAB_01514bfc;
    uVar9 = 3;
  }
  else {
    uVar9 = 1;
  }
  *(undefined4 *)(param_1 + 0x2e8) = uVar9;
LAB_01514bfc:
  if (*(char *)(param_1 + 0x2da) != '\0') {
    *(undefined1 *)(param_1 + 0x81) = 1;
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf8));
  return;
}


