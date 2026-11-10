/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02731000; name: FUN_02731000
 */


void FUN_02731000(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 local_4c;
  undefined4 auStack_48 [2];
  
  lVar1 = *(long *)(param_1 + 0xe8);
  local_4c = 1;
  auStack_48[0] = 0x22;
  FUN_00c85118(lVar1,&local_4c,auStack_48);
  *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 0xc;
  FUN_00ebd51c(lVar1,param_2,param_3,1);
  lVar1 = *(long *)(param_1 + 0xe8);
  local_4c = 2;
  auStack_48[0] = 0x22;
  FUN_00c85118(lVar1 + 0x48,&local_4c,auStack_48);
  *(int *)(lVar1 + 0x88) = *(int *)(lVar1 + 0x88) + 0xc;
  FUN_00ebd51c(lVar1 + 0x48,param_2,param_3,1);
  lVar1 = *(long *)(param_1 + 0xe8);
  local_4c = 3;
  auStack_48[0] = 0x22;
  FUN_00c85118(lVar1 + 0x90,&local_4c,auStack_48);
  *(int *)(lVar1 + 0xd0) = *(int *)(lVar1 + 0xd0) + 0xc;
  FUN_00ebd51c(lVar1 + 0x90,param_2,param_3,1);
  return;
}


