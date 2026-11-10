/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026056c0; name: FUN_026056c0
 */


undefined8 * FUN_026056c0(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04854338 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04854338);
      if (iVar1 == 0) {
        puVar2 = &DAT_04854330;
      }
      else {
        DAT_04854330 = uRam0000000000000001;
        __cxa_guard_release(&DAT_04854338);
        puVar2 = &DAT_04854330;
      }
    }
    else {
      puVar2 = &DAT_04854330;
    }
  }
  return puVar2;
}


