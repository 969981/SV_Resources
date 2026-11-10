/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0cee0; name: FUN_00b0cee0
 */


void FUN_00b0cee0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_04839420 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839420), iVar1 != 0)) {
    FUN_00100190(&LAB_00b12850,&DAT_04839410,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839420);
  }
  lVar2 = DAT_04839410;
  DAT_04839408 = DAT_04839410;
  if (DAT_04839410 != 0) {
    *(undefined8 *)(DAT_04839410 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    lVar2 = FUN_016c7db0();
    if (lVar2 != 0) {
      FUN_01e956a4(param_1,lVar2,0xc,0,0);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


