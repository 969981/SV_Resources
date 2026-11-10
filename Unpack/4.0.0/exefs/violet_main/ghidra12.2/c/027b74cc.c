/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b74cc; name: FUN_027b74cc
 */


void FUN_027b74cc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_b0;
  long *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  long *local_50;
  undefined8 local_48;
  undefined8 local_28;
  
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  local_a0 = 1;
  local_9c = 0;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_80 = FUN_01cf7e20();
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = FUN_01cf7e20();
  local_b0 = 0;
  local_a8 = (long *)0x0;
  FUN_027b763c(auStack_58,param_3,param_4,&local_a0,&local_b0);
  FUN_027b76ec(&local_48,uVar5,auStack_58);
  local_28 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  FUN_01f710f0(&local_28);
  uVar5 = local_48;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x78) = uVar5;
  FUN_027b7780(&local_48);
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
  if (local_a8 != (long *)0x0) {
    plVar1 = local_a8 + 1;
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
      (**(code **)(*local_a8 + 0x10))(local_a8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_01e74fe4(&uStack_78);
  FUN_01e75064(&local_98);
  if (*(long *)(param_2 + 0x78) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_01f717cc(&local_a0);
    FUN_027b77e8(param_1,&local_a0);
    FUN_01d0fcc8(&local_a0);
  }
  return;
}


