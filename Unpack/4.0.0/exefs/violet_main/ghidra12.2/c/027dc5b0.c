/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dc5b0; name: FUN_027dc5b0
 */


void FUN_027dc5b0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar7;
  byte *pbVar6;
  long local_a0;
  long *local_98;
  long local_90;
  long *local_88;
  byte *local_80;
  byte *local_78;
  long local_70;
  long *local_68;
  undefined1 auStack_60 [8];
  long *local_58;
  undefined8 local_50;
  long *local_48;
  
  local_90 = 0;
  local_a0 = 0;
  local_98 = (long *)0x0;
  local_88 = (long *)FUN_01cf7e20();
  local_80 = (byte *)0x0;
  local_78 = (byte *)0x0;
  local_70 = 0;
  local_68 = (long *)FUN_01cf7e20();
  local_50 = 0;
  local_48 = (long *)0x0;
  FUN_005bbbb0(auStack_60,param_2,param_3,&local_a0,&local_50,param_4);
  pbVar3 = local_80;
  if (local_80 != (byte *)0x0) {
    if (local_78 != local_80) {
      pbVar7 = local_78;
      do {
        pbVar6 = pbVar7 + -0x20;
        if ((*pbVar6 & 1) != 0) {
          (**(code **)(**(long **)(pbVar7 + -8) + 0x18))
                    (*(long **)(pbVar7 + -8),*(undefined8 *)(pbVar7 + -0x10),
                     *(ulong *)(pbVar7 + -0x20) & 0xfffffffffffffffe,1);
        }
        pbVar7 = pbVar6;
      } while (pbVar3 != pbVar6);
    }
    local_78 = pbVar3;
    (**(code **)(*local_68 + 0x18))(local_68,local_80,local_70 - (long)local_80,8);
  }
  lVar4 = local_a0;
  if (local_a0 != 0) {
    if (local_98 != (long *)local_a0) {
      plVar5 = local_98;
      do {
        plVar5 = (long *)((long)plVar5 + -0x88);
        FUN_005c97cc(&local_88,plVar5);
      } while ((long *)lVar4 != plVar5);
    }
    local_98 = (long *)lVar4;
    (**(code **)(*local_88 + 0x18))(local_88,local_a0,local_90 - local_a0,8);
  }
  lVar4 = *(long *)(*(long *)(*param_2 + 8) + 0x48);
  local_50 = *param_4;
  local_48 = (long *)param_4[1];
  if (local_48 != (long *)0x0) {
    plVar5 = local_48 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_a0 = 0;
  local_98 = (long *)0x0;
  FUN_005c9878(param_1,auStack_60,&local_50,*(undefined8 *)(lVar4 + 0x240),
               *(undefined8 *)(lVar4 + 0x4b8),&local_a0);
  if (local_98 != (long *)0x0) {
    plVar5 = local_98 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_98 + 0x10))(local_98);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_48 != (long *)0x0) {
    plVar5 = local_48 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_48 + 0x10))(local_48);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_58 != (long *)0x0) {
    plVar5 = local_58 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_58 + 0x10))(local_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


