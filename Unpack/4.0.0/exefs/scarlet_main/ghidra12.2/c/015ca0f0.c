/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015ca0f0; name: FUN_015ca0f0
 */


void FUN_015ca0f0(undefined8 *param_1,void *param_2,void *param_3)

{
  size_t __n;
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  void *__dest;
  ulong uVar4;
  undefined1 auStack_d0 [128];
  
  __dest = (void *)*param_1;
  uVar3 = ((long)param_3 - (long)param_2 >> 4) * -0x71c71c71c71c71c7;
  if ((ulong)((param_1[2] - (long)__dest >> 4) * -0x71c71c71c71c71c7) < uVar3) {
    FUN_015ca35c(param_1);
    uVar1 = FUN_015ca268(param_1,uVar3);
    FUN_015ca2cc(param_1,uVar1);
    pvVar2 = param_2;
  }
  else {
    uVar4 = (param_1[1] - (long)__dest >> 4) * -0x71c71c71c71c71c7;
    pvVar2 = (void *)((long)param_2 + (param_1[1] - (long)__dest));
    if (uVar3 <= uVar4) {
      pvVar2 = param_3;
    }
    __n = (long)pvVar2 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar3 <= uVar4) {
      param_1[1] = (long)__dest + __n;
      return;
    }
  }
  uVar1 = param_1[1];
  FUN_015ca3f8(param_1 + 3,pvVar2,param_3,auStack_d0 + 0xb0);
  param_1[1] = uVar1;
  return;
}


