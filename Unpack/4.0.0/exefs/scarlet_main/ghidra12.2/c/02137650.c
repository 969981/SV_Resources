/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02137650; name: FUN_02137650
 */


void FUN_02137650(ulong param_1)

{
  int iVar1;
  
  if ((DAT_04840f88 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04840f88);
    if (iVar1 != 0) {
      nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)&DAT_04840ee0);
      nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)&DAT_04840f28);
      DAT_04840f80 = 0;
      DAT_04840f78 = 0;
      DAT_04840f70 = 0;
      FUN_00100190(&LAB_02b28e1c,&DAT_04840ee0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840f88);
    }
  }
  nn::mem::StandardAllocator::GetSizeOf
            (&DAT_04840ee0 + (ulong)(param_1 < DAT_04840f78 || DAT_04840f80 <= param_1) * 0x48);
  return;
}


