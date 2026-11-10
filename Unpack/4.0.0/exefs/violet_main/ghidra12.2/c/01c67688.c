/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c67688; name: FUN_01c67688
 */


void FUN_01c67688(void)

{
  int iVar1;
  
  if (((DAT_04839720 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839720), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1b6d8,&DAT_04839710,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839720);
  }
  DAT_04839708 = DAT_04839710;
  if (DAT_04839710 == 0) {
    return;
  }
  FUN_01ea24c8();
  return;
}


