/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ebdb8; name: FUN_021ebdb8
 */


void FUN_021ebdb8(void)

{
  int iVar1;
  
  if (((DAT_04842078 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04842078), iVar1 != 0)) {
    FUN_00100190(&LAB_02b6f26c,&DAT_04842068,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04842078);
  }
  FUN_012af100(&DAT_04842068,0);
  return;
}


