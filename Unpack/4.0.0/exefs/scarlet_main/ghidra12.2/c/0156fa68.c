/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156fa68; name: FUN_0156fa68
 */


void FUN_0156fa68(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  long *plStack_50;
  
  FUN_0156ff94(&local_68);
  puVar1 = PTR_DAT_047d8b30;
  if (((*PTR_DAT_047d8b30 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8b30), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047e2420,PTR_DAT_047d8b38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b30);
  }
  puVar3 = PTR_DAT_047d8b40;
  puVar2 = PTR_DAT_047d8b38;
  lVar6 = *(long *)PTR_DAT_047d8b38;
  *(long *)PTR_DAT_047d8b40 = lVar6;
  FUN_0156fc04(&local_70,*(undefined8 *)(lVar6 + 8),local_68,local_60 - local_68);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8b30), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047e2420,PTR_DAT_047d8b38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b30);
  }
  local_98 = local_70;
  lVar6 = *(long *)puVar2;
  *(long *)puVar3 = lVar6;
  local_70 = 0;
  FUN_0156fe80(&local_90,*(undefined8 *)(lVar6 + 8),&local_98);
  *param_1 = local_90;
  param_1[1] = uStack_88;
  param_1[2] = local_80;
  param_1[3] = uStack_78;
  FUN_0156fcc4(&local_70);
  if (local_68 != 0) {
    local_60 = local_68;
    uVar5 = (**(code **)(*plStack_50 + 0xf8))(plStack_50);
    if (((uVar5 & 1) != 0) && (lVar6 = FUN_00c4e600(), 0 < *(int *)(lVar6 + 0x12c8))) {
      FUN_00c48fe8(plStack_50,local_68,local_58 - local_68,1);
      return;
    }
    (**(code **)(*plStack_50 + 0x18))(plStack_50,local_68,local_58 - local_68,1);
  }
  return;
}


