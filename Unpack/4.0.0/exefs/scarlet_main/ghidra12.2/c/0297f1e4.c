/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297f1e4; name: FUN_0297f1e4
 */


void FUN_0297f1e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_01243584();
  FUN_0124ade8(uVar3,param_3[1],0x76);
  uVar3 = FUN_01243584(param_1);
  uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
  uVar2 = (**(code **)(*(long *)param_3[1] + 0x98))();
  FUN_0167eba0(uVar3,uVar1,0xae,uVar2);
  uVar3 = FUN_01246e90(param_1);
  FUN_02932ea8(uVar3,*param_3,param_3[1],param_3[2]);
  return;
}


