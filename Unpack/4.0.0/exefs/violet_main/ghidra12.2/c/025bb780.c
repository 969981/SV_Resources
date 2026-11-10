/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025bb780; name: FUN_025bb780
 */


undefined8 * FUN_025bb780(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04852800 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04852800);
      if (iVar1 == 0) {
        puVar2 = &DAT_048527c0;
      }
      else {
        DAT_048527f0 = 0;
        DAT_048527f8 = 0;
        DAT_048527e0 = 0;
        DAT_048527e8 = 0;
        DAT_048527d0 = 0;
        DAT_048527d8 = 0;
        DAT_048527c0 = 0;
        DAT_048527c8 = 0;
        __cxa_guard_release(&DAT_04852800);
        puVar2 = &DAT_048527c0;
      }
    }
    else {
      puVar2 = &DAT_048527c0;
    }
  }
  return puVar2;
}


