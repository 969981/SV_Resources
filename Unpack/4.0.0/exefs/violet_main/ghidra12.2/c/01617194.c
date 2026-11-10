/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01617194; name: FUN_01617194
 */


void FUN_01617194(long *param_1,long param_2,int *param_3)

{
  char *pcVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined1 *local_80;
  char *pcStack_78;
  size_t local_70;
  long *local_68;
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar7 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar10 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar10;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar9 = param_1 + 5;
  *plVar9 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar9);
  *param_1 = (long)&PTR_FUN_0457f898;
  param_1[4] = (long)&PTR_LAB_0457f910;
  *plVar9 = (long)&DAT_0457f960;
  uVar21 = 0;
  if ((10 < *(ushort *)((long)param_3 - (long)*param_3)) &&
     (uVar11 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[5], uVar11 != 0)) {
    uVar21 = *(undefined4 *)((long)param_3 + uVar11);
  }
  *(undefined4 *)(param_1 + 8) = uVar21;
  if (*(ushort *)((long)param_3 - (long)*param_3) < 0xd) {
    uVar21 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[6];
    uVar21 = 0;
    if (uVar11 != 0) {
      uVar21 = *(undefined4 *)((long)param_3 + uVar11);
    }
  }
  *(undefined4 *)((long)param_1 + 0x44) = uVar21;
  *(undefined4 *)(param_1 + 9) = 0;
  puVar19 = &DAT_cbf29ce484222645;
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 5) ||
     (uVar11 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2], uVar11 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)PTR_DAT_047d3e30;
    pcStack_78 = *(char **)(PTR_DAT_047d3e30 + 8);
    local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    puVar2 = (uint *)((long)param_3 + uVar11);
    uVar20 = (ulong)*puVar2;
    pcVar1 = (char *)((long)puVar2 + uVar20 + 4);
    local_70 = strlen(pcVar1);
    bVar4 = *(byte *)((long)puVar2 + uVar20 + 4);
    local_80 = &DAT_cbf29ce484222645;
    if (bVar4 != 0) {
      local_80 = &DAT_cbf29ce484222645;
      pbVar13 = (byte *)((long)param_3 + uVar20 + uVar11 + 5);
      do {
        local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (bVar4 != 0);
    }
    local_68 = (long *)0x0;
    pcStack_78 = pcVar1;
  }
  FUN_00daf940(param_1 + 10,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3], uVar11 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)PTR_DAT_047d3e30;
    pcStack_78 = *(char **)(PTR_DAT_047d3e30 + 8);
    local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    puVar2 = (uint *)((long)param_3 + uVar11);
    uVar20 = (ulong)*puVar2;
    pcVar1 = (char *)((long)puVar2 + uVar20 + 4);
    local_70 = strlen(pcVar1);
    bVar4 = *(byte *)((long)puVar2 + uVar20 + 4);
    local_80 = &DAT_cbf29ce484222645;
    if (bVar4 != 0) {
      local_80 = &DAT_cbf29ce484222645;
      pbVar13 = (byte *)((long)param_3 + uVar20 + uVar11 + 5);
      do {
        local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (bVar4 != 0);
    }
    local_68 = (long *)0x0;
    pcStack_78 = pcVar1;
  }
  FUN_00daf940(param_1 + 0xb,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 9) ||
     (uVar11 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[4], uVar11 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)PTR_DAT_047d3e30;
    pcStack_78 = *(char **)(PTR_DAT_047d3e30 + 8);
    local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    puVar2 = (uint *)((long)param_3 + uVar11);
    uVar20 = (ulong)*puVar2;
    pcVar1 = (char *)((long)puVar2 + uVar20 + 4);
    local_70 = strlen(pcVar1);
    bVar4 = *(byte *)((long)puVar2 + uVar20 + 4);
    if (bVar4 != 0) {
      pbVar13 = (byte *)((long)param_3 + uVar20 + uVar11 + 5);
      do {
        puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (bVar4 != 0);
    }
    local_68 = (long *)0x0;
    local_80 = puVar19;
    pcStack_78 = pcVar1;
  }
  FUN_00daf940(param_1 + 0xc,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  param_1[0xd] = 0;
  lVar7 = 0x70;
  do {
    puVar3 = (undefined8 *)((long)param_1 + lVar7);
    lVar7 = lVar7 + 0x24;
    *(undefined4 *)(puVar3 + 4) = 0x80000000;
    *puVar3 = 0;
    puVar3[1] = 0xbf800000;
    puVar3[2] = 0x800000003f800000;
    puVar3[3] = 0;
  } while ((long *)((long)puVar3 + 0x24) != param_1 + 0x24e);
  param_1[0x250] = 0;
  param_1[0x252] = 0x7ffffffffffffff;
  param_1[600] = 0x7ffffffffffffff;
  param_1[0x25d] = 0x7ffffffffffffff;
  param_1[0x24f] = 0;
  param_1[0x24e] = 0;
  param_1[0x251] = param_2;
  param_1[0x253] = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  param_1[0x255] = 0;
  param_1[0x256] = 0;
  param_1[599] = param_2;
  param_1[0x259] = 0;
  *(undefined4 *)(param_1 + 0x25a) = 0;
  param_1[0x25b] = 0;
  param_1[0x25c] = param_2;
  param_1[0x25e] = 0;
  *(undefined4 *)(param_1 + 0x25f) = 0;
  param_1[0x260] = 0;
  *(undefined4 *)(param_1 + 0x261) = 0x3f800000;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x262),false,0);
  FUN_01617a40(param_1 + 0x255,(long)(128.0 / *(float *)(param_1 + 0x261)));
  lVar7 = -0x1200;
  do {
    lVar10 = lVar7 + 0x24;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1270) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1278) = 0xbf800000;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1280) = 0x800000003f800000;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1288) = 0;
    *(undefined4 *)((long)param_1 + lVar7 + 0x1290) = 0x80000000;
    lVar7 = lVar10;
  } while (lVar10 != 0);
  lVar7 = param_1[0x24e];
  if ((ulong)(param_1[0x250] - lVar7 >> 5) < 0x80) {
    lVar14 = param_1[0x24f];
    lVar10 = (**(code **)(*(long *)param_1[0x251] + 0x10))((long *)param_1[0x251],0x1000,0x10);
    if (lVar10 == 0) {
      (**(code **)(*(long *)param_1[0x251] + 0xe8))();
    }
    puVar5 = PTR_LAB_047d3900;
    lVar16 = param_1[0x24e];
    lVar7 = lVar10 + (lVar14 - lVar7 >> 5) * 0x20;
    lVar17 = param_1[0x24f];
    lVar14 = lVar7;
    if (lVar17 != lVar16) {
      do {
        lVar18 = param_1[0x251];
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar5,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          uVar12 = *(undefined8 *)(lVar17 + -8);
          *(undefined8 *)(lVar14 + -0x18) = *(undefined8 *)(lVar17 + -0x18);
          *(undefined8 *)(lVar14 + -8) = uVar12;
          uVar12 = *(undefined8 *)(lVar17 + -0x20);
          *(undefined8 *)(lVar14 + -0x10) = *(undefined8 *)(lVar17 + -0x10);
          *(undefined8 *)(lVar14 + -0x20) = uVar12;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar18;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          uVar12 = *(undefined8 *)(lVar17 + -8);
          *(undefined8 *)(lVar14 + -0x18) = *(undefined8 *)(lVar17 + -0x18);
          *(undefined8 *)(lVar14 + -8) = uVar12;
          uVar12 = *(undefined8 *)(lVar17 + -0x20);
          *(undefined8 *)(lVar14 + -0x10) = *(undefined8 *)(lVar17 + -0x10);
          *(undefined8 *)(lVar14 + -0x20) = uVar12;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar17 = lVar17 + -0x20;
        lVar14 = lVar14 + -0x20;
      } while (lVar16 != lVar17);
      lVar16 = param_1[0x24e];
    }
    lVar17 = param_1[0x250];
    param_1[0x24e] = lVar14;
    param_1[0x24f] = lVar7;
    param_1[0x250] = lVar10 + 0x1000;
    if (lVar16 != 0) {
      plVar9 = (long *)param_1[0x251];
      uVar11 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar11 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar16,lVar17 - lVar16,0x10);
      }
      else {
        FUN_00c48fe8(plVar9,lVar16,lVar17 - lVar16,0x10);
      }
    }
  }
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar7 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar7;
  uVar12 = FUN_00f03dc8(param_1);
  plVar15 = (long *)param_1[10];
  plVar9 = (long *)PTR_PTR_047d4508;
  if (plVar15 != (long *)0x0) {
    plVar9 = plVar15 + 7;
  }
  lVar10 = *plVar9;
  if (plVar15 == (long *)0x0) {
    plVar9 = *(long **)(*(long *)(lVar7 + 0x200) + 0x60);
    (**(code **)(*plVar9 + 0x60))(plVar9,uVar12,lVar10);
  }
  else {
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar9 = *(long **)(*(long *)(lVar7 + 0x200) + 0x60);
    (**(code **)(*plVar9 + 0x60))(plVar9,uVar12,lVar10);
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  return;
}


