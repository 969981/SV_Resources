/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014fbaa8; name: FUN_014fbaa8
 */


long FUN_014fbaa8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  
  plVar11 = (long *)(param_1 + 0x28);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_014fbae0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
        while (*plVar11 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_014fbae0;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_014fbae0:
  uVar8 = *(ulong *)(param_1 + 0xb8);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & uVar7;
    }
    else if (uVar7 < uVar8) {
      uVar10 = uVar7;
    }
    else {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar7 / uVar8;
      }
      uVar10 = uVar7 - uVar10 * uVar8;
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0xb0) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (1 < uVar9) {
        do {
          uVar9 = plVar11[1];
          if (uVar9 == uVar7) {
            if (plVar11[2] == uVar7) goto LAB_014fbc14;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar3 = 0;
              if (uVar8 != 0) {
                uVar3 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar3 * uVar8;
            }
            if (uVar9 != uVar10) goto LAB_014fbc78;
          }
          plVar11 = (long *)*plVar11;
          lVar5 = 0;
        } while (plVar11 != (long *)0x0);
        goto LAB_014fbc50;
      }
      do {
        if (plVar11[1] != uVar7) {
          if ((plVar11[1] & uVar8 - 1) == uVar10) goto LAB_014fbb74;
          break;
        }
        if (plVar11[2] == uVar7) goto LAB_014fbc14;
LAB_014fbb74:
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
LAB_014fbc78:
  lVar5 = 0;
LAB_014fbc50:
  *(undefined8 *)(param_1 + 0x28) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x30));
  return lVar5;
LAB_014fbc14:
  lVar12 = plVar11[6];
  puVar13 = (undefined8 *)(lVar12 + 0x28);
  puVar13 = (undefined8 *)(**(code **)*puVar13)(puVar13);
  if (((*PTR_DAT_047d8638 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8638), iVar4 != 0))
  {
    uVar6 = FUN_01dac5b0();
    *(undefined8 *)PTR_DAT_047d8640 = uVar6;
    __cxa_guard_release(PTR_DAT_047d8638);
  }
  if (puVar13 != (undefined8 *)0x0) {
    while (puVar13 != (undefined8 *)PTR_DAT_047d8640) {
      puVar13 = (undefined8 *)*puVar13;
      lVar5 = 0;
      if (puVar13 == (undefined8 *)0x0) goto LAB_014fbc50;
    }
    lVar5 = lVar12;
    goto LAB_014fbc50;
  }
  goto LAB_014fbc78;
}


