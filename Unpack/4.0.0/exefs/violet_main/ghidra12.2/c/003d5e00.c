/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d5e00; name: FUN_003d5e00
 */


ulong FUN_003d5e00(long param_1,long param_2)

{
  short sVar1;
  ulong uVar2;
  
  if ((*(byte *)(*(long *)(param_1 + 0x550) + 0x1e) & 3) == 0) {
    sVar1 = FUN_003d5710(param_1,0);
    return (ulong)(sVar1 != 0);
  }
  if (param_2 == 0x300c02c) {
    uVar2 = FUN_003d5be0(param_1,0x18,1);
    return uVar2;
  }
  if (param_2 == 0x300c02b) {
    uVar2 = FUN_003d5be0(param_1,0x17,1);
    return uVar2;
  }
  return 0;
}


