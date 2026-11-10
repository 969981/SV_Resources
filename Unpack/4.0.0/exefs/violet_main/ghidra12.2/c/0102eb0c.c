/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0102eb0c; name: FUN_0102eb0c
 */


void FUN_0102eb0c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  bool bVar12;
  long *plVar13;
  undefined8 *puVar14;
  
  plVar13 = (long *)(param_1 + 8);
  lVar11 = *plVar13;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar11) {
    bVar12 = true;
LAB_0102eb64:
    puVar4 = PTR_DAT_047d8d18;
    puVar3 = PTR_DAT_047d8d10;
    plVar13 = *(long **)(param_1 + 0x20);
    plVar1 = *(long **)(param_1 + 0x28);
    if (plVar13 != plVar1) {
      lVar6 = *param_2;
      puVar14 = *(undefined8 **)param_2[1];
      do {
        lVar11 = *plVar13;
        if (lVar11 != 0) {
          plVar7 = (long *)(*(code *)**(undefined8 **)(lVar11 + 8))((undefined8 *)(lVar11 + 8));
          if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
            uVar9 = FUN_018bf298();
            *(undefined8 *)puVar4 = uVar9;
            __cxa_guard_release(puVar3);
          }
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            if (plVar7 == (long *)puVar4) {
              uVar8 = (**(code **)(*(long *)*plVar13 + 0xc0))();
              if (((uVar8 & 1) == 0) &&
                 (*(long *)(lVar11 + 0x118) == *(long *)(*(long *)*puVar14 + 0x110)))
              goto LAB_0102ec00;
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar1);
      plVar13 = plVar1;
LAB_0102ec00:
      if (plVar13 != *(long **)(param_1 + 0x28)) {
        (**(code **)(*(long *)*plVar13 + 0xa8))();
        *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
      }
    }
    plVar13 = *(long **)(param_1 + 0x58);
    plVar1 = *(long **)(param_1 + 0x60);
    if (plVar13 != plVar1) {
      lVar6 = *param_2;
      puVar14 = *(undefined8 **)param_2[1];
      do {
        lVar11 = *plVar13;
        if (lVar11 != 0) {
          plVar7 = (long *)(*(code *)**(undefined8 **)(lVar11 + 8))((undefined8 *)(lVar11 + 8));
          if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
            uVar9 = FUN_018bf298();
            *(undefined8 *)puVar4 = uVar9;
            __cxa_guard_release(puVar3);
          }
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            if (plVar7 == (long *)puVar4) {
              uVar8 = (**(code **)(*(long *)*plVar13 + 0xc0))();
              if (((uVar8 & 1) == 0) &&
                 (*(long *)(lVar11 + 0x118) == *(long *)(*(long *)*puVar14 + 0x110)))
              goto LAB_0102ec9c;
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar1);
      plVar13 = plVar1;
LAB_0102ec9c:
      if (plVar13 != *(long **)(param_1 + 0x60)) {
        (**(code **)(*(long *)*plVar13 + 0xa8))();
        *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
      }
    }
    if ((*(byte *)(param_1 + 600) & 7) != 0) {
      pcVar10 = *(code **)(param_1 + 0xa8);
      if ((*(ulong *)(param_1 + 0xb0) & 1) != 0) {
        pcVar10 = *(code **)(pcVar10 + *(long *)(param_1 + ((long)*(ulong *)(param_1 + 0xb0) >> 1)))
        ;
      }
      (*pcVar10)();
    }
    if (bVar12) {
      return;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar2 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar12) {
      *plVar13 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0102eb60;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar13 == 0) {
          cVar2 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar12) {
            *plVar13 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0102eb60;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar12) {
      *plVar13 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0102eb60:
  bVar12 = false;
  goto LAB_0102eb64;
}


