/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025ead14; name: FUN_025ead14
 */


void FUN_025ead14(undefined8 param_1,byte param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*PTR_DAT_047d8658 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8658);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d8db0,PTR_DAT_047d8660,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8658);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8660;
  *(undefined8 *)PTR_DAT_047d8668 = uVar2;
  lVar3 = FUN_025ea744(uVar2,param_1);
  *(byte *)(lVar3 + 100) = param_2 & 1;
  return;
}


