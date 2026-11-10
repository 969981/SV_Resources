/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027b818c; name: FUN_027b818c
 */


void FUN_027b818c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  long *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  local_40 = 1;
  uStack_38 = 0;
  FUN_027b8270(auStack_50,param_3,&local_40);
  FUN_027b8370(&local_18,uVar5,auStack_50);
  local_40 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  FUN_01f710f0(&local_40);
  uVar5 = local_18;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x78) = uVar5;
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 1;
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
      (**(code **)(*local_48 + 0x10))(local_48);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(param_2 + 0x78) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_01f717cc(&local_40);
    FUN_027b8404(param_1,&local_40);
    FUN_01d0fcc8(&local_40);
  }
  return;
}


