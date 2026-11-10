/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0181a59c; name: FUN_0181a59c
 */


ulong FUN_0181a59c(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0181a624(param_1,param_2,7);
  if ((int)uVar2 != 0) {
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar3 = FUN_01243584(param_1);
    FUN_0181a604(uVar3,uVar1,2,uVar2 & 0xffffffff);
    uVar2 = 1;
  }
  return uVar2;
}


