/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c64644; name: FUN_01c64644
 */


ulong FUN_01c64644(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((DAT_04839cb0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839cb0);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b2080c,&DAT_04839ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839cb0);
    }
  }
  DAT_04839c98 = DAT_04839ca0;
  if (DAT_04839ca0 == 0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01ec8b8c(DAT_04839ca0,param_1);
    uVar3 = uVar2 & 0xff00;
    uVar2 = uVar2 & 0xff;
  }
  return uVar2 | uVar3;
}


