/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020ee1e0; name: FUN_020ee1e0
 */


void FUN_020ee1e0(void)

{
  int iVar1;
  
  if (((DAT_04840858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840858), iVar1 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  FUN_0163e0a8(&DAT_04840848,0);
  return;
}


