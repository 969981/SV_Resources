/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01858618; name: FUN_01858618
 */


void FUN_01858618(void)

{
  int iVar1;
  
  FUN_01858688();
  if (((DAT_0483acc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483acc8), iVar1 != 0)) {
    FUN_00100190(&LAB_02a1c3ec,&DAT_0483acb8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483acc8);
  }
  DAT_0483acd0 = DAT_0483acb8;
  FUN_018589b4();
  return;
}


