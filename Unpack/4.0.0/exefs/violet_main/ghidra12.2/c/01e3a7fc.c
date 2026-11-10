/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3a7fc; name: FUN_01e3a7fc
 */


void FUN_01e3a7fc(void)

{
  int iVar1;
  
  if (((DAT_048383f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048383f8), iVar1 != 0)) {
    FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048383f8);
  }
  FUN_01829154(&DAT_048383e8,0);
  return;
}


