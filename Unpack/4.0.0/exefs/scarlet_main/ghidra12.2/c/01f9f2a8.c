/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9f2a8; name: FUN_01f9f2a8
 */


undefined4 FUN_01f9f2a8(long param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  short sVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined4 *apuStack_b0 [12];
  undefined4 local_34;
  
  lVar10 = *(long *)(param_1 + 0x168);
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar12 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01f9f324;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f9f324:
        bVar5 = false;
      }
      if (bVar5) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return 0;
        }
        plVar15 = (long *)(lVar10 + -0x28);
        plVar8 = (long *)FUN_01a6a8cc(plVar15);
        lVar14 = *plVar8;
        plVar8 = (long *)(lVar14 + 0x300);
        lVar9 = nn::os::GetCurrentThread();
        goto LAB_01f9f360;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
  return 0;
LAB_01f9f360:
  if (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01f9f370;
    goto LAB_01f9f360;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x308));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x308));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01f9f370;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01f9f370:
  plVar8 = *(long **)(lVar14 + 0x80);
  plVar2 = *(long **)(lVar14 + 0x88);
  plVar11 = plVar8;
  if ((plVar8 != plVar2) && (*plVar8 != *param_2)) {
    do {
      plVar11 = plVar11 + 0xb;
      if (plVar2 == plVar11) {
        plVar11 = plVar2;
        goto LAB_01f9f3a8;
      }
    } while (*plVar11 != *param_2);
  }
LAB_01f9f3a8:
  if (plVar2 == plVar11) {
    uVar13 = 0;
  }
  else {
    uVar13 = (ulong)(uint)((int)((ulong)((long)plVar11 - (long)plVar8) >> 3) * -0x45d1745d) << 0x20;
  }
  *(undefined8 *)(lVar14 + 0x300) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x308));
  local_d8 = uVar13 | plVar2 != plVar11;
  plVar8 = (long *)FUN_01a6a8cc(plVar15);
  local_34 = 0;
  apuStack_b0[0] = &local_34;
  local_d0 = &LAB_02e65a44;
  local_c8 = FUN_02e65a84;
  local_c0 = &LAB_02e65a88;
  local_b8 = &LAB_02e65a94;
  FUN_00c837c0(*plVar8,*plVar8 + 0x80,&local_d8,&local_d0);
  pcVar6 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar6)(apuStack_b0);
  }
  uVar7 = local_34;
  lVar10 = *(long *)(lVar10 + 0x70);
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))(plVar15);
    return uVar7;
  }
  if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return local_34;
}


