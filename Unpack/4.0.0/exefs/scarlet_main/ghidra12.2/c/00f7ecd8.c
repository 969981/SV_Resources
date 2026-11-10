/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f7ecd8; name: FUN_00f7ecd8
 */


undefined8 FUN_00f7ecd8(char *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_00f7e27c(param_2);
  uVar3 = FUN_00f7d7d8(uVar2,0);
  if (((uVar3 & 1) == 0) || (*param_1 == '\0')) {
    uVar2 = FUN_00f7e27c(param_2);
    uVar3 = FUN_00f7d7d8(uVar2,1);
    if (((uVar3 & 1) == 0) || (param_1[1] == '\0')) {
      FUN_0123f5b0(param_2);
      iVar1 = FUN_02923b34();
      if (iVar1 != 0) {
        uVar2 = FUN_00f7e27c(param_2);
        uVar2 = FUN_0154e790(uVar2,iVar1);
        return uVar2;
      }
    }
  }
  return 2;
}


