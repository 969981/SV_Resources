/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6fcb8; name: FUN_00c6fcb8
 */


long FUN_00c6fcb8(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  
  plVar3 = (long *)(param_1 + 0x110);
  lVar4 = *plVar3;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar4) {
    bVar5 = true;
LAB_00c6fcfc:
    plVar3 = (long *)FUN_00c6fdc0(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130))
    ;
    if ((*(long **)(param_1 + 0x130) == plVar3) || (*plVar3 == 0)) {
      plVar3 = (long *)FUN_00c6fdc0(*(undefined8 *)(param_1 + 0x160),
                                    *(undefined8 *)(param_1 + 0x168));
      if (*(long **)(param_1 + 0x168) == plVar3) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        if (*plVar3 != 0) {
          lVar2 = *plVar3 + -0x20;
        }
      }
    }
    else {
      lVar2 = *plVar3 + -0x20;
    }
    if (!bVar5) {
      *(undefined8 *)(param_1 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x118));
    }
    return lVar2;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00c6fcf8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
        while (*plVar3 == 0) {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00c6fcf8;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00c6fcf8:
  bVar5 = false;
  goto LAB_00c6fcfc;
}


