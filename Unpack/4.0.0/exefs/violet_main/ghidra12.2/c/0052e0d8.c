/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052e0d8; name: FUN_0052e0d8
 */


long * FUN_0052e0d8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *__dest;
  uint local_24;
  long *local_18;
  
  param_1[4] = (long)param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x7fffffff;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_18,&local_24);
  if ((uVar1 & 1) == 0) {
    __dest = param_1 + 5;
    *(undefined4 *)((long)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *param_1 = (long)__dest;
    param_1[1] = (long)__dest;
    param_1[2] = 0;
  }
  else {
    *(uint *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) - local_24;
    if ((int)local_24 < 0x11) {
      param_1[2] = (long)(param_1 + 5);
      *param_1 = (long)(param_1 + 7);
      param_1[1] = (long)(param_1 + 7);
      __dest = (long *)((long)(param_1 + 5) + (0x20 - (long)(int)local_24));
      memcpy(__dest,local_18,(long)(int)local_24);
    }
    else {
      param_1[2] = (long)(param_1 + 5);
      lVar2 = (long)local_18 + ((ulong)local_24 - 0x10);
      *param_1 = lVar2;
      param_1[1] = lVar2;
      *(uint *)((long)param_1 + 0x1c) = (*(int *)((long)param_1 + 0x1c) - local_24) + 0x10;
      __dest = local_18;
      if (param_1[9] == 1) {
        param_1[9] = 2;
      }
    }
  }
  return __dest;
}


