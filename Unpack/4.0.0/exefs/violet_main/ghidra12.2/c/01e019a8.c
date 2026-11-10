/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e019a8; name: FUN_01e019a8
 */


void FUN_01e019a8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  plVar1 = (long *)(param_1 + 0x2d8);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01e019e0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01e019e0;
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
LAB_01e019e0:
  puVar6 = *(undefined8 **)(param_1 + 0x268);
  if (puVar6 == *(undefined8 **)(param_1 + 0x270)) {
    FUN_018c5e98(param_1 + 0x260,param_2);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x278);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      FUN_00d0a71c(puVar6,param_2);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      puVar6[3] = *(undefined8 *)(param_2 + 0x18);
      puVar6[5] = uVar7;
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      puVar6[4] = *(undefined8 *)(param_2 + 0x20);
      puVar6[2] = uVar7;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar6 = 0;
      puVar6[1] = 0;
      FUN_00d0a71c(puVar6,param_2);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      puVar6[3] = *(undefined8 *)(param_2 + 0x18);
      puVar6[5] = uVar7;
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      puVar6[4] = *(undefined8 *)(param_2 + 0x20);
      puVar6[2] = uVar7;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x268) = puVar6 + 6;
  }
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2e0));
  return;
}


