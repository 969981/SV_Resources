/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01932f0c; name: FUN_01932f0c
 */


void FUN_01932f0c(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar1 = FUN_01689a40(param_1,uVar2);
  uVar3 = FUN_01243584(param_1);
  FUN_01932f80(uVar3,uVar2,0x2cf,uVar2,uVar1);
  uVar3 = FUN_01243584(param_1);
  FUN_01932fa4(uVar3,uVar2,0);
  return;
}


