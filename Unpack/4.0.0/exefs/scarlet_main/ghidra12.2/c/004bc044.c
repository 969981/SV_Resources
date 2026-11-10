/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004bc044; name: FUN_004bc044
 */


undefined8 FUN_004bc044(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 **__n;
  undefined8 **ppuVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  byte *__s2;
  undefined8 **ppuVar8;
  byte *__s1;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 **ppuVar11;
  undefined8 ***local_78 [2];
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 **ppuStack_58;
  byte *local_50;
  undefined8 *local_48;
  undefined8 *local_38;
  
  puVar6 = (ulong *)param_2[6];
  if ((puVar6 != (ulong *)0x0) && (local_38 = param_2, *puVar6 != 0xffffffffffffffff)) {
    ppuStack_58 = &local_38;
    local_60 = (undefined8 **)PTR_LAB_047cd728;
    local_78[0] = &local_60;
    std::__call_once(puVar6,local_78,(_func_void_void_ptr *)&LAB_004c9500);
  }
  puVar9 = (undefined8 *)param_2[0xd];
  if (*(int *)(puVar9 + 0x10) != 0) {
    return 0;
  }
  if (*(int *)((long)param_2 + 0x3c) != 3) {
    return 0;
  }
  if (*(int *)((long)puVar9 + 0x7c) != 0) {
    return 0;
  }
  if (*(int *)((long)puVar9 + 0x74) != 0) {
    return 0;
  }
  if (*(int *)(puVar9 + 0xf) != 0) {
    return 0;
  }
  if (*(int *)(puVar9 + 0xd) != 2) {
    return 0;
  }
  pbVar10 = (byte *)*puVar9;
  FUN_004b5c40(local_78,*param_2,0);
                    /* try { // try from 004bc0f4 to 004bc107 has its CatchHandler @ 004bc464 */
  puVar7 = (undefined8 *)FUN_0021d540(local_78,"Entry",5);
  ppuStack_58 = (undefined8 **)puVar7[1];
  ppuVar11 = (undefined8 **)*puVar7;
  local_50 = (byte *)puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  bVar2 = *pbVar10;
  ppuVar8 = (undefined8 **)(ulong)(bVar2 >> 1);
  __n = ppuVar8;
  if ((bVar2 & 1) != 0) {
    __n = *(undefined8 ***)(pbVar10 + 8);
  }
  ppuVar1 = (undefined8 **)((ulong)ppuVar11 >> 1 & 0x7f);
  if (((ulong)ppuVar11 & 1) != 0) {
    ppuVar1 = ppuStack_58;
  }
  local_60 = ppuVar11;
  if (__n == ppuVar1) {
    __s1 = *(byte **)(pbVar10 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = pbVar10 + 1;
    }
    __s2 = (byte *)((ulong)&local_60 | 1);
    if (((ulong)ppuVar11 & 1) != 0) {
      __s2 = local_50;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != (undefined8 **)0x0) {
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *__s2) goto LAB_004bc1ac;
          ppuVar8 = (undefined8 **)((long)ppuVar8 + -1);
          __s2 = __s2 + 1;
        } while (ppuVar8 != (undefined8 **)0x0);
      }
    }
    else if (__n != (undefined8 **)0x0) {
      iVar5 = memcmp(__s1,__s2,(size_t)__n);
      if (iVar5 != 0) goto LAB_004bc1ac;
    }
    bVar4 = param_2[10] != puVar9[3];
  }
  else {
LAB_004bc1ac:
    bVar4 = true;
  }
  if (((ulong)ppuVar11 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  if (((ulong)local_78[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  if (!bVar4) {
    if (*(char *)(puVar9[4] + 0x4b) == '\0') {
      puVar7 = (undefined8 *)0x0;
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)puVar9[5];
      puVar9 = puVar7 + 0x13;
    }
    if ((*(int *)((long)puVar7 + 0x3c) == 1) && (*(int *)((long)puVar7 + 0x44) == 1)) {
      pbVar10 = (byte *)*puVar7;
      if ((*pbVar10 & 1) == 0) {
        if ((*pbVar10 & 0xfe) != 6) {
          return 0;
        }
        pbVar10 = pbVar10 + 1;
      }
      else {
        if (*(long *)(pbVar10 + 8) != 3) {
          return 0;
        }
        pbVar10 = *(byte **)(pbVar10 + 0x10);
      }
      if (((*(short *)pbVar10 == 0x656b && pbVar10[2] == 0x79) &&
          (*(int *)((long)puVar9 + 0x3c) == 1)) && (*(int *)((long)puVar9 + 0x44) == 2)) {
        pbVar10 = (byte *)*puVar9;
        if ((*pbVar10 & 1) == 0) {
          if ((*pbVar10 & 0xfe) != 10) {
            return 0;
          }
          pbVar10 = pbVar10 + 1;
        }
        else {
          if (*(long *)(pbVar10 + 8) != 5) {
            return 0;
          }
          pbVar10 = *(byte **)(pbVar10 + 0x10);
        }
        if (*(int *)pbVar10 == 0x756c6176 && pbVar10[4] == 0x65) {
          puVar6 = (ulong *)puVar7[6];
          if (puVar6 != (ulong *)0x0) {
            local_48 = puVar7;
            local_38 = (undefined8 *)PTR_LAB_047cd728;
            if (*puVar6 != 0xffffffffffffffff) {
              local_60 = &local_38;
              ppuStack_58 = &local_48;
              local_78[0] = &local_60;
              std::__call_once(puVar6,local_78,(_func_void_void_ptr *)&LAB_004c0750);
            }
          }
          uVar3 = *(int *)(puVar7 + 7) - 1;
          if ((uVar3 < 0xe) && ((0x2e03U >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
            FUN_004aa7f4(param_1,param_2[1],param_3,2,
                         (&PTR_s_Key_in_map_fields_cannot_be_floa_044c46a0)[(int)uVar3]);
          }
          puVar6 = (ulong *)puVar9[6];
          if (puVar6 != (ulong *)0x0) {
            local_38 = (undefined8 *)PTR_LAB_047cd728;
            local_48 = puVar9;
            if (*puVar6 != 0xffffffffffffffff) {
              local_60 = &local_38;
              ppuStack_58 = &local_48;
              local_78[0] = &local_60;
              std::__call_once(puVar6,local_78,(_func_void_void_ptr *)&LAB_004c0750);
            }
          }
          if (*(int *)(puVar9 + 7) == 0xe) {
            puVar6 = (ulong *)puVar9[6];
            if ((puVar6 != (ulong *)0x0) && (local_38 = puVar9, *puVar6 != 0xffffffffffffffff)) {
              ppuStack_58 = &local_38;
              local_60 = (undefined8 **)PTR_LAB_047cd728;
              local_78[0] = &local_60;
              std::__call_once(puVar6,local_78,(_func_void_void_ptr *)&LAB_004c9500);
            }
            if (*(int *)(*(long *)(puVar9[0xe] + 0x30) + 0x10) != 0) {
              FUN_004aa7f4(param_1,param_2[1],param_3,2,
                           "Enum value in map must define 0 as the first value.");
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}


