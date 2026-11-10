/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012480ac; name: FUN_012480ac
 */


void FUN_012480ac(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar1 = FUN_01689a40(param_1,uVar2);
  uVar3 = FUN_01243584(param_1);
  FUN_012480f8(uVar3,0,uVar1);
  return;
}


