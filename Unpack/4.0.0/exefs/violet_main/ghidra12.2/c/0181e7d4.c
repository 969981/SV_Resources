/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0181e7d4; name: FUN_0181e7d4
 */


void FUN_0181e7d4(void)

{
  int iVar1;
  
  FUN_0181e844();
  if (((DAT_0483b210 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483b210), iVar1 != 0)) {
    FUN_00100190(&LAB_02a427cc,&DAT_0483b200,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b210);
  }
  DAT_0483b218 = DAT_0483b200;
  FUN_0181f1dc();
  return;
}


