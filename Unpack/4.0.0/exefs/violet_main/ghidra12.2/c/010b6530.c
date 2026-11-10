/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b6530; name: FUN_010b6530
 */


void FUN_010b6530(long *param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                 int param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long local_68;
  undefined8 local_48;
  
  if ((*(byte *)(*(long *)(*param_4 + 0xb0) + 0x6c) & 1) == 0) {
LAB_010b6680:
    *param_1 = 0;
    return;
  }
  lVar6 = *(long *)(*param_4 + 0xb0);
  plVar1 = (long *)(lVar6 + 0x78);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_010b6598;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x80));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x80));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_010b6598;
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
LAB_010b6598:
  iVar4 = *(int *)(lVar6 + 0x68);
  cVar2 = *(char *)(lVar6 + 100);
  *(undefined8 *)(lVar6 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x80));
  if ((iVar4 == 0) && (cVar2 != '\0')) {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    lVar5 = *(long *)PTR_DAT_047d4e00;
    *(long *)PTR_DAT_047d4e08 = lVar5;
    local_48 = *(undefined8 *)(lVar5 + (long)param_6 * 8 + 0x28);
    FUN_00de1c30(&local_68,param_2 + 0x40,param_3,&local_48);
    FUN_010b66c4(local_68,*(undefined8 *)(local_68 + 8),param_4);
    *param_1 = local_68;
    return;
  }
  goto LAB_010b6680;
}


