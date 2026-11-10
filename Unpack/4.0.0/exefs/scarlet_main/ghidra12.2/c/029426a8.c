/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029426a8; name: FUN_029426a8
 */


void FUN_029426a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
  uVar2 = FUN_018d31e0(param_1,uVar1);
  if (*(char *)(param_3 + 1) != '\0') {
    uVar3 = FUN_01243584(param_1);
    FUN_01636f5c(uVar3,uVar1,*param_3,0x101);
  }
  uVar3 = FUN_01243584(param_1);
  FUN_02985868(uVar3,uVar1);
  uVar3 = FUN_01243584(param_1);
  FUN_0298589c(uVar3,uVar2);
  return;
}


