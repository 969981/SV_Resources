/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0220ee18; name: FUN_0220ee18
 */


void FUN_0220ee18(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  
  if ((*(byte *)(param_1 + 0x274) & 1) == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x280);
  lVar11 = nn::os::GetCurrentThread();
  do {
    lVar15 = *plVar1;
    lVar16 = *(long *)(param_1 + 0x288);
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar15;
      *(long *)(param_1 + 0x288) = lVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0220ee7c:
  while ((lVar15 != 0 && (lVar11 != lVar15))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
    do {
      lVar15 = *plVar1;
      lVar16 = *(long *)(param_1 + 0x288);
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar15;
        *(long *)(param_1 + 0x288) = lVar16;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar15 || *(long *)(param_1 + 0x288) != lVar16) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_0220eeb8;
    }
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar15;
      *(long *)(param_1 + 0x284) = lVar16 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar14 = true;
LAB_0220eeb8:
  puVar9 = PTR_DAT_047d9198;
  puVar8 = PTR_DAT_047d9190;
  puVar7 = PTR_DAT_047d90e8;
  puVar6 = PTR_DAT_047d90e0;
  if (!bVar14) {
    lVar15 = lVar2;
    lVar16 = *(long *)(param_1 + 0x288);
    goto LAB_0220ee7c;
  }
  plVar4 = *(long **)(param_1 + 0x128);
  for (plVar3 = *(long **)(param_1 + 0x120); plVar3 != plVar4; plVar3 = plVar3 + 1) {
    plVar12 = (long *)(*(code *)**(undefined8 **)(*plVar3 + 0x28))();
    if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
      uVar13 = FUN_00d52ff0();
      *(undefined8 *)puVar9 = uVar13;
      __cxa_guard_release(puVar8);
    }
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (plVar12 == (long *)puVar9) goto LAB_0220ef0c;
    }
    plVar12 = (long *)(*(code *)**(undefined8 **)(*plVar3 + 0x28))();
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
      uVar13 = FUN_00d52ff0();
      *(undefined8 *)puVar7 = uVar13;
      __cxa_guard_release(puVar6);
    }
    for (; (plVar12 != (long *)0x0 && (plVar12 != (long *)puVar7)); plVar12 = (long *)*plVar12) {
    }
LAB_0220ef0c:
  }
  *(undefined1 *)(param_1 + 0x274) = 0;
  do {
    lVar11 = *plVar1;
    lVar15 = *(long *)(param_1 + 0x288);
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x288) = lVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar16 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x288);
    if (lVar16 != lVar11 || lVar2 != lVar15) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_0220ef5c;
    }
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x284) = lVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar14 = true;
LAB_0220ef5c:
  if (!bVar14) {
    do {
      lVar11 = *plVar1;
      lVar15 = *(long *)(param_1 + 0x288);
      if (lVar11 != lVar16 || lVar15 != lVar2) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto joined_r0x0220f004;
      }
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar16;
        *(long *)(param_1 + 0x284) = lVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar14 = true;
joined_r0x0220f004:
    if (!bVar14) {
      do {
        lVar16 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x288);
        if (lVar16 != lVar11 || lVar2 != lVar15) {
          bVar14 = false;
          ClearExclusiveLocal();
          lVar11 = lVar16;
          lVar15 = lVar2;
          goto joined_r0x0220f004;
        }
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar11;
          *(long *)(param_1 + 0x284) = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar14 = true;
      lVar11 = lVar16;
      lVar15 = lVar2;
      goto joined_r0x0220f004;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
  return;
}


