/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080ed1c; name: FUN_0080ed1c
 */


void FUN_0080ed1c(undefined8 param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ErrorResultVariant *this;
  long lVar6;
  long *plVar7;
  undefined8 local_48;
  long *local_40;
  undefined4 local_38 [2];
  
  uVar5 = (**(code **)(*param_2 + 0x20))();
  if ((uVar5 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      local_48 = 0;
      FUN_007935cc(&local_48);
      if (local_48 < (ulong)param_2[0x157]) {
        *(undefined1 *)(param_2 + 0x15c) = 1;
        local_48 = local_48 & 0xffffffff00000000;
        this = (ErrorResultVariant *)((ulong)&local_48 | 4);
        goto LAB_0080eeec;
      }
    }
    this = (ErrorResultVariant *)((ulong)&local_48 | 4);
    *(undefined1 *)(param_2 + 0x15c) = 0;
    local_48 = local_48 & 0xffffffff00000000;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_38);
    lVar1 = (long)param_2 + 0xae4;
    FUN_018ff39c(lVar1,&local_48);
    uVar5 = FUN_0080a7b8(param_2[0x159]);
    if ((uVar5 & 1) == 0) {
      local_48._0_4_ = 0xec63;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_38);
      FUN_018ff39c(lVar1,&local_48);
      local_48 = CONCAT44(local_48._4_4_,0xec63);
    }
    else {
      FUN_0080ac0c(&local_48,param_2[0x159]);
      plVar2 = local_40;
      uVar5 = local_48;
      local_48 = 0;
      local_40 = (long *)0x0;
      plVar7 = (long *)param_2[2];
      param_2[1] = uVar5;
      param_2[2] = (long)plVar2;
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 1;
        do {
          lVar6 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_40 != (long *)0x0) {
        plVar2 = local_40 + 1;
        do {
          lVar6 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_48 = 0;
      FUN_007935cc(&local_48);
      param_2[0x158] = local_48;
      if (param_2[1] == 0) {
        this = (ErrorResultVariant *)((ulong)&local_48 | 4);
        local_48._0_4_ = 0xec63;
        local_38[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_38);
        FUN_018ff39c(lVar1,&local_48);
        local_48 = CONCAT44(local_48._4_4_,0xec63);
      }
      else {
        this = (ErrorResultVariant *)((ulong)&local_48 | 4);
        local_48 = (ulong)local_48._4_4_ << 0x20;
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffffff00000000;
    this = (ErrorResultVariant *)((ulong)&local_48 | 4);
  }
LAB_0080eeec:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_38);
  FUN_00cbd7c0(param_1,&local_48);
  return;
}


