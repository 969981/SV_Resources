/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00569a14; name: FUN_00569a14
 */


void FUN_00569a14(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  if ((param_3 == 0) && (param_4 != 0)) {
    FUN_00569a9c(param_4,param_2);
  }
  else if (param_4 != param_3) {
    uVar1 = FUN_00585e30(param_4);
    FUN_00569ab0(param_2,uVar1);
    if (param_3 == 0) {
      FUN_00580de4(param_2);
      FUN_0049e790(PTR_LAB_047cba48,param_2);
    }
  }
  FUN_00569ac0(param_1,uVar1);
  return;
}


