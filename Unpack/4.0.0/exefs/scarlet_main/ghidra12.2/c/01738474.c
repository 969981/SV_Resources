/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01738474; name: FUN_01738474
 */


void FUN_01738474(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [40];
  
  lVar2 = param_1[1] - *param_1 >> 3;
  uVar3 = lVar2 * -0x3333333333333333;
  if (param_2 <= uVar3) {
    if (uVar3 == param_2) {
      return;
    }
    FUN_0219d884(param_1,*param_1 + param_2 * 0x28);
    return;
  }
  param_2 = param_2 + lVar2 * 0x3333333333333333;
  if ((ulong)((param_1[2] - param_1[1] >> 3) * -0x3333333333333333) < param_2) {
    uVar1 = FUN_01738578(param_1,param_2 + (param_1[1] - *param_1 >> 3) * -0x3333333333333333);
    FUN_017385d4(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333,param_1 + 3);
    FUN_01738810(auStack_58,param_2);
    FUN_01738668(param_1,auStack_58);
    FUN_01738710(auStack_58);
    return;
  }
  FUN_01738a20(param_1,param_2);
  return;
}


