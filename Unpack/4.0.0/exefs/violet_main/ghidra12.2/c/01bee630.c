/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bee630; name: FUN_01bee630
 */


undefined8 FUN_01bee630(void)

{
  int iVar1;
  
  if (((DAT_0480f878 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480f878), iVar1 != 0)) {
    __cxa_guard_release(&DAT_0480f878);
  }
  FUN_01bee678();
  return 0;
}


