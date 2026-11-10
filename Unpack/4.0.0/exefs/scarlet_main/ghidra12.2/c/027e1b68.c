/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e1b68; name: FUN_027e1b68
 */


void FUN_027e1b68(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_4;
  
  if ((*PTR_DAT_047da868 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047da868);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047daa50,PTR_DAT_047da870,&PTR_LOOP_04483000,param_3);
      __cxa_guard_release(PTR_DAT_047da868);
    }
  }
  lVar3 = *(long *)PTR_DAT_047da870;
  *(long *)PTR_DAT_047da878 = lVar3;
  local_4 = 1;
  uVar2 = FUN_027e6998(*(undefined8 *)(lVar3 + 0x28),param_2,&local_4,param_3);
  FUN_027e6b34(param_1,uVar2);
  FUN_027e6bc0(*param_1);
  return;
}


