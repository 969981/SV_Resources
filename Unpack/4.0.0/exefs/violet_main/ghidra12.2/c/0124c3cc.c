/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124c3cc; name: FUN_0124c3cc
 */


void FUN_0124c3cc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_0124c458(param_1,0);
  uVar2 = FUN_0124c458(param_1,1);
  uVar3 = FUN_0124c458(param_1,2);
  uVar4 = FUN_0124c458(param_1,3);
  uVar5 = FUN_0124c458(param_1,4);
  *(bool *)param_2 = (uVar2 & 1) + (uVar1 & 1) + (uVar3 & 1) + (uVar4 & 1) != -(uVar5 & 1);
  return;
}


