/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012489b4; name: FUN_012489b4
 */


void FUN_012489b4(undefined8 param_1,long *param_2,undefined2 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01582534(param_1);
  uVar3 = FUN_014813ec();
  uVar2 = FUN_010e161c(uVar3,uVar1);
  if ((uVar2 & 0xff) == 10) {
    return;
  }
  lVar4 = FUN_01243584(param_1);
  FUN_0129aff0(*(undefined8 *)(lVar4 + 0x18),0x97,uVar2,param_3);
  return;
}


