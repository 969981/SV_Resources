/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01294224; name: FUN_01294224
 */


void FUN_01294224(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x60) == -1) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x80);
  do {
    lVar8 = *plVar1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar8) {
    lVar8 = nn::os::GetCurrentThread();
LAB_012943bc:
    if (*plVar1 == 0 && *(long *)(param_1 + 0x88) == 0) goto code_r0x012943c8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90));
    do {
      if (*plVar1 != 0 || *(long *)(param_1 + 0x88) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90));
          while (*plVar1 == 0 && *(long *)(param_1 + 0x88) == 0) {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar8;
              *(undefined8 *)(param_1 + 0x88) = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              bVar7 = false;
              goto LAB_01294264;
            }
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(undefined8 *)(param_1 + 0x88) = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = false;
    goto LAB_01294264;
  }
  bVar7 = true;
LAB_01294264:
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar8 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar8;
  lVar8 = *(long *)(lVar8 + 0x460);
  if (lVar8 != 0) {
    *(long *)(param_1 + 0x100) = lVar8;
  }
  if (bVar7) {
    return;
  }
  do {
    lVar8 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x88);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x88) = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x88);
    if (lVar2 != lVar8 || lVar3 != lVar6) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_012942e8;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x84) = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_012942e8:
  if (!bVar7) {
    do {
      lVar8 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x88);
      if (lVar8 != lVar2 || lVar6 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x01294374;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x84) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x01294374:
    if (!bVar7) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x88);
        if (lVar2 != lVar8 || lVar3 != lVar6) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar8 = lVar2;
          lVar6 = lVar3;
          goto joined_r0x01294374;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x84) = lVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar8 = lVar2;
      lVar6 = lVar3;
      goto joined_r0x01294374;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90));
  return;
code_r0x012943c8:
  cVar4 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar7) {
    *plVar1 = lVar8;
    *(undefined8 *)(param_1 + 0x88) = 0;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto code_r0x012943d0;
  goto LAB_012943bc;
code_r0x012943d0:
  bVar7 = false;
  goto LAB_01294264;
}


