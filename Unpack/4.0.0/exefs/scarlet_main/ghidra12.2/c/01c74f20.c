/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c74f20; name: FUN_01c74f20
 */


undefined8 FUN_01c74f20(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((DAT_04839928 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839928), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1ce58,&DAT_04839918,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839928);
  }
  DAT_04839910 = DAT_04839918;
  if (((DAT_04839918 == 0) || (*(long *)(DAT_04839918 + 0xd8) == 0)) ||
     (lVar3 = *(long *)(*(long *)(DAT_04839918 + 0xd8) + 0x10), lVar3 == 0)) {
    return 0;
  }
  uVar2 = FUN_01e6b040(lVar3 + -0x28);
  return uVar2;
}


