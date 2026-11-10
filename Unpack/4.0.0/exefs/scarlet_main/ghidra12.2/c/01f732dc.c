/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f732dc; name: FUN_01f732dc
 */


void FUN_01f732dc(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined1 auStack_a8 [8];
  long *local_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined4 local_88;
  long local_80;
  long local_78;
  long local_70;
  long *plStack_68;
  long local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  long *local_48;
  undefined8 local_28;
  
  if ((*(long **)(param_2 + 0x70) == (long *)0x0) ||
     (uVar4 = (**(code **)(**(long **)(param_2 + 0x70) + 0x70))(), (uVar4 & 1) != 0)) {
    local_58 = (undefined4 *)0x0;
    local_50 = (undefined4 *)0x0;
    local_60 = 0;
    local_48 = (long *)FUN_01cf7e20();
    if (param_4[1] != 0) {
      puVar9 = (undefined4 *)*param_4;
      lVar7 = param_4[1] * 4;
      puVar6 = (undefined4 *)0x0;
      puVar5 = (undefined4 *)0x0;
      while( true ) {
        lVar7 = lVar7 + -4;
        local_90 = (undefined **)CONCAT44(local_90._4_4_,*puVar9);
        if (puVar5 < puVar6) {
          *puVar5 = *puVar9;
          puVar5 = puVar5 + 1;
          puVar6 = local_50;
        }
        else {
          FUN_01f739c0(&local_60,&local_90);
          puVar5 = local_58;
          puVar6 = local_50;
        }
        local_58 = puVar5;
        local_50 = puVar6;
        if (lVar7 == 0) break;
        puVar9 = puVar9 + 1;
      }
    }
    local_90 = &PTR_LAB_0455cc58;
    local_88 = param_3;
    FUN_01f734b8(&local_80,&local_60);
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    FUN_01f73520(auStack_a8,param_2 + 0x48,&local_90);
    FUN_01f738fc(&local_98,uVar8,auStack_a8);
    local_28 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0;
    FUN_01f710f0(&local_28);
    uVar8 = local_98;
    local_98 = 0;
    *(undefined8 *)(param_2 + 0x70) = uVar8;
    if (local_a0 != (long *)0x0) {
      plVar1 = local_a0 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(param_2 + 0x70) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_01f717cc(auStack_a8);
      FUN_01f73ab4(param_1,auStack_a8);
      FUN_01d0fcc8(auStack_a8);
    }
    local_90 = &PTR_LAB_0455cc58;
    if (local_80 != 0) {
      local_78 = local_80;
      (**(code **)(*plStack_68 + 0x18))(plStack_68,local_80,local_70 - local_80,4);
    }
    if (local_60 != 0) {
      local_58 = (undefined4 *)local_60;
      (**(code **)(*local_48 + 0x18))(local_48,local_60,(long)local_50 - local_60,4);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


