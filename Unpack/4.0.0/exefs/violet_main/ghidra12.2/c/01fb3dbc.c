/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb3dbc; name: FUN_01fb3dbc
 */


void FUN_01fb3dbc(void)

{
  int iVar1;
  
  if (((DAT_0483b190 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483b190), iVar1 != 0)) {
    FUN_00100190(&LAB_02a3f0a4,&DAT_0483b180,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b190);
  }
  FUN_01803684(&DAT_0483b180,0);
  return;
}


