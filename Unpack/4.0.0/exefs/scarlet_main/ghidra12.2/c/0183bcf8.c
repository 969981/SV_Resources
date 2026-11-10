/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0183bcf8; name: FUN_0183bcf8
 */


void FUN_0183bcf8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  uint uVar17;
  void *pvVar18;
  char local_108 [4];
  byte local_104 [4];
  long *local_100 [11];
  undefined8 local_a8;
  undefined6 uStack_a0;
  undefined2 local_9a;
  undefined6 uStack_98;
  undefined8 local_92;
  undefined6 local_8a;
  undefined2 uStack_84;
  undefined6 uStack_82;
  undefined7 local_7c;
  undefined4 uStack_75;
  undefined8 local_70;
  undefined6 uStack_68;
  undefined2 local_62;
  undefined6 uStack_60;
  byte local_5a;
  undefined1 local_59;
  byte local_58;
  undefined1 local_57;
  
  uVar16 = *(undefined8 *)(param_1 + 8);
  local_104[0] = 0;
  uVar17 = (uint)*(byte *)(param_3 + 2);
  if (*(char *)(param_3[1] + 0x10) == '\0') {
    uVar3 = FUN_0183d2dc(*(undefined8 *)(param_1 + 0x38),*param_3);
  }
  else {
    uVar3 = 0;
  }
  pvVar18 = (void *)param_3[3];
  memset(pvVar18,0,0x8f);
  *(undefined8 *)((long)pvVar18 + 0x90) = 0;
  *(undefined8 *)((long)pvVar18 + 0x98) = 0;
  *(undefined8 *)((long)pvVar18 + 0xa0) = 0;
  *(undefined2 *)((long)pvVar18 + 0xa8) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  cVar4 = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),
                       *(undefined4 *)((long)param_3 + 0x14));
  if ((cVar4 != '\n') &&
     (uVar7 = FUN_0183cf60(*(undefined8 *)(param_1 + 0x38),uVar1,uVar2), (uVar7 & 1) != 0)) {
    uVar17 = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),
                          *(undefined4 *)((long)param_3 + 0x14));
  }
  FUN_0183c128(param_1,uVar16,*(undefined8 *)(param_1 + 0x10),*param_3,uVar17,param_3[1],uVar3,
               param_3[3],local_104);
  bVar5 = FUN_0183c518(*(undefined8 *)(param_1 + 0x38),*param_3,local_104[0]);
  local_104[0] = bVar5 & 1;
  local_108[0] = '\0';
  puVar10 = (undefined8 *)param_3[3];
  if ((*(char *)((long)puVar10 + 0xa6) == '\x01') && ((bVar5 & 1) != 0)) {
    lVar8 = FUN_0183c16c(param_1,*puVar10,*param_3,param_3[1],local_108);
    pvVar18 = (void *)param_3[3];
    memset(pvVar18,0,0x8f);
    *(undefined8 *)((long)pvVar18 + 0x90) = 0;
    *(undefined8 *)((long)pvVar18 + 0x98) = 0;
    *(undefined8 *)((long)pvVar18 + 0xa0) = 0;
    *(undefined2 *)((long)pvVar18 + 0xa8) = 0;
    if (lVar8 != 0) {
      plVar11 = (long *)param_3[3];
      uVar7 = (ulong)*(byte *)((long)plVar11 + 0xa6);
      if (uVar7 < 0xb) {
        if (*(byte *)((long)plVar11 + 0xa6) != 0) {
          plVar15 = plVar11;
          uVar12 = uVar7;
          do {
            if (*plVar15 == lVar8) goto LAB_0183be88;
            uVar12 = uVar12 - 1;
            plVar15 = plVar15 + 1;
          } while (uVar12 != 0);
        }
        plVar11[uVar7] = lVar8;
        *(undefined1 *)((long)plVar11 + (ulong)*(byte *)((long)plVar11 + 0xa6) + 0x84) = 0;
        *(undefined2 *)((long)plVar11 + (ulong)*(byte *)((long)plVar11 + 0xa6) * 2 + 0x58) = 0;
        *(undefined2 *)((long)plVar11 + (ulong)*(byte *)((long)plVar11 + 0xa6) * 2 + 0x6e) = 0;
        bVar5 = *(char *)((long)plVar11 + 0xa6) + 1;
        *(byte *)((long)plVar11 + 0xa6) = bVar5;
        if (*(byte *)((long)plVar11 + 0xa7) < bVar5) {
          *(byte *)((long)plVar11 + 0xa7) = bVar5;
        }
      }
    }
LAB_0183be88:
    if (local_108[0] != '\0') goto LAB_0183bea0;
    puVar10 = (undefined8 *)param_3[3];
  }
  FUN_0183c7fc(param_1,*param_3,puVar10);
LAB_0183bea0:
  FUN_0183c268(param_1);
  puVar10 = (undefined8 *)param_3[3];
  memcpy(local_100,puVar10,0x58);
  local_a8 = puVar10[0xb];
  uStack_a0 = (undefined6)puVar10[0xc];
  local_9a = (undefined2)*(undefined8 *)((long)puVar10 + 0x66);
  uStack_98 = (undefined6)((ulong)*(undefined8 *)((long)puVar10 + 0x66) >> 0x10);
  local_92 = *(undefined8 *)((long)puVar10 + 0x6e);
  local_8a = (undefined6)*(undefined8 *)((long)puVar10 + 0x76);
  uStack_84 = (undefined2)*(undefined8 *)((long)puVar10 + 0x7c);
  uStack_82 = (undefined6)((ulong)*(undefined8 *)((long)puVar10 + 0x7c) >> 0x10);
  uStack_75 = *(undefined4 *)((long)puVar10 + 0x8b);
  local_7c = (undefined7)*(undefined8 *)((long)puVar10 + 0x84);
  puVar13 = puVar10 + 0x12;
  local_70 = *puVar13;
  uStack_60 = (undefined6)((ulong)*(undefined8 *)((long)puVar10 + 0x9e) >> 0x10);
  uStack_68 = (undefined6)puVar10[0x13];
  local_62 = (undefined2)((ulong)puVar10[0x13] >> 0x30);
  local_5a = *(byte *)((long)puVar10 + 0xa6);
  uVar7 = (ulong)local_5a;
  uVar3 = *(undefined1 *)((long)puVar10 + 0xa7);
  local_57 = *(undefined1 *)((long)puVar10 + 0xa9);
  uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0);
  local_58 = 0;
  local_59 = uVar3;
  if (local_5a == 0) {
    memset(puVar10,0,0x8f);
    *puVar13 = 0;
    puVar10[0x13] = 0;
    puVar10[0x14] = 0;
    *(undefined2 *)(puVar10 + 0x15) = 0;
  }
  else {
    local_58 = 1;
    plVar11 = local_100[0];
    while (plVar11 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar11 + 0x200))(plVar11);
      if ((uVar7 & 1) == 0) {
        uVar6 = (**(code **)(*plVar11 + 0x98))(plVar11);
        cVar4 = FUN_01481420(uVar16,uVar6);
        if (cVar4 == '\n') goto LAB_0183c100;
      }
      else {
LAB_0183c100:
        FUN_0167bf08(local_100,plVar11);
      }
      bVar5 = local_5a;
      uVar12 = (ulong)local_58;
      uVar7 = (ulong)local_5a;
      if (local_5a <= local_58) {
        memset(puVar10,0,0x8f);
        *puVar13 = 0;
        puVar10[0x13] = 0;
        puVar10[0x14] = 0;
        *(undefined2 *)(puVar10 + 0x15) = 0;
        if (bVar5 == 0) goto LAB_0183bfe8;
        goto LAB_0183c028;
      }
      local_58 = local_58 + 1;
      plVar11 = local_100[uVar12];
    }
    memset(puVar10,0,0x8f);
    *puVar13 = 0;
    puVar10[0x13] = 0;
    puVar10[0x14] = 0;
    *(undefined2 *)(puVar10 + 0x15) = 0;
LAB_0183c028:
    uVar12 = 0;
    do {
      plVar11 = local_100[uVar12];
      uVar9 = (**(code **)(*plVar11 + 0x200))(plVar11);
      if ((plVar11 != (long *)0x0) && ((uVar9 & 1) == 0)) {
        uVar9 = (ulong)*(byte *)((long)puVar10 + 0xa6);
        if (uVar9 < 0xb) {
          puVar13 = puVar10;
          uVar14 = uVar9;
          if (*(byte *)((long)puVar10 + 0xa6) != 0) {
            do {
              if ((long *)*puVar13 == plVar11) goto LAB_0183c0a8;
              uVar14 = uVar14 - 1;
              puVar13 = puVar13 + 1;
            } while (uVar14 != 0);
          }
          puVar10[uVar9] = plVar11;
          *(undefined1 *)((long)puVar10 + (ulong)*(byte *)((long)puVar10 + 0xa6) + 0x84) = 0;
          *(undefined2 *)((long)puVar10 + (ulong)*(byte *)((long)puVar10 + 0xa6) * 2 + 0x58) = 0;
          *(undefined2 *)((long)puVar10 + (ulong)*(byte *)((long)puVar10 + 0xa6) * 2 + 0x6e) = 0;
          bVar5 = *(char *)((long)puVar10 + 0xa6) + 1;
          *(byte *)((long)puVar10 + 0xa6) = bVar5;
          if (*(byte *)((long)puVar10 + 0xa7) < bVar5) {
            *(byte *)((long)puVar10 + 0xa7) = bVar5;
          }
        }
      }
LAB_0183c0a8:
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar7);
  }
LAB_0183bfe8:
  *(undefined1 *)((long)puVar10 + 0xa9) = uVar3;
  return;
}


