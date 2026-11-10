/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00123ea0; name: FUN_00123ea0
 */


undefined8 FUN_00123ea0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c5d9a0(param_1,0xfff0b9d8,param_2);
  if (iVar1 == 0) {
    FUN_00c5db00(param_1,0xfffffffe);
    FUN_00cf6cd0(param_1,0,2);
    FUN_00c85bd0(param_1,param_2);
    FUN_00efafb0(param_1,0xfffffffe,"__name");
    FUN_00d341e0(param_1,0xffffffff);
    FUN_00efafb0(param_1,0xfff0b9d8,param_2);
    return 1;
  }
  return 0;
}


