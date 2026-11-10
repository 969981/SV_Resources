/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0221d8c0; name: FUN_0221d8c0
 */


ulong FUN_0221d8c0(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = 0;
  do {
    uVar2 = (uint)*param_1;
    if ((uVar2 >> 0x15 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = uVar2 & 0x1fffff;
      uVar3 = param_1[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8)) +
                                   POPCOUNT((char)(uVar2 >> 0x10))) + 2];
    }
    uVar1 = uVar3 | uVar1;
  } while (((*param_1 & 1) == 0) && (param_1 = (ulong *)param_1[1], param_1 != (ulong *)0x0));
  return uVar1 & 0xffff;
}


