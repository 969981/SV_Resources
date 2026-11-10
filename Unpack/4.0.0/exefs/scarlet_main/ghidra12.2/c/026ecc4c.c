/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ecc4c; name: FUN_026ecc4c
 */


long * FUN_026ecc4c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *local_50;
  long *local_48;
  
  FUN_026ece48(&local_48,param_2,param_3,param_4,param_5,param_6);
  plVar6 = local_48;
  plVar2 = (long *)0x0;
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 4;
  }
  FUN_0133f444(param_1,plVar2);
  local_50 = local_48;
  local_48 = (long *)0x0;
  FUN_00df8c30(param_1 + 0x21,&local_50);
  if (local_50 != (long *)0x0) {
    lVar7 = local_50[0x13];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_026ecdec;
  }
  (**(code **)(*param_1 + 0x100))(param_1,plVar2);
  plVar9 = param_1 + 0x88;
  lVar8 = *plVar9;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar8) {
    lVar7 = nn::os::GetCurrentThread();
LAB_026ecce8:
    if (*plVar9 == 0) goto code_r0x026eccf0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
          while (*plVar9 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_026eccf8;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_026eccf8:
    bVar5 = false;
    goto LAB_026eccfc;
  }
  plVar9 = (long *)0x0;
  bVar5 = true;
LAB_026eccfc:
  if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
    FUN_00d37964(param_1,0,0);
  }
  else {
    (**(code **)(*plVar2 + 0xf8))(plVar2);
  }
  if (!bVar5) {
    *plVar9 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
  }
  if (local_48 != (long *)0x0) {
    lVar7 = local_48[0x13];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_026ecdec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return plVar6;
code_r0x026eccf0:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar5) {
    *plVar9 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_026eccf8;
  goto LAB_026ecce8;
}


