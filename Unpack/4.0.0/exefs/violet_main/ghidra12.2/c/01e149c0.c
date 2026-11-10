/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e149c0; name: FUN_01e149c0
 */


void FUN_01e149c0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [64];
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  FUN_00ca3790(auStack_c0);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  puStack_78 = PTR_DAT_047e31b0 + 0x10;
  local_28 = 1;
  local_50 = 0;
  uStack_48 = 0;
  local_80 = 0;
  uVar2 = *(undefined8 *)PTR_DAT_047e3198;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  if ((*PTR_DAT_047d3e28 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
  }
  FUN_00db8a60(param_1,auStack_c0,uVar2,uVar2,PTR_DAT_047d3e30);
  FUN_00ca25d0(&puStack_78);
  FUN_00ca246c(auStack_c0);
  return;
}


