/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003772b0; name: FUN_003772b0
 */


long FUN_003772b0(long *param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  *param_2 = param_3;
  lVar3 = *(long *)(param_3 & 0xfffffffffffffffc);
  if (((lVar3 != 0) && (*(int *)(lVar3 + 8) == 0)) &&
     (uVar2 = *(uint *)(*(long *)(param_3 & 0xfffffffffffffffc) + 0x28), uVar2 < 0x18)) {
    if (param_1[(ulong)uVar2 + 4] == 0) {
      param_1[1] = param_1[1] + 1;
      param_1[(ulong)uVar2 + 4] = (long)param_2;
    }
    else {
      lVar3 = FUN_00377cc0(param_3);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  uVar4 = param_1[3];
  param_2[1] = 0;
  param_2[2] = uVar4;
  plVar1 = param_1 + 2;
  if (uVar4 != 0) {
    plVar1 = (long *)(uVar4 + 8);
  }
  param_2[3] = 0;
  *plVar1 = (long)param_2;
  param_1[3] = (long)param_2;
  *param_1 = *param_1 + 1;
  return 0;
}


