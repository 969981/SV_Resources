/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d2678; name: FUN_019d2678
 */


undefined4
FUN_019d2678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  code *pcVar5;
  long lVar6;
  undefined4 *puVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined4 *apuStack_a0 [12];
  
  FUN_019d3200();
  plVar1 = (long *)(param_1 + 0xe0);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar10 = *(long *)(param_1 + 0xe8);
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0xe8) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_019d26bc:
  while ((lVar9 != 0 && (lVar6 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf0));
    do {
      lVar9 = *plVar1;
      lVar10 = *(long *)(param_1 + 0xe8);
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0xe8) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar9 || *(long *)(param_1 + 0xe8) != lVar10) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_019d26ec;
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0xe4) = lVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar8 = true;
LAB_019d26ec:
  if (!bVar8) {
    lVar9 = lVar2;
    lVar10 = *(long *)(param_1 + 0xe8);
    goto LAB_019d26bc;
  }
  puVar7 = (undefined4 *)FUN_019d2870(param_1 + 8,param_2);
  local_c0 = &LAB_02197c94;
  local_b8 = FUN_02b4b780;
  local_b0 = &LAB_02b4b784;
  local_a8 = &LAB_02b4b790;
  apuStack_a0[0] = puVar7;
  (*(code *)*param_5)(param_5 + 4,&local_c0);
  pcVar5 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar5)(apuStack_a0);
  }
  FUN_019d2e20(*(undefined8 *)(puVar7 + 0xc),*(undefined8 *)(puVar7 + 0xe));
  uVar3 = *puVar7;
  do {
    lVar6 = *plVar1;
    lVar9 = *(long *)(param_1 + 0xe8);
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0xe8) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar10 = *plVar1;
    lVar2 = *(long *)(param_1 + 0xe8);
    if (lVar10 != lVar6 || lVar2 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_019d27b0;
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0xe4) = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar8 = true;
LAB_019d27b0:
  if (!bVar8) {
    do {
      lVar6 = *plVar1;
      lVar9 = *(long *)(param_1 + 0xe8);
      if (lVar6 != lVar10 || lVar9 != lVar2) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x019d2820;
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0xe4) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar8 = true;
joined_r0x019d2820:
    if (!bVar8) {
      do {
        lVar10 = *plVar1;
        lVar2 = *(long *)(param_1 + 0xe8);
        if (lVar10 != lVar6 || lVar2 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar6 = lVar10;
          lVar9 = lVar2;
          goto joined_r0x019d2820;
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar6;
          *(long *)(param_1 + 0xe4) = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar8 = true;
      lVar6 = lVar10;
      lVar9 = lVar2;
      goto joined_r0x019d2820;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf0));
  return uVar3;
}


