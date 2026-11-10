/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012438e4; name: FUN_012438e4
 */


void FUN_012438e4(undefined8 param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  cVar1 = (**(code **)(*param_2 + 0x540))(param_2,param_3);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_2 + 0x540))(param_2,param_3);
    uVar5 = FUN_01243584(param_1);
    FUN_01243a30(uVar5,param_2,param_3,iVar2 - 1U);
    if ((iVar2 - 1U & 0xff) == 0) {
      uVar3 = FUN_0181a7ec(0x32);
      uVar5 = FUN_01243584(param_1);
      uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
      FUN_01248df8(uVar5,uVar4,param_4,uVar3);
      uVar5 = FUN_01243584(param_1);
      uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
      FUN_01248df8(uVar5,uVar4,param_5,uVar3);
      uVar5 = FUN_01243584(param_1);
      uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
      FUN_0181a604(uVar5,uVar3,param_6,0xff);
      return;
    }
  }
  return;
}


