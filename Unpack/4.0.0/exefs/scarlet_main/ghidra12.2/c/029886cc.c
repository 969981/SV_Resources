/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029886cc; name: FUN_029886cc
 */


uint FUN_029886cc(undefined8 param_1,long *param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = (**(code **)(*param_2 + 0xf0))(param_2);
  uVar2 = (**(code **)(*param_3 + 0xf0))(param_3);
  uVar4 = thunk_FUN_021fa62c(uVar1);
  if (((uVar4 & 1) == 0) && (uVar4 = thunk_FUN_021fa62c(uVar2), (uVar4 & 1) == 0)) {
    uVar5 = FUN_01582534(param_1);
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar4 = FUN_02959670(uVar5,uVar2);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_01582534(param_1);
      uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
      uVar4 = FUN_02959670(uVar5,uVar2);
      if ((uVar4 & 1) == 0) {
        FUN_01582534(param_1);
        uVar5 = FUN_014813e4();
        uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
        uVar4 = FUN_01481400(uVar5,uVar2);
        if ((uVar4 & 1) != 0) {
          FUN_01582534(param_1);
          uVar5 = FUN_014813e4();
          uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
          uVar4 = FUN_01481400(uVar5,uVar2);
          if ((uVar4 & 1) != 0) {
            uVar5 = FUN_01246e90(param_1);
            uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
            uVar3 = FUN_0293b434(uVar5,uVar2,uVar1,param_4);
            uVar3 = uVar3 ^ 1;
            goto LAB_02988824;
          }
        }
      }
    }
  }
  uVar3 = 1;
LAB_02988824:
  return uVar3 & 1;
}


