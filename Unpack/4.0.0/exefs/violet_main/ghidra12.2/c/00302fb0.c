/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00302fb0; name: FUN_00302fb0
 */


undefined8 FUN_00302fb0(long *param_1,void *param_2,size_t *param_3)

{
  size_t __n;
  void *__dest;
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  size_t __n_00;
  
  if (param_3 == (size_t *)0x0) {
    return 0;
  }
  if (param_2 == (void *)0x0) {
LAB_003030cc:
    __n_00 = 0;
    uVar1 = 0;
    goto LAB_003030d4;
  }
  __dest = (void *)*param_1;
  if (__dest == (void *)0x0) {
LAB_0030303c:
    __n_00 = 0;
  }
  else {
    lVar2 = param_1[2];
    if (lVar2 == 8) {
      if (param_1[4] == 0) goto LAB_0030303c;
      uVar3 = param_1[4];
      __n_00 = 0;
    }
    else {
      __n_00 = *param_3;
      if (8U - lVar2 <= *param_3) {
        __n_00 = 8U - lVar2;
      }
      memcpy((void *)((long)param_1 + lVar2 + 8),param_2,__n_00);
      param_1[2] = param_1[2] + __n_00;
      *param_3 = *param_3 - __n_00;
      if (param_1[2] != 8) goto LAB_003030c4;
      if ((0xffffc < *(uint *)(param_1 + 1) - 4) || (*(int *)((long)param_1 + 0xc) != 6))
      goto LAB_003030cc;
      __dest = (void *)*param_1;
      param_2 = (void *)((long)param_2 + __n_00);
      uVar3 = (ulong)*(uint *)(param_1 + 1) - 4;
      param_1[4] = uVar3;
    }
    __n = *param_3;
    if (uVar3 <= *param_3) {
      __n = uVar3;
    }
    memcpy(__dest,param_2,__n);
    *param_1 = *param_1 + __n;
    __n_00 = __n + __n_00;
    param_1[4] = param_1[4] - __n;
    param_1[3] = param_1[3] + __n;
  }
LAB_003030c4:
  uVar1 = 1;
LAB_003030d4:
  *param_3 = __n_00;
  return uVar1;
}


