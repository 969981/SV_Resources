/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c42e90; name: FUN_00c42e90
 */


/* WARNING: Removing unreachable block (ram,0x00c42efc) */

void FUN_00c42e90(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  plVar1 = (long *)(param_1 + 0xe0);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_1 + 0xe8);
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0xe8) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar6 != 0 && (lVar4 != lVar6))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf0));
      do {
        lVar6 = *plVar1;
        lVar7 = *(long *)(param_1 + 0xe8);
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar6;
          *(long *)(param_1 + 0xe8) = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar6 || *(long *)(param_1 + 0xe8) != lVar7) break;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0xe4) = lVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar4 = *(long *)(param_1 + 0x38);
        lVar6 = *(long *)(param_1 + 0x40);
        if (lVar4 == lVar6) goto LAB_00c42f64;
        goto LAB_00c42f44;
      }
    }
    ClearExclusiveLocal();
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_1 + 0xe8);
  } while( true );
  while (lVar4 = lVar4 + 0x78, (uVar5 & 1) != 0) {
LAB_00c42f44:
    uVar5 = (*(code *)*param_2)(param_2 + 4,lVar4);
    if (lVar6 + -0x78 == lVar4) break;
  }
LAB_00c42f64:
  do {
    lVar4 = *plVar1;
    lVar6 = *(long *)(param_1 + 0xe8);
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0xe8) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar7 = *plVar1;
    lVar2 = *(long *)(param_1 + 0xe8);
    if (lVar7 != lVar4 || lVar2 != lVar6) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto joined_r0x00c42fa0;
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0xe4) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar8 = true;
joined_r0x00c42fa0:
  do {
    if (bVar8) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf0));
      return;
    }
    do {
      lVar4 = *plVar1;
      lVar6 = *(long *)(param_1 + 0xe8);
      if (lVar4 != lVar7 || lVar6 != lVar2) {
        bVar8 = false;
        ClearExclusiveLocal();
        lVar7 = lVar4;
        lVar2 = lVar6;
        goto joined_r0x00c42fa0;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0xe4) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
    lVar7 = lVar4;
    lVar2 = lVar6;
  } while( true );
}


