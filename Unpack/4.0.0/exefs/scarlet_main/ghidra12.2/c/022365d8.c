/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022365d8; name: FUN_022365d8
 */


void FUN_022365d8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_047d8a70 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a70);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a70);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8a78;
  *(undefined8 *)PTR_DAT_047d8a80 = uVar2;
  FUN_015eb0b0(uVar2,param_1 + 8,0,1);
  return;
}


