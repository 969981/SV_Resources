/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03348764; name: FUN_03348764
 */


void FUN_03348764(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = FUN_03348870();
  if (*(uint *)(param_1 + 1) == uVar3) {
    iVar2 = uVar3 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar3) {
      FUN_031d35f4(param_1,PTR_PTR_047d1a50,(long)iVar2);
      uVar3 = *(uint *)(param_1 + 1);
    }
    puVar1 = (undefined4 *)(*param_1 + (long)(int)uVar3 * 8);
    *puVar1 = *param_2;
    puVar1[1] = *param_3;
    *(int *)(param_1 + 1) = iVar2;
  }
  else {
    *(undefined4 *)(*param_1 + ((long)((ulong)uVar3 << 0x20) >> 0x1d) + 4) = *param_3;
  }
  return;
}


