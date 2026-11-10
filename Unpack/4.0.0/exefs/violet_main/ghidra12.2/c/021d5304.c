/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d5304; name: FUN_021d5304
 */


bool FUN_021d5304(long param_1,byte param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_28 [8];
  
  lVar4 = FUN_00efcb90(param_1 + 0x108,auStack_28);
  bVar3 = false;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x148);
    lVar6 = *plVar1;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar6) {
      lVar5 = nn::os::GetCurrentThread();
LAB_021d534c:
      if (*plVar1 == 0) goto code_r0x021d5354;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x150));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x150));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_021d535c;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_021d535c:
      *(byte *)(lVar4 + 0x140) = param_2 & 1;
      *(undefined1 *)(lVar4 + 0x163) = 1;
      *(undefined8 *)(lVar4 + 0x148) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0x150));
      goto LAB_021d5380;
    }
    *(byte *)(lVar4 + 0x140) = param_2 & 1;
    *(undefined1 *)(lVar4 + 0x163) = 1;
LAB_021d5380:
    lVar6 = *plVar1;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar6) {
      lVar5 = nn::os::GetCurrentThread();
LAB_021d5398:
      if (*plVar1 == 0) goto code_r0x021d53a0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x150));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x150));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_021d53a8;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_021d53a8:
      cVar2 = *(char *)(lVar4 + 0x140);
      *(undefined8 *)(lVar4 + 0x148) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0x150));
      goto LAB_021d53bc;
    }
    cVar2 = *(char *)(lVar4 + 0x140);
LAB_021d53bc:
    bVar3 = cVar2 != '\0';
  }
  return bVar3;
code_r0x021d5354:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_021d535c;
  goto LAB_021d534c;
code_r0x021d53a0:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_021d53a8;
  goto LAB_021d5398;
}


