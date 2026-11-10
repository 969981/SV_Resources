/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006fa730; name: FUN_006fa730
 */


void FUN_006fa730(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *local_b8;
  long *local_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 ****local_98;
  undefined8 ****ppppuStack_90;
  undefined1 auStack_80 [64];
  undefined **local_40;
  undefined8 uStack_38;
  
  local_a8 = param_2;
  FUN_006fa940(&local_b8,&local_a8,*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x240),0x10000,
               *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x4b8));
  puVar1 = PTR_DAT_047cbb30 + 0x10;
  local_98 = &local_98;
  local_40 = (undefined **)0x0;
  uStack_38 = 0;
  puStack_a0 = PTR_DAT_047cbb38 + 0x10;
  local_a8 = puVar1;
  ppppuStack_90 = local_98;
  (**(code **)(*local_b8 + 0x10))(local_b8,auStack_80);
  local_40 = &puStack_a0;
  thunk_FUN_006c4e40(&local_a8);
  local_a8 = puVar1;
  FUN_006c4274(&puStack_a0);
  plVar5 = local_b0;
  plVar2 = local_b8;
  local_b8 = (long *)0x0;
  local_b0 = (long *)0x0;
  (**(code **)(*plVar2 + 0x30))(param_1);
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
  if (local_b0 != (long *)0x0) {
    plVar2 = local_b0 + 1;
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
      (**(code **)(*local_b0 + 0x10))(local_b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


