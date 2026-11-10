/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079c048; name: FUN_0079c048
 */


ulong FUN_0079c048(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(short *)(param_1 + 0x114e) != 0) {
    uVar2 = 0;
    do {
      uVar1 = FUN_007967e8(*(long *)(*(long *)(param_1 + 0x88) + uVar2 * 8) + 0x10,param_2);
      if ((uVar1 & 1) != 0) goto LAB_0079c090;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(param_1 + 0x114e));
  }
  uVar2 = 0xffff;
LAB_0079c090:
  return uVar2 & 0xffffffff;
}


