/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00377370; name: FUN_00377370
 */


long FUN_00377370(long *param_1,ulong *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = (long *)(*param_2 & 0xfffffffffffffffc);
  lVar4 = *plVar2;
  if (((lVar4 != 0) && (*(int *)(lVar4 + 8) == 0)) &&
     (uVar1 = *(uint *)(*plVar2 + 0x28), uVar1 < 0x18)) {
    if (param_1[(ulong)uVar1 + 4] == 0) {
      param_1[1] = param_1[1] + 1;
      param_1[(ulong)uVar1 + 4] = (long)param_2;
    }
    else {
      lVar4 = FUN_00377cc0(*param_2);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  uVar3 = param_1[3];
  param_2[1] = 0;
  param_2[2] = uVar3;
  plVar2 = param_1 + 2;
  if (uVar3 != 0) {
    plVar2 = (long *)(uVar3 + 8);
  }
  param_2[3] = 0;
  *plVar2 = (long)param_2;
  param_1[3] = (long)param_2;
  *param_1 = *param_1 + 1;
  return 0;
}


