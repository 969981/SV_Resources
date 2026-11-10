/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ba2628; name: FUN_00ba2628
 */


void FUN_00ba2628(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 uVar8;
  byte *__s2;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  byte *__s1;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  byte local_70 [16];
  long local_60;
  ulong local_58;
  size_t local_50;
  byte *local_48;
  
  lVar11 = param_2[0xf];
  if ((*(char *)(lVar11 + 0x59) != '\0') && (*(int *)((long)param_2 + 0x3c) != 0xb)) {
    FUN_00b8a120(param_1,param_2[1],param_3,2,
                 "[lazy = true] can only be specified for submessage fields.");
    lVar11 = param_2[0xf];
  }
  if ((*(char *)(lVar11 + 0x58) != '\0') &&
     ((*(int *)(param_2 + 8) != 3 || (*(int *)((long)param_2 + 0x3c) - 9U < 4)))) {
    FUN_00b8a120(param_1,param_2[1],param_3,2,
                 "[packed = true] can only be specified for repeated primitive fields.");
  }
  puVar4 = PTR_DAT_047dac30;
  if (param_2[10] != 0) {
    lVar14 = *(long *)(param_2[10] + 0x20);
    lVar11 = *(long *)PTR_DAT_047dac30;
    if (lVar11 == 0) {
      FUN_00bb5d70();
      lVar11 = *(long *)puVar4;
    }
    if ((lVar14 != lVar11) && (*(char *)(*(long *)(param_2[10] + 0x20) + 0x50) != '\0')) {
      if (*(char *)((long)param_2 + 0x44) == '\0') {
        uVar8 = param_2[1];
        pcVar10 = "MessageSets cannot have fields, only extensions.";
        uVar9 = 0;
      }
      else {
        if ((*(int *)(param_2 + 8) == 1) && (*(int *)((long)param_2 + 0x3c) == 0xb))
        goto LAB_00ba2758;
        uVar8 = param_2[1];
        pcVar10 = "Extensions of MessageSets must be optional messages.";
        uVar9 = 2;
      }
      FUN_00b8a120(param_1,uVar8,param_3,uVar9,pcVar10);
    }
  }
LAB_00ba2758:
  puVar4 = PTR_DAT_047dac18;
  lVar11 = param_2[6];
  if (lVar11 != 0) {
    lVar17 = *(long *)(lVar11 + 0x90);
    lVar14 = *(long *)PTR_DAT_047dac18;
    if (lVar14 == 0) {
      FUN_00bb5d70();
      lVar14 = *(long *)puVar4;
    }
    if (((lVar17 != lVar14) && (*(int *)(*(long *)(lVar11 + 0x90) + 0x4c) == 3)) &&
       (param_2[10] != 0)) {
      lVar11 = *(long *)(param_2[10] + 0x10);
      if (lVar11 != 0) {
        lVar17 = *(long *)(lVar11 + 0x90);
        if (lVar14 == 0) {
          FUN_00bb5d70();
          lVar14 = *(long *)puVar4;
        }
        if ((lVar17 != lVar14) && (*(int *)(*(long *)(lVar11 + 0x90) + 0x4c) == 3))
        goto LAB_00ba27e8;
      }
      FUN_00b8a120(param_1,param_2[1],param_3,3,
                   "Extensions to non-lite types can only be declared in non-lite files.  Note that you cannot extend a non-lite type to contain a lite type, but the reverse is allowed."
                  );
    }
  }
LAB_00ba27e8:
  if (*(int *)((long)param_2 + 0x3c) != 0xb) {
    return;
  }
  puVar15 = (undefined8 *)param_2[0xd];
  if (*(char *)(puVar15[4] + 0x53) == '\0') {
    return;
  }
  if (((*(int *)(puVar15 + 0xf) != 0) || (*(int *)(param_2 + 8) != 3)) ||
     ((*(int *)(puVar15 + 0xd) != 0 ||
      (((*(int *)(puVar15 + 9) != 0 || (*(int *)(puVar15 + 0xb) != 0)) ||
       (*(int *)((long)puVar15 + 0x2c) != 2)))))) goto LAB_00ba29d8;
  pbVar18 = (byte *)*puVar15;
  FUN_00b9cd10(local_70,*param_2,0);
  puVar7 = (ulong *)std::string::append((char *)local_70);
  local_50 = puVar7[1];
  local_48 = (byte *)puVar7[2];
  uVar13 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  bVar2 = *pbVar18;
  uVar12 = (ulong)(bVar2 >> 1);
  __n = uVar12;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(pbVar18 + 8);
  }
  sVar1 = uVar13 >> 1 & 0x7f;
  if ((uVar13 & 1) != 0) {
    sVar1 = local_50;
  }
  local_58 = uVar13;
  if (__n == sVar1) {
    __s1 = *(byte **)(pbVar18 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = pbVar18 + 1;
    }
    __s2 = (byte *)((ulong)&local_58 | 1);
    if ((uVar13 & 1) != 0) {
      __s2 = local_48;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        do {
          pbVar18 = pbVar18 + 1;
          if (*pbVar18 != *__s2) goto LAB_00ba2904;
          uVar12 = uVar12 - 1;
          __s2 = __s2 + 1;
        } while (uVar12 != 0);
      }
    }
    else if (__n != 0) {
      iVar6 = memcmp(__s1,__s2,__n);
      if (iVar6 != 0) goto LAB_00ba2904;
    }
    bVar5 = param_2[10] != puVar15[3];
  }
  else {
LAB_00ba2904:
    bVar5 = true;
  }
  pbVar18 = local_48;
  if (((uVar13 & 1) != 0) && (local_48 != (byte *)0x0)) {
    lVar11 = tpidr_el0;
    plVar16 = *(long **)(lVar11 + 0x30);
    if (plVar16 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar16 = DAT_04859430;
      *(long **)(lVar11 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,pbVar18,0,8);
    }
    else {
      FUN_00c48fe8(plVar16,pbVar18,0,8);
    }
  }
  if (((local_70[0] & 1) != 0) && (local_60 != 0)) {
    lVar11 = tpidr_el0;
    plVar16 = *(long **)(lVar11 + 0x30);
    if (plVar16 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar16 = DAT_04859430;
      *(long **)(lVar11 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,local_60,0,8);
    }
    else {
      FUN_00c48fe8(plVar16,local_60,0,8);
    }
  }
  if (((!bVar5) && (puVar15 = (undefined8 *)puVar15[6], *(int *)(puVar15 + 8) == 1)) &&
     (*(int *)(puVar15 + 7) == 1)) {
    pbVar18 = (byte *)*puVar15;
    uVar12 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      uVar12 = *(ulong *)(pbVar18 + 8);
    }
    if (((uVar12 == 3) &&
        (iVar6 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,0x3bfad96),
        iVar6 == 0)) && ((*(int *)(puVar15 + 0x1a) == 1 && (*(int *)(puVar15 + 0x19) == 2)))) {
      pbVar18 = (byte *)puVar15[0x12];
      uVar12 = (ulong)(*pbVar18 >> 1);
      if ((*pbVar18 & 1) != 0) {
        uVar12 = *(ulong *)(pbVar18 + 8);
      }
      if ((uVar12 == 5) &&
         (iVar6 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,0x3bd9619),
         iVar6 == 0)) {
        uVar3 = *(int *)((long)puVar15 + 0x3c) - 1;
        if ((uVar3 < 0xe) && ((0x2e03U >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
          FUN_00b8a120(param_1,param_2[1],param_3,2,
                       (&PTR_s_Key_in_map_fields_cannot_be_floa_0455a438)[(int)uVar3]);
        }
        if ((*(int *)((long)puVar15 + 0xcc) == 0xe) &&
           (*(int *)(*(long *)(puVar15[0x20] + 0x30) + 0x10) != 0)) {
          FUN_00b8a120(param_1,param_2[1],param_3,2,
                       "Enum value in map must define 0 as the first value.");
        }
        return;
      }
    }
  }
LAB_00ba29d8:
  FUN_00b8a120(param_1,param_2[1],param_3,9,
               "map_entry should not be set explicitly. Use map<KeyType, ValueType> instead.");
  return;
}


