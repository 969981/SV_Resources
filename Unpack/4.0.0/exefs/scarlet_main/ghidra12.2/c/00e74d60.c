/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e74d60; name: FUN_00e74d60
 */


void * FUN_00e74d60(void *param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  void *__src;
  ulong uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_3;
  uStack_38 = param_4;
  if ((param_1 != param_2) && (uVar1 = FUN_0219dcb0(&local_40,param_1), (uVar1 & 1) == 0)) {
    do {
      if ((void *)((long)param_2 + -0x30) == param_1) {
        return param_2;
      }
      param_1 = (void *)((long)param_1 + 0x30);
      uVar1 = FUN_0219dcb0(&local_40,param_1);
    } while ((uVar1 & 1) == 0);
  }
  __src = param_1;
  if (param_1 != param_2) {
    while (__src = (void *)((long)__src + 0x30), __src != param_2) {
      uVar1 = FUN_0219dcb0(&local_40,__src);
      if ((uVar1 & 1) == 0) {
        memcpy(param_1,__src,0x30);
        param_1 = (void *)((long)param_1 + 0x30);
      }
    }
  }
  return param_1;
}


