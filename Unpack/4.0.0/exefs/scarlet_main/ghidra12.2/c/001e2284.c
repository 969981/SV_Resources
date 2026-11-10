/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e2284; name: FUN_001e2284
 */


ulong FUN_001e2284(long *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if (*(code **)(param_1[0x84] + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001e2298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1[0x84] + 0x58))(param_1);
    return uVar2;
  }
  if (param_3 < 2) {
    return 0;
  }
  lVar4 = *param_1;
  uVar3 = *(uint *)(lVar4 + 0x1c0);
  bVar1 = (uVar3 & 0x15) != 1;
  if (!bVar1) {
    *param_2 = (int)param_1[0x8a];
    uVar3 = *(uint *)(lVar4 + 0x1c0);
  }
  uVar2 = (ulong)!bVar1;
  if ((uVar3 & 0x2a) == 2) {
    if (((uint)((int)param_1[0x8a] == *(int *)((long)param_1 + 0x454)) & (bVar1 ^ 0xffffffff)) == 0)
    {
      uVar3 = bVar1 ^ 1;
      param_2[uVar3] = *(int *)((long)param_1 + 0x454);
      uVar3 = uVar3 | 0x10;
    }
    else {
      uVar3 = 0x10;
    }
    uVar2 = (ulong)(1 << (ulong)uVar3 | (uint)!bVar1);
  }
  return uVar2;
}


