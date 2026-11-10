/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ac530; name: FUN_003ac530
 */


ulong FUN_003ac530(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0xa8) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238), lVar3 == 0)) {
    return 0xffffffffffffffff;
  }
  uVar1 = *(uint *)(lVar3 + 0x40);
  uVar2 = (ulong)uVar1;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 2 & 1) == 0) {
    if (uVar1 == 0x505 && (*(uint *)(lVar3 + 0x1c) & 0x1c8) != 0) {
      uVar2 = 0x909;
    }
  }
  else if (uVar1 == 0x909) {
    return 0x404;
  }
  return uVar2;
}


