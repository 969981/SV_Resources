/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00179160; name: FUN_00179160
 */


void FUN_00179160(long *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_3 != 0x100) {
    if (0x101 - param_3 <= param_3) {
      param_3 = 0x101 - param_3;
    }
    uVar2 = (uint)LZCOUNT(param_3 * 2 + -1);
    iVar1 = (1 << (ulong)(-uVar2 & 0x1f)) + param_3 * -2;
    if (param_2 < iVar1) {
      uVar3 = param_1[2] << (ulong)(uVar2 ^ 0x1f) | (long)param_2;
      param_1[2] = uVar3;
      lVar4 = param_1[3] - (ulong)(uVar2 ^ 0x1f);
    }
    else {
      uVar3 = param_1[2] << ((ulong)(0x20 - uVar2) & 0x3f) | (long)(iVar1 + param_2);
      lVar4 = param_1[3] - (ulong)(0x20 - uVar2);
      param_1[2] = uVar3;
    }
    uVar3 = uVar3 << (lVar4 + 1U & 0x3f);
    uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    param_1[3] = lVar4;
    *(ulong *)*param_1 = uVar3 >> 0x20 | uVar3 << 0x20;
    *param_1 = *param_1 + ((long)(0x3fU - lVar4) >> 3);
    param_1[3] = param_1[3] + (0x3fU - lVar4 & 0xfffffffffffffff8);
  }
  return;
}


