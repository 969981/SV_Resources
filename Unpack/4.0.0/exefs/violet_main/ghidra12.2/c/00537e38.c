/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00537e38; name: FUN_00537e38
 */


undefined1 * FUN_00537e38(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *__src;
  size_t __n;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (1 < bVar1) {
      __n = (size_t)(bVar1 >> 1);
LAB_00537e7c:
      if ((*param_3 - (long)param_2) + 0xe < (long)__n) goto LAB_00537edc;
      *param_2 = 10;
      param_2[1] = (char)__n;
      __src = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        __src = pbVar3 + 1;
      }
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
    }
  }
  else {
    __n = *(size_t *)(pbVar3 + 8);
    if (__n != 0) {
      if ((long)__n < 0x80) goto LAB_00537e7c;
LAB_00537edc:
      param_2 = (undefined1 *)FUN_0052c95c(param_3,1);
      uVar4 = *(ulong *)(param_1 + 8);
      goto joined_r0x00537ef0;
    }
  }
  uVar4 = *(ulong *)(param_1 + 8);
joined_r0x00537ef0:
  if ((uVar4 & 1) == 0) {
    return param_2;
  }
  puVar2 = (undefined1 *)FUN_005161f8((uVar4 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar2;
}


