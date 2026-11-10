/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0177a6e0; name: FUN_0177a6e0
 */


void FUN_0177a6e0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_048404e8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048404e8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02acc060,&DAT_048404d8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048404e8);
    }
  }
  uVar3 = FUN_0177a848(param_1);
  FUN_0177a780(&DAT_048404d8,uVar3);
  lVar1 = 0;
  if (DAT_048404d8 != 0) {
    lVar1 = DAT_048404d8 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return;
}


