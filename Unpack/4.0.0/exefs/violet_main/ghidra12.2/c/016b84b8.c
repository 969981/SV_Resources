/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b84b8; name: FUN_016b84b8
 */


undefined8 * FUN_016b84b8(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_048086e0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048086e0);
      if (iVar1 == 0) {
        puVar2 = &DAT_048086c8;
      }
      else {
        DAT_048086d2 = 0;
        DAT_048086d8 = 0;
        uRam00000000048086dc = 0;
        DAT_048086c8 = 0;
        DAT_048086d0 = 0;
        __cxa_guard_release(&DAT_048086e0);
        puVar2 = &DAT_048086c8;
      }
    }
    else {
      puVar2 = &DAT_048086c8;
    }
  }
  return puVar2;
}


