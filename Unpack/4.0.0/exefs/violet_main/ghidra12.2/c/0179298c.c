/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0179298c; name: FUN_0179298c
 */


void FUN_0179298c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  FUN_00c4e5a0(auStack_48,0);
  plVar1 = (long *)*param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = FUN_00c4e564(plVar1);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,uVar2,uVar4);
  }
  else {
    FUN_00c48fe8(plVar1,param_2,uVar2,uVar4);
  }
  FUN_00c4e70c(auStack_48);
  return;
}


