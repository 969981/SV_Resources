/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


