/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f2628; name: FUN_005f2628
 */


void FUN_005f2628(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long *local_200;
  long *local_1f8;
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined8 ***local_1e0;
  undefined8 ***pppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long alStack_1a0 [3];
  undefined **local_188;
  long *local_180;
  undefined1 auStack_170 [136];
  undefined8 local_e8;
  
  local_1f0 = (undefined *)param_2[0x16];
  puStack_1e8 = (undefined *)0x1;
  pppuStack_1d8 = (undefined8 ***)param_2[1];
  local_1e0 = (undefined8 ***)*param_2;
  uStack_1c8 = param_2[3];
  uStack_1d0 = param_2[2];
  uStack_1b8 = param_2[5];
  local_1c0 = param_2[4];
  uStack_1a8 = param_2[7];
  uStack_1b0 = param_2[6];
  local_180 = (long *)0x0;
  FUN_0024ecd8(auStack_170,&local_1f0);
  if (local_180 != (long *)0x0) {
    if (local_180 == alStack_1a0) {
      pcVar6 = *(code **)(*local_180 + 0x10);
    }
    else {
      pcVar6 = *(code **)(*local_180 + 0x18);
    }
    (*pcVar6)();
  }
  FUN_005f27b0(&local_200,param_2 + 8,param_2[0x16],local_e8);
  puVar1 = PTR_DAT_047cbb30 + 0x10;
  local_1e0 = &local_1e0;
  local_188 = (undefined **)0x0;
  local_180 = (long *)0x0;
  puStack_1e8 = PTR_DAT_047cbb38 + 0x10;
  local_1f0 = puVar1;
  pppuStack_1d8 = local_1e0;
  (**(code **)(*local_200 + 0x10))(local_200,&uStack_1c8);
  local_188 = &puStack_1e8;
  thunk_FUN_006c4e40(&local_1f0);
  local_1f0 = puVar1;
  FUN_006c4274(&puStack_1e8);
  plVar5 = local_1f8;
  plVar2 = local_200;
  local_200 = (long *)0x0;
  local_1f8 = (long *)0x0;
  (**(code **)(*plVar2 + 0x30))(param_1);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1f8 != (long *)0x0) {
    plVar2 = local_1f8 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_1f8 + 0x10))(local_1f8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_027bf268(auStack_170);
  return;
}


