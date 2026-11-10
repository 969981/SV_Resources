/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f2220; name: FUN_021f2220
 */


void FUN_021f2220(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00e8fa88();
  uVar2 = iVar1 + param_3;
  if (0xfb < uVar2) {
    uVar2 = 0xfc;
  }
  FUN_013f7408(param_1,param_2,uVar2);
  return;
}


