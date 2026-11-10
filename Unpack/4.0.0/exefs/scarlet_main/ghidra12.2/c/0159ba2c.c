/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159ba2c; name: FUN_0159ba2c
 */


void FUN_0159ba2c(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  if ((*PTR_DAT_047d4df8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
  }
  lVar2 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar2;
  *(undefined4 *)(lVar2 + 0xb0bc) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined1 *)(lVar2 + 0xb0b8) = 1;
  return;
}


