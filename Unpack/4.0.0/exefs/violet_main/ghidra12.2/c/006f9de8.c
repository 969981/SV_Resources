/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006f9de8; name: FUN_006f9de8
 */


void FUN_006f9de8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 *****local_88;
  undefined8 *****pppppuStack_80;
  undefined1 auStack_70 [64];
  undefined **local_30;
  undefined8 uStack_28;
  
  local_c0 = param_2;
  uStack_b8 = param_3;
  local_b0 = param_4;
  FUN_006fa1b0(&local_a8,&local_c0,*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x850)
              );
  puVar1 = PTR_DAT_047cbb30 + 0x10;
  local_88 = &local_88;
  puStack_90 = PTR_DAT_047cbb38 + 0x10;
  local_30 = (undefined **)0x0;
  uStack_28 = 0;
  local_98 = puVar1;
  pppppuStack_80 = local_88;
  (**(code **)(*local_a8 + 0x10))(local_a8,auStack_70);
  local_30 = &puStack_90;
  thunk_FUN_006c4e40(&local_98);
  local_98 = puVar1;
  FUN_006c4274(&puStack_90);
  plVar5 = local_a0;
  plVar2 = local_a8;
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  (**(code **)(*plVar2 + 0x30))();
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_a0 != (long *)0x0) {
    plVar2 = local_a0 + 1;
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
      (**(code **)(*local_a0 + 0x10))(local_a0);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


