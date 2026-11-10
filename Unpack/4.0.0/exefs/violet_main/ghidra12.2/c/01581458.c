/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01581458; name: FUN_01581458
 */


void FUN_01581458(void)

{
  int iVar1;
  
  if (((DAT_04842778 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04842778), iVar1 != 0)) {
    FUN_0225cc94();
    DAT_04842770 = &DAT_04842760;
    __cxa_guard_release(&DAT_04842778);
    return;
  }
  return;
}


