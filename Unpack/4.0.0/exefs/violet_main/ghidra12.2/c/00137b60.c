/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00137b60; name: FUN_00137b60
 */


void FUN_00137b60(long *param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *param_1;
  uVar2 = (uint)*(byte *)((long)(int)param_1[4] + *(long *)(lVar1 + 0x58) + -1);
  if (uVar2 == 0xffffff80) {
    *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
    *(undefined1 *)((long)param_1 + 0x45) = 0x81;
    FUN_00133660(param_1,lVar1,param_2);
    return;
  }
  *(uint *)(param_1 + 5) = (int)param_1[5] - uVar2;
  *(char *)((long)param_1 + 0x45) = *(char *)((long)param_1 + 0x45) + -1;
  FUN_00133660(param_1,lVar1,param_2);
  return;
}


