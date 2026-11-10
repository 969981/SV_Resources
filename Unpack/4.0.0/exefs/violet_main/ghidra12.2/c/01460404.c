/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01460404; name: FUN_01460404
 */


void FUN_01460404(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_50 [32];
  undefined8 local_18;
  
  local_18 = 0;
  uVar1 = FUN_0124e480();
  uVar2 = FUN_01582534(param_1);
  FUN_01247754(auStack_50,uVar1,uVar2);
  while (uVar3 = FUN_01460dbc(auStack_50,&local_18), (uVar3 & 1) != 0) {
    uVar1 = FUN_01243584(param_1);
    FUN_01460480(uVar1,local_18,param_2);
  }
  return;
}


