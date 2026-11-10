/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b7f30; name: FUN_027b7f30
 */


void FUN_027b7f30(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_58;
  long *local_50;
  undefined1 auStack_48 [8];
  long *local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  local_58 = 0;
  local_50 = (long *)0x0;
  FUN_027b8048(auStack_48,param_3,&local_58);
  FUN_027b80b4(&local_38,uVar5,auStack_48);
  local_18 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  FUN_01f710f0(&local_18);
  uVar5 = local_38;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x78) = uVar5;
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 1;
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
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 1;
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
      (**(code **)(*local_50 + 0x10))(local_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(param_2 + 0x78) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_01f717cc(auStack_48);
    FUN_027b8148(param_1,auStack_48);
    FUN_01d0fcc8(auStack_48);
  }
  return;
}


