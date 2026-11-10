/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f00b0; name: FUN_021f00b0
 */


void FUN_021f00b0(long param_1,undefined8 *param_2,code *param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  sVar1 = FUN_00cf44ec(param_2[1]);
  if (sVar1 != 0x84) {
    param_2 = param_2 + 1;
  }
  uVar5 = *param_2;
  uVar3 = FUN_00cf44ec(uVar5);
  uVar4 = FUN_00cf41a0(uVar5);
  sVar1 = FUN_021ec630(uVar3,uVar4);
  if (sVar1 == 0x36c) {
    uVar2 = (*param_3)(2);
    *(undefined2 *)(param_1 + 0x2a) = uVar2;
  }
  return;
}


