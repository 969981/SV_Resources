/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02944390; name: FUN_02944390
 */


undefined8 FUN_02944390(long param_1,ushort param_2,undefined4 param_3)

{
  long lVar1;
  
  if (((0x85 < param_2) ||
      (lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + (ulong)param_2 * 8 + 8),
      lVar1 == 0)) || (1 < *(byte *)(lVar1 + 10))) {
    return 0;
  }
  *(undefined4 *)(lVar1 + 0xc) = param_3;
  if (*(byte *)(lVar1 + 10) == 1) {
    *(undefined1 *)(lVar1 + 10) = 2;
  }
  return 1;
}


