/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026d8978; name: FUN_026d8978
 */


void FUN_026d8978(void)

{
  int iVar1;
  
  if (((DAT_04859288 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859288), iVar1 != 0)) {
    FUN_026d8cac();
    DAT_04859280 = &DAT_04859270;
    __cxa_guard_release(&DAT_04859288);
    return;
  }
  return;
}


