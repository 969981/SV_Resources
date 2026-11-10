/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02154b8c; name: FUN_02154b8c
 */


void FUN_02154b8c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 local_90 [16];
  undefined8 local_80;
  long *plStack_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_28;
  
  FUN_0111e884(local_90,*(undefined8 *)(param_1 + 0x4a8),*(undefined4 *)(param_1 + 0x44c));
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x18))(plStack_78);
  }
  local_70._0_8_ = &local_28;
  local_28 = (long *)0x0;
  local_50 = plStack_78;
  local_70._8_8_ = local_90._0_8_;
  local_60 = local_90._8_8_;
  uStack_58 = local_80;
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x18))(plStack_78);
  }
  FUN_0116c820(param_1,local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar1 = local_28;
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x20))(plStack_78);
    (**(code **)(*plStack_78 + 0x20))(plStack_78);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x458);
  local_70 = (**(code **)(**(long **)(param_1 + 0x480) + 0x70))();
  local_90 = (**(code **)(*plVar1 + 0x70))(plVar1);
  local_28 = (long *)CONCAT44(local_28._4_4_,2);
  FUN_0215404c(uVar2,param_1 + 0x480,local_70,local_90,&DAT_03d61e70,&local_28);
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  return;
}


