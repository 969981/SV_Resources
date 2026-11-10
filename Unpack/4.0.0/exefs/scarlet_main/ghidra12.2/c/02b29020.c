/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b29020; name: FUN_02b29020
 */


long FUN_02b29020(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (((DAT_04840f88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840f88), iVar1 != 0)) {
    nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)&DAT_04840ee0);
    nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)&DAT_04840f28);
    DAT_04840f70 = 0;
    DAT_04840f78 = 0;
    DAT_04840f80 = 0;
    FUN_00100190(&LAB_02b28e1c,&DAT_04840ee0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840f88);
  }
  lVar2 = nn::mem::StandardAllocator::GetTotalFreeSize();
  lVar3 = nn::mem::StandardAllocator::GetTotalFreeSize();
  return lVar3 + lVar2;
}


