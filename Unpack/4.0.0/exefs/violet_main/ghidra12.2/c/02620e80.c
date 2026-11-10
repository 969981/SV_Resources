/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02620e80; name: FUN_02620e80
 */


undefined8 * FUN_02620e80(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04854b08 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04854b08);
      if (iVar1 == 0) {
        puVar2 = &DAT_04854af8;
      }
      else {
        DAT_04854b00 = 0;
        DAT_04854af8 = 0x3f0000003f4f04ff;
        __cxa_guard_release(&DAT_04854b08);
        puVar2 = &DAT_04854af8;
      }
    }
    else {
      puVar2 = &DAT_04854af8;
    }
  }
  return puVar2;
}


