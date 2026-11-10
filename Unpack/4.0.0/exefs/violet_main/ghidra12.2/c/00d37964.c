/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d37964; name: FUN_00d37964
 */


void FUN_00d37964(long param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  
  plVar10 = (long *)(param_1 + 0x440);
  lVar8 = *plVar10;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar8) {
    lVar5 = nn::os::GetCurrentThread();
LAB_00d379a4:
    if (*plVar10 == 0) goto code_r0x00d379ac;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x448));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x448));
          while (*plVar10 == 0) {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar9) {
              *plVar10 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00d379b4;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00d379b4:
    bVar9 = false;
    goto LAB_00d379b8;
  }
  plVar10 = (long *)0x0;
  bVar9 = true;
LAB_00d379b8:
  uVar6 = *(ulong *)(param_1 + 0x458);
  uVar7 = 1L << (param_2 & 0x3f);
  uVar2 = uVar6 | uVar7;
  if ((param_3 & 1) == 0) {
    uVar2 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
  }
  *(ulong *)(param_1 + 0x458) = uVar2;
  if (((uVar6 & 7) != 0) != ((uVar2 & 7) != 0)) {
    lVar5 = *(long *)(param_1 + 0x460);
    if ((uVar6 & 7) == 0) {
      if (lVar5 != 0) {
        FUN_00d37b18(lVar5,param_1);
      }
    }
    else if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 0x138);
      lVar8 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_00d37aa8;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x140));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x140));
            while (*plVar1 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00d37aa8;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00d37aa8:
      FUN_00d37f30(lVar5,param_1);
      *(undefined8 *)(lVar5 + 0x138) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x140));
    }
  }
  if (bVar9) {
    return;
  }
  *plVar10 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
  return;
code_r0x00d379ac:
  cVar3 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar9) {
    *plVar10 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00d379b4;
  goto LAB_00d379a4;
}


