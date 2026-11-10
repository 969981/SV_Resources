/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f019ec; name: FUN_00f019ec
 */


void FUN_00f019ec(undefined1 *param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((DAT_04839b78 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839b78);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839b78);
    }
  }
  DAT_04839b60 = DAT_04839b68;
  if (DAT_04839b68 == 0) {
    *param_1 = 0;
    return;
  }
  FUN_00f01a84(DAT_04839b68,param_2);
  return;
}


