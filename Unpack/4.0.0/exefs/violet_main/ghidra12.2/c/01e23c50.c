/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e23c50; name: FUN_01e23c50
 */


void FUN_01e23c50(long param_1,long *param_2)

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
LAB_01e23c94:
    if (*plVar8 == 0) goto code_r0x01e23c9c;
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
            if (cVar2 == '\0') goto LAB_01e23ca4;
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
LAB_01e23ca4:
    bVar7 = false;
    goto LAB_01e23ca8;
  }
  bVar7 = true;
LAB_01e23ca8:
  plVar8 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar8 != plVar1) {
    lVar3 = *param_2;
    puVar9 = *(undefined8 **)param_2[1];
    do {
      lVar6 = *plVar8;
      if ((((lVar6 != 0) && (uVar4 = FUN_01140ab0(lVar6 + 8), (uVar4 & 1) != 0)) &&
          (uVar4 = (**(code **)(*(long *)*plVar8 + 0xc0))(), (uVar4 & 1) == 0)) &&
         (*(long *)(lVar6 + 0xd0) == *(long *)(*(long *)*puVar9 + 0x368))) goto LAB_01e23d10;
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
    plVar8 = plVar1;
LAB_01e23d10:
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
      lVar6 = *plVar8;
      if (((lVar6 != 0) && (uVar4 = FUN_01140ab0(lVar6 + 8), (uVar4 & 1) != 0)) &&
         ((uVar4 = (**(code **)(*(long *)*plVar8 + 0xc0))(), (uVar4 & 1) == 0 &&
          (*(long *)(lVar6 + 0xd0) == *(long *)(*(long *)*puVar9 + 0x368))))) goto LAB_01e23d84;
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
    plVar8 = plVar1;
LAB_01e23d84:
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
code_r0x01e23c9c:
  cVar2 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar7) {
    *plVar8 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01e23ca4;
  goto LAB_01e23c94;
}


