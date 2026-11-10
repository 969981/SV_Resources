/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec6f94; name: FUN_01ec6f94
 */


void FUN_01ec6f94(void)

{
  int iVar1;
  
  if (((DAT_04839c30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839c30), iVar1 != 0)) {
    DAT_04839c28 = FUN_01c59c7c();
    __cxa_guard_release(&DAT_04839c30);
    return;
  }
  return;
}


