/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb4d28; name: FUN_01fb4d28
 */


void FUN_01fb4d28(void)

{
  int iVar1;
  
  if (((DAT_0483b210 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483b210), iVar1 != 0)) {
    FUN_00100190(&LAB_02a427cc,&DAT_0483b200,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b210);
  }
  FUN_0181ee0c(&DAT_0483b200,0);
  return;
}


