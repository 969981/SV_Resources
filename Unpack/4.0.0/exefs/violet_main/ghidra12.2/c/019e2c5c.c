/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e2c5c; name: FUN_019e2c5c
 */


ulong FUN_019e2c5c(long param_1,undefined1 param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x70))();
  if ((param_3 & 1) != 0) {
    switch(param_2) {
    case 0:
      uVar2 = (uint)*(ushort *)(param_1 + 0x3f4);
      break;
    case 1:
      uVar2 = (uint)*(byte *)(param_1 + 0x3f6);
      break;
    case 2:
      uVar2 = (uint)*(byte *)(param_1 + 0x3f7);
      break;
    case 3:
      uVar2 = (uint)*(byte *)(param_1 + 0x3f8);
      break;
    case 4:
      uVar2 = (uint)*(byte *)(param_1 + 0x3f9);
      break;
    case 5:
      uVar2 = (uint)*(byte *)(param_1 + 0x3fa);
      break;
    default:
      uVar2 = 10;
    }
    uVar1 = (ulong)(((uint)uVar1 & 0xffff) * uVar2) / 10;
  }
  return uVar1;
}


