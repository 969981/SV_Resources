/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0120fc08; name: FUN_0120fc08
 */


long FUN_0120fc08(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  bool bVar11;
  long *plVar12;
  
  plVar12 = (long *)(param_1 + 8);
  lVar10 = *plVar12;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar10) {
    lVar6 = nn::os::GetCurrentThread();
LAB_0120fc40:
    if (*plVar12 == 0) goto code_r0x0120fc48;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar12 == 0) {
            cVar2 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar11) {
              *plVar12 = lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_0120fc50;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar11) {
        *plVar12 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0120fc50:
    bVar11 = false;
    goto LAB_0120fc54;
  }
  bVar11 = true;
LAB_0120fc54:
  puVar4 = PTR_DAT_047d9c58;
  puVar3 = PTR_DAT_047d9c50;
  plVar12 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar12 != plVar1) {
    do {
      if (*plVar12 != 0) {
        puVar7 = (undefined8 *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          uVar9 = FUN_01662758();
          *(undefined8 *)puVar4 = uVar9;
          __cxa_guard_release(puVar3);
        }
        for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
          if (puVar7 == (undefined8 *)puVar4) {
            uVar8 = (**(code **)(*(long *)*plVar12 + 0xc0))();
            if ((uVar8 & 1) == 0) goto LAB_0120fcac;
            break;
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
    plVar12 = plVar1;
LAB_0120fcac:
    if ((plVar12 != *(long **)(param_1 + 0x28)) && (*plVar12 != 0)) {
      lVar6 = *plVar12 + -0x20;
      goto LAB_0120fcc4;
    }
  }
  plVar12 = *(long **)(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar12 != plVar1) {
    do {
      if (*plVar12 != 0) {
        puVar7 = (undefined8 *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          uVar9 = FUN_01662758();
          *(undefined8 *)puVar4 = uVar9;
          __cxa_guard_release(puVar3);
        }
        for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
          if (puVar7 == (undefined8 *)puVar4) {
            uVar8 = (**(code **)(*(long *)*plVar12 + 0xc0))();
            if ((uVar8 & 1) == 0) goto LAB_0120fd80;
            break;
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
    plVar12 = plVar1;
LAB_0120fd80:
    if (plVar12 != *(long **)(param_1 + 0x60)) {
      lVar6 = 0;
      if (*plVar12 != 0) {
        lVar6 = *plVar12 + -0x20;
      }
      goto LAB_0120fcc4;
    }
  }
  lVar6 = 0;
LAB_0120fcc4:
  if (!bVar11) {
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  }
  return lVar6;
code_r0x0120fc48:
  cVar2 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar11) {
    *plVar12 = lVar6;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0120fc50;
  goto LAB_0120fc40;
}


