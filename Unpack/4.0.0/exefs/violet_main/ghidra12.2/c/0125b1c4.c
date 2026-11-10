/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125b1c4; name: FUN_0125b1c4
 */


void FUN_0125b1c4(long *param_1,undefined8 *param_2)

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
  long *plVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  
  uVar8 = (**(code **)(*param_1 + 0x70))();
  if ((uVar8 & 1) == 0) {
    plVar13 = param_1 + 1;
    lVar12 = *plVar13;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 == lVar12) {
      plVar13 = (long *)0x0;
      bVar14 = true;
    }
    else {
      lVar9 = nn::os::GetCurrentThread();
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
            while (*plVar13 == 0) {
              cVar3 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar14) {
                *plVar13 = lVar9;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0125b228;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar14) {
          *plVar13 = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0125b228:
      bVar14 = false;
    }
    puVar6 = PTR_DAT_047d39c0;
    puVar5 = PTR_DAT_047d39b8;
    puVar4 = PTR_DAT_047d39b0;
    plVar2 = (long *)param_1[5];
    for (plVar1 = (long *)param_1[4]; plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar9 = *plVar1;
      FUN_0125af80(lVar9,*(char *)*param_2 != '\0');
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
            plVar11 = *(long **)(lVar9 + 0x5b0);
            if ((plVar11 != (long *)0x0) && (plVar11 != param_1)) {
              FUN_0125b1c4(plVar11,param_2);
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


