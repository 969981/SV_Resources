/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0179e40c; name: FUN_0179e40c
 */


void FUN_0179e40c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar2;
  FUN_0179e914(uVar2,*param_1);
  *param_1 = 0;
  return;
}


