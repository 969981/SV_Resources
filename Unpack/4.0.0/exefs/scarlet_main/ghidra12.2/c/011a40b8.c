/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011a40b8; name: FUN_011a40b8
 */


void FUN_011a40b8(long param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if (*(long *)(param_1 + 0x60) == -1) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x80);
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar7) {
    lVar7 = nn::os::GetCurrentThread();
LAB_011a4104:
    if (*plVar1 == 0 && *(long *)(param_1 + 0x88) == 0) goto code_r0x011a4110;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90));
    do {
      if (*plVar1 != 0 || *(long *)(param_1 + 0x88) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90));
          while (*plVar1 == 0 && *(long *)(param_1 + 0x88) == 0) {
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *plVar1 = lVar7;
              *(undefined8 *)(param_1 + 0x88) = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_011a4118;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7;
        *(undefined8 *)(param_1 + 0x88) = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_011a4118:
    bVar9 = false;
    goto LAB_011a411c;
  }
  bVar9 = true;
LAB_011a411c:
  if ((*(byte *)(param_1 + 0x168) & 1) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x168) = param_2 & 1;
    if (((*PTR_DAT_047d6c20 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c20);
    }
    uVar8 = *(undefined8 *)PTR_DAT_047d6c28;
    *(undefined8 *)PTR_DAT_047d6c30 = uVar8;
    if ((*(byte *)(param_1 + 0x168) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x45) & 1) != 0) goto LAB_011a4178;
      uVar8 = FUN_0112ee10(uVar8,*(undefined8 *)(param_1 + 0x60));
    }
    else {
      uVar8 = FUN_0112ec10(uVar8,*(undefined8 *)(param_1 + 0x60));
    }
    *(undefined8 *)(param_1 + 0x68) = uVar8;
  }
LAB_011a4178:
  if (bVar9) {
    return;
  }
  do {
    lVar7 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x88);
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x88) = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x88);
    if (lVar2 != lVar7 || lVar3 != lVar6) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_011a4218;
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x84) = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar9 = true;
LAB_011a4218:
  if (!bVar9) {
    do {
      lVar7 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x88);
      if (lVar7 != lVar2 || lVar6 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x011a42b8;
      }
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x84) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar9 = true;
joined_r0x011a42b8:
    if (!bVar9) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x88);
        if (lVar2 != lVar7 || lVar3 != lVar6) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar7 = lVar2;
          lVar6 = lVar3;
          goto joined_r0x011a42b8;
        }
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x84) = lVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar9 = true;
      lVar7 = lVar2;
      lVar6 = lVar3;
      goto joined_r0x011a42b8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90));
  return;
code_r0x011a4110:
  cVar4 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar9) {
    *plVar1 = lVar7;
    *(undefined8 *)(param_1 + 0x88) = 0;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_011a4118;
  goto LAB_011a4104;
}


