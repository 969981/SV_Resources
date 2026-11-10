/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c68c0; name: FUN_006c68c0
 */


void FUN_006c68c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  long *local_38;
  
  local_40 = *param_2;
  local_38 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_50 = *param_3;
  local_48 = (long *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_60 = *param_4;
  local_58 = (long *)param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  lVar4 = FUN_006c5d14(param_1,&local_40,&local_50,&local_60);
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 1;
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
      (**(code **)(*local_58 + 0x10))(local_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 1;
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
      (**(code **)(*local_48 + 0x10))(local_48);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 1;
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
      (**(code **)(*local_38 + 0x10))(local_38);
      std::__shared_weak_count::__release_weak();
      lVar5 = *(long *)(lVar4 + 0x30);
      goto joined_r0x006c69e8;
    }
  }
  lVar5 = *(long *)(lVar4 + 0x30);
joined_r0x006c69e8:
  if ((lVar5 == 0) && (*(long *)(lVar4 + 0xb0) == 0)) {
    FUN_006c60b8(param_1,lVar4);
    return;
  }
  FUN_006c5f60(param_1,lVar4);
  return;
}


