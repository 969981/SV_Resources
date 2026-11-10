/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019671ec; name: FUN_019671ec
 */


void FUN_019671ec(void)

{
  int iVar1;
  
  if (((DAT_04859358 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859358), iVar1 != 0)) {
    DAT_04859350 = FUN_026f59bc();
    __cxa_guard_release(&DAT_04859358);
    return;
  }
  return;
}


