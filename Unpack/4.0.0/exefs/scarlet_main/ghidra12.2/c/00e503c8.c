/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e503c8; name: FUN_00e503c8
 */


void FUN_00e503c8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_047dd4c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd4c0);
  }
  *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
  uVar2 = FUN_014b65d8();
  FUN_029ecd10(param_1,uVar2,param_2);
  return;
}


