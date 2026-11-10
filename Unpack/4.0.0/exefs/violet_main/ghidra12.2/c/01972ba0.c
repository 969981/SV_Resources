/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01972ba0; name: FUN_01972ba0
 */


void FUN_01972ba0(void)

{
  int iVar1;
  
  if (((DAT_048593f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048593f8), iVar1 != 0)) {
    FUN_026f6ab8();
    DAT_048593f0 = &DAT_048593e0;
    __cxa_guard_release(&DAT_048593f8);
    return;
  }
  return;
}


