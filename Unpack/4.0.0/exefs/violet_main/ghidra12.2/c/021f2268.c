/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f2268; name: FUN_021f2268
 */


void FUN_021f2268(undefined8 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_00e8fa88();
  iVar1 = 0;
  if (param_3 <= uVar2) {
    iVar1 = uVar2 - param_3;
  }
  FUN_013f7408(param_1,param_2,iVar1);
  return;
}


