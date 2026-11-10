/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d79ebc; name: FUN_00d79ebc
 */


undefined8 FUN_00d79ebc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  
  uVar10 = (**(code **)(*param_1 + 0x70))();
  if ((uVar10 & 1) == 0) {
    plVar15 = param_1 + 1;
    lVar14 = *plVar15;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 == lVar14) {
      plVar15 = (long *)0x0;
      bVar4 = true;
    }
    else {
      lVar11 = nn::os::GetCurrentThread();
      do {
        if (*plVar15 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
            while (*plVar15 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar4) {
                *plVar15 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00d79f24;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00d79f24:
      bVar4 = false;
    }
    puVar8 = PTR_DAT_047d39c8;
    puVar7 = PTR_DAT_047d39c0;
    puVar6 = PTR_DAT_047d39b8;
    puVar5 = PTR_DAT_047d39b0;
    plVar2 = (long *)param_1[5];
    for (plVar1 = (long *)param_1[4]; plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar11 = *plVar1;
      if (((*(byte *)(lVar11 + 0x438) >> 1 & 1) != 0) ||
         ((*(char *)(lVar11 + 0x430) == '\0' &&
          ((*(long *)(lVar11 + 0x128) != *(long *)(lVar11 + 0x130) ||
           (*(char *)(lVar11 + 0x7c2) != '\0')))))) {
LAB_00d7a090:
        uVar13 = 0;
        if (bVar4) {
          return 0;
        }
        goto LAB_00d7a060;
      }
      if ((*(long *)(lVar11 + 0x5a0) != 0) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x5a0) + 0x10), puVar12 != (undefined8 *)0x0
         )) {
        puVar12 = (undefined8 *)(**(code **)*puVar12)();
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            *(undefined8 *)puVar8 = 0;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar6 = puVar8;
          __cxa_guard_release(puVar5);
        }
        for (; puVar12 != (undefined8 *)0x0; puVar12 = (undefined8 *)*puVar12) {
          if (puVar12 == (undefined8 *)puVar6) {
            if (((*(long **)(lVar11 + 0x5b0) != (long *)0x0) &&
                (*(long **)(lVar11 + 0x5b0) != param_1)) &&
               (uVar10 = FUN_00d79ebc(), (uVar10 & 1) == 0)) goto LAB_00d7a090;
            break;
          }
        }
      }
    }
    uVar13 = 1;
    if (!bVar4) {
LAB_00d7a060:
      *plVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
    }
  }
  else {
    uVar13 = 1;
  }
  return uVar13;
}


