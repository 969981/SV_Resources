/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dc3e0; name: FUN_018dc3e0
 */


undefined8 * FUN_018dc3e0(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar2 = (undefined8 *)*puVar2, puVar2 == (undefined8 *)0x0)
     ) {
    if ((DAT_04802820 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04802820);
      if (iVar1 == 0) {
        puVar2 = &DAT_04802818;
      }
      else {
        DAT_04802818 = 0;
        __cxa_guard_release(&DAT_04802820);
        puVar2 = &DAT_04802818;
      }
    }
    else {
      puVar2 = &DAT_04802818;
    }
  }
  return puVar2;
}


