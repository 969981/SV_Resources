/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df5f98; name: FUN_01df5f98
 */


void FUN_01df5f98(void)

{
  int iVar1;
  
  if (((DAT_048371d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048371d8), iVar1 != 0)) {
    FUN_00100190(&LAB_00a8a92c,&DAT_048371c8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048371d8);
  }
  FUN_01860220(&DAT_048371c8,0);
  return;
}


