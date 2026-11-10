/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017688c8; name: FUN_017688c8
 */


undefined4 FUN_017688c8(long param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar3 = FUN_00f7e27c(param_2);
    uVar1 = FUN_01242ecc(uVar3,*(undefined1 *)(param_1 + 0xc),param_3);
    uVar6 = uVar1 ^ 1;
    if (1 < *(uint *)(param_1 + 8)) {
      uVar3 = FUN_00f7e27c(param_2);
      uVar2 = FUN_01242ecc(uVar3,*(undefined1 *)(param_1 + 0xd),param_3);
      uVar6 = uVar6 | uVar2 ^ 1;
      uVar1 = uVar1 | uVar2;
      if (2 < *(uint *)(param_1 + 8)) {
        lVar7 = 0xe;
        do {
          uVar3 = FUN_00f7e27c(param_2);
          uVar2 = FUN_01242ecc(uVar3,*(undefined1 *)(param_1 + lVar7),param_3);
          uVar6 = uVar6 | uVar2 ^ 1;
          uVar5 = lVar7 - 0xb;
          uVar1 = uVar1 | uVar2;
          lVar7 = lVar7 + 1;
        } while (uVar5 < *(uint *)(param_1 + 8));
      }
    }
    if ((uVar1 & 1) != 0) {
      uVar4 = 2;
      if (param_4 < 2) {
        uVar4 = 3;
      }
      if ((uVar6 & 1) == 0) {
        uVar4 = 3;
      }
      return uVar4;
    }
  }
  return 4;
}


