/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026cfdc0; name: FUN_026cfdc0
 */


undefined8 * FUN_026cfdc0(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar2 = (undefined8 *)*puVar2, puVar2 == (undefined8 *)0x0)
     ) {
    if ((DAT_04857be0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04857be0);
      if (iVar1 == 0) {
        puVar2 = &DAT_04857bd8;
      }
      else {
        DAT_04857bd8 = 0;
        __cxa_guard_release(&DAT_04857be0);
        puVar2 = &DAT_04857bd8;
      }
    }
    else {
      puVar2 = &DAT_04857bd8;
    }
  }
  return puVar2;
}


