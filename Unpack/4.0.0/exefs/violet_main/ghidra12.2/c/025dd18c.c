/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025dd18c; name: FUN_025dd18c
 */


undefined8 * FUN_025dd18c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04853840 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04853840);
      if (iVar1 == 0) {
        puVar2 = &DAT_04853838;
      }
      else {
        DAT_04853838 = 0;
        __cxa_guard_release(&DAT_04853840);
        puVar2 = &DAT_04853838;
      }
    }
    else {
      puVar2 = &DAT_04853838;
    }
  }
  return puVar2;
}


