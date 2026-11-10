/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022aac20; name: FUN_022aac20
 */


undefined8 FUN_022aac20(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_022aa540(param_1,1);
  uVar3 = FUN_022aa540(param_1,2);
  uVar1 = FUN_022aabe0(uVar2,uVar3);
  FUN_00c419e0(param_1,~uVar1 & 1);
  return 1;
}


