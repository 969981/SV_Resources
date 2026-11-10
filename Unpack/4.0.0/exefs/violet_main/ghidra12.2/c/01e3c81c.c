/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3c81c; name: FUN_01e3c81c
 */


void FUN_01e3c81c(void)

{
  int iVar1;
  
  if (((DAT_04838438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04838438), iVar1 != 0)) {
    FUN_00100190(&LAB_00aa6fdc,&DAT_04838428,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04838438);
  }
  FUN_018cc010(&DAT_04838428,0);
  return;
}


