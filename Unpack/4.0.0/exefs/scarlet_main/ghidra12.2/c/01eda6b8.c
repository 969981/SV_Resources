/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eda6b8; name: FUN_01eda6b8
 */


void FUN_01eda6b8(undefined8 *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  size_t __n;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  void *__dest;
  ulong uVar6;
  
  __dest = (void *)*param_1;
  uVar5 = ((long)param_3 - (long)param_2 >> 3) * -0xb81702e05c0b817;
  if ((ulong)((param_1[2] - (long)__dest >> 3) * -0xb81702e05c0b817) < uVar5) {
    FUN_01eda808(param_1);
    uVar2 = FUN_01ed9d7c(param_1,uVar5);
    FUN_01c8e824(param_1,uVar2);
    lVar3 = param_1[1];
    if (param_2 != param_3) {
      do {
        FUN_01c8e8b0(param_1 + 3,lVar3,param_2);
        param_2 = (void *)((long)param_2 + 0x2c8);
        lVar3 = lVar3 + 0x2c8;
      } while (param_3 != param_2);
    }
    param_1[1] = lVar3;
  }
  else {
    uVar6 = (param_1[1] - (long)__dest >> 3) * -0xb81702e05c0b817;
    pvVar4 = (void *)((long)param_2 + (param_1[1] - (long)__dest));
    pvVar1 = pvVar4;
    if (uVar5 <= uVar6) {
      pvVar1 = param_3;
    }
    __n = (long)pvVar1 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar6 < uVar5) {
      lVar3 = param_1[1];
      if (pvVar1 != param_3) {
        do {
          FUN_01c8e8b0(param_1 + 3,lVar3,pvVar4);
          pvVar4 = (void *)((long)pvVar4 + 0x2c8);
          lVar3 = lVar3 + 0x2c8;
        } while (param_3 != pvVar4);
      }
      param_1[1] = lVar3;
    }
    else {
      param_1[1] = (long)__dest + __n;
    }
  }
  return;
}


