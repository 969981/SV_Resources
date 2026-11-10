/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c1dc0; name: FUN_002c1dc0
 */


void FUN_002c1dc0(byte *param_1,long *param_2,long *param_3,void *param_4,size_t param_5)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  byte *__dest;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (param_2 == param_3) {
    return;
  }
  pbVar9 = (byte *)(param_2 + 4);
  if ((*pbVar9 & 1) == 0) {
    uVar3 = (ulong)(*pbVar9 >> 1);
    plVar5 = (long *)param_2[1];
  }
  else {
    uVar3 = param_2[5];
    plVar5 = (long *)param_2[1];
  }
  plVar4 = param_2;
  if (plVar5 != (long *)0x0) goto LAB_002c1e70;
  do {
    plVar5 = plVar4 + 2;
    plVar7 = (long *)*plVar5;
    if ((long *)*plVar7 != plVar4) {
      do {
        lVar8 = *plVar5;
        plVar5 = (long *)(lVar8 + 0x10);
        plVar7 = (long *)*plVar5;
      } while (*plVar7 != lVar8);
    }
    while( true ) {
      if (plVar7 == param_3) {
        if (uVar3 == 0) {
          return;
        }
                    /* try { // try from 002c1ea8 to 002c1eb3 has its CatchHandler @ 002c1fd0 */
        FUN_002a2528(param_1,uVar3);
        __dest = *(byte **)(param_1 + 0x10);
        if ((*param_1 & 1) == 0) {
          __dest = param_1 + 1;
        }
        if ((*pbVar9 & 1) == 0) {
          memcpy(__dest,(void *)((long)param_2 + 0x21),(ulong)(*pbVar9 >> 1));
          bVar1 = *pbVar9;
        }
        else {
          memcpy(__dest,(void *)param_2[6],param_2[5]);
          bVar1 = *pbVar9;
        }
        uVar3 = (ulong)bVar1;
        if ((bVar1 & 1) == 0) goto LAB_002c1efc;
        uVar3 = param_2[5];
        goto LAB_002c1f00;
      }
      if ((*(byte *)(plVar7 + 4) & 1) == 0) {
        uVar6 = (ulong)(*(byte *)(plVar7 + 4) >> 1);
        plVar5 = (long *)plVar7[1];
      }
      else {
        uVar6 = plVar7[5];
        plVar5 = (long *)plVar7[1];
      }
      uVar3 = uVar3 + param_5 + uVar6;
      plVar4 = plVar7;
      if (plVar5 == (long *)0x0) break;
LAB_002c1e70:
      do {
        plVar7 = plVar5;
        plVar5 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  } while( true );
LAB_002c1f00:
  plVar5 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    plVar5 = param_2 + 2;
    bVar2 = *(long **)*plVar5 != param_2;
    param_2 = (long *)*plVar5;
    if (bVar2) {
      do {
        lVar8 = *plVar5;
        plVar5 = (long *)(lVar8 + 0x10);
        param_2 = (long *)*plVar5;
      } while (*param_2 != lVar8);
    }
  }
  else {
    do {
      param_2 = plVar5;
      plVar5 = (long *)*param_2;
    } while ((long *)*param_2 != (long *)0x0);
  }
  if (param_2 == param_3) {
    return;
  }
  memcpy(__dest + uVar3,param_4,param_5);
  pbVar9 = (byte *)(param_2 + 4);
  __dest = __dest + uVar3 + param_5;
  if ((*pbVar9 & 1) != 0) {
    memcpy(__dest,(void *)param_2[6],param_2[5]);
    uVar3 = (ulong)*pbVar9;
    if ((*pbVar9 & 1) != 0) goto LAB_002c1fa0;
LAB_002c1efc:
    uVar3 = uVar3 >> 1;
    goto LAB_002c1f00;
  }
  memcpy(__dest,(void *)((long)param_2 + 0x21),(ulong)(*pbVar9 >> 1));
  uVar3 = (ulong)*pbVar9;
  if ((*pbVar9 & 1) == 0) goto LAB_002c1efc;
LAB_002c1fa0:
  uVar3 = param_2[5];
  goto LAB_002c1f00;
}


