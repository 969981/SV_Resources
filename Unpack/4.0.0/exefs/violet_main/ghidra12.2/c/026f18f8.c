/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f18f8; name: FUN_026f18f8
 */


void FUN_026f18f8(void)

{
  int iVar1;
  
  if (((DAT_04859308 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859308), iVar1 != 0)) {
    FUN_00100190(&LAB_02ba9d5c,&DAT_048592f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04859308);
    return;
  }
  return;
}


