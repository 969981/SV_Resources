/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00391cac; name: FUN_00391cac
 */


undefined8
FUN_00391cac(undefined8 *param_1,void *param_2,ulong param_3,int param_4,uint param_5,uint param_6)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong __n;
  ulong uVar6;
  
  uVar6 = (long)param_4 & ((long)param_4 >> 0x3f ^ 0xffffffffffffffffU);
  uVar1 = (ulong)param_5;
  if (param_3 <= param_5 || 0x7fffffff < param_5) {
    uVar1 = param_3;
  }
  __n = 0;
  if (uVar1 <= uVar6) {
    __n = uVar6 - uVar1;
  }
  if ((param_6 & 1) == 0) {
    if (uVar1 < uVar6) {
      puVar3 = (undefined8 *)param_1[3];
      param_1[2] = param_1[2] + __n;
      uVar6 = (long)param_1 + (0x420 - (long)puVar3);
      puVar5 = puVar3;
      if (uVar6 <= __n && __n - uVar6 != 0) {
        puVar5 = param_1 + 4;
        if (uVar6 != 0) {
          memset(puVar3,0x20,uVar6);
          puVar3 = (undefined8 *)(param_1[3] + uVar6);
          param_1[3] = puVar3;
        }
        (*(code *)param_1[1])(*param_1,puVar5,(long)puVar3 - (long)puVar5);
        param_1[3] = puVar5;
        for (__n = __n - uVar6; 0x400 < __n; __n = __n - 0x400) {
          memset(puVar5,0x20,0x400);
          lVar4 = param_1[3];
          param_1[3] = lVar4 + 0x400;
          (*(code *)param_1[1])(*param_1,puVar5,(lVar4 + 0x400) - (long)puVar5);
          param_1[3] = puVar5;
        }
      }
      memset(puVar5,0x20,__n);
      param_1[3] = param_1[3] + __n;
    }
    if (uVar1 == 0) {
      return 1;
    }
    pvVar2 = (void *)param_1[3];
    param_1[2] = param_1[2] + uVar1;
    if ((ulong)((long)param_1 + (0x420 - (long)pvVar2)) <= uVar1) {
      puVar5 = param_1 + 4;
      (*(code *)param_1[1])(*param_1,puVar5,(long)pvVar2 - (long)puVar5);
      param_1[3] = puVar5;
      (*(code *)param_1[1])(*param_1,param_2,uVar1);
      return 1;
    }
    memcpy(pvVar2,param_2,uVar1);
    lVar4 = param_1[3] + uVar1;
  }
  else {
    if (uVar1 != 0) {
      pvVar2 = (void *)param_1[3];
      param_1[2] = param_1[2] + uVar1;
      if (uVar1 < (ulong)((long)param_1 + (0x420 - (long)pvVar2))) {
        memcpy(pvVar2,param_2,uVar1);
        param_1[3] = param_1[3] + uVar1;
      }
      else {
        puVar5 = param_1 + 4;
        (*(code *)param_1[1])(*param_1,puVar5,(long)pvVar2 - (long)puVar5);
        param_1[3] = puVar5;
        (*(code *)param_1[1])(*param_1,param_2,uVar1);
      }
    }
    if (uVar6 <= uVar1) {
      return 1;
    }
    puVar3 = (undefined8 *)param_1[3];
    param_1[2] = param_1[2] + __n;
    uVar1 = (long)param_1 + (0x420 - (long)puVar3);
    puVar5 = puVar3;
    if (uVar1 <= __n && __n - uVar1 != 0) {
      puVar5 = param_1 + 4;
      if (uVar1 != 0) {
        memset(puVar3,0x20,uVar1);
        puVar3 = (undefined8 *)(param_1[3] + uVar1);
        param_1[3] = puVar3;
      }
      (*(code *)param_1[1])(*param_1,puVar5,(long)puVar3 - (long)puVar5);
      param_1[3] = puVar5;
      for (__n = __n - uVar1; 0x400 < __n; __n = __n - 0x400) {
        memset(puVar5,0x20,0x400);
        lVar4 = param_1[3];
        param_1[3] = lVar4 + 0x400;
        (*(code *)param_1[1])(*param_1,puVar5,(lVar4 + 0x400) - (long)puVar5);
        param_1[3] = puVar5;
      }
    }
    memset(puVar5,0x20,__n);
    lVar4 = param_1[3] + __n;
  }
  param_1[3] = lVar4;
  return 1;
}


