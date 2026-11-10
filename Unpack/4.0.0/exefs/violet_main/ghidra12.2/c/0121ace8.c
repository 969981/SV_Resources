/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0121ace8; name: FUN_0121ace8
 */


void FUN_0121ace8(void)

{
  int iVar1;
  
  FUN_0121ad58();
  if (((DAT_048384a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048384a8), iVar1 != 0)) {
    FUN_00100190(&LAB_00aa89a4,&DAT_04838498,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048384a8);
  }
  DAT_048384b0 = DAT_04838498;
  FUN_0121b134();
  return;
}


