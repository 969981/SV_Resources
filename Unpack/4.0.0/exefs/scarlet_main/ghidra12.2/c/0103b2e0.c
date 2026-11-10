/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0103b2e0; name: FUN_0103b2e0
 */


ulong FUN_0103b2e0(long *param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  do {
    lVar2 = param_1[0xf] - param_1[0xe];
    if (lVar2 == 0) {
      uVar4 = param_1[1] - *param_1 >> 4;
      FUN_01cd4350(param_1);
      goto LAB_0103b374;
    }
    uVar4 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar2 + param_1[0xe] + -8;
    uVar3 = uVar4 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar3) =
         *(ulong *)(param_1[7] + uVar3) & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 4) <= uVar4);
  plVar1 = (long *)(*param_1 + uVar4 * 0x10);
  *plVar1 = (long)*param_2;
  plVar1[1] = (long)param_2[1];
  if ((ulong)param_1[0x15] <= uVar4) {
LAB_0103b374:
    param_1[0x15] = uVar4 + 1;
  }
  return uVar4;
}


