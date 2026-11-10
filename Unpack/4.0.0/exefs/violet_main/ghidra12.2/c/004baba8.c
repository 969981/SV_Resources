/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004baba8; name: FUN_004baba8
 */


void FUN_004baba8(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 **__n;
  undefined8 **ppuVar1;
  byte bVar2;
  undefined8 **ppuVar3;
  bool bVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *__s2;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 **ppuVar12;
  byte *__s1;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 **local_68;
  undefined8 **local_60;
  byte *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 ***local_38;
  
  if (*(char *)(*param_1 + 0x29) != '\0') {
    if (param_2 == (undefined8 *)0x0) {
      return;
    }
    puVar6 = (ulong *)param_2[6];
    if ((puVar6 != (ulong *)0x0) && (local_48 = param_2, *puVar6 != 0xffffffffffffffff)) {
      local_60 = &local_48;
      local_68 = (undefined8 **)PTR_LAB_047cd728;
      local_38 = &local_68;
      std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)&LAB_004c9500);
    }
    if (param_2[0xd] == 0) {
      return;
    }
  }
  if (*(char *)(param_2[0xf] + 0x4d) != '\0') {
    puVar6 = (ulong *)param_2[6];
    if (puVar6 != (ulong *)0x0) {
      local_48 = (undefined8 *)PTR_LAB_047cd728;
      local_50 = param_2;
      if (*puVar6 != 0xffffffffffffffff) {
        local_68 = &local_48;
        local_60 = &local_50;
        local_38 = &local_68;
        std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)&LAB_004c0750);
      }
    }
    if (*(int *)(param_2 + 7) != 0xb) {
      FUN_004aa7f4(param_1,param_2[1],param_3,2,
                   "[lazy = true] can only be specified for submessage fields.");
    }
  }
  if (*(char *)(param_2[0xf] + 0x4c) != '\0') {
    if (*(int *)((long)param_2 + 0x3c) == 3) {
      puVar6 = (ulong *)param_2[6];
      if (puVar6 != (ulong *)0x0) {
        local_48 = (undefined8 *)PTR_LAB_047cd728;
        local_50 = param_2;
        if (*puVar6 != 0xffffffffffffffff) {
          local_68 = &local_48;
          local_60 = &local_50;
          local_38 = &local_68;
          std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)&LAB_004c0750);
        }
      }
      if (3 < *(int *)(param_2 + 7) - 9U) goto LAB_004bad20;
    }
    FUN_004aa7f4(param_1,param_2[1],param_3,2,
                 "[packed = true] can only be specified for repeated primitive fields.");
  }
LAB_004bad20:
  if (((param_2[10] != 0) &&
      (lVar13 = *(long *)(param_2[10] + 0x20), lVar7 = FUN_004dd064(), lVar13 != lVar7)) &&
     (*(char *)(*(long *)(param_2[10] + 0x20) + 0x48) != '\0')) {
    if (*(char *)((long)param_2 + 0x43) == '\0') {
      uVar9 = param_2[1];
      pcVar11 = "MessageSets cannot have fields, only extensions.";
      uVar10 = 0;
    }
    else {
      if (*(int *)((long)param_2 + 0x3c) == 1) {
        puVar6 = (ulong *)param_2[6];
        if (puVar6 != (ulong *)0x0) {
          local_48 = (undefined8 *)PTR_LAB_047cd728;
          local_50 = param_2;
          if (*puVar6 != 0xffffffffffffffff) {
            local_68 = &local_48;
            local_60 = &local_50;
            local_38 = &local_68;
            std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)&LAB_004c0750);
          }
        }
        if (*(int *)(param_2 + 7) == 0xb) goto LAB_004bade4;
      }
      uVar9 = param_2[1];
      pcVar11 = "Extensions of MessageSets must be optional messages.";
      uVar10 = 2;
    }
    FUN_004aa7f4(param_1,uVar9,param_3,uVar10,pcVar11);
  }
LAB_004bade4:
  lVar7 = param_2[5];
  if ((((lVar7 != 0) &&
       (lVar14 = *(long *)(lVar7 + 0x88), lVar13 = FUN_004db400(), lVar14 != lVar13)) &&
      ((*(int *)(*(long *)(lVar7 + 0x88) + 0xa0) == 3 && (param_2[10] != 0)))) &&
     (((lVar7 = *(long *)(param_2[10] + 0x10), lVar7 == 0 ||
       (lVar14 = *(long *)(lVar7 + 0x88), lVar13 = FUN_004db400(), lVar14 == lVar13)) ||
      (*(int *)(*(long *)(lVar7 + 0x88) + 0xa0) != 3)))) {
    FUN_004aa7f4(param_1,param_2[1],param_3,3,
                 "Extensions to non-lite types can only be declared in non-lite files.  Note that you cannot extend a non-lite type to contain a lite type, but the reverse is allowed."
                );
  }
  puVar6 = (ulong *)param_2[6];
  if (puVar6 != (ulong *)0x0) {
    local_48 = (undefined8 *)PTR_LAB_047cd728;
    local_50 = param_2;
    if (*puVar6 != 0xffffffffffffffff) {
      local_68 = &local_48;
      local_60 = &local_50;
      local_38 = &local_68;
      std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)&LAB_004c0750);
    }
  }
  if (((*(int *)(param_2 + 7) == 0xb) && (*(char *)(*(long *)(param_2[0xd] + 0x20) + 0x4b) != '\0'))
     && (uVar8 = FUN_004bc044(param_1,param_2,param_3), (uVar8 & 1) == 0)) {
    FUN_004aa7f4(param_1,param_2[1],param_3,2,
                 "map_entry should not be set explicitly. Use map<KeyType, ValueType> instead.");
  }
  FUN_004bc488(param_1,param_2,param_3);
  if (*(char *)((long)param_2 + 0x43) == '\0') {
    return;
  }
  if (*(char *)((long)param_2 + 0x42) == '\0') {
    return;
  }
  pbVar15 = (byte *)param_2[4];
  FUN_004b5d90(&local_68,*param_2);
  ppuVar3 = local_68;
  bVar2 = *pbVar15;
  ppuVar12 = (undefined8 **)(ulong)(bVar2 >> 1);
  __n = ppuVar12;
  if ((bVar2 & 1) != 0) {
    __n = *(undefined8 ***)(pbVar15 + 8);
  }
  ppuVar1 = (undefined8 **)((ulong)local_68 >> 1 & 0x7f);
  if (((ulong)local_68 & 1) != 0) {
    ppuVar1 = local_60;
  }
  if (__n == ppuVar1) {
    __s1 = *(byte **)(pbVar15 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = pbVar15 + 1;
    }
    __s2 = (byte *)((ulong)&local_68 | 1);
    if (((ulong)local_68 & 1) != 0) {
      __s2 = local_58;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != (undefined8 **)0x0) {
        do {
          pbVar15 = pbVar15 + 1;
          if (*pbVar15 != *__s2) goto LAB_004baf98;
          ppuVar12 = (undefined8 **)((long)ppuVar12 + -1);
          __s2 = __s2 + 1;
        } while (ppuVar12 != (undefined8 **)0x0);
      }
    }
    else if (__n != (undefined8 **)0x0) {
      iVar5 = memcmp(__s1,__s2,(size_t)__n);
      bVar4 = iVar5 != 0;
      goto joined_r0x004baf9c;
    }
    bVar4 = false;
  }
  else {
LAB_004baf98:
    bVar4 = true;
  }
joined_r0x004baf9c:
  if (((ulong)ppuVar3 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_58);
  }
  if (bVar4) {
    FUN_004aa7f4(param_1,param_2[1],param_3,7,"option json_name is not allowed on extension fields."
                );
  }
  return;
}


