/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9d7a8; name: FUN_01e9d7a8
 */


bool FUN_01e9d7a8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  undefined **local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined4 local_d0;
  undefined1 auStack_c8 [8];
  long *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    puVar1 = PTR_DAT_047cff40 + 0x10;
    local_a8 = 0;
    local_b0 = 0xffffffff;
    local_b8 = puVar1;
    uStack_88 = FUN_01cf7e20();
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_68 = FUN_01cf7e20();
    local_70 = 0;
    local_80 = 0;
    uStack_78 = 0;
    FUN_01e9ed4c(&local_b8,param_2,param_3);
    FUN_01e9edc8(&local_b8,param_4,param_5);
    local_130 = &PTR_LAB_04553a08;
    local_120 = local_b0;
    uStack_118 = local_a8;
    puStack_128 = puVar1;
    FUN_01cfa5b0(auStack_110,&local_a0);
    FUN_01cfa5b0(auStack_f0,&local_80);
    local_d0 = 0;
    FUN_01e9ee44(auStack_c8,param_1 + 0x50,&local_130);
    FUN_01e9f230(param_1 + 0x78,auStack_c8);
    if (local_c0 != (long *)0x0) {
      plVar2 = local_c0 + 1;
      do {
        lVar4 = *plVar2;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar4 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_130 = &PTR_LAB_04553a08;
    FUN_01e9e0b4(&puStack_128);
    bVar5 = *(long *)(param_1 + 0x80) == 0;
    if (bVar5) {
      FUN_01e9eb8c(param_1 + 0x78);
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 1;
      *(undefined8 *)(param_1 + 0x158) = 0;
    }
    bVar5 = !bVar5;
    FUN_01e9e0b4(&local_b8);
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


