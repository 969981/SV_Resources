/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010b4650; name: FUN_010b4650
 */


long FUN_010b4650(long param_1,ulong param_2)

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
LAB_010b468c:
    if (*plVar1 == 0) goto code_r0x010b4694;
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
            if (cVar2 == '\0') goto LAB_010b469c;
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
LAB_010b469c:
    bVar6 = false;
    goto LAB_010b46a0;
  }
  bVar6 = true;
LAB_010b46a0:
  if ((*(byte *)(param_1 + 0x629) & 1) == 0) {
    plVar1 = (long *)(param_1 + 0x318);
    lVar4 = *plVar1;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar4) {
      lVar3 = nn::os::GetCurrentThread();
LAB_010b46c8:
      if (*plVar1 == 0) goto code_r0x010b46d0;
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
              if (cVar2 == '\0') goto LAB_010b46d8;
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
LAB_010b46d8:
      bVar5 = false;
      goto LAB_010b46dc;
    }
    bVar5 = true;
LAB_010b46dc:
    if ((param_2 < *(ulong *)(param_1 + 0x290)) &&
       ((*(ulong *)(param_1 + 0x228) <= param_2 ||
        ((*(ulong *)(*(long *)(param_1 + 0x220) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
          (param_2 & 0x3f) & 1) == 0)))) {
      lVar3 = *(long *)(param_1 + 0x1e8) + param_2 * 0x20;
      lVar7 = *(long *)(lVar3 + 8);
      lVar8 = *(long *)(*(long *)(param_1 + 0x28) + *(long *)(lVar3 + 0x18) * 8);
      lVar4 = *(long *)(*(long *)(lVar8 + 0x68) + lVar7 * 0x48 + 0x10);
      lVar3 = -1;
      if (lVar4 != -1) {
        FUN_010b4850(*(undefined8 *)(lVar8 + 0x120),lVar4);
        *(undefined8 *)(*(long *)(lVar8 + 0x68) + lVar7 * 0x48 + 0x10) = 0xffffffffffffffff;
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
code_r0x010b4694:
  cVar2 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar6) {
    *plVar1 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_010b469c;
  goto LAB_010b468c;
code_r0x010b46d0:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar5) {
    *plVar1 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_010b46d8;
  goto LAB_010b46c8;
}


