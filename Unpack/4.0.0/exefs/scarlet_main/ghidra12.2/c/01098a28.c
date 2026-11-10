/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01098a28; name: FUN_01098a28
 */


undefined8 FUN_01098a28(long param_1,ulong param_2,undefined8 param_3)

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
LAB_01098a6c:
    if (*plVar1 == 0) goto code_r0x01098a74;
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
            if (cVar3 == '\0') goto LAB_01098a7c;
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
LAB_01098a7c:
    bVar8 = false;
    goto LAB_01098a80;
  }
  bVar8 = true;
LAB_01098a80:
  if ((*(byte *)(param_1 + 0x629) & 1) == 0) {
    plVar1 = (long *)(param_1 + 0x318);
    lVar6 = *plVar1;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar6) {
      lVar4 = nn::os::GetCurrentThread();
LAB_01098aa8:
      if (*plVar1 == 0) goto code_r0x01098ab0;
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
              if (cVar3 == '\0') goto LAB_01098ab8;
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
LAB_01098ab8:
      bVar7 = false;
      goto LAB_01098abc;
    }
    bVar7 = true;
LAB_01098abc:
    if ((param_2 < *(ulong *)(param_1 + 0x290)) &&
       ((*(ulong *)(param_1 + 0x228) <= param_2 ||
        ((*(ulong *)(*(long *)(param_1 + 0x220) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
          (param_2 & 0x3f) & 1) == 0)))) {
      lVar4 = *(long *)(param_1 + 0x1e8) + param_2 * 0x20;
      uVar5 = *(undefined8 *)(lVar4 + 8);
      lVar6 = *(long *)(lVar4 + 0x18);
      uVar2 = *(undefined1 *)(lVar4 + 0x10);
      uVar9 = *(undefined4 *)(lVar4 + 0x14);
      FUN_01098c28(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar6 * 8),uVar5,param_3);
      uVar5 = FUN_01098dd0(uVar9,*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar6 * 8),uVar5,uVar2)
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
code_r0x01098a74:
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar8) {
    *plVar1 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01098a7c;
  goto LAB_01098a6c;
code_r0x01098ab0:
  cVar3 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar7) {
    *plVar1 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01098ab8;
  goto LAB_01098aa8;
}


