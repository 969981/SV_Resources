/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b92280; name: FUN_01b92280
 */


int FUN_01b92280(void)

{
  int iVar1;
  
  if (((DAT_0483adf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483adf8), iVar1 != 0)) {
    FUN_00100190(&LAB_02a2ca1c,&DAT_0483ade8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483adf8);
  }
  DAT_0483ae00 = DAT_0483ade8;
  return (int)((ulong)(*(long *)(DAT_0483ade8 + 0x48) - *(long *)(DAT_0483ade8 + 0x40)) >> 3) *
         -0x55555555;
}


