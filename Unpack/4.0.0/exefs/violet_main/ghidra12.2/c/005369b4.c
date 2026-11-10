/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005369b4; name: FUN_005369b4
 */


ulong FUN_005369b4(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar3 = 0;
    bVar2 = *(byte *)(param_1 + 8);
  }
  else if ((int)uVar1 < 0) {
    uVar3 = 0xb;
    bVar2 = *(byte *)(param_1 + 8);
  }
  else {
    uVar3 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    bVar2 = *(byte *)(param_1 + 8);
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
    return uVar3;
  }
  uVar3 = FUN_0051d510(param_1 + 8,uVar3,param_1 + 0x14);
  return uVar3;
}


