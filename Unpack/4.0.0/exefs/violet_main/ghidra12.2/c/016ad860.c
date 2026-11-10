/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016ad860; name: FUN_016ad860
 */


undefined4 FUN_016ad860(void)

{
  int iVar1;
  
  if (((DAT_048405f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048405f8), iVar1 != 0)) {
    FUN_00100190(&LAB_02acf048,&DAT_048405e8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048405f8);
  }
  DAT_04840600 = DAT_048405e8;
  return *(undefined4 *)(DAT_048405e8 + 0x70);
}


