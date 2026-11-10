/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048e760; name: FUN_0048e760
 */


undefined8 FUN_0048e760(int *param_1,void *param_2,void *param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (void *)0x0) {
    return 0;
  }
  if (param_3 == (void *)0x0) {
    return 0;
  }
  if (*param_1 == 1) {
    puVar2 = (uint *)**(undefined8 **)(param_1 + 2);
    uVar1 = *puVar2;
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (param_4 < (int)uVar1) {
      return 0;
    }
    if (0 < (int)uVar1) {
      memcpy(param_2,*(void **)(puVar2 + 2),(ulong)uVar1);
      if ((*(ulong *)(puVar2 + 4) & 7) != 0) {
        *(byte *)((long)param_2 + (long)(int)*puVar2 + -1) =
             *(byte *)((long)param_2 + (long)(int)*puVar2 + -1) &
             ((byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(puVar2 + 4) & 7) & 0x1f)) ^ 0xff);
      }
    }
    memset((void *)((long)param_2 + (long)(int)*puVar2),0,(long)param_4 - (long)(int)*puVar2);
    puVar2 = *(uint **)(*(long *)(param_1 + 2) + 8);
    uVar1 = *puVar2;
  }
  else {
    if (*param_1 != 0) {
      return 0;
    }
    puVar2 = *(uint **)(param_1 + 2);
    uVar1 = *puVar2;
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (param_4 < (int)uVar1) {
      return 0;
    }
    if (0 < (int)uVar1) {
      memcpy(param_2,*(void **)(puVar2 + 2),(ulong)uVar1);
      if ((*(ulong *)(puVar2 + 4) & 7) != 0) {
        *(byte *)((long)param_2 + (long)(int)*puVar2 + -1) =
             *(byte *)((long)param_2 + (long)(int)*puVar2 + -1) &
             ((byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(puVar2 + 4) & 7) & 0x1f)) ^ 0xff);
      }
    }
    memset((void *)((long)param_2 + (long)(int)*puVar2),0,(long)param_4 - (long)(int)*puVar2);
    puVar2 = *(uint **)(param_1 + 2);
    uVar1 = *puVar2;
  }
  if (((int)uVar1 < 0) || (param_4 < (int)uVar1)) {
    return 0;
  }
  if (0 < (int)uVar1) {
    memcpy(param_3,*(void **)(puVar2 + 2),(ulong)uVar1);
    if ((*(ulong *)(puVar2 + 4) & 7) != 0) {
      *(byte *)((long)param_3 + (long)(int)*puVar2 + -1) =
           *(byte *)((long)param_3 + (long)(int)*puVar2 + -1) |
           (byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(puVar2 + 4) & 7) & 0x1f));
    }
  }
  memset((void *)((long)param_3 + (long)(int)*puVar2),0xff,(long)param_4 - (long)(int)*puVar2);
  return 1;
}


