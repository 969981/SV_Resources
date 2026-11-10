/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00808cf4; name: FUN_00808cf4
 */


void FUN_00808cf4(undefined8 param_1,long param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_50;
  long *local_48;
  int local_40 [4];
  undefined4 local_28 [2];
  
  plVar3 = *(long **)(param_2 + 0x1418);
  if (plVar3 == (long *)0x0) {
    local_40[0] = 0x10407;
  }
  else {
    if (*(int *)(param_2 + 0x1428) != 1) {
      if (*(int *)(param_2 + 0x1458) != 0) {
        FUN_0078cac8(param_2 + 0x1428);
        plVar3 = *(long **)(param_2 + 0x1418);
        *(undefined4 *)(param_2 + 0x1458) = 0;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,1);
      uVar4 = *(undefined8 *)(param_2 + 0x1418);
      local_50 = *param_4;
      local_48 = (long *)param_4[1];
      if (local_48 != (long *)0x0) {
        plVar3 = local_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_0080cd64(local_40,uVar4,param_2 + 0x1428,param_3 & 1,&local_50);
      if (local_48 != (long *)0x0) {
        plVar3 = local_48 + 1;
        do {
          lVar5 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_40[0] == 0) {
        *(undefined4 *)(param_2 + 0x1458) = 1;
        FUN_0078cd58(*(undefined8 *)(param_2 + 0x1418),0);
      }
      goto LAB_00808e00;
    }
    local_40[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
LAB_00808e00:
  FUN_00cbd7c0(param_1,local_40);
  return;
}


