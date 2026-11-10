/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023430d4; name: FUN_023430d4
 */


void FUN_023430d4(void)

{
  int iVar1;
  
  if (((DAT_04847fd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04847fd8), iVar1 != 0)) {
    DAT_04847fd0 = FUN_0233db40();
    __cxa_guard_release(&DAT_04847fd8);
    return;
  }
  return;
}


