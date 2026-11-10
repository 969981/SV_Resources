/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bf034; name: FUN_027bf034
 */


void FUN_027bf034(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 ***local_98;
  undefined8 ***pppuStack_90;
  undefined1 auStack_80 [64];
  undefined **local_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_01ea06c8();
    puVar1 = PTR_DAT_047cbb30 + 0x10;
    local_98 = &local_98;
    local_40 = (undefined **)0x0;
    uStack_38 = 0;
    puStack_a0 = PTR_DAT_047cbb38 + 0x10;
    local_a8 = puVar1;
    pppuStack_90 = local_98;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),auStack_80);
    local_40 = &puStack_a0;
    thunk_FUN_006c4e40(&local_a8);
    local_a8 = puVar1;
    FUN_006c4274(&puStack_a0);
    plVar2 = *(long **)(param_1 + 0x10);
    plVar3 = *(long **)(param_1 + 0x18);
    *(long *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    (**(code **)(*plVar2 + 0x30))();
    if (plVar3 != (long *)0x0) {
      plVar2 = plVar3 + 1;
      do {
        lVar6 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}


