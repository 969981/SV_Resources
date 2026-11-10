/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0155cb34; name: FUN_0155cb34
 */


void FUN_0155cb34(long *param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined1 auStack_58 [8];
  undefined1 **local_50;
  undefined1 *local_48;
  
  lVar6 = *param_1;
  local_48 = auStack_58;
  local_50 = &local_48;
  plVar1 = (long *)(lVar6 + 0x110);
  lVar4 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar4) {
    bVar5 = true;
LAB_0155cb98:
    lVar3 = FUN_0155cc68(&local_50,lVar6 + 0x128);
    if (lVar3 == 0) {
      lVar3 = FUN_0155cc68(&local_50,lVar6 + 0x160);
    }
    if (!bVar5) {
      *(undefined8 *)(lVar6 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x118));
    }
    if (((lVar3 != 0) && (FUN_0155cd98(lVar3,param_2 & 1), *(char *)(lVar3 + 0x1b0) != '\0')) &&
       (lVar3 = FUN_0156b930(*param_1 + 0x108,&local_48), lVar3 != 0)) {
      FUN_0155ced8(lVar3,param_2 & 1);
    }
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0155cb94;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x118));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x118));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0155cb94;
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
LAB_0155cb94:
  bVar5 = false;
  goto LAB_0155cb98;
}


