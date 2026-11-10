/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a3a58; name: FUN_016a3a58
 */


void FUN_016a3a58(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *local_50 [4];
  long *local_30;
  
  if ((*PTR_DAT_047d8ac0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8ac0);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8ac0);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d8ac8;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar3;
  FUN_0105016c(local_50,param_1);
  if (((*PTR_DAT_047d89f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89f8);
  }
  lVar2 = *(long *)PTR_DAT_047d8a00;
  *(long *)PTR_DAT_047d8a08 = lVar2;
  FUN_011fbdf0(uVar3,local_50,*(undefined1 *)(lVar2 + 0x2c));
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50[0] != (long *)0x0) {
    (**(code **)(*local_50[0] + 0x20))();
  }
  return;
}


