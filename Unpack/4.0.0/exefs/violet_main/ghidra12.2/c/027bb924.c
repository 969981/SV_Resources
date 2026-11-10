/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bb924; name: FUN_027bb924
 */


void FUN_027bb924(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *plStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  long *local_68;
  ulong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *plStack_48;
  ulong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *plStack_28;
  
  FUN_00250bf0(&local_60,param_3);
  local_a0 = local_30;
  uStack_a8 = uStack_38;
  local_b0 = local_40;
  local_80 = local_50;
  uStack_88 = uStack_58;
  local_70 = *param_2;
  local_68 = (long *)param_2[1];
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_58 = 0;
  local_50 = 0;
  local_90 = local_60;
  plStack_78 = plStack_48;
  local_60 = 0;
  local_30 = 0;
  local_40 = 0;
  uStack_38 = 0;
  plStack_98 = plStack_28;
  FUN_0066b4a4(param_1,&local_70,&local_90,&local_b0);
  if ((local_b0 & 1) != 0) {
    (**(code **)(*plStack_98 + 0x18))(plStack_98,local_a0,local_b0 & 0xfffffffffffffffe,1);
  }
  if ((local_90 & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))(plStack_78,local_80,local_90 & 0xfffffffffffffffe,1);
  }
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))(plStack_28,local_30,local_40 & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) == 0) {
    return;
  }
  (**(code **)(*plStack_48 + 0x18))(plStack_48,local_50,local_60 & 0xfffffffffffffffe,1);
  return;
}


