/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019515b8; name: FUN_019515b8
 */


void FUN_019515b8(void)

{
  long lVar1;
  int iVar2;
  
  if (((DAT_04837608 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04837608), iVar2 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar1 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  *(undefined1 *)(DAT_048375f8 + 0x3f5) = 0;
  *(undefined4 *)(lVar1 + 0x3f8) = 0;
  return;
}


