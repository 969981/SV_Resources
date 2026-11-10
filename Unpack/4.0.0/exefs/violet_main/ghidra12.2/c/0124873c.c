/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124873c; name: FUN_0124873c
 */


void FUN_0124873c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
  FUN_012489b4(param_1,*param_3,*(undefined2 *)(param_3 + 1));
  uVar2 = FUN_01249340(param_1);
  FUN_01248894(uVar2,uVar1);
  uVar2 = FUN_01246e90(param_1);
  FUN_012507d0(uVar2,*param_3);
  FUN_012487c0(param_1,*param_3);
  uVar2 = FUN_01243584(param_1);
  FUN_012487f0(uVar2,uVar1);
  return;
}


