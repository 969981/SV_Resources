/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00df5d5c; name: FUN_00df5d5c
 */


void FUN_00df5d5c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long *param_4,int *param_5,long param_6,undefined8 param_7)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ushort *puVar6;
  byte *pbVar7;
  char *pcVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 *local_80;
  char *pcStack_78;
  size_t local_70;
  long *local_68;
  
  lVar17 = param_3._8_8_;
  lVar16 = param_3._0_8_;
  lVar15 = param_2._8_8_;
  lVar14 = param_2._0_8_;
  puVar11 = &DAT_cbf29ce484222645;
  if ((*(ushort *)((long)param_5 - (long)*param_5) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)param_5 - (long)*param_5))[2], uVar9 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)PTR_DAT_047d3e30;
    pcStack_78 = *(char **)(PTR_DAT_047d3e30 + 8);
    local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar10 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    local_68 = plVar10;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  else {
    puVar1 = (uint *)((long)param_5 + uVar9);
    uVar12 = (ulong)*puVar1;
    pcVar8 = (char *)((long)puVar1 + uVar12 + 4);
    local_70 = strlen(pcVar8);
    bVar2 = *(byte *)((long)puVar1 + uVar12 + 4);
    local_80 = &DAT_cbf29ce484222645;
    if (bVar2 != 0) {
      local_80 = &DAT_cbf29ce484222645;
      pbVar7 = (byte *)((long)param_5 + uVar12 + uVar9 + 5);
      do {
        local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar2 != 0);
    }
    plVar10 = (long *)0x0;
    local_68 = (long *)0x0;
    pcStack_78 = pcVar8;
  }
  if ((*(ushort *)((long)param_5 - (long)*param_5) < 0xf) ||
     (uVar9 = (ulong)((ushort *)((long)param_5 - (long)*param_5))[7], uVar9 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)((long)param_5 + uVar9) != '\0';
  }
  FUN_00df6fe0(param_4,&local_80,param_6,bVar3,param_7);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (*(ushort *)((long)param_5 - (long)*param_5) < 9) {
    bVar3 = false;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_5 - (long)*param_5))[4];
    bVar3 = false;
    if (uVar9 != 0) {
      bVar3 = *(char *)((long)param_5 + uVar9) != '\0';
    }
  }
  *(bool *)(param_4 + 0xb7) = bVar3;
  if ((*(ushort *)((long)param_5 - (long)*param_5) < 7) ||
     (uVar9 = (ulong)((ushort *)((long)param_5 - (long)*param_5))[3], uVar9 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_5 + uVar9);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  auVar13 = FUN_00df61a4(lVar5);
  *(undefined1 (*) [16])(param_4 + 0x18) = auVar13;
  if (*(char *)((long)param_4 + 0xf4) == '\0') {
    *(undefined1 *)((long)param_4 + 0xf4) = 1;
    (**(code **)(*param_4 + 0x78))(param_4);
    param_4[0x1b] = lVar15;
    param_4[0x1a] = lVar14;
    if (*(char *)((long)param_4 + 0xf4) == '\0') {
      *(undefined1 *)((long)param_4 + 0xf4) = 1;
      (**(code **)(*param_4 + 0x78))(param_4);
      param_4[0x1d] = lVar17;
      param_4[0x1c] = lVar16;
      if (*(char *)((long)param_4 + 0xf4) == '\0') {
        *(undefined1 *)((long)param_4 + 0xf4) = 1;
        (**(code **)(*param_4 + 0x78))(param_4);
      }
      goto LAB_00df5f24;
    }
  }
  else {
    param_4[0x1b] = lVar15;
    param_4[0x1a] = lVar14;
  }
  param_4[0x1d] = lVar17;
  param_4[0x1c] = lVar16;
LAB_00df5f24:
  FUN_00df6428(param_4,param_5);
  puVar6 = (ushort *)((long)param_5 - (long)*param_5);
  if (((10 < *puVar6) && ((ulong)puVar6[5] != 0)) &&
     (*(char *)((long)param_5 + (ulong)puVar6[5]) != '\0')) {
    if ((*puVar6 < 0xd) || (uVar9 = (ulong)puVar6[6], uVar9 == 0)) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_80 = *(undefined1 **)PTR_DAT_047d3e30;
      pcVar8 = *(char **)(PTR_DAT_047d3e30 + 8);
      local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
      plVar10 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      pcStack_78 = pcVar8;
      local_68 = plVar10;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    else {
      puVar1 = (uint *)((long)param_5 + uVar9);
      uVar12 = (ulong)*puVar1;
      pcVar8 = (char *)((long)puVar1 + uVar12 + 4);
      local_70 = strlen(pcVar8);
      bVar2 = *(byte *)((long)puVar1 + uVar12 + 4);
      if (bVar2 != 0) {
        pbVar7 = (byte *)((long)param_5 + uVar12 + uVar9 + 5);
        do {
          puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar2 != 0);
      }
      plVar10 = (long *)0x0;
      local_68 = (long *)0x0;
      local_80 = puVar11;
      pcStack_78 = pcVar8;
    }
    if (*pcVar8 == '\0') {
      lVar14 = 0;
      if (param_6 != 0) {
        lVar14 = param_6 + 0xf8;
      }
      FUN_00df6ee8(param_4,lVar14);
    }
    else {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      FUN_0133cea0(param_4,param_6,&local_80,PTR_DAT_047d3e30);
      plVar10 = local_68;
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  return;
}


