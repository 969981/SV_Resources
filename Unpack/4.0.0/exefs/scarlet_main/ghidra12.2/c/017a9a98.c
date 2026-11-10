/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a9a98; name: FUN_017a9a98
 */


void FUN_017a9a98(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_047d3be0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d3be0);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3be0);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d3be8;
  *(undefined8 *)PTR_DAT_047dcd80 = uVar2;
  FUN_017a9b2c(uVar2,param_1,param_1 + 0x110,1);
  return;
}


