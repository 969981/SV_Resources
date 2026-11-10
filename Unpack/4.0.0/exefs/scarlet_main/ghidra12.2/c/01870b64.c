/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01870b64; name: FUN_01870b64
 */


void FUN_01870b64(undefined8 param_1,long *param_2,byte param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  
  lVar6 = *param_2;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01870bc8;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01870bc8:
        bVar8 = false;
      }
      if (bVar8) {
        lVar6 = *(long *)(lVar6 + 0x10);
        plVar7 = (long *)(lVar6 + -0x28);
        if (lVar6 == 0) {
          return;
        }
        plVar2 = (long *)(lVar6 + 0xb0);
        lVar5 = nn::os::GetCurrentThread();
        goto LAB_01870bfc;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return;
LAB_01870bfc:
  if (*plVar2 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xb8));
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xb8));
          while (*plVar2 == 0) {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01870c0c;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01870c0c:
    if (*(byte *)(lVar6 + 0x5a) != (param_3 & 1)) {
      *(byte *)(lVar6 + 0x5a) = param_3 & 1;
      (**(code **)(*plVar7 + 0xd8))(plVar7);
    }
    *(undefined8 *)(lVar6 + 0xb0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xb8));
    lVar6 = *(long *)(lVar6 + 8);
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01870d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x50))(plVar7);
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
  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar8) {
    *plVar2 = lVar5;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01870c0c;
  goto LAB_01870bfc;
}


