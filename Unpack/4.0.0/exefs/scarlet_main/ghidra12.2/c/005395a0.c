/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005395a0; name: FUN_005395a0
 */


void FUN_005395a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_90 [8];
  long *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  long local_50;
  long local_48;
  long local_40;
  long *plStack_38;
  
  FUN_00567fc0(auStack_80,param_2);
  FUN_00568320(auStack_80,param_2,param_3,param_4);
  FUN_00568880(auStack_90,auStack_80);
  FUN_00538f90(param_1,*param_2,auStack_90);
  lVar5 = local_50;
  lVar6 = local_48;
  if (local_88 != (long *)0x0) {
    plVar1 = local_88 + 1;
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
      (**(code **)(*local_88 + 0x10))(local_88);
      std::__shared_weak_count::__release_weak();
      lVar5 = local_50;
      lVar6 = local_48;
    }
  }
  if (lVar5 != 0) {
    local_50 = lVar5;
    if (lVar6 != lVar5) {
      do {
        lVar6 = lVar6 + -8;
        FUN_0053dd1c(lVar6);
      } while (lVar5 != lVar6);
      lVar5 = local_50;
    }
    (**(code **)(*plStack_38 + 0x18))(plStack_38,lVar5,local_40 - lVar5,8);
  }
  lVar5 = local_70;
  if (local_70 != 0) {
    lVar6 = local_68;
    if (local_68 != local_70) {
      do {
        lVar6 = lVar6 + -8;
        FUN_0056b3f0(lVar6);
      } while (lVar5 != lVar6);
    }
    local_68 = lVar5;
    (**(code **)(*plStack_58 + 0x18))(plStack_58,local_70,local_60 - local_70,8);
  }
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


