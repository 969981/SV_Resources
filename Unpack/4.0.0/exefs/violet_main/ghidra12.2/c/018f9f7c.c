/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f9f7c; name: FUN_018f9f7c
 */


undefined8 FUN_018f9f7c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined1 auStack_60 [24];
  long *local_48;
  
  if (**(char **)(param_1 + 0xd8) != '\0') {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x48);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_018f9fc4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_018f9fc4;
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
LAB_018f9fc4:
  FUN_0148e234(auStack_60,param_1,*(long *)(param_1 + 0xa8) == 0,0);
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_80 = *(undefined8 *)PTR_DAT_047d3e30;
  local_78 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  local_70 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar1 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  local_68 = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar7 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
    puVar2 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x68) + (uVar7 >> 4 & 0xffffffffffffff8)) +
             (uVar7 & 0x7f) * 0x20);
    local_80 = *puVar2;
    local_78 = puVar2[1];
    local_70 = puVar2[2];
    plVar8 = (long *)puVar2[3];
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    local_68 = plVar8;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    FUN_0148ecf4(*(undefined8 *)(param_1 + 0x40),&local_80,auStack_60);
  }
  FUN_0148e364(param_1 + 0x60,param_2);
  FUN_0148e4d4(*(undefined8 *)(param_1 + 0x40),param_2,auStack_60);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
  return 1;
}


