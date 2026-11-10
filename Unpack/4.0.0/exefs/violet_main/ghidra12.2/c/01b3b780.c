/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b3b780; name: FUN_01b3b780
 */


void FUN_01b3b780(void)

{
  int iVar1;
  
  if (((DAT_0483b1b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483b1b0), iVar1 != 0)) {
    FUN_00100190(&LAB_02a3f278,&DAT_0483b1a0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b1b0);
  }
  DAT_0483b1b8 = DAT_0483b1a0;
  FUN_01848ae0(*(undefined8 *)(DAT_0483b1a0 + 0x58));
  return;
}


