/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d82d8; name: FUN_015d82d8
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d82d8(long param_1,int param_2,byte param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  
  plVar6 = (long *)(param_1 + (long)param_2 * 0x10 + 0x40);
  lVar7 = *plVar6;
  if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
    return;
  }
  lVar7 = *plVar6;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_015d83e0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015d83e0:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          plVar9 = (long *)(lVar7 + -0x28);
          plVar6 = (long *)(lVar7 + 0xb0);
          lVar5 = nn::os::GetCurrentThread();
          goto LAB_015d8408;
        }
        break;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  lVar7 = nn::os::GetCurrentThread();
  while (_DAT_000000d8 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0xd8,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      _DAT_000000d8 = lVar7;
    }
    if (cVar3 == '\0') goto LAB_015d8330;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)&DAT_000000e0);
  do {
    if (_DAT_000000d8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)&DAT_000000e0);
        while (_DAT_000000d8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(0xd8,0x10);
          if (bVar4) {
            cVar3 = ExclusiveMonitorsStatus();
            _DAT_000000d8 = lVar7;
          }
          if (cVar3 == '\0') goto LAB_015d8330;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0xd8,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      _DAT_000000d8 = lVar7;
    }
  } while (cVar3 != '\0');
LAB_015d8330:
  if (DAT_00000082 != (param_3 & 1)) {
    DAT_00000082 = param_3 & 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_000000d8 = 0;
  nn::os::SignalLightEvent((LightEventType *)&DAT_000000e0);
  return;
LAB_015d8408:
  if (*plVar6 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xb8));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xb8));
          while (*plVar6 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_015d8418;
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
LAB_015d8418:
    if (*(byte *)(lVar7 + 0x5a) != (param_3 & 1)) {
      *(byte *)(lVar7 + 0x5a) = param_3 & 1;
      (**(code **)(*plVar9 + 0xd8))(plVar9);
    }
    *(undefined8 *)(lVar7 + 0xb0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0xb8));
    lVar7 = *(long *)(lVar7 + 8);
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x015d8508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x50))(plVar9);
      return;
    }
    if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar4) {
    *plVar6 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_015d8418;
  goto LAB_015d8408;
}


