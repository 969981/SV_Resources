/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb829c; name: FUN_00cb829c
 */


long FUN_00cb829c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  
  plVar12 = (long *)(param_1 + 8);
  lVar11 = *plVar12;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar11) {
    lVar7 = nn::os::GetCurrentThread();
LAB_00cb82d4:
    if (*plVar12 == 0) goto code_r0x00cb82dc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00cb82e4;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00cb82e4:
    bVar3 = false;
    goto LAB_00cb82e8;
  }
  bVar3 = true;
LAB_00cb82e8:
  puVar5 = PTR_DAT_047daa10;
  puVar4 = PTR_DAT_047daa08;
  plVar12 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar12 != plVar1) {
    do {
      if (*plVar12 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar10 = FUN_01ea9d54();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar4);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar5) {
            uVar9 = (**(code **)(*(long *)*plVar12 + 0xc0))();
            if ((uVar9 & 1) == 0) goto LAB_00cb8358;
            break;
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
    plVar12 = plVar1;
LAB_00cb8358:
    if ((plVar12 != *(long **)(param_1 + 0x28)) && (*plVar12 != 0)) {
      lVar7 = *plVar12 + -0x20;
      goto joined_r0x00cb841c;
    }
  }
  plVar12 = *(long **)(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar12 != plVar1) {
    do {
      if (*plVar12 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar10 = FUN_01ea9d54();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar4);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar5) {
            uVar9 = (**(code **)(*(long *)*plVar12 + 0xc0))();
            if ((uVar9 & 1) == 0) goto LAB_00cb8400;
            break;
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
    plVar12 = plVar1;
LAB_00cb8400:
    if (plVar12 != *(long **)(param_1 + 0x60)) {
      lVar7 = 0;
      if (*plVar12 != 0) {
        lVar7 = *plVar12 + -0x20;
      }
      goto joined_r0x00cb841c;
    }
  }
  lVar7 = 0;
joined_r0x00cb841c:
  if (!bVar3) {
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  }
  return lVar7;
code_r0x00cb82dc:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar3) {
    *plVar12 = lVar7;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00cb82e4;
  goto LAB_00cb82d4;
}


