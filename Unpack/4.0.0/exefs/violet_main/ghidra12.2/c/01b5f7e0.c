/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b5f7e0; name: FUN_01b5f7e0
 */


undefined8 FUN_01b5f7e0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_01b5f830(param_1,1);
  uVar3 = FUN_01b5f830(param_1,2);
  uVar1 = FUN_01b5f8bc(uVar2,uVar3);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


