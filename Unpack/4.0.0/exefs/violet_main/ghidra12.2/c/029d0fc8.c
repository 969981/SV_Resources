/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d0fc8; name: FUN_029d0fc8
 */


undefined8 * FUN_029d0fc8(void)

{
  int iVar1;
  
  if (((DAT_0486af38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486af38), iVar1 != 0)) {
    DAT_0486af30 = FUN_022bdb6c();
    __cxa_guard_release(&DAT_0486af38);
  }
  return &DAT_0486af30;
}


