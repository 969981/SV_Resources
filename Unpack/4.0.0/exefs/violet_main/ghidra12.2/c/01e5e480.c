/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5e480; name: FUN_01e5e480
 */


void FUN_01e5e480(void)

{
  int iVar1;
  
  if (((DAT_04838d00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04838d00), iVar1 != 0)) {
    FUN_00100190(&LAB_00ada26c,&DAT_04838cf0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04838d00);
  }
  FUN_0168be64(&DAT_04838cf0,0);
  return;
}


