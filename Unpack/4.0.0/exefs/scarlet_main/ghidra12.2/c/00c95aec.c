/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c95aec; name: FUN_00c95aec
 */


long FUN_00c95aec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)(param_1 + 8);
  lVar7 = *plVar8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar7) {
    lVar5 = nn::os::GetCurrentThread();
    bVar4 = false;
LAB_00c95c30:
    if (*plVar8 == 0) goto code_r0x00c95c38;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    bVar4 = false;
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            bVar4 = false;
            if (cVar2 == '\0') goto LAB_00c95b1c;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_00c95b1c;
  }
  bVar4 = true;
LAB_00c95b1c:
  plVar8 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar8 != plVar1) {
    do {
      if (((*plVar8 != 0) && (lVar5 = FUN_00c95c90(*plVar8 + 8), lVar5 != 0)) &&
         (uVar6 = (**(code **)(*(long *)*plVar8 + 0xc0))(), (uVar6 & 1) == 0)) goto LAB_00c95b68;
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
    plVar8 = plVar1;
LAB_00c95b68:
    if ((plVar8 != *(long **)(param_1 + 0x28)) && (*plVar8 != 0)) {
      lVar5 = *plVar8 + -0x20;
      goto joined_r0x00c95c1c;
    }
  }
  plVar8 = *(long **)(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar8 != plVar1) {
    do {
      if (((*plVar8 != 0) && (lVar5 = FUN_00c95c90(*plVar8 + 8), lVar5 != 0)) &&
         (uVar6 = (**(code **)(*(long *)*plVar8 + 0xc0))(), (uVar6 & 1) == 0)) goto LAB_00c95bc0;
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
    plVar8 = plVar1;
LAB_00c95bc0:
    if (plVar8 != *(long **)(param_1 + 0x60)) {
      lVar5 = 0;
      if (*plVar8 != 0) {
        lVar5 = *plVar8 + -0x20;
      }
      goto joined_r0x00c95c1c;
    }
  }
  lVar5 = 0;
joined_r0x00c95c1c:
  if (!bVar4) {
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  }
  return lVar5;
code_r0x00c95c38:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar3) {
    *plVar8 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00c95b1c;
  goto LAB_00c95c30;
}


