/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c87c50; name: FUN_01c87c50
 */


undefined8 FUN_01c87c50(void)

{
  int iVar1;
  
  if (((DAT_048161a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048161a8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_048161a8);
  }
  FUN_01c87c98();
  return 0;
}


