/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b15bc; name: FUN_028b15bc
 */


void FUN_028b15bc(void)

{
  int iVar1;
  
  if (((DAT_048638a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048638a8), iVar1 != 0)) {
    FUN_00100190(&LAB_02c7b5ec,&DAT_04863898,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048638a8);
  }
  FUN_012cc338(&DAT_04863898,0);
  return;
}


