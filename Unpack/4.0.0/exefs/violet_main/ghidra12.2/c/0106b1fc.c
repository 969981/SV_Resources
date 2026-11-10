/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0106b1fc; name: FUN_0106b1fc
 */


void FUN_0106b1fc(undefined8 param_1)

{
  LightEventType *pLVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined1 local_44 [4];
  
  if (((DAT_0483af40 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0483af40), iVar4 != 0)) {
    FUN_00100190(&LAB_02a30078,&DAT_0483af30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483af40);
  }
  lVar3 = DAT_0483af30;
  DAT_0483af48 = DAT_0483af30;
  plVar8 = (long *)(DAT_0483af30 + 0x108);
  lVar7 = *plVar8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar7) {
    plVar8 = (long *)0x0;
    bVar6 = true;
LAB_0106b26c:
    local_44[0] = 1;
    FUN_0106b348(lVar3 + 0x120,local_44,param_1);
    if (bVar6) {
      return;
    }
    *plVar8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    return;
  }
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar6) {
      *plVar8 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0106b268;
  }
  pLVar1 = (LightEventType *)(lVar3 + 0x110);
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar1);
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar1);
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0106b268;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar6) {
      *plVar8 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0106b268:
  bVar6 = false;
  goto LAB_0106b26c;
}


