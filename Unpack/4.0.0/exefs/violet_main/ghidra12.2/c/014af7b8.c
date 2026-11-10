/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014af7b8; name: FUN_014af7b8
 */


void FUN_014af7b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar6 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar6;
  if (*(undefined8 **)(param_1 + 0x50) == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = **(undefined8 **)(param_1 + 0x50);
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x90) != -1)) {
    *(undefined8 *)(lVar6 + (long)*(int *)(lVar5 + 0x90) * 8 + 0x6a0) = uVar7;
  }
  puVar3 = PTR_DAT_047d38f8;
  lVar8 = *(long *)(param_1 + 0x100);
  lVar5 = *(long *)PTR_DAT_047d38f8;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar5) {
    FUN_014af9e4(*(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 0x80),
                 *(undefined8 *)(param_1 + 0xc0),param_2,param_3,param_4,param_5,param_6);
    return;
  }
  uVar7 = nn::os::GetCurrentThread();
  while (*(long *)puVar3 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 *)puVar3 = uVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_014af8c4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
  do {
    if (*(long *)puVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
        while (*(long *)puVar3 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar2) {
            *(undefined8 *)puVar3 = uVar7;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_014af8c4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 *)puVar3 = uVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_014af8c4:
  FUN_014af9e4(*(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 0x80),
               *(undefined8 *)(param_1 + 0xc0),param_2,param_3,param_4,param_5,param_6);
  *(undefined8 *)puVar3 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
  return;
}


