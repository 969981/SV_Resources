/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010972dc; name: FUN_010972dc
 */


undefined8 FUN_010972dc(long param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  
  plVar1 = (long *)(param_1 + 0x300);
  lVar6 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar6) {
    lVar4 = nn::os::GetCurrentThread();
LAB_01097320:
    if (*plVar1 == 0) goto code_r0x01097328;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01097330;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01097330:
    bVar8 = false;
    goto LAB_01097334;
  }
  bVar8 = true;
LAB_01097334:
  if ((*(byte *)(param_1 + 0x629) & 1) == 0) {
    plVar1 = (long *)(param_1 + 0x318);
    lVar6 = *plVar1;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar6) {
      lVar4 = nn::os::GetCurrentThread();
LAB_0109735c:
      if (*plVar1 == 0) goto code_r0x01097364;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
            while (*plVar1 == 0) {
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar4;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0109736c;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0109736c:
      bVar7 = false;
      goto LAB_01097370;
    }
    bVar7 = true;
LAB_01097370:
    if ((param_2 < *(ulong *)(param_1 + 0x290)) &&
       ((*(ulong *)(param_1 + 0x228) <= param_2 ||
        ((*(ulong *)(*(long *)(param_1 + 0x220) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
          (param_2 & 0x3f) & 1) == 0)))) {
      lVar4 = *(long *)(param_1 + 0x1e8) + param_2 * 0x20;
      uVar5 = *(undefined8 *)(lVar4 + 8);
      lVar6 = *(long *)(lVar4 + 0x18);
      uVar2 = *(undefined1 *)(lVar4 + 0x10);
      uVar9 = *(undefined4 *)(lVar4 + 0x14);
      FUN_01097be4(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar6 * 8),uVar5,param_3);
      uVar5 = FUN_010974dc(uVar9,*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar6 * 8),uVar5,uVar2)
      ;
    }
    else {
      uVar5 = 0xffffffffffffffff;
    }
    if (!bVar7) {
      *(undefined8 *)(param_1 + 0x318) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 800));
    }
  }
  else {
    uVar5 = 0xffffffffffffffff;
  }
  if (!bVar8) {
    *(undefined8 *)(param_1 + 0x300) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x308));
  }
  return uVar5;
code_r0x01097328:
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar8) {
    *plVar1 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01097330;
  goto LAB_01097320;
code_r0x01097364:
  cVar3 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar7) {
    *plVar1 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0109736c;
  goto LAB_0109735c;
}


