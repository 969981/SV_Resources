/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00392e60; name: FUN_00392e60
 */


void FUN_00392e60(char param_1,void *param_2,ulong param_3,uint param_4,int param_5,
                 undefined8 *param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_5 < 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (param_5 - (int)param_3) - (uint)(param_1 != '\0');
    uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  }
  if ((param_4 >> 1 & 1) == 0) {
    uVar9 = 0;
    if ((param_4 & 0x20) != 0) {
      uVar9 = uVar7;
    }
    uVar8 = 0;
    if (uVar7 != 0) {
      if ((param_4 & 0x20) == 0) {
        puVar3 = (undefined8 *)param_6[3];
        uVar5 = (ulong)uVar7;
        param_6[2] = param_6[2] + uVar5;
        uVar1 = (long)param_6 + (0x420 - (long)puVar3);
        if (uVar1 < uVar5) {
          puVar2 = param_6 + 4;
          uVar5 = uVar5 - uVar1;
          if (uVar1 != 0) {
            memset(puVar3,0x20,uVar1);
            puVar3 = (undefined8 *)(param_6[3] + uVar1);
            param_6[3] = puVar3;
          }
          (*(code *)param_6[1])(*param_6,puVar2,(long)puVar3 - (long)puVar2);
          param_6[3] = puVar2;
          for (; puVar3 = puVar2, 0x400 < uVar5; uVar5 = uVar5 - 0x400) {
            memset(puVar2,0x20,0x400);
            lVar4 = param_6[3];
            param_6[3] = lVar4 + 0x400;
            (*(code *)param_6[1])(*param_6,puVar2,(lVar4 + 0x400) - (long)puVar2);
            param_6[3] = puVar2;
          }
        }
        memset(puVar3,0x20,uVar5);
        param_6[3] = param_6[3] + uVar5;
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
      }
    }
  }
  else {
    uVar9 = 0;
    uVar8 = uVar7;
  }
  if (param_1 != '\0') {
    pcVar6 = (char *)param_6[3];
    param_6[2] = param_6[2] + 1;
    if (pcVar6 == (char *)(param_6 + 0x84)) {
      pcVar6 = (char *)(param_6 + 4);
      (*(code *)param_6[1])(*param_6,pcVar6,0x400);
      param_6[3] = pcVar6;
    }
    *pcVar6 = param_1;
    param_6[3] = param_6[3] + 1;
  }
  if (uVar9 != 0) {
    puVar3 = (undefined8 *)param_6[3];
    uVar5 = (ulong)(int)uVar9;
    param_6[2] = param_6[2] + uVar5;
    uVar1 = (long)param_6 + (0x420 - (long)puVar3);
    if (uVar1 < uVar5) {
      puVar2 = param_6 + 4;
      uVar5 = uVar5 - uVar1;
      if (uVar1 != 0) {
        memset(puVar3,0x30,uVar1);
        puVar3 = (undefined8 *)(param_6[3] + uVar1);
        param_6[3] = puVar3;
      }
      (*(code *)param_6[1])(*param_6,puVar2,(long)puVar3 - (long)puVar2);
      param_6[3] = puVar2;
      for (; puVar3 = puVar2, 0x400 < uVar5; uVar5 = uVar5 - 0x400) {
        memset(puVar2,0x30,0x400);
        lVar4 = param_6[3];
        param_6[3] = lVar4 + 0x400;
        (*(code *)param_6[1])(*param_6,puVar2,(lVar4 + 0x400) - (long)puVar2);
        param_6[3] = puVar2;
      }
    }
    memset(puVar3,0x30,uVar5);
    param_6[3] = param_6[3] + uVar5;
  }
  if (param_3 != 0) {
    __dest = (void *)param_6[3];
    param_6[2] = param_6[2] + param_3;
    if (param_3 < (ulong)((long)param_6 + (0x420 - (long)__dest))) {
      memcpy(__dest,param_2,param_3);
      param_6[3] = param_6[3] + param_3;
    }
    else {
      puVar3 = param_6 + 4;
      (*(code *)param_6[1])(*param_6,puVar3,(long)__dest - (long)puVar3);
      param_6[3] = puVar3;
      (*(code *)param_6[1])(*param_6,param_2,param_3);
    }
  }
  if (uVar8 != 0) {
    puVar3 = (undefined8 *)param_6[3];
    uVar5 = (ulong)(int)uVar8;
    param_6[2] = param_6[2] + uVar5;
    uVar1 = (long)param_6 + (0x420 - (long)puVar3);
    if (uVar1 < uVar5) {
      puVar2 = param_6 + 4;
      uVar5 = uVar5 - uVar1;
      if (uVar1 != 0) {
        memset(puVar3,0x20,uVar1);
        puVar3 = (undefined8 *)(param_6[3] + uVar1);
        param_6[3] = puVar3;
      }
      (*(code *)param_6[1])(*param_6,puVar2,(long)puVar3 - (long)puVar2);
      param_6[3] = puVar2;
      for (; puVar3 = puVar2, 0x400 < uVar5; uVar5 = uVar5 - 0x400) {
        memset(puVar2,0x20,0x400);
        lVar4 = param_6[3];
        param_6[3] = lVar4 + 0x400;
        (*(code *)param_6[1])(*param_6,puVar2,(lVar4 + 0x400) - (long)puVar2);
        param_6[3] = puVar2;
      }
    }
    memset(puVar3,0x20,uVar5);
    param_6[3] = param_6[3] + uVar5;
  }
  return;
}


