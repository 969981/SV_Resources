/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02154208; name: FUN_02154208
 */


undefined8 FUN_02154208(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 local_90 [16];
  undefined8 local_80;
  long *plStack_78;
  long **local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  uVar2 = FUN_021545c4(*(undefined8 *)(param_1 + 0x458));
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x5b3) = 1;
    lVar3 = *(long *)(param_1 + 0x4a8);
    *(undefined4 *)(param_1 + 0x5b4) = *(undefined4 *)(param_1 + 0x44c);
    *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(lVar3 + 8);
    if (*(code **)(param_1 + 0x240) != (code *)0x0) {
      local_70 = (long **)CONCAT44(local_70._4_4_,*(undefined4 *)(param_1 + 0x44c));
      local_90._0_4_ = *(undefined4 *)(lVar3 + 8);
      (**(code **)(param_1 + 0x240))(param_1 + 0x260,&local_70,local_90);
      lVar3 = *(long *)(param_1 + 0x4a8);
    }
    FUN_0111e884(local_90,lVar3,param_2);
    plVar1 = plStack_78;
    local_58 = (long *)local_80;
    local_60 = local_90._8_8_;
    lStack_68 = local_90._0_8_;
    if (plStack_78 != (long *)0x0) {
      (**(code **)(*plStack_78 + 0x18))(plStack_78);
    }
    local_70 = &local_48;
    local_48 = (long *)0x0;
    local_50 = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    FUN_0116c820(param_1,&local_70,0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    plVar5 = local_48;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    FUN_0111e884(local_90,*(undefined8 *)(param_1 + 0x4a8),param_3);
    uVar4 = local_90._0_8_;
    if (plStack_78 != (long *)0x0) {
      (**(code **)(*plStack_78 + 0x18))(plStack_78);
    }
    local_70 = &local_48;
    local_48 = (long *)0x0;
    local_50 = plStack_78;
    lStack_68 = uVar4;
    local_60 = local_90._8_8_;
    local_58 = (long *)local_80;
    if (plStack_78 != (long *)0x0) {
      (**(code **)(*plStack_78 + 0x18))(plStack_78);
    }
    FUN_0116c820(param_1,&local_70,0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    plVar1 = local_48;
    if (plStack_78 != (long *)0x0) {
      (**(code **)(*plStack_78 + 0x20))(plStack_78);
      (**(code **)(*plStack_78 + 0x20))(plStack_78);
    }
    lVar3 = *(long *)(param_1 + 0x480);
    local_70 = *(long ***)(lVar3 + 0x88);
    lStack_68 = *(undefined8 *)(lVar3 + 0x90);
    plVar6 = *(long **)(param_1 + 200);
    local_60 = *(undefined8 *)(lVar3 + 0x98);
    local_58 = *(long **)(lVar3 + 0xa0);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
    (**(code **)(*plVar6 + 0x70))(plVar6,&local_70,0);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_70 = (long **)plVar5[0x11];
    lStack_68 = plVar5[0x12];
    plVar6 = *(long **)(param_1 + 200);
    local_60 = plVar5[0x13];
    local_58 = (long *)plVar5[0x14];
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
    local_90 = (**(code **)(*plVar5 + 0x70))(plVar5);
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_70,local_90);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_70 = (long **)plVar5[0x11];
    lStack_68 = plVar5[0x12];
    plVar6 = *(long **)(param_1 + 200);
    local_60 = plVar5[0x13];
    local_58 = (long *)plVar5[0x14];
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
    (**(code **)(*plVar6 + 0x70))(plVar6,&local_70,1);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_70 = (long **)plVar1[0x11];
    lStack_68 = plVar1[0x12];
    plVar5 = *(long **)(param_1 + 200);
    local_60 = plVar1[0x13];
    local_58 = (long *)plVar1[0x14];
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_70,param_1 + 0x490);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_70 = (long **)plVar1[0x11];
    lStack_68 = plVar1[0x12];
    plVar5 = *(long **)(param_1 + 200);
    local_60 = plVar1[0x13];
    local_58 = (long *)plVar1[0x14];
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
    (**(code **)(*plVar5 + 0x70))(plVar5,&local_70,1);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    FUN_021545d4(param_1);
    uVar4 = 1;
  }
  return uVar4;
}


