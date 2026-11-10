/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b3c2b0; name: FUN_01b3c2b0
 */


undefined8 * FUN_01b3c2b0(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar2 = (undefined8 *)*puVar2, puVar2 == (undefined8 *)0x0)
     ) {
    if ((DAT_04806448 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04806448);
      if (iVar1 == 0) {
        puVar2 = &DAT_04806440;
      }
      else {
        DAT_04806440 = 0;
        __cxa_guard_release(&DAT_04806448);
        puVar2 = &DAT_04806440;
      }
    }
    else {
      puVar2 = &DAT_04806440;
    }
  }
  return puVar2;
}


