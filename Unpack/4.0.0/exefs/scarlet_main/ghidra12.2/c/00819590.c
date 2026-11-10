/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00819590; name: FUN_00819590
 */


long * FUN_00819590(long *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  bool bVar3;
  long lVar4;
  
  bVar3 = (*param_2 & 1) == 0;
  pbVar2 = *(byte **)(param_2 + 0x10);
  if (bVar3) {
    pbVar2 = param_2 + 1;
  }
  uVar1 = (ulong)(*param_2 >> 1);
  if (!bVar3) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  lVar4 = FUN_008194e0(*param_1 + param_1[2],param_1[1] - param_1[2],pbVar2,uVar1);
  param_1[2] = param_1[2] + lVar4;
  return param_1;
}


