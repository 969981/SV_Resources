/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021a2698; name: FUN_021a2698
 */


void FUN_021a2698(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  bool bVar13;
  
  uVar8 = (**(code **)(*param_1 + 0x70))();
  if ((uVar8 & 1) == 0) {
    plVar12 = param_1 + 1;
    lVar11 = *plVar12;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 == lVar11) {
      plVar12 = (long *)0x0;
      bVar13 = true;
    }
    else {
      lVar9 = nn::os::GetCurrentThread();
      do {
        if (*plVar12 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
            while (*plVar12 == 0) {
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar13) {
                *plVar12 = lVar9;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_021a26f8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar13) {
          *plVar12 = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_021a26f8:
      bVar13 = false;
    }
    puVar6 = PTR_DAT_047d39c0;
    puVar5 = PTR_DAT_047d39b8;
    puVar4 = PTR_DAT_047d39b0;
    plVar2 = (long *)param_1[5];
    for (plVar1 = (long *)param_1[4]; plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar9 = *plVar1;
      *(undefined1 *)(lVar9 + 0x7c0) = 1;
      if ((*(long *)(lVar9 + 0x5a0) != 0) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x5a0) + 0x10), puVar10 != (undefined8 *)0x0)
         ) {
        puVar10 = (undefined8 *)(**(code **)*puVar10)();
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
            *(undefined8 *)PTR_DAT_047d39c8 = 0;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar5 = PTR_DAT_047d39c8;
          __cxa_guard_release(puVar4);
        }
        for (; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
          if (puVar10 == (undefined8 *)puVar5) {
            if ((*(long **)(lVar9 + 0x5b0) != (long *)0x0) && (*(long **)(lVar9 + 0x5b0) != param_1)
               ) {
              FUN_021a2698();
            }
            break;
          }
        }
      }
    }
    if (!bVar13) {
      *plVar12 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
      return;
    }
  }
  return;
}


