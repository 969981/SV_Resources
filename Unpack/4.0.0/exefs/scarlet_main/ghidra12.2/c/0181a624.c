/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0181a624; name: FUN_0181a624
 */


undefined8 FUN_0181a624(undefined8 param_1,long *param_2,undefined4 param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar2 & 1) == 0) {
    bVar1 = (**(code **)(*param_2 + 0x540))(param_2,param_3);
    if (bVar1 == 0) {
      uVar3 = FUN_01243584(param_1);
      FUN_01243a30(uVar3,param_2,param_3,3);
      FUN_0181a6dc(param_1,param_2,param_3);
      return 1;
    }
    if (bVar1 < 6) {
      uVar3 = FUN_01243584(param_1);
      FUN_0298756c(uVar3,param_2,param_3);
      return 2;
    }
  }
  return 0;
}


