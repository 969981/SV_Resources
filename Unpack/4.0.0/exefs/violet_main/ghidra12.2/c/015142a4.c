/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015142a4; name: FUN_015142a4
 */


void FUN_015142a4(void)

{
  int iVar1;
  
  if (((DAT_0486ade0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486ade0), iVar1 != 0)) {
    FUN_029b1bb0();
    DAT_0486add8 = &DAT_0486ada8;
    __cxa_guard_release(&DAT_0486ade0);
    return;
  }
  return;
}


