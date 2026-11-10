/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005483b0; name: FUN_005483b0
 */


uint FUN_005483b0(long param_1,undefined8 param_2,undefined5 *param_3)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long *local_110;
  long *local_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 ***local_f0;
  undefined8 ***pppuStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_98;
  undefined8 uStack_90;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_001fed6c(&local_100,param_1 + 0x58);
  local_80 = (undefined *)CONCAT35(local_80._5_3_,*param_3);
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
            (*(long **)(param_1 + 0x18),param_2,&local_80,local_c0);
  local_40 = local_c0;
  uStack_48 = uStack_c8;
  uStack_50 = local_d0;
  uStack_58 = uStack_d8;
  local_60 = local_e0;
  puStack_78 = puStack_f8;
  local_80 = local_100;
  uStack_68 = pppuStack_e8;
  ppuStack_70 = local_f0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_100 = (undefined *)0x0;
  puStack_f8 = (undefined *)0x0;
  local_f0 = (undefined8 ***)0x0;
  pppuStack_e8 = (undefined8 ***)0x0;
  local_c0 = 0;
  uStack_38 = uStack_b8;
  FUN_0054f610(&local_110,&local_80,*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x240),0x10000,
               *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x4b8));
  FUN_001ff1dc(&local_80);
  FUN_001ff1dc(&local_100);
  puVar1 = PTR_DAT_047cbb30 + 0x10;
  local_f0 = &local_f0;
  local_98 = (undefined **)0x0;
  uStack_90 = 0;
  puStack_f8 = PTR_DAT_047cbb38 + 0x10;
  local_100 = puVar1;
  pppuStack_e8 = local_f0;
  (**(code **)(*local_110 + 0x10))(local_110,&uStack_d8);
  local_98 = &puStack_f8;
  thunk_FUN_006c4e40(&local_100);
  local_100 = puVar1;
  FUN_006c4274(&puStack_f8);
  plVar5 = local_108;
  plVar2 = local_110;
  local_110 = (long *)0x0;
  local_108 = (long *)0x0;
  uVar6 = (**(code **)(*plVar2 + 0x30))();
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
  if (local_108 != (long *)0x0) {
    plVar2 = local_108 + 1;
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
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__shared_weak_count::__release_weak();
    }
  }
  return uVar6 & 1;
}


