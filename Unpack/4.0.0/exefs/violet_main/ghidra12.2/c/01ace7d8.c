/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ace7d8; name: FUN_01ace7d8
 */


void FUN_01ace7d8(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 local_3c;
  undefined4 auStack_38 [2];
  
  FUN_00ca7394(param_1 + 0xe8,1);
  lVar1 = *(long *)(param_1 + 0xe8);
  local_3c = 1;
  auStack_38[0] = 0x22;
  FUN_00c85118(lVar1,&local_3c,auStack_38);
  *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 0xc;
  FUN_00ebd51c(lVar1,param_2,param_3,1);
  return;
}


