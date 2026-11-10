/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df0f30; name: FUN_01df0f30
 */


void FUN_01df0f30(long param_1,byte param_2,byte param_3)

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
  
  lVar6 = *(long *)(param_1 + 0xb8);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
LAB_01df0f78:
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01df0f9c;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01df0f9c:
      bVar8 = false;
    }
    if (!bVar8) goto code_r0x01df0fa4;
    lVar6 = *(long *)(lVar6 + 0x10);
    plVar7 = (long *)(lVar6 + -0x28);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0xb0);
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xb8));
            while (*plVar2 == 0) {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01df1040;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01df1040:
      if (*(byte *)(lVar6 + 0x5a) != (param_2 & 1)) {
        *(byte *)(lVar6 + 0x5a) = param_2 & 1;
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
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar9 == 0) goto LAB_01df111c;
    }
  }
LAB_01df0f4c:
  lVar6 = *(long *)(param_1 + 0xd8);
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
        if (cVar4 != '\0') goto LAB_01df0fe4;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01df0fe4:
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
        do {
          if (*plVar2 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xb8));
              while (*plVar2 == 0) {
                cVar4 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *plVar2 = lVar5;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_01df10d4;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_01df10d4:
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
                    /* WARNING: Could not recover jumptable at 0x01df121c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x50))(plVar7);
          return;
        }
        if (sVar9 != 0) {
          return;
        }
LAB_01df111c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return;
code_r0x01df0fa4:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_01df0f4c;
  goto LAB_01df0f78;
}


