/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00302d90; name: FUN_00302d90
 */


undefined8 FUN_00302d90(long *param_1,void *param_2,size_t *param_3)

{
  size_t __n;
  void *__src;
  long lVar1;
  long lVar2;
  long lVar3;
  size_t __n_00;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  if (param_3 == (size_t *)0x0) {
    return 0;
  }
  __src = (void *)*param_1;
  if (__src != (void *)0x0) {
    lVar1 = param_1[4];
    lVar2 = param_1[2];
    if (lVar1 != lVar2) {
      lVar3 = param_1[3];
      if (lVar3 == 8) {
        __n_00 = 0;
      }
      else {
        __n_00 = *param_3;
        if (8U - lVar3 <= *param_3) {
          __n_00 = 8U - lVar3;
        }
        memcpy(param_2,(void *)((long)param_1 + lVar3 + 8),__n_00);
        *param_3 = *param_3 - __n_00;
        lVar1 = param_1[3];
        param_1[3] = lVar1 + __n_00;
        if (lVar1 + __n_00 != 8) goto LAB_00302e78;
        lVar1 = param_1[4];
        param_2 = (void *)((long)param_2 + __n_00);
        lVar2 = param_1[2];
        __src = (void *)*param_1;
      }
      __n = lVar1 - lVar2;
      if (*param_3 <= (ulong)(lVar1 - lVar2)) {
        __n = *param_3;
      }
      memcpy(param_2,__src,__n);
      *param_1 = *param_1 + __n;
      __n_00 = __n + __n_00;
      param_1[2] = param_1[2] + __n;
      goto LAB_00302e78;
    }
  }
  __n_00 = 0;
LAB_00302e78:
  *param_3 = __n_00;
  return 1;
}


