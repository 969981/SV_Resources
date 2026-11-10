/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02424410; name: FUN_02424410
 */


ulong FUN_02424410(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  do {
    lVar1 = param_1[0xf] - param_1[0xe];
    if (lVar1 == 0) {
      uVar3 = param_1[1] - *param_1 >> 7;
      FUN_024244b0(param_1);
      goto LAB_02424498;
    }
    uVar3 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar1 + param_1[0xe] + -8;
    uVar2 = uVar3 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar2) =
         *(ulong *)(param_1[7] + uVar2) & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 7) <= uVar3);
  FUN_02424500(*param_1 + uVar3 * 0x80);
  if ((ulong)param_1[0x15] <= uVar3) {
LAB_02424498:
    param_1[0x15] = uVar3 + 1;
  }
  return uVar3;
}


