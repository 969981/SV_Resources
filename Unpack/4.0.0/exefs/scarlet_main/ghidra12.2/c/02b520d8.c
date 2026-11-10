/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b520d8; name: FUN_02b520d8
 */


void FUN_02b520d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  
  uVar9 = (**(code **)(*param_1 + 0x70))();
  if ((uVar9 & 1) == 0) {
    plVar13 = param_1 + 1;
    lVar12 = *plVar13;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 == lVar12) {
      plVar13 = (long *)0x0;
      bVar14 = true;
    }
    else {
      lVar10 = nn::os::GetCurrentThread();
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
            while (*plVar13 == 0) {
              cVar3 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar14) {
                *plVar13 = lVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_02b52138;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar14) {
          *plVar13 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_02b52138:
      bVar14 = false;
    }
    puVar7 = PTR_DAT_047d39c8;
    puVar6 = PTR_DAT_047d39c0;
    puVar5 = PTR_DAT_047d39b8;
    puVar4 = PTR_DAT_047d39b0;
    plVar2 = (long *)param_1[5];
    for (plVar1 = (long *)param_1[4]; plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar10 = *plVar1;
      FUN_00f1fcc0(lVar10);
      if ((*(long *)(lVar10 + 0x5a0) != 0) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x5a0) + 0x10), puVar11 != (undefined8 *)0x0
         )) {
        puVar11 = (undefined8 *)(**(code **)*puVar11)();
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
            *(undefined8 *)puVar7 = 0;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar5 = puVar7;
          __cxa_guard_release(puVar4);
        }
        for (; puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
          if (puVar11 == (undefined8 *)puVar5) {
            if ((*(long **)(lVar10 + 0x5b0) != (long *)0x0) &&
               (*(long **)(lVar10 + 0x5b0) != param_1)) {
              FUN_02b520d8();
            }
            break;
          }
        }
      }
    }
    if (!bVar14) {
      *plVar13 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
      return;
    }
  }
  return;
}


