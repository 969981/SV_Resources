/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01043974; name: FUN_01043974
 */


void FUN_01043974(long param_1,undefined8 param_2,ulong param_3,int param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  uint *puVar7;
  char *pcVar8;
  size_t sVar9;
  uint *puVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  char *__haystack;
  undefined1 *puVar19;
  ulong uVar20;
  long local_a8;
  long *local_a0;
  undefined *local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  if ((param_3 >> 0x20 & 0xff) == 0) {
    piVar12 = (int *)0x0;
    if (*(long *)(param_1 + 0xb8) != 0) {
      if ((*(byte *)(*(long *)(param_1 + 0xb8) + 0x1e8) & 1) == 0) {
        piVar12 = (int *)0x0;
      }
      else {
        puVar10 = (uint *)(**(code **)(**(long **)(param_1 + 0xb8) + 0x70))();
        piVar12 = (int *)((long)puVar10 + (ulong)*puVar10);
      }
    }
    if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
       (uVar13 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar13 == 0)) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = (uint *)((long)piVar12 + uVar13);
      puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    }
    if (*puVar10 != 0) {
      uVar13 = 0;
      do {
        piVar12 = (int *)((long)(puVar10 + uVar13 + 1) + (ulong)puVar10[uVar13 + 1]);
        if (*(ushort *)((long)piVar12 - (long)*piVar12) < 5) {
          lVar11 = 0;
        }
        else {
          uVar15 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2];
          lVar11 = 0;
          if (uVar15 != 0) {
            puVar7 = (uint *)((long)piVar12 + uVar15);
            lVar11 = (long)puVar7 + (ulong)*puVar7;
          }
        }
        bVar3 = *(byte *)(lVar11 + 4);
        puVar19 = &DAT_cbf29ce484222645;
        if (bVar3 != 0) {
          puVar19 = &DAT_cbf29ce484222645;
          pbVar14 = (byte *)(lVar11 + 5);
          do {
            puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (bVar3 != 0);
        }
        if (*(undefined1 **)(param_1 + 0x90) == puVar19) {
          param_3 = uVar13 & 0xffffff00;
          uVar13 = uVar13 & 0xff;
          goto LAB_01043db0;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != *puVar10);
    }
    uVar13 = 0;
    param_3 = 0;
LAB_01043db0:
    param_3 = param_3 | uVar13;
  }
  FUN_00db2500(param_1 + 0xf0);
  FUN_01043fbc(param_1 + 0x140);
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar5 != 0))
  {
    local_a0 = (long *)FUN_00d44228();
    puVar4 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_a0);
    FUN_00100190(PTR_LAB_047d9240,puVar4,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar18 = *(long **)PTR_DAT_047d8c30;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  plVar6 = *(long **)(param_1 + 0x1a8);
  *(long **)(param_1 + 0x1a8) = plVar18;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(undefined2 *)(param_1 + 0x1b0) = 0;
  puVar7 = (uint *)(**(code **)(**(long **)(param_1 + 0xb8) + 0x70))();
  uVar2 = *puVar7;
  piVar12 = (int *)((long)puVar7 + (ulong)uVar2);
  uVar13 = (ulong)*(ushort *)((long)piVar12 + (4 - (long)*piVar12));
  puVar10 = (uint *)((long)piVar12 + uVar13);
  uVar15 = (ulong)*puVar10;
  puVar10 = (uint *)((long)puVar10 + (param_3 & 0xffffffff) * 4 + uVar15 + 4);
  uVar16 = (ulong)*puVar10;
  *(undefined4 *)(param_1 + 0x130) = param_5;
  piVar12 = (int *)((long)puVar10 + uVar16);
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x40) + 0x38);
  }
  __haystack = (char *)*puVar1;
  pcVar8 = strstr(__haystack,"p1_");
  if (pcVar8 == (char *)0x0) {
    pcVar8 = strstr(__haystack,"p2_");
    iVar5 = (uint)(pcVar8 != (char *)0x0) << 1;
  }
  else {
    iVar5 = 1;
  }
  if ((iVar5 == 0) || (iVar5 == param_4)) {
    if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
       (uVar17 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar17 == 0)) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar19 = *(undefined1 **)PTR_DAT_047d3e30;
      pcVar8 = *(char **)(PTR_DAT_047d3e30 + 8);
      sVar9 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
      plVar18 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    else {
      puVar10 = (uint *)((long)piVar12 + uVar17);
      uVar20 = (ulong)*puVar10;
      puVar19 = &DAT_cbf29ce484222645;
      pcVar8 = (char *)((long)puVar10 + uVar20 + 4);
      sVar9 = strlen(pcVar8);
      bVar3 = *(byte *)((long)puVar10 + uVar20 + 4);
      if (bVar3 != 0) {
        pbVar14 = (byte *)((long)puVar7 +
                          uVar20 + (param_3 & 0xffffffff) * 4 + uVar17 + uVar16 + uVar15 + uVar13 +
                          (ulong)uVar2 + 9);
        do {
          puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar3 != 0);
      }
      plVar18 = (long *)0x0;
    }
    *(size_t *)(param_1 + 0xa0) = sVar9;
    plVar6 = *(long **)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined1 **)(param_1 + 0x90) = puVar19;
    *(char **)(param_1 + 0x98) = pcVar8;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    *(long **)(param_1 + 0xa8) = plVar18;
    if (*(ushort *)((long)piVar12 - (long)*piVar12) < 9) {
      lVar11 = 0;
    }
    else {
      uVar13 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[4];
      lVar11 = 0;
      if (uVar13 != 0) {
        puVar10 = (uint *)((long)piVar12 + uVar13);
        lVar11 = (long)puVar10 + (ulong)*puVar10;
      }
    }
    *(long *)(param_1 + 0x138) = lVar11 + 4;
    if (*(ushort *)((long)piVar12 - (long)*piVar12) < 7) {
      local_a8 = 0;
    }
    else {
      uVar13 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
      local_a8 = 0;
      if (uVar13 != 0) {
        puVar10 = (uint *)((long)piVar12 + uVar13);
        local_a8 = (long)puVar10 + (ulong)*puVar10;
      }
    }
    FUN_00e83e2c(&local_a0,param_1 + 0x40,&local_a8,&DAT_03c886bc);
    FUN_01044660(param_1,&local_a0,param_2,*(undefined4 *)(param_1 + 0x130));
    plVar18 = local_a0;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
      plVar18 = local_a0;
    }
  }
  else {
    if (param_4 == 1) {
      local_a0 = (long *)0x60f2672773107668;
      local_98 = &DAT_03bf791f;
      local_80 = (long *)0x60f5272773123f7f;
      puStack_78 = &DAT_03c93a95;
    }
    else {
      local_a0 = (long *)0x60f5272773123f7f;
      local_98 = &DAT_03c93a95;
      local_80 = (long *)0x60f2672773107668;
      puStack_78 = &DAT_03bf791f;
    }
    local_70 = 3;
    local_88 = (long *)0x0;
    local_90 = 3;
    local_68 = (long *)0x0;
    FUN_028fb71c(param_1 + 0x1b8,&local_a0);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (*(ushort *)((long)piVar12 - (long)*piVar12) < 5) {
      lVar11 = 0;
    }
    else {
      uVar13 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2];
      lVar11 = 0;
      if (uVar13 != 0) {
        puVar10 = (uint *)((long)piVar12 + uVar13);
        lVar11 = (long)puVar10 + (ulong)*puVar10;
      }
    }
    FUN_01366e10(&local_a0,lVar11 + 4,param_1 + 0x1b8,param_1 + 0x1d8,0);
    FUN_00db2500(param_1 + 0xb0);
    FUN_01364af4(param_1,param_1 + 0x40,param_2,*(undefined8 *)(param_1 + 0x78),local_98,
                 *(undefined4 *)(param_1 + 0x130),0);
    plVar18 = local_88;
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  return;
}


