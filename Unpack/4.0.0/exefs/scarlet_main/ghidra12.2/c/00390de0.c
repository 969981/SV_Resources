/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00390de0; name: FUN_00390de0
 */


void FUN_00390de0(char *param_1,ulong param_2,int param_3,undefined8 *param_4)

{
  ulong __n;
  ulong uVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong __n_00;
  ulong uVar11;
  ulong __n_01;
  undefined1 *__src;
  ulong uVar12;
  ulong __n_02;
  undefined *local_68;
  
  iVar3 = *(int *)(param_1 + 4);
  __n_00 = (ulong)iVar3;
  uVar8 = param_2 >> 0x20;
  if ((long)param_2 < 0) {
    uVar8 = 0;
  }
  uVar12 = 0;
  if (__n_00 <= uVar8) {
    uVar12 = uVar8 - __n_00;
  }
  bVar4 = (param_2 & 0xfe) == 4;
  uVar8 = (ulong)bVar4;
  __src = (undefined1 *)0x0;
  uVar7 = (uint)param_2;
  if ((bVar4) && (__src = &DAT_03c00d64, *param_1 == '\0')) {
    if ((uVar7 >> 10 & 1) == 0) {
      __src = (undefined1 *)((long)(param_2 << 0x34) >> 0x3f & 0x3bf391f);
      uVar8 = param_2 >> 0xb & 1;
    }
    else {
      uVar8 = 1;
      __src = &DAT_03c4db4d;
    }
  }
  param_1 = param_1 + (0x33 - __n_00);
  uVar11 = 0;
  if (uVar8 <= uVar12) {
    uVar11 = uVar12 - uVar8;
  }
  if (((uVar7 & 0xff) < 0x14) && ((1 << (ulong)(uVar7 & 0x1f) & 0xb0300U) != 0)) {
    uVar12 = 0;
    bVar4 = true;
    if (((uVar7 & 0xff) == 0x13 || (param_2 & 0x1000) != 0) && (iVar3 != 0)) {
      if (((uVar7 & 0xff) < 0x12) && ((1 << (ulong)(uVar7 & 0x1f) & 0x2aa00U) != 0)) {
        local_68 = &DAT_03bd96f6;
      }
      else {
        local_68 = &DAT_03c54952;
      }
      bVar4 = false;
      uVar12 = 2;
    }
    else {
      local_68 = (undefined *)0x0;
    }
  }
  else {
    uVar12 = 0;
    local_68 = (undefined *)0x0;
    bVar4 = true;
  }
  uVar1 = 0;
  if (uVar12 <= uVar11) {
    uVar1 = uVar11 - uVar12;
  }
  iVar10 = param_3;
  if (param_3 < 0) {
    iVar10 = 1;
  }
  if (((((param_2 & 0x1000) != 0) && ((uVar7 & 0xff) == 6)) && ((iVar3 == 0 || (*param_1 != '0'))))
     && (iVar10 <= iVar3)) {
    iVar10 = iVar3 + 1;
  }
  uVar11 = 0;
  if (__n_00 <= (ulong)(long)iVar10) {
    uVar11 = (long)iVar10 - __n_00;
  }
  __n_02 = 0;
  if (uVar11 <= uVar1) {
    __n_02 = uVar1 - uVar11;
  }
  uVar1 = __n_02;
  if ((param_2 & 0x200) != 0) {
    uVar1 = 0;
  }
  if ((param_3 < 0) && ((uVar7 >> 0xd & 1) != 0)) {
    uVar11 = uVar1 + uVar11;
    __n_01 = __n_02 & (long)(param_2 << 0x36) >> 0x3f;
  }
  else {
    __n_01 = __n_02 & (long)(param_2 << 0x36) >> 0x3f;
    if (uVar1 != 0) {
      puVar5 = (undefined8 *)param_4[3];
      param_4[2] = param_4[2] + uVar1;
      __n = (long)param_4 + (0x420 - (long)puVar5);
      if (__n < uVar1) {
        puVar6 = param_4 + 4;
        __n_02 = __n_02 - __n;
        if (__n != 0) {
          memset(puVar5,0x20,__n);
          puVar5 = (undefined8 *)(param_4[3] + __n);
          param_4[3] = puVar5;
        }
        (*(code *)param_4[1])(*param_4,puVar6,(long)puVar5 - (long)puVar6);
        param_4[3] = puVar6;
        for (; puVar5 = puVar6, 0x400 < __n_02; __n_02 = __n_02 - 0x400) {
          memset(puVar6,0x20,0x400);
          lVar9 = param_4[3];
          param_4[3] = lVar9 + 0x400;
          (*(code *)param_4[1])(*param_4,puVar6,(lVar9 + 0x400) - (long)puVar6);
          param_4[3] = puVar6;
        }
      }
      memset(puVar5,0x20,__n_02);
      param_4[3] = param_4[3] + __n_02;
    }
  }
  if (uVar8 != 0) {
    pvVar2 = (void *)param_4[3];
    param_4[2] = param_4[2] + uVar8;
    if (uVar8 < (ulong)((long)param_4 + (0x420 - (long)pvVar2))) {
      memcpy(pvVar2,__src,uVar8);
      param_4[3] = param_4[3] + uVar8;
    }
    else {
      puVar5 = param_4 + 4;
      (*(code *)param_4[1])(*param_4,puVar5,(long)pvVar2 - (long)puVar5);
      param_4[3] = puVar5;
      (*(code *)param_4[1])(*param_4,__src,uVar8);
    }
  }
  if (!bVar4) {
    pvVar2 = (void *)param_4[3];
    param_4[2] = param_4[2] + uVar12;
    if (uVar12 < (ulong)((long)param_4 + (0x420 - (long)pvVar2))) {
      memcpy(pvVar2,local_68,uVar12);
      param_4[3] = param_4[3] + uVar12;
    }
    else {
      puVar5 = param_4 + 4;
      (*(code *)param_4[1])(*param_4,puVar5,(long)pvVar2 - (long)puVar5);
      param_4[3] = puVar5;
      (*(code *)param_4[1])(*param_4,local_68,uVar12);
    }
  }
  if (uVar11 != 0) {
    puVar6 = (undefined8 *)param_4[3];
    param_4[2] = param_4[2] + uVar11;
    uVar8 = (long)param_4 + (0x420 - (long)puVar6);
    puVar5 = puVar6;
    if (uVar8 <= uVar11 && uVar11 - uVar8 != 0) {
      puVar5 = param_4 + 4;
      if (uVar8 != 0) {
        memset(puVar6,0x30,uVar8);
        puVar6 = (undefined8 *)(param_4[3] + uVar8);
        param_4[3] = puVar6;
      }
      (*(code *)param_4[1])(*param_4,puVar5,(long)puVar6 - (long)puVar5);
      param_4[3] = puVar5;
      for (uVar11 = uVar11 - uVar8; 0x400 < uVar11; uVar11 = uVar11 - 0x400) {
        memset(puVar5,0x30,0x400);
        lVar9 = param_4[3];
        param_4[3] = lVar9 + 0x400;
        (*(code *)param_4[1])(*param_4,puVar5,(lVar9 + 0x400) - (long)puVar5);
        param_4[3] = puVar5;
      }
    }
    memset(puVar5,0x30,uVar11);
    param_4[3] = param_4[3] + uVar11;
  }
  if (iVar3 != 0) {
    pvVar2 = (void *)param_4[3];
    param_4[2] = param_4[2] + __n_00;
    if (__n_00 < (ulong)((long)param_4 + (0x420 - (long)pvVar2))) {
      memcpy(pvVar2,param_1,__n_00);
      param_4[3] = param_4[3] + __n_00;
    }
    else {
      puVar5 = param_4 + 4;
      (*(code *)param_4[1])(*param_4,puVar5,(long)pvVar2 - (long)puVar5);
      param_4[3] = puVar5;
      (*(code *)param_4[1])(*param_4,param_1,__n_00);
    }
  }
  if (__n_01 != 0) {
    puVar6 = (undefined8 *)param_4[3];
    param_4[2] = param_4[2] + __n_01;
    uVar8 = (long)param_4 + (0x420 - (long)puVar6);
    puVar5 = puVar6;
    if (uVar8 <= __n_01 && __n_01 - uVar8 != 0) {
      puVar5 = param_4 + 4;
      if (uVar8 != 0) {
        memset(puVar6,0x20,uVar8);
        puVar6 = (undefined8 *)(param_4[3] + uVar8);
        param_4[3] = puVar6;
      }
      (*(code *)param_4[1])(*param_4,puVar5,(long)puVar6 - (long)puVar5);
      param_4[3] = puVar5;
      for (__n_01 = __n_01 - uVar8; 0x400 < __n_01; __n_01 = __n_01 - 0x400) {
        memset(puVar5,0x20,0x400);
        lVar9 = param_4[3];
        param_4[3] = lVar9 + 0x400;
        (*(code *)param_4[1])(*param_4,puVar5,(lVar9 + 0x400) - (long)puVar5);
        param_4[3] = puVar5;
      }
    }
    memset(puVar5,0x20,__n_01);
    param_4[3] = param_4[3] + __n_01;
  }
  return;
}


