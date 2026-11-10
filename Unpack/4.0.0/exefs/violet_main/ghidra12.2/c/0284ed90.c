/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284ed90; name: FUN_0284ed90
 */


void FUN_0284ed90(undefined8 *param_1,void *param_2,undefined8 param_3,void *param_4,long param_5,
                 undefined8 param_6)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *__src;
  long *plVar6;
  void *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_38;
  
  __src = (void *)param_1[4];
  local_68 = param_2;
  puStack_60 = param_1;
  local_58 = param_3;
  local_38 = param_6;
  if (__src == (void *)0x0) {
    FUN_0284eee8(&local_38,param_1,param_2);
    pvVar4 = (void *)((long)param_2 + param_5 * 8);
  }
  else {
    pvVar4 = param_2;
    if (__src != param_4) {
      memmove(param_2,__src,(long)param_4 - (long)__src);
      pvVar4 = (void *)((long)param_2 + ((long)param_4 - (long)__src));
    }
    FUN_0284eee8(&local_38,param_1,pvVar4);
    pvVar4 = (void *)((long)pvVar4 + param_5 * 8);
    __n = (long)__src + (param_1[5] * 8 - (long)param_4);
    if (__n != 0) {
      memmove(pvVar4,param_4,__n);
      pvVar4 = (void *)((long)pvVar4 + __n);
    }
    lVar3 = param_1[6];
    plVar6 = (long *)*param_1;
    uVar5 = param_1[4];
    uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_00c4e600();
      if (0 < *(int *)(lVar2 + 0x12c8)) {
        FUN_00c48fe8(plVar6,uVar5,lVar3 << 3,8);
        goto LAB_0284ee70;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,lVar3 << 3,8);
  }
LAB_0284ee70:
  param_1[4] = param_2;
  param_1[5] = (long)pvVar4 - (long)param_2 >> 3;
  param_1[6] = param_3;
  local_68 = (void *)0x0;
  FUN_0175a8f8(&local_68);
  return;
}


