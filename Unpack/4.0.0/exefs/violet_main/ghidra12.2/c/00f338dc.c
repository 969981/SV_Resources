/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f338dc; name: FUN_00f338dc
 */


void FUN_00f338dc(undefined8 *param_1,long param_2)

{
  LightEventType *pLVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar5 != 0) && (*(uint *)(lVar5 + 0x90) < 3)) {
    lVar5 = (ulong)*(uint *)(lVar5 + 0x90) + 1;
    plVar7 = (long *)(param_2 + lVar5 * 0x18 + 0x658);
    lVar6 = nn::os::GetCurrentThread();
    do {
      if (*plVar7 != 0) {
        pLVar1 = (LightEventType *)(param_2 + lVar5 * 0x18 + 0x660);
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar1);
        do {
          if (*plVar7 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent(pLVar1);
              while (*plVar7 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar3) {
                  *plVar7 = lVar6;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_00f33944;
              }
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00f33944:
    *param_1 = *(undefined8 *)(param_2 + *(long *)(param_2 + lVar5 * 8 + 0x6b8) * 0x20 + 0x558);
    param_1[1] = plVar7;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  plVar7 = (long *)(param_2 + 0x658);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00f33940;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x660));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x660));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00f33940;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00f33940:
  lVar5 = 0;
  goto LAB_00f33944;
}


