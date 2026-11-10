/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0105dd60; name: FUN_0105dd60
 */


void FUN_0105dd60(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  long local_b0 [12];
  long *local_38;
  
  if (*(char *)(param_1 + 0xfd) != '\0') {
    *(undefined1 *)(param_1 + 0xfd) = 0;
    lVar6 = *(long *)(param_1 + 0x28);
    local_b0[0] = param_1;
    if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar6 + 0x1a);
      sVar7 = *(short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0105dec4;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0105dec4:
          bVar4 = false;
        }
        if (bVar4) {
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 != 0) {
            plVar8 = (long *)(lVar6 + 0x18);
            lVar5 = nn::os::GetCurrentThread();
            goto LAB_0105defc;
          }
          break;
        }
        sVar7 = sVar2;
      } while (sVar2 != 0);
    }
LAB_0105ddbc:
    lVar6 = *(long *)(param_1 + 0x38);
    if (*(long *)(param_1 + 0x28) != lVar6) {
      if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
        plVar8 = (long *)0x0;
      }
      else {
        psVar1 = (short *)(lVar6 + 0x1a);
        sVar7 = *(short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar7) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_0105dfd8;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0105dfd8:
            bVar4 = false;
          }
          if (bVar4) {
            plVar8 = (long *)0x0;
            if (*(long *)(lVar6 + 0x10) != 0) {
              plVar8 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
            }
            break;
          }
          plVar8 = (long *)0x0;
          sVar7 = sVar2;
        } while (sVar2 != 0);
      }
      local_38 = plVar8;
      FUN_02a1d674(local_b0,&local_38);
      if (plVar8 != (long *)0x0) {
        lVar6 = plVar8[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
        }
        else if (sVar7 == 0) {
LAB_0105de4c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    FUN_02a1d74c(local_b0);
  }
  return;
LAB_0105defc:
  if (*plVar8 == 0) goto code_r0x0105df04;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x20));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x20));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0105df0c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0105df0c:
  cVar3 = *(char *)(lVar6 + 0x3c);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x20));
  if ((cVar3 == '\0') && ((*(uint *)(lVar6 + 0x40) & 0xfffffffe) == 2)) {
    if (*(char *)(param_1 + 0xfe) == '\0') {
      *(undefined4 *)(lVar6 + 0x44) = 1;
    }
    else {
      *(undefined4 *)(lVar6 + 0x44) = 0;
    }
  }
  lVar5 = *(long *)(lVar6 + 8);
  psVar1 = (short *)(lVar5 + 0x1a);
  do {
    sVar7 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar7 == 1) {
    *(undefined8 *)(lVar5 + 0x10) = 0;
    (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))((long *)(lVar6 + -0x28));
  }
  else if (sVar7 == 0) goto LAB_0105de4c;
  goto LAB_0105ddbc;
code_r0x0105df04:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar4) {
    *plVar8 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0105df0c;
  goto LAB_0105defc;
}


