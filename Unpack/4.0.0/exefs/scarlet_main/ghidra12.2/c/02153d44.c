/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02153d44; name: FUN_02153d44
 */


void FUN_02153d44(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long *plStack_88;
  undefined1 local_80 [16];
  long local_70;
  long *local_68;
  long *local_60;
  long *local_38;
  
  FUN_0111e884(local_a0,*(undefined8 *)(param_1 + 0x4a8));
  plVar4 = plStack_88;
  local_68 = (long *)local_90;
  local_70 = local_a0._8_8_;
  local_80._8_8_ = local_a0._0_8_;
  if (plStack_88 != (long *)0x0) {
    (**(code **)(*plStack_88 + 0x18))(plStack_88);
  }
  local_80._0_8_ = &local_38;
  local_38 = (long *)0x0;
  local_60 = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN_0116c820(param_1,local_80,0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  plVar1 = local_38;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  FUN_0111e884(local_a0,*(undefined8 *)(param_1 + 0x4a8),param_3);
  if (plStack_88 != (long *)0x0) {
    (**(code **)(*plStack_88 + 0x18))(plStack_88);
  }
  local_80._0_8_ = &local_38;
  local_38 = (long *)0x0;
  local_60 = plStack_88;
  local_80._8_8_ = local_a0._0_8_;
  local_70 = local_a0._8_8_;
  local_68 = (long *)local_90;
  if (plStack_88 != (long *)0x0) {
    (**(code **)(*plStack_88 + 0x18))(plStack_88);
  }
  FUN_0116c820(param_1,local_80,0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  plVar4 = local_38;
  if (plStack_88 != (long *)0x0) {
    (**(code **)(*plStack_88 + 0x20))(plStack_88);
    (**(code **)(*plStack_88 + 0x20))(plStack_88);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x458);
  local_38 = plVar4;
  local_80 = (**(code **)(**(long **)(param_1 + 0x480) + 0x70))();
  local_a0 = (**(code **)(*plVar4 + 0x70))(plVar4);
  local_a4 = 2;
  FUN_0215404c(uVar3,param_1 + 0x480,local_80,local_a0,&DAT_03d61e70,&local_a4);
  auVar5 = (**(code **)(*plVar4 + 0x70))(plVar4);
  *(undefined1 (*) [16])(param_1 + 0x490) = auVar5;
  uVar3 = *(undefined8 *)(param_1 + 0x458);
  auVar5 = (**(code **)(*plVar4 + 0x70))(plVar4);
  local_80 = auVar5;
  auVar5 = (**(code **)(*plVar1 + 0x70))(plVar1);
  local_a4 = 2;
  local_a0 = auVar5;
  FUN_0215404c(uVar3,&local_38,local_80,local_a0,&DAT_03d61e70,&local_a4);
  local_80._0_8_ = local_38[0x11];
  local_80._8_8_ = local_38[0x12];
  plVar4 = *(long **)(param_1 + 200);
  local_70 = local_38[0x13];
  local_68 = (long *)local_38[0x14];
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  (**(code **)(*plVar4 + 0xe8))(plVar4,param_1 + 0x460,local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar2 = *(long *)(param_1 + 0x480);
  local_80._0_8_ = *(undefined8 *)(lVar2 + 0x88);
  local_80._8_8_ = *(undefined8 *)(lVar2 + 0x90);
  plVar4 = *(long **)(param_1 + 200);
  local_70 = *(undefined8 *)(lVar2 + 0x98);
  local_68 = *(long **)(lVar2 + 0xa0);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  (**(code **)(*plVar4 + 0xe8))(plVar4,param_1 + 0x460,local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


