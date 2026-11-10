/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e827c; name: FUN_021e827c
 */


void FUN_021e827c(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  lVar4 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar4;
  FUN_021e83bc(lVar4 + 0x1d0,param_1 + 0x80);
  FUN_017b301c(&local_78);
  *(undefined4 *)(param_1 + 0x98) = local_60;
  *(ulong *)(param_1 + 0x80) = CONCAT44(uStack_74,local_78);
  *(undefined8 *)(param_1 + 0x88) = uStack_70;
  *(undefined8 *)(param_1 + 0x90) = local_68;
  *(undefined8 *)(param_1 + 0xa0) = local_58;
  *(undefined8 *)(param_1 + 0xa8) = local_50;
  plVar3 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = local_48;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  uVar1 = local_40;
  local_40 = 0;
  *(undefined8 *)(param_1 + 200) = uStack_30;
  *(undefined8 *)(param_1 + 0xd0) = local_28;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(undefined8 *)(param_1 + 0xc0) = local_38;
  FUN_021e844c(param_1 + 0xd8);
  if (*(long *)(param_1 + 0x70) != 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    local_78 = 0;
    FUN_021e84fc(DAT_04841fa0,&local_78);
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    local_78 = 1;
    FUN_021e84fc(DAT_04841fa0,&local_78);
  }
  return;
}


