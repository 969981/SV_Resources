/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea22f0; name: FUN_01ea22f0
 */


void FUN_01ea22f0(void)

{
  int iVar1;
  
  if (((DAT_048396d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048396d0), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1b01c,&DAT_048396c0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048396d0);
  }
  FUN_015ec7b0(&DAT_048396c0,0);
  return;
}


