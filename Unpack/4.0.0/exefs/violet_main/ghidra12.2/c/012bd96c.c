/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bd96c; name: FUN_012bd96c
 */


void FUN_012bd96c(void)

{
  int iVar1;
  
  if (((DAT_048638f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048638f0), iVar1 != 0)) {
    FUN_00100190(&LAB_02c7be68,&DAT_048638e0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048638f0);
    return;
  }
  return;
}


