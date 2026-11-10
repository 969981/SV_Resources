/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0102e894; name: FUN_0102e894
 */


void FUN_0102e894(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  plVar8 = (long *)(param_1 + 8);
  lVar6 = *plVar8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar6) {
    lVar3 = nn::os::GetCurrentThread();
LAB_0102e8d0:
    if (*plVar8 == 0) goto code_r0x0102e8d8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar7) {
              *plVar8 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_0102e8e0;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0102e8e0:
    bVar7 = false;
    goto LAB_0102e8e4;
  }
  bVar7 = true;
LAB_0102e8e4:
  plVar8 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar8 != plVar1) {
    lVar3 = *param_2;
    puVar9 = *(undefined8 **)param_2[1];
    do {
      if ((((*plVar8 != 0) && (lVar6 = FUN_010b2c04(*plVar8 + 8), lVar6 != 0)) &&
          (uVar4 = (**(code **)(*(long *)*plVar8 + 0xc0))(), (uVar4 & 1) == 0)) &&
         (*(long *)(lVar6 + 0x130) == *(long *)(*(long *)*puVar9 + 0x108))) goto LAB_0102e954;
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
    plVar8 = plVar1;
LAB_0102e954:
    if (plVar8 != *(long **)(param_1 + 0x28)) {
      (**(code **)(*(long *)*plVar8 + 0xa8))();
      *(undefined **)(lVar3 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar3 + 0xb0) = 0;
    }
  }
  plVar8 = *(long **)(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar8 != plVar1) {
    lVar3 = *param_2;
    puVar9 = *(undefined8 **)param_2[1];
    do {
      if (((*plVar8 != 0) && (lVar6 = FUN_010b2c04(*plVar8 + 8), lVar6 != 0)) &&
         ((uVar4 = (**(code **)(*(long *)*plVar8 + 0xc0))(), (uVar4 & 1) == 0 &&
          (*(long *)(lVar6 + 0x130) == *(long *)(*(long *)*puVar9 + 0x108))))) goto LAB_0102e9ec;
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
    plVar8 = plVar1;
LAB_0102e9ec:
    if (plVar8 != *(long **)(param_1 + 0x60)) {
      (**(code **)(*(long *)*plVar8 + 0xa8))();
      *(undefined **)(lVar3 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar3 + 0xb0) = 0;
    }
  }
  if ((*(byte *)(param_1 + 600) & 7) != 0) {
    pcVar5 = *(code **)(param_1 + 0xa8);
    if ((*(ulong *)(param_1 + 0xb0) & 1) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + ((long)*(ulong *)(param_1 + 0xb0) >> 1)));
    }
    (*pcVar5)();
  }
  if (bVar7) {
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  return;
code_r0x0102e8d8:
  cVar2 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar7) {
    *plVar8 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0102e8e0;
  goto LAB_0102e8d0;
}


