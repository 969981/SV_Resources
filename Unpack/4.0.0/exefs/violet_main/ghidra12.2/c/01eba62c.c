/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eba62c; name: FUN_01eba62c
 */


void FUN_01eba62c(void)

{
  int iVar1;
  
  if (((DAT_04839b28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839b28), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1e40c,&DAT_04839b18,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b28);
  }
  FUN_016fb1fc(&DAT_04839b18,0);
  return;
}


