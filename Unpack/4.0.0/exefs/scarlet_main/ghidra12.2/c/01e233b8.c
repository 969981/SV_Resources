/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e233b8; name: FUN_01e233b8
 */


void FUN_01e233b8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_047d8938 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8938);
    if (iVar1 != 0) {
      FUN_00100190(param_1,PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8938);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8940;
  *(undefined8 *)PTR_DAT_047d8948 = uVar2;
  FUN_011b00ec(param_1,uVar2,*param_2);
  return;
}


