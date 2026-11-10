/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019389d0; name: FUN_019389d0
 */


undefined8 FUN_019389d0(long param_1)

{
  undefined1 auVar1 [12];
  
  if (*(long *)(param_1 + 0x210) != 0) {
    auVar1 = FUN_01938a30(param_1 + 0x198);
    if (((auVar1._8_4_ == 0) && ((auVar1._0_8_ >> 0x20 & 0xff) != 0)) &&
       ((*(long *)(param_1 + 0x1a0) == 0 ||
        ((*(byte *)(*(long *)(param_1 + 0x1a0) + 0x1e8) & 1) == 0)))) {
      return 0;
    }
  }
  return 1;
}


