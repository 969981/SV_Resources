/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d96708; name: FUN_00d96708
 */


void FUN_00d96708(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048398e8), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  lVar2 = DAT_048398d8;
  DAT_048398d0 = DAT_048398d8;
  if (DAT_048398d8 != 0) {
    FUN_00d967a8(DAT_048398d8);
    if ((*(long *)(lVar2 + 0x38) != 0) &&
       (lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10), lVar2 != 0)) {
      FUN_00ea2b08(lVar2 + -0x28);
      return;
    }
  }
  return;
}


