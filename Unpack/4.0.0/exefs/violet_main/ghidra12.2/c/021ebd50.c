/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ebd50; name: FUN_021ebd50
 */


void FUN_021ebd50(void)

{
  int iVar1;
  
  if (((DAT_04842058 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04842058), iVar1 != 0)) {
    FUN_00100190(&LAB_02b6f1ec,&DAT_04842048,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04842058);
  }
  FUN_012aede0(&DAT_04842048,0);
  return;
}


