/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e641c0; name: FUN_00e641c0
 */


long FUN_00e641c0(long param_1)

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
  long lVar10;
  bool bVar11;
  long *plVar12;
  
  plVar12 = (long *)(param_1 + 8);
  lVar10 = *plVar12;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar10) {
    lVar6 = nn::os::GetCurrentThread();
LAB_00e641f8:
    if (*plVar12 == 0) goto code_r0x00e64200;
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
            if (cVar2 == '\0') goto LAB_00e64208;
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
LAB_00e64208:
    bVar11 = false;
    goto LAB_00e6420c;
  }
  bVar11 = true;
LAB_00e6420c:
  puVar4 = PTR_DAT_047dccc0;
  puVar3 = PTR_DAT_047dccb8;
  plVar12 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar12 != plVar1) {
    do {
      if (*plVar12 != 0) {
        plVar7 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          uVar9 = FUN_020fb54c();
          *(undefined8 *)puVar4 = uVar9;
          __cxa_guard_release(puVar3);
        }
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)puVar4) {
            uVar8 = (**(code **)(*(long *)*plVar12 + 0xc0))();
            if ((uVar8 & 1) == 0) goto LAB_00e6427c;
            break;
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
    plVar12 = plVar1;
LAB_00e6427c:
    if ((plVar12 != *(long **)(param_1 + 0x28)) && (*plVar12 != 0)) {
      lVar6 = *plVar12 + -0x20;
      goto LAB_00e64360;
    }
  }
  plVar12 = *(long **)(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar12 != plVar1) {
    do {
      if (*plVar12 != 0) {
        plVar7 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          uVar9 = FUN_020fb54c();
          *(undefined8 *)puVar4 = uVar9;
          __cxa_guard_release(puVar3);
        }
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)puVar4) {
            uVar8 = (**(code **)(*(long *)*plVar12 + 0xc0))();
            if ((uVar8 & 1) == 0) goto LAB_00e642f8;
            break;
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
    plVar12 = plVar1;
LAB_00e642f8:
    if (plVar12 != *(long **)(param_1 + 0x60)) {
      lVar6 = 0;
      if (*plVar12 != 0) {
        lVar6 = *plVar12 + -0x20;
      }
      goto LAB_00e64360;
    }
  }
  lVar6 = 0;
LAB_00e64360:
  if (!bVar11) {
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  }
  return lVar6;
code_r0x00e64200:
  cVar2 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar11) {
    *plVar12 = lVar6;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00e64208;
  goto LAB_00e641f8;
}


