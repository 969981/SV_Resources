/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02713760; name: FUN_02713760
 */


void FUN_02713760(undefined8 param_1,long param_2,ulong *param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  bool bVar8;
  
  lVar1 = param_2 + (*param_3 >> 0x37) * 0x20;
  plVar2 = (long *)(lVar1 + 0xd050);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar2 == 0 && *(long *)(lVar1 + 0xd058) == 0) {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar7;
      *(undefined8 *)(lVar1 + 0xd058) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_027137c0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0xd060));
  do {
    if (*plVar2 != 0 || *(long *)(lVar1 + 0xd058) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0xd060));
        while (*plVar2 == 0 && *(long *)(lVar1 + 0xd058) == 0) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar7;
            *(undefined8 *)(lVar1 + 0xd058) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_027137c0;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar7;
      *(undefined8 *)(lVar1 + 0xd058) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_027137c0:
  FUN_00ec3aac(param_1,param_2,param_3,param_4 & 1,param_5);
  do {
    lVar7 = *plVar2;
    lVar5 = *(long *)(lVar1 + 0xd058);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar7;
      *(long *)(lVar1 + 0xd058) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar3 = *plVar2;
    lVar4 = *(long *)(lVar1 + 0xd058);
    if (lVar3 != lVar7 || lVar4 != lVar5) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_02713864;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = 0;
      *(long *)(lVar1 + 0xd054) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_02713864:
  if (!bVar8) {
    do {
      lVar7 = *plVar2;
      lVar5 = *(long *)(lVar1 + 0xd058);
      if (lVar7 != lVar3 || lVar5 != lVar4) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x027138b8;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = 0;
        *(long *)(lVar1 + 0xd054) = lVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
joined_r0x027138b8:
    if (!bVar8) {
      do {
        lVar3 = *plVar2;
        lVar4 = *(long *)(lVar1 + 0xd058);
        if (lVar3 != lVar7 || lVar4 != lVar5) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar3;
          lVar5 = lVar4;
          goto joined_r0x027138b8;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = 0;
          *(long *)(lVar1 + 0xd054) = lVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
      lVar7 = lVar3;
      lVar5 = lVar4;
      goto joined_r0x027138b8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar1 + 0xd060));
  return;
}


