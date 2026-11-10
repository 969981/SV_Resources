/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021603ec; name: FUN_021603ec
 */


void FUN_021603ec(void)

{
  int iVar1;
  
  if (((DAT_048412b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048412b8), iVar1 != 0)) {
    DAT_048412b0 = FUN_02157350();
    __cxa_guard_release(&DAT_048412b8);
    return;
  }
  return;
}


