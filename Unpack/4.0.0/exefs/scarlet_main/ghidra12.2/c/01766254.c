/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01766254; name: FUN_01766254
 */


void FUN_01766254(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  
  if ((DAT_04837608 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04837608);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04837608);
    }
  }
  lVar1 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  *(undefined4 *)(DAT_048375f8 + 0x3d8) = param_1;
  *(undefined4 *)(lVar1 + 0x3dc) = param_2;
  return;
}


