/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01437d10; name: FUN_01437d10
 */


void FUN_01437d10(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01437d48;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01437d48;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01437d48:
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == *(undefined8 **)(param_1 + 0x68)) {
    FUN_014380fc(param_1 + 0x58,param_2);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_01437e98(puVar2,param_2);
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar7;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_01437e98(puVar2,param_2);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x60) = puVar2 + 2;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
  return;
}


