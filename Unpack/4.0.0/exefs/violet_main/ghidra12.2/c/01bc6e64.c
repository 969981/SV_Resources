/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bc6e64; name: FUN_01bc6e64
 */


undefined8 * FUN_01bc6e64(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0480d8e0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480d8e0);
      if (iVar1 == 0) {
        puVar2 = &DAT_0480d8d8;
      }
      else {
        DAT_0480d8d8 = 0x101010101010101;
        __cxa_guard_release(&DAT_0480d8e0);
        puVar2 = &DAT_0480d8d8;
      }
    }
    else {
      puVar2 = &DAT_0480d8d8;
    }
  }
  return puVar2;
}


