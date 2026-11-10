/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01972b30; name: FUN_01972b30
 */


void FUN_01972b30(void)

{
  int iVar1;
  
  if (((DAT_04859398 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859398), iVar1 != 0)) {
    FUN_026f61a0();
    DAT_04859390 = &DAT_048593a0;
    __cxa_guard_release(&DAT_04859398);
    return;
  }
  return;
}


