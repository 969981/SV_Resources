/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298c194; name: FUN_0298c194
 */


ulong FUN_0298c194(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0x2420);
  if (uVar1 != 0) {
    uVar3 = 0;
    lVar2 = (param_2 - param_1) + 0x84;
    do {
      lVar2 = lVar2 + -0x8c;
      if (lVar2 == 0) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return uVar1;
}


