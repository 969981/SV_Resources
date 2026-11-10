/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02115fe0; name: FUN_02115fe0
 */


void FUN_02115fe0(void)

{
  int iVar1;
  
  if (((DAT_04840d10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840d10), iVar1 != 0)) {
    DAT_04840d08 = FUN_01af969c();
    __cxa_guard_release(&DAT_04840d10);
    return;
  }
  return;
}


