/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018cbef8; name: FUN_018cbef8
 */


void FUN_018cbef8(void)

{
  int iVar1;
  
  FUN_018cbf68();
  if (((DAT_04838438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04838438), iVar1 != 0)) {
    FUN_00100190(&LAB_00aa6fdc,&DAT_04838428,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04838438);
  }
  DAT_04838440 = DAT_04838428;
  FUN_018cc0c0();
  return;
}


