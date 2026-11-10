/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f9d20c; name: FUN_01f9d20c
 */


void FUN_01f9d20c(void)

{
  int iVar1;
  
  if (((DAT_0483ae18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483ae18), iVar1 != 0)) {
    FUN_00100190(&LAB_02a2cf90,&DAT_0483ae08,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483ae18);
  }
  FUN_017ec83c(&DAT_0483ae08,0);
  return;
}


