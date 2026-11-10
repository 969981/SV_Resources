/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5a670; name: FUN_00e5a670
 */


void FUN_00e5a670(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *local_b0 [12];
  long local_50;
  undefined8 local_48;
  
  local_50 = param_1 + 0x478;
  if ((((*(char *)(param_1 + 0x488) == '\0') && (*(char *)(param_1 + 0x48c) == '\0')) &&
      (local_50 = param_1 + 0x460, *(char *)(param_1 + 0x470) == '\0')) &&
     ((*(char *)(param_1 + 0x474) == '\0' && (local_50 = *(long *)(param_1 + 0x458), local_50 == 0))
     )) {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    local_50 = *(long *)PTR_DAT_047d4e00;
    *(long *)PTR_DAT_047d4e08 = local_50;
    local_50 = local_50 + 0xb140;
  }
  local_b0[0] = &local_50;
  plVar11 = (long *)(param_1 + 0x1d8);
  lVar9 = *plVar11;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar9) {
    lVar6 = nn::os::GetCurrentThread();
LAB_00e5a714:
    if (*plVar11 == 0) goto code_r0x00e5a71c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
          while (*plVar11 == 0) {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar8) {
              *plVar11 = lVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00e5a724;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00e5a724:
    bVar8 = false;
    goto LAB_00e5a728;
  }
  plVar11 = (long *)0x0;
  bVar8 = true;
LAB_00e5a728:
  puVar2 = *(undefined8 **)(param_1 + 0x1f8);
  for (puVar10 = *(undefined8 **)(param_1 + 0x1f0); puVar10 != puVar2; puVar10 = puVar10 + 1) {
    local_48 = *puVar10;
    FUN_02b5436c(local_b0,&local_48);
  }
  if (!bVar8) {
    *plVar11 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
  }
  FUN_02b543a8(local_b0);
  uVar7 = (**(code **)(*(long *)(param_1 + 0x40) + 0x70))();
  if ((uVar7 & 1) == 0) {
    plVar11 = (long *)(param_1 + 0x48);
    lVar9 = *plVar11;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar9) {
      lVar6 = nn::os::GetCurrentThread();
LAB_00e5a808:
      if (*plVar11 == 0) goto code_r0x00e5a810;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
      do {
        if (*plVar11 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
            while (*plVar11 == 0) {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar8) {
                *plVar11 = lVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00e5a818;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar8) {
          *plVar11 = lVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00e5a818:
      bVar8 = false;
      goto LAB_00e5a81c;
    }
    plVar11 = (long *)0x0;
    bVar8 = true;
LAB_00e5a81c:
    plVar3 = *(long **)(param_1 + 0x68);
    for (plVar1 = *(long **)(param_1 + 0x60); plVar1 != plVar3; plVar1 = plVar1 + 1) {
      lVar6 = *(long *)(*plVar1 + 0x388);
      if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
        FUN_00e5a938(*plVar1,0);
      }
    }
    if (!bVar8) {
      *plVar11 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
    }
  }
  return;
code_r0x00e5a71c:
  cVar4 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar8) {
    *plVar11 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00e5a724;
  goto LAB_00e5a714;
code_r0x00e5a810:
  cVar4 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar8) {
    *plVar11 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00e5a818;
  goto LAB_00e5a808;
}


