/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01da5e7c; name: FUN_01da5e7c
 */


undefined8 * FUN_01da5e7c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04833cb0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04833cb0);
      if (iVar1 == 0) {
        puVar2 = &DAT_04833c68;
      }
      else {
        DAT_04833c78 = 0xffffffffffffffff;
        DAT_04833c80 = 0xffffffffffffffff;
        DAT_04833c68 = 0xffffffffffffffff;
        DAT_04833c70 = 0xffffffffffffffff;
        DAT_04833c88 = 0xffffffffffffffff;
        DAT_04833c90 = 0;
        DAT_04833c98 = 0;
        DAT_04833ca0 = 0;
        DAT_04833ca8 = 0xffffffff;
        DAT_04833cac = 0;
        __cxa_guard_release(&DAT_04833cb0);
        puVar2 = &DAT_04833c68;
      }
    }
    else {
      puVar2 = &DAT_04833c68;
    }
  }
  return puVar2;
}


