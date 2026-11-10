/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ed47b0; name: FUN_00ed47b0
 */


void FUN_00ed47b0(long param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if (((*(long *)(param_1 + 0x40) != 0) || (*(long *)(param_1 + 0x48) != 0)) &&
     (*(char *)(param_1 + 0x68) == '\0')) {
    plVar8 = (long *)(param_1 + 0x70);
    lVar5 = *plVar8;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar5) {
      lVar3 = nn::os::GetCurrentThread();
LAB_00ed47f8:
      if (*plVar8 == 0) goto code_r0x00ed4800;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
      do {
        if (*plVar8 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
            while (*plVar8 == 0) {
              cVar1 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *plVar8 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00ed4808;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00ed4808:
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x88) + param_2 * 8);
      *(undefined8 *)(param_1 + 0x70) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x78));
      goto LAB_00ed4824;
    }
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x88) + param_2 * 8);
LAB_00ed4824:
    cVar1 = *(char *)(param_1 + 0x398);
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d88d8;
    *(undefined8 *)PTR_DAT_047d88e0 = uVar4;
    if (cVar1 == '\0') {
      FUN_010fad98();
    }
    else {
      FUN_010fb998(uVar4,*(undefined8 *)(param_1 + 0x40),uVar7,0);
    }
    lVar5 = *plVar8;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar5) {
      lVar3 = nn::os::GetCurrentThread();
LAB_00ed487c:
      if (*plVar8 == 0) goto code_r0x00ed4884;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
      do {
        if (*plVar8 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
            while (*plVar8 == 0) {
              cVar1 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *plVar8 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00ed488c;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00ed488c:
      bVar6 = false;
      goto LAB_00ed4890;
    }
    plVar8 = (long *)0x0;
    bVar6 = true;
LAB_00ed4890:
    if (param_2 < (ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3)) {
      FUN_00ed4c00((long *)(param_1 + 0x88),param_2);
    }
    if (!bVar6) {
      *plVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
      return;
    }
  }
  return;
code_r0x00ed4800:
  cVar1 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar6) {
    *plVar8 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00ed4808;
  goto LAB_00ed47f8;
code_r0x00ed4884:
  cVar1 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar6) {
    *plVar8 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00ed488c;
  goto LAB_00ed487c;
}


