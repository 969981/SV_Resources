/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c42c8; name: FUN_015c42c8
 */


void FUN_015c42c8(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048398e8), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  DAT_048398d0 = DAT_048398d8;
  if ((DAT_048398d8 != 0) || (lVar2 = FUN_0126a9c0(), lVar2 == 0)) {
    return;
  }
  if ((DAT_048398e8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048398e8);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048398e8);
    }
  }
  uVar3 = FUN_015c4498(lVar2);
  FUN_015c43e8(&DAT_048398d8,uVar3);
  lVar2 = 0;
  if (DAT_048398d8 != 0) {
    lVar2 = DAT_048398d8 + 0x20;
  }
  FUN_0100ba9c(lVar2);
  return;
}


