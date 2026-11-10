/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011a90e4; name: FUN_011a90e4
 */


void FUN_011a90e4(long *param_1,ulong param_2,int param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  short sVar9;
  
  if ((((param_3 != 0) || ((param_2 >> 0x20 & 0xff) == 0)) && (lVar8 = *param_1, lVar8 != 0)) &&
     (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_011a915c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_011a915c:
        bVar5 = false;
      }
      if (bVar5) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        plVar2 = (long *)(lVar8 + 0x398);
        lVar6 = nn::os::GetCurrentThread();
        goto LAB_011a918c;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return;
LAB_011a918c:
  if (*plVar2 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x3a0));
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x3a0));
          while (*plVar2 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_011a919c;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_011a919c:
    uVar7 = FUN_011c1df8(lVar8 + 800,param_1 + 2);
    FUN_012092b8(uVar7,(long)param_1 + 0x12);
    FUN_00ff9e1c();
    *(undefined8 *)(lVar8 + 0x398) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x3a0));
    lVar6 = *(long *)(lVar8 + 8);
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x011a9274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
      return;
    }
    if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar5) {
    *plVar2 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_011a919c;
  goto LAB_011a918c;
}


