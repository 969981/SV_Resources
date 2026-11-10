/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021547ec; name: FUN_021547ec
 */


void FUN_021547ec(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined4 extraout_s0;
  float fVar7;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  float extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  int iVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  long **local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  long *local_50;
  long *local_28;
  
  *(undefined1 *)(param_1 + 0x5b2) = 1;
  iVar8 = *(int *)(param_1 + 0x44c);
  *(int *)(param_1 + 0x5b4) = iVar8;
  if (*(code **)(param_1 + 0x2c0) != (code *)0x0) {
    lVar2 = *(long *)(param_1 + 0x4a8);
    if (*(int *)(lVar2 + 0x1c) == 0) {
      iVar3 = *(int *)(lVar2 + 0xc);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = iVar8 / iVar3;
      }
      iVar3 = iVar8 - iVar1 * iVar3;
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x10);
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = iVar8 / iVar1;
      }
      iVar1 = iVar8 - iVar3 * iVar1;
    }
    local_70 = (long **)CONCAT44(iVar1,iVar3);
    (**(code **)(param_1 + 0x2c0))(param_1 + 0x2e0,&local_70);
  }
  lVar2 = *(long *)(param_1 + 0x480);
  local_70 = *(long ***)(lVar2 + 0x88);
  lStack_68 = *(undefined8 *)(lVar2 + 0x90);
  plVar5 = *(long **)(param_1 + 200);
  local_60 = *(undefined8 *)(lVar2 + 0x98);
  local_58 = *(long **)(lVar2 + 0xa0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  (**(code **)(*plVar5 + 0x70))(plVar5,&local_70,1);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_0111e884(&local_90,*(undefined8 *)(param_1 + 0x4a8),*(undefined4 *)(param_1 + 0x44c));
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x18))(plStack_78);
  }
  local_70 = &local_28;
  local_28 = (long *)0x0;
  local_50 = plStack_78;
  lStack_68 = local_90;
  local_60 = uStack_88;
  local_58 = (long *)local_80;
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x18))(plStack_78);
  }
  FUN_0116c820(param_1,&local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar5 = local_28;
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x20))(plStack_78);
    (**(code **)(*plStack_78 + 0x20))(plStack_78);
  }
  local_70 = (long **)plVar5[0x11];
  lStack_68 = plVar5[0x12];
  plVar6 = *(long **)(param_1 + 200);
  local_60 = plVar5[0x13];
  local_58 = (long *)plVar5[0x14];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  (**(code **)(*plVar6 + 0x70))(plVar6,&local_70,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar2 = *(long *)(param_1 + 0x480);
  lStack_68 = *(undefined8 *)(lVar2 + 0x90);
  local_70 = *(long ***)(lVar2 + 0x88);
  plVar6 = *(long **)(param_1 + 200);
  local_60 = *(undefined8 *)(lVar2 + 0x98);
  local_58 = *(long **)(lVar2 + 0xa0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  (**(code **)(*plVar5 + 0x70))(plVar5);
  local_90 = CONCAT44(extraout_var,extraout_s0);
  uStack_88 = extraout_var_02;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_70,&local_90);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  fVar7 = (float)(**(code **)(*plVar5 + 0x70))(plVar5);
  iVar8 = *(int *)(param_1 + 0x4a0);
  (**(code **)(*plVar5 + 0x70))(plVar5);
  local_70 = (long **)CONCAT44(extraout_var_00 + (float)*(int *)(param_1 + 0x4a4),
                               fVar7 + (float)iVar8);
  lStack_68 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x458);
  (**(code **)(*plVar5 + 0x70))(plVar5);
  local_28 = (long *)CONCAT44(local_28._4_4_,2);
  local_90 = CONCAT44(extraout_var_01,extraout_s0_00);
  uStack_88 = extraout_var_03;
  FUN_02154adc(uVar4,param_1 + 0x480,&local_90,&local_70,&DAT_03d61e74,&local_28);
  return;
}


