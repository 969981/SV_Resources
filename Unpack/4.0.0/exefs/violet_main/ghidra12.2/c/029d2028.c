/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d2028; name: FUN_029d2028
 */


void FUN_029d2028(void)

{
  int iVar1;
  
  if (((DAT_0486af68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486af68), iVar1 != 0)) {
    FUN_029d28ec();
    DAT_0486af60 = &DAT_0486af50;
    __cxa_guard_release(&DAT_0486af68);
    return;
  }
  return;
}


