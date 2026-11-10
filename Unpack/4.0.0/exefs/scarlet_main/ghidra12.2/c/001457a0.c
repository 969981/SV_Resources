/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001457a0; name: FUN_001457a0
 */


ulong FUN_001457a0(ulong *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  void *__src;
  ulong uVar1;
  ulong local_38;
  
  if (param_3 != 0) {
    uVar1 = *param_1;
    do {
      if (uVar1 == 0) {
        __src = (void *)(*(code *)param_1[2])(param_1[4],param_1[3],&local_38);
        if (__src == (void *)0x0) {
          return param_3;
        }
        if (local_38 == 0) {
          return param_3;
        }
        *param_1 = local_38;
        param_1[1] = (ulong)__src;
        uVar1 = local_38;
      }
      else {
        __src = (void *)param_1[1];
      }
      __n = uVar1;
      if (param_3 <= uVar1) {
        __n = param_3;
      }
      memcpy(param_2,__src,__n);
      uVar1 = *param_1 - __n;
      param_2 = (void *)((long)param_2 + __n);
      param_3 = param_3 - __n;
      *param_1 = uVar1;
      param_1[1] = param_1[1] + __n;
    } while (param_3 != 0);
  }
  return 0;
}


