/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004769b0; name: FUN_004769b0
 */


bool FUN_004769b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0043e390();
  uVar3 = FUN_0043e390(param_2);
  iVar1 = thunk_FUN_003df4b0(uVar2,uVar3);
  return iVar1 == 0;
}


