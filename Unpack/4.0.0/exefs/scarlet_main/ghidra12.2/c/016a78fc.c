/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a78fc; name: FUN_016a78fc
 */


void FUN_016a78fc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *local_48;
  long *local_28;
  
  FUN_016a7b08(&local_28,param_2,param_3);
  local_48 = local_28;
  plVar2 = (long *)0x0;
  if (local_28 != (long *)0x0) {
    plVar2 = local_28 + 4;
  }
  plVar8 = (long *)0x0;
  if (local_28 != (long *)0x0) {
    plVar8 = plVar2 + -4;
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,param_1);
  (**(code **)(plVar8[4] + 0x68))(plVar8 + 4);
  local_28 = (long *)0x0;
  FUN_00df8c30(param_1 + 0x21,&local_48);
  if (local_48 != (long *)0x0) {
    lVar5 = local_48[0x13];
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_016a7a98;
  }
  (**(code **)(*param_1 + 0x100))(param_1,plVar2);
  plVar8 = param_1 + 0x88;
  lVar7 = *plVar8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar7) {
    lVar5 = nn::os::GetCurrentThread();
LAB_016a79b0:
    if (*plVar8 == 0) goto code_r0x016a79b8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = lVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_016a79c0;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_016a79c0:
    bVar6 = false;
    goto LAB_016a79c4;
  }
  plVar8 = (long *)0x0;
  bVar6 = true;
LAB_016a79c4:
  if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
    FUN_00d37964(param_1,0,0);
  }
  else {
    (**(code **)(*plVar2 + 0xf8))(plVar2);
  }
  if (!bVar6) {
    *plVar8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
  }
  if (local_28 != (long *)0x0) {
    lVar5 = local_28[0x13];
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_016a7a98:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
code_r0x016a79b8:
  cVar4 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar6) {
    *plVar8 = lVar5;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_016a79c0;
  goto LAB_016a79b0;
}


