/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a07f08; name: FUN_01a07f08
 */


void FUN_01a07f08(void)

{
  int iVar1;
  
  if (((DAT_04839838 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839838), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1bcec,&DAT_04839828,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839838);
  }
  DAT_04839820 = DAT_04839828;
  if (DAT_04839828 == 0) {
    return;
  }
  FUN_01a0a7b8();
  return;
}


