/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f2f20; name: FUN_003f2f20
 */


ulong FUN_003f2f20(undefined8 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar1 = FUN_003eb480();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 2) != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      uVar7 = FUN_003f2e00(param_1,param_2);
      *(undefined4 *)(param_1 + 2) = 1;
      return uVar7;
    }
    puVar6 = (uint *)*param_1;
    if ((*(int *)(param_1 + 1) != 1) || (param_2 <= *puVar6)) {
      uVar2 = *puVar6;
      uVar5 = uVar2 - param_2;
      lVar3 = 0;
      *puVar6 = uVar5;
      lVar4 = lVar3;
      if (uVar2 < param_2) {
        do {
          lVar3 = lVar4 + 1;
          uVar2 = puVar6[lVar4 + 1];
          uVar5 = uVar2 - 1;
          puVar6[lVar4 + 1] = uVar5;
          lVar4 = lVar3;
        } while (uVar2 == 0);
      }
      if (uVar5 != 0) {
        return 1;
      }
      if (*(int *)(param_1 + 1) + -1 == (int)lVar3) {
        *(int *)(param_1 + 1) = (int)lVar3;
        return 1;
      }
      return 1;
    }
    uVar7 = 1;
    *puVar6 = param_2 - *puVar6;
    *(undefined4 *)(param_1 + 2) = 1;
  }
  else {
    uVar2 = FUN_003eb9f0(param_1,param_2);
    uVar7 = (ulong)uVar2;
    if (uVar2 != 0) {
      FUN_003ec230(param_1,1);
      return uVar7;
    }
  }
  return uVar7;
}


