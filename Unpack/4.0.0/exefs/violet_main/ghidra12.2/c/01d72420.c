/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d72420; name: FUN_01d72420
 */


undefined1 FUN_01d72420(void)

{
  int iVar1;
  
  if (((DAT_04837608 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04837608), iVar1 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  DAT_04837610 = DAT_048375f8;
  return *(undefined1 *)(DAT_048375f8 + 0x3d0);
}


