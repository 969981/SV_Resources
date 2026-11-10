/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0177cb38; name: FUN_0177cb38
 */


void FUN_0177cb38(void)

{
  int iVar1;
  
  if (((DAT_0483af88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483af88), iVar1 != 0)) {
    FUN_00100190(&LAB_02a32070,&DAT_0483af78,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483af88);
    return;
  }
  return;
}


