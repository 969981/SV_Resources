/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01beec80; name: FUN_01beec80
 */


void FUN_01beec80(int param_1)

{
  int iVar1;
  
  if ((DAT_0483af40 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0483af40);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02a30078,&DAT_0483af30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483af40);
    }
  }
  DAT_0483af48 = DAT_0483af30;
  if (param_1 == 0) {
    param_1 = 1;
  }
  *(int *)(DAT_0483af30 + 0xbc0) = param_1;
  return;
}


