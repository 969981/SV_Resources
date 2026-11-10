/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02980580; name: FUN_02980580
 */


void FUN_02980580(undefined8 param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_2 != (long *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x540))(param_2,param_3);
    if (cVar1 != '\0') {
      uVar2 = FUN_0181a7ec(0x32);
      uVar4 = FUN_01243584(param_1);
      FUN_01243a30(uVar4,param_2,param_3,0);
      uVar4 = FUN_01243584(param_1);
      uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
      FUN_01248df8(uVar4,uVar3,param_4,uVar2);
      uVar4 = FUN_01243584(param_1);
      uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
      FUN_01248df8(uVar4,uVar3,param_5,uVar2);
      uVar4 = FUN_01243584(param_1);
      uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
      FUN_0181a604(uVar4,uVar2,param_6,0xfe);
      return;
    }
  }
  return;
}


