/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0176a9a8; name: FUN_0176a9a8
 */


void FUN_0176a9a8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_18;
  
  if ((*PTR_DAT_047dd000 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047dd000);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd000);
    }
  }
  lVar2 = *(long *)PTR_DAT_047dd008;
  *(long *)PTR_DAT_047dd010 = lVar2;
  local_18 = *param_2;
  FUN_0176cbac(lVar2 + 0x28,param_1,&local_18);
  return;
}


