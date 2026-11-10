/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cccf8c; name: FUN_00cccf8c
 */


void FUN_00cccf8c(undefined8 *param_1,void *param_2,void *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  undefined8 uVar5;
  ulong uVar6;
  void *__dest;
  long lVar7;
  long lVar8;
  
  uVar6 = (long)param_3 - (long)param_2 >> 4;
  __dest = (void *)*param_1;
  if ((ulong)(param_1[2] - (long)__dest >> 4) < uVar6) {
    FUN_00ccd250(param_1);
    uVar5 = FUN_00ccd184(param_1,uVar6);
    FUN_00ccd2d4(param_1,uVar5);
    lVar8 = param_1[1];
    lVar7 = lVar8;
    if (param_2 != param_3) {
      puVar2 = param_1 + 3;
      FUN_00ccd1d4(puVar2,lVar8,param_2);
      lVar7 = lVar8 + 0x10;
      if ((void *)((long)param_2 + 0x10) != param_3) {
        FUN_00ccd1d4(puVar2,lVar7);
        lVar7 = lVar8 + 0x20;
        if ((void *)((long)param_2 + 0x20) != param_3) {
          FUN_00ccd1d4(puVar2,lVar7);
          lVar7 = lVar8 + 0x30;
          for (param_2 = (void *)((long)param_2 + 0x30); param_2 != param_3;
              param_2 = (void *)((long)param_2 + 0x10)) {
            FUN_00ccd1d4(puVar2,lVar7,param_2);
            lVar7 = lVar7 + 0x10;
          }
        }
      }
    }
    param_1[1] = lVar7;
  }
  else {
    pvVar3 = (void *)((long)param_2 + (param_1[1] - (long)__dest));
    uVar1 = param_1[1] - (long)__dest >> 4;
    pvVar4 = pvVar3;
    if (uVar6 <= uVar1) {
      pvVar4 = param_3;
    }
    __n = (long)pvVar4 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar1 < uVar6) {
      lVar8 = param_1[1];
      lVar7 = lVar8;
      if (pvVar4 != param_3) {
        puVar2 = param_1 + 3;
        FUN_00ccd1d4(puVar2,lVar8,pvVar3);
        lVar7 = lVar8 + 0x10;
        if ((void *)((long)pvVar3 + 0x10) != param_3) {
          FUN_00ccd1d4(puVar2,lVar7,(void *)((long)pvVar3 + 0x10));
          lVar7 = lVar8 + 0x20;
          if ((void *)((long)pvVar3 + 0x20) != param_3) {
            FUN_00ccd1d4(puVar2,lVar7,(void *)((long)pvVar3 + 0x20));
            lVar7 = lVar8 + 0x30;
            for (pvVar3 = (void *)((long)pvVar3 + 0x30); pvVar3 != param_3;
                pvVar3 = (void *)((long)pvVar3 + 0x10)) {
              FUN_00ccd1d4(puVar2,lVar7,pvVar3);
              lVar7 = lVar7 + 0x10;
            }
          }
        }
      }
      param_1[1] = lVar7;
    }
    else {
      param_1[1] = (long)__dest + __n;
    }
  }
  return;
}


