/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0156aeb4; name: FUN_0156aeb4
 */


void FUN_0156aeb4(void)

{
  int iVar1;
  
  if (((DAT_04866030 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04866030), iVar1 != 0)) {
    DAT_04866028 = FUN_021a73d0();
    __cxa_guard_release(&DAT_04866030);
    return;
  }
  return;
}


