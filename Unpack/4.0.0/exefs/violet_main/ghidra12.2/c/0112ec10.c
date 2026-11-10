/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0112ec10; name: FUN_0112ec10
 */


long FUN_0112ec10(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = (long *)(param_1 + 0x300);
  lVar4 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar4) {
    lVar3 = nn::os::GetCurrentThread();
LAB_0112ec4c:
    if (*plVar1 == 0) goto code_r0x0112ec54;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_0112ec5c;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0112ec5c:
    bVar6 = false;
    goto LAB_0112ec60;
  }
  bVar6 = true;
LAB_0112ec60:
  if ((*(byte *)(param_1 + 0x629) & 1) == 0) {
    plVar1 = (long *)(param_1 + 0x318);
    lVar4 = *plVar1;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar4) {
      lVar3 = nn::os::GetCurrentThread();
LAB_0112ec88:
      if (*plVar1 == 0) goto code_r0x0112ec90;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar3;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_0112ec98;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0112ec98:
      bVar5 = false;
      goto LAB_0112ec9c;
    }
    bVar5 = true;
LAB_0112ec9c:
    if ((param_2 < *(ulong *)(param_1 + 0x290)) &&
       ((*(ulong *)(param_1 + 0x228) <= param_2 ||
        ((*(ulong *)(*(long *)(param_1 + 0x220) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
          (param_2 & 0x3f) & 1) == 0)))) {
      lVar3 = *(long *)(param_1 + 0x1e8) + param_2 * 0x20;
      lVar7 = *(long *)(lVar3 + 8);
      lVar8 = *(long *)(*(long *)(param_1 + 0x28) + *(long *)(lVar3 + 0x18) * 8);
      lVar4 = *(long *)(*(long *)(lVar8 + 0x68) + lVar7 * 0x48 + 8);
      lVar3 = -1;
      if (lVar4 != -1) {
        FUN_010b4850(*(undefined8 *)(lVar8 + 0x118),lVar4);
        *(undefined8 *)(*(long *)(lVar8 + 0x68) + lVar7 * 0x48 + 8) = 0xffffffffffffffff;
        lVar3 = lVar4;
      }
    }
    else {
      lVar3 = -1;
    }
    if (!bVar5) {
      *(undefined8 *)(param_1 + 0x318) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 800));
    }
  }
  else {
    lVar3 = -1;
  }
  if (!bVar6) {
    *(undefined8 *)(param_1 + 0x300) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x308));
  }
  return lVar3;
code_r0x0112ec54:
  cVar2 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar6) {
    *plVar1 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0112ec5c;
  goto LAB_0112ec4c;
code_r0x0112ec90:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar5) {
    *plVar1 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0112ec98;
  goto LAB_0112ec88;
}


