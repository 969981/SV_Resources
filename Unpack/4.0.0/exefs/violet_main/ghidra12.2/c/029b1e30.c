/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b1e30; name: FUN_029b1e30
 */


void FUN_029b1e30(void)

{
  int iVar1;
  
  if (((DAT_0486add0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486add0), iVar1 != 0)) {
    FUN_00100190(&LAB_02e49104,&DAT_0486adc0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0486add0);
  }
  FUN_012f37b4(&DAT_0486adc0,0);
  return;
}


