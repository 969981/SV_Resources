/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156a2fc; name: FUN_0156a2fc
 */


void FUN_0156a2fc(undefined4 param_1)

{
  int iVar1;
  
  if ((DAT_0483b1e0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0483b1e0);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02a42184,&DAT_0483b1d0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483b1e0);
    }
  }
  DAT_0483b1e8 = DAT_0483b1d0;
  *(undefined4 *)(DAT_0483b1d0 + 0x6c) = param_1;
  return;
}


