/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9f520; name: FUN_01f9f520
 */


void FUN_01f9f520(undefined4 param_1,long param_2,long *param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  short sVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong local_38;
  
  lVar9 = *(long *)(param_2 + 0x168);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01f9f59c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f9f59c:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        plVar14 = (long *)(lVar9 + -0x28);
        plVar6 = (long *)FUN_01a6a8cc(plVar14);
        lVar13 = *plVar6;
        plVar6 = (long *)(lVar13 + 0x300);
        lVar7 = nn::os::GetCurrentThread();
        goto LAB_01f9f5d8;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return;
LAB_01f9f5d8:
  if (*plVar6 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01f9f5e8;
    goto LAB_01f9f5d8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x308));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x308));
        while (*plVar6 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01f9f5e8;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01f9f5e8:
  plVar6 = *(long **)(lVar13 + 0xb8);
  plVar2 = *(long **)(lVar13 + 0xc0);
  plVar10 = plVar6;
  if ((plVar6 != plVar2) && (*plVar6 != *param_3)) {
    do {
      plVar10 = plVar10 + 0xb;
      if (plVar2 == plVar10) {
        plVar10 = plVar2;
        goto LAB_01f9f620;
      }
    } while (*plVar10 != *param_3);
  }
LAB_01f9f620:
  if (plVar2 == plVar10) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulong)(uint)((int)((ulong)((long)plVar10 - (long)plVar6) >> 3) * -0x45d1745d) << 0x20;
  }
  *(undefined8 *)(lVar13 + 0x300) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x308));
  local_38 = uVar12 | plVar2 != plVar10;
  puVar8 = (undefined8 *)FUN_01a6a8cc(plVar14);
  FUN_01ea6434(param_1,*puVar8,&local_38);
  lVar9 = *(long *)(lVar9 + 0x70);
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar11 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar11 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*plVar14 + 0x50))(plVar14);
    return;
  }
  if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


