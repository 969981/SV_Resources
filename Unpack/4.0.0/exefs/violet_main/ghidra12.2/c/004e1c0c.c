/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e1c0c; name: FUN_004e1c0c
 */


undefined1 * FUN_004e1c0c(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *__src;
  size_t __n;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) goto joined_r0x004e1d0c;
  pbVar4 = *(byte **)(param_1 + 0x18);
  if ((*pbVar4 & 1) == 0) {
    __n = (size_t)(*pbVar4 >> 1);
LAB_004e1c6c:
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)__n;
      __src = *(byte **)(pbVar4 + 0x10);
      if ((*pbVar4 & 1) == 0) {
        __src = pbVar4 + 1;
      }
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
      goto joined_r0x004e1d0c;
    }
  }
  else {
    __n = *(size_t *)(pbVar4 + 8);
    if ((long)__n < 0x80) goto LAB_004e1c6c;
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,1);
joined_r0x004e1d0c:
  if ((uVar1 >> 1 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x20);
    *param_2 = 0x10;
    param_2[1] = uVar2;
    param_2 = param_2 + 2;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) == 0) {
    return param_2;
  }
  puVar3 = (undefined1 *)FUN_005161f8((uVar5 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar3;
}


