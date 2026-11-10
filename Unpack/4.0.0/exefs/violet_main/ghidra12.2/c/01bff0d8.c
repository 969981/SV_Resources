/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bff0d8; name: FUN_01bff0d8
 */


void FUN_01bff0d8(void)

{
  int iVar1;
  
  if (((DAT_0483ac50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483ac50), iVar1 != 0)) {
    FUN_00100190(&LAB_02a16748,&DAT_0483ac40,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483ac50);
  }
  DAT_0483ac58 = DAT_0483ac40;
  FUN_01f7ed50();
  return;
}


