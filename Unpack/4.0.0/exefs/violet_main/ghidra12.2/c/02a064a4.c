/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a064a4; name: FUN_02a064a4
 */


void FUN_02a064a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  long *local_d8;
  undefined **local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined ***local_b0;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined ***local_80;
  undefined **local_70;
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined ***local_50;
  
  FUN_01f78de8();
  *param_1 = &PTR_LAB_0455d508;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[4] = &PTR_LAB_0455d590;
  param_1[5] = &DAT_0455d5e0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar4 = FUN_01cf7e20();
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = uVar4;
  uVar4 = FUN_01cf7e20();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = uVar4;
  uVar4 = FUN_01cf7e20();
  FUN_01e9fa84(&local_70,uVar4);
  param_1[0x17] = local_70;
  param_1[0x18] = local_68;
  local_70 = (undefined **)0x0;
  local_68 = 0;
  *(undefined1 *)(param_1 + 0x16) = 1;
  FUN_01e9eb34(&local_70);
  FUN_01e9fb38(auStack_f0,param_1 + 0x17);
  local_80 = &local_a0;
  uStack_c8 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x238);
  local_d0 = &PTR_LAB_0455d858;
  local_70 = &PTR_LAB_0455d7a8;
  local_a0 = &PTR_LAB_0455d800;
  local_c0 = param_1;
  local_b0 = &local_d0;
  local_98 = uStack_c8;
  puStack_90 = param_1;
  local_68 = uStack_c8;
  puStack_60 = param_1;
  local_50 = &local_70;
  FUN_006c8f68(&local_e0,param_3,param_2,&local_70,&local_a0,&local_d0,auStack_f0);
  if (local_b0 != (undefined ***)0x0) {
    if (local_b0 == &local_d0) {
      pcVar5 = (code *)(*local_b0)[2];
    }
    else {
      pcVar5 = (code *)(*local_b0)[3];
    }
    (*pcVar5)();
  }
  if (local_80 != (undefined ***)0x0) {
    if (local_80 == &local_a0) {
      pcVar5 = (code *)(*local_80)[2];
    }
    else {
      pcVar5 = (code *)(*local_80)[3];
    }
    (*pcVar5)();
  }
  if (local_50 != (undefined ***)0x0) {
    if (local_50 == &local_70) {
      pcVar5 = (code *)(*local_50)[2];
    }
    else {
      pcVar5 = (code *)(*local_50)[3];
    }
    (*pcVar5)();
  }
  FUN_01e9eb34(auStack_f0);
  plVar1 = local_d8;
  uVar4 = local_e0;
  local_e0 = 0;
  local_d8 = (long *)0x0;
  plVar7 = (long *)param_1[0xb];
  param_1[10] = uVar4;
  param_1[0xb] = plVar1;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_d8 != (long *)0x0) {
    plVar1 = local_d8 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


