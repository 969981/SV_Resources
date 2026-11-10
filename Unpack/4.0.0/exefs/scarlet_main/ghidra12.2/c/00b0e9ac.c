/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0e9ac; name: FUN_00b0e9ac
 */


ulong FUN_00b0e9ac(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (((DAT_04839420 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839420), iVar1 != 0)) {
    FUN_00100190(&LAB_00b12850,&DAT_04839410,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839420);
  }
  DAT_04839408 = DAT_04839410;
  uVar2 = 0;
  if (DAT_04839410 != 0) {
    if (*(long *)(DAT_04839410 + 0x48) == 0) {
      uVar2 = 0;
      uVar4 = 0;
      goto LAB_00b0ea04;
    }
    if (*(short *)(*(long *)(DAT_04839410 + 0x48) + 0x1a) == 0) {
      uVar2 = 0;
      uVar4 = 0;
      goto LAB_00b0ea04;
    }
    uVar2 = 0;
    if ((*(long *)(DAT_04839410 + 0x48) != 0) &&
       (lVar3 = *(long *)(*(long *)(DAT_04839410 + 0x48) + 0x10), uVar2 = 0, lVar3 != 0)) {
      uVar2 = FUN_00ea2b08(lVar3 + -0x28);
      uVar2 = uVar2 & 1;
    }
  }
  uVar4 = 0x100;
LAB_00b0ea04:
  return uVar4 | uVar2;
}


