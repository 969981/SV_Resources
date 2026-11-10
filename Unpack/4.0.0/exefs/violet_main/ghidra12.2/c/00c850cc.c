/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c850cc; name: FUN_00c850cc
 */


void FUN_00c850cc(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 auStack_28 [2];
  
  local_2c = param_2;
  auStack_28[0] = param_3;
  FUN_00c85118(param_1,&local_2c,auStack_28);
  iVar1 = FUN_00c75660(param_3);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar1;
  return;
}


