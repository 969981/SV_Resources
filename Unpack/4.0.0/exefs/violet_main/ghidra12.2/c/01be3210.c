/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be3210; name: FUN_01be3210
 */


undefined8 * FUN_01be3210(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0480e790 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480e790);
      if (iVar1 == 0) {
        puVar2 = &DAT_0480e770;
      }
      else {
        DAT_0480e770 = PTR_DAT_047d5400 + 0x10;
        DAT_0480e780 = 0;
        DAT_0480e788 = 0;
        __cxa_guard_release(&DAT_0480e790);
        puVar2 = &DAT_0480e770;
      }
    }
    else {
      puVar2 = &DAT_0480e770;
    }
  }
  return puVar2;
}


