/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015fd2d8; name: FUN_015fd2d8
 */


void FUN_015fd2d8(long param_1)

{
  MutexType *pMVar1;
  int *piVar2;
  code cVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  size_t sVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined **ppuVar17;
  byte *pbVar18;
  ushort *puVar19;
  code *pcVar20;
  uint uVar21;
  int *piVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined4 uVar30;
  long *plVar31;
  long local_720;
  long *local_708 [4];
  long *local_6e8;
  long *local_6d8 [4];
  long *local_6b8;
  long *local_6a8 [4];
  long *local_688;
  long *local_678 [4];
  long *local_658;
  long *local_648 [4];
  long *local_628;
  long *local_618 [4];
  long *local_5f8;
  undefined **local_5e8;
  char *pcStack_5e0;
  undefined8 local_5d8;
  long *local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  long *local_5b0;
  int *local_5a8;
  int *local_5a0;
  long *local_590;
  undefined1 local_588 [16];
  byte local_578 [24];
  undefined1 auStack_560 [8];
  char *local_558;
  long *local_548;
  undefined1 auStack_540 [24];
  undefined1 auStack_528 [24];
  undefined1 auStack_510 [24];
  undefined1 auStack_4f8 [24];
  undefined1 auStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined **local_4b0;
  byte local_4a8;
  undefined1 uStack_4a7;
  undefined2 uStack_4a6;
  undefined4 uStack_4a4;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  long *local_490;
  undefined8 local_488 [2];
  undefined8 local_478 [2];
  undefined8 local_468 [2];
  undefined8 local_458 [2];
  undefined8 local_448 [2];
  int *local_438;
  int *local_430;
  undefined **local_420;
  char *local_418;
  undefined8 local_410;
  long *local_408;
  long *local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined1 auStack_3c8 [64];
  undefined **local_388;
  char *local_380;
  undefined8 local_378;
  long *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined **local_348;
  char *local_340;
  undefined8 local_338;
  long *local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined **local_308;
  undefined **local_300;
  ulong local_2f8;
  undefined1 auStack_2f0 [8];
  long *local_2e8;
  undefined1 auStack_2b0 [184];
  ulong local_1f8 [32];
  long local_f8;
  undefined **local_f0;
  code *local_e8;
  size_t local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  lVar23 = *(long *)(*(long *)PTR_DAT_047d3f70 + 0x108);
  plVar11 = (long *)(*(code *)**(undefined8 **)(lVar23 + 8))((undefined8 *)(lVar23 + 8));
  if ((*PTR_DAT_047d8a60 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_047d8a60);
    puVar24 = PTR_DAT_047d8a90;
    if (iVar9 != 0) {
      if ((*PTR_DAT_047d8a88 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_047d8a88);
        puVar5 = PTR_DAT_047d39c8;
        if (iVar9 != 0) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
            *(undefined8 *)puVar5 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          *(undefined **)puVar24 = puVar5;
          __cxa_guard_release(PTR_DAT_047d8a88);
        }
      }
      *(undefined **)PTR_DAT_047d8a68 = puVar24;
      __cxa_guard_release(PTR_DAT_047d8a60);
    }
  }
  for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    if (plVar11 == (long *)PTR_DAT_047d8a68) {
      local_f8 = lVar23;
      goto LAB_015fd35c;
    }
  }
  local_f8 = 0;
LAB_015fd35c:
  FUN_016009e4();
  pbVar18 = PTR_DAT_047d8280;
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  puVar29 = (undefined8 *)PTR_DAT_047d8288;
  lVar25 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar25;
  memset(&local_308,0,0x210);
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar12 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar12;
  FUN_00cf9884(&local_420,uVar12,"Init.bnk");
  ppuVar6 = local_300;
  ppuVar17 = local_420;
  local_300 = (undefined **)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    (**(code **)((long)*ppuVar6 + 0x20))();
  }
  local_300 = ppuVar17;
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar12 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar12;
  FUN_00cf9884(&local_420,uVar12,"data:/audio/wwise/bin/Switch/");
  ppuVar6 = local_308;
  ppuVar17 = local_420;
  local_308 = (undefined **)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    (**(code **)(*ppuVar6 + 0x20))();
  }
  local_348 = &PTR_FUN_04540090;
  local_388 = &PTR_FUN_04540090;
  local_f0 = (undefined **)0x3c91c57;
  local_308 = ppuVar17;
  local_310 = 0;
  local_318 = 0;
  local_320 = 0;
  local_328 = 0;
  local_330 = (long *)0x0;
  local_338 = 0;
  local_340 = (char *)0x0;
  local_350 = 0;
  local_358 = 0;
  local_360 = 0;
  local_368 = 0;
  local_370 = (long *)0x0;
  local_378 = 0;
  local_380 = (char *)0x0;
  FUN_00e52f24(&local_420,&local_f0);
  uVar13 = FUN_00dc5c18(&local_348,0,&local_420,0,lVar23);
  if ((uVar13 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    local_4b0 = (undefined **)0x3bd4133;
    FUN_00e52f24(&local_f0,&local_4b0);
    uVar13 = FUN_00dc5c18(&local_388,0,&local_f0,0,lVar23);
    uVar13 = uVar13 & 0xffffffff;
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if (local_f0 != (undefined **)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  if (local_400 != (long *)0x0) {
    (**(code **)(*local_400 + 0x20))();
  }
  if (local_420 != (undefined **)0x0) {
    (**(code **)(*local_420 + 0x20))();
  }
  puVar24 = PTR_DAT_047d5608;
  if ((uVar13 & 1) == 0) {
    local_720 = local_f8;
    FUN_01605338(lVar25,local_f8,&local_308,0);
    goto LAB_015fe0cc;
  }
  FUN_00fb9e50(&local_420,&local_348,&local_388);
  FUN_00fb4dd0(&local_438,&local_420);
  local_f0 = (undefined **)0xe2b367bb60f44a65;
  local_e8 = (code *)0x3c18c84;
  local_e0 = 9;
  local_d8 = (long *)0x0;
  FUN_00d996a8(auStack_560,&local_438,&local_f0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  local_f0 = (undefined **)0x9801a6c41373d6a9;
  local_e8 = (code *)0x3c638f2;
  local_e0 = 0xc;
  local_d8 = (long *)0x0;
  FUN_00d996a8(&local_5a8,&local_438,&local_f0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  puVar24 = PTR_LAB_047d4510;
  lVar28 = 0;
  do {
    snprintf((char *)local_578,0x10,"packageName%d",(int)lVar28);
    sVar14 = strlen((char *)local_578);
    local_4b0 = (undefined **)&DAT_cbf29ce484222645;
    if (local_578[0] != 0) {
      local_4b0 = (undefined **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)local_578 | 1);
      bVar7 = local_578[0];
      do {
        local_4b0 = (undefined **)(((ulong)local_4b0 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar7 != 0);
    }
    local_4a0 = (undefined4)sVar14;
    uStack_49c = (undefined4)(sVar14 >> 0x20);
    local_4a8 = (byte)local_578;
    uStack_4a7 = (undefined1)((ulong)local_578 >> 8);
    uStack_4a6 = (undefined2)((ulong)local_578 >> 0x10);
    uStack_4a4 = (undefined4)((ulong)local_578 >> 0x20);
    local_498 = 0;
    uStack_494 = 0;
    FUN_00cee868(&local_f0,&local_5a8,&local_4b0);
    if ((long *)CONCAT44(uStack_494,local_498) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_494,local_498) + 0x20))();
    }
    pcVar20 = local_e8;
    if (*local_e8 == (code)0x0) {
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      break;
    }
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(puVar24,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar12 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar12;
    FUN_00cf9884(&local_4b0,uVar12,pcVar20);
    ppuVar17 = local_4b0;
    plVar31 = (long *)(auStack_2f0 + lVar28 * 8 + -8);
    plVar11 = (long *)*plVar31;
    *plVar31 = 0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
    *plVar31 = (long)ppuVar17;
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    lVar28 = lVar28 + 1;
  } while (lVar28 != 0x10);
  lVar28 = 0;
  do {
    snprintf((char *)local_578,0x10,"bankName%d",(int)lVar28);
    sVar14 = strlen((char *)local_578);
    local_4b0 = (undefined **)&DAT_cbf29ce484222645;
    if (local_578[0] != 0) {
      local_4b0 = (undefined **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)local_578 | 1);
      bVar7 = local_578[0];
      do {
        local_4b0 = (undefined **)(((ulong)local_4b0 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar7 != 0);
    }
    local_4a0 = (undefined4)sVar14;
    uStack_49c = (undefined4)(sVar14 >> 0x20);
    local_4a8 = (byte)local_578;
    uStack_4a7 = (undefined1)((ulong)local_578 >> 8);
    uStack_4a6 = (undefined2)((ulong)local_578 >> 0x10);
    uStack_4a4 = (undefined4)((ulong)local_578 >> 0x20);
    local_498 = 0;
    uStack_494 = 0;
    FUN_00cee868(&local_f0,auStack_560,&local_4b0);
    if ((long *)CONCAT44(uStack_494,local_498) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_494,local_498) + 0x20))();
    }
    pcVar20 = local_e8;
    if (*local_e8 == (code)0x0) {
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      break;
    }
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar12 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar12;
    FUN_00cf9884(&local_4b0,uVar12,pcVar20);
    ppuVar17 = local_4b0;
    plVar11 = (long *)local_1f8[lVar28];
    local_1f8[lVar28] = 0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
    local_1f8[lVar28] = (ulong)ppuVar17;
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    lVar28 = lVar28 + 1;
  } while (lVar28 != 0x10);
  local_4b0 = &PTR_LAB_045400d0;
  local_4a8 = 0;
  uStack_4a7 = 0;
  local_488[0] = 0;
  local_478[0] = 0;
  local_468[0] = 0;
  local_458[0] = 0;
  local_448[0] = 0;
  uStack_4a4 = 0;
  local_4a0 = 0;
  uStack_49c = 0;
  local_498 = 0;
  uStack_494 = 0;
  local_f0 = (undefined **)0xfea1458f42ee09e6;
  local_e8 = (code *)0x3c848b9;
  local_e0 = 0xe;
  local_d8 = (long *)0x0;
  local_4a8 = FUN_00cf7518(&local_438,&local_f0);
  local_4a8 = local_4a8 & 1;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  puVar24 = PTR_DAT_047d5608;
  uStack_4a7 = 0;
  if (local_430 == (int *)0x0) {
    uStack_4a4 = 0;
LAB_015ff404:
    uStack_49c = 0;
    uVar16 = 0;
  }
  else {
    if (*(ushort *)((long)local_430 - (long)*local_430) < 7) {
LAB_015fed6c:
      uVar16 = 0;
    }
    else {
      uVar13 = (ulong)((ushort *)((long)local_430 - (long)*local_430))[3];
      uVar16 = 0;
      if (uVar13 != 0) {
        puVar15 = (uint *)((long)local_430 + uVar13);
        puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
        local_f0 = (undefined **)0x3c70b99;
        puVar15 = bsearch(&local_f0,puVar15 + 1,(ulong)*puVar15,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar15 == (uint *)0x0) || (local_438 == (int *)0x0)) goto LAB_015fed6c;
        piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
        puVar19 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar4 = *puVar19;
        if (uVar4 < 7) {
          piVar22 = (int *)0x0;
        }
        else {
          piVar22 = (int *)0x0;
          if ((ulong)puVar19[3] != 0) {
            puVar15 = (uint *)((long)piVar2 + (ulong)puVar19[3]);
            piVar22 = (int *)((long)puVar15 + (ulong)*puVar15);
          }
        }
        if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar13 == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = (long)*(char *)((long)piVar22 + uVar13) & 0xffffffff;
        }
        if (*(long *)(puVar24 + uVar13 * 8) != 4) {
          if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
          }
          puVar24 = PTR_DAT_047d5608;
          goto LAB_015fd98c;
        }
        if (uVar4 < 0xb) {
          uVar21 = 0;
LAB_015fef00:
          uVar16 = 0;
        }
        else {
          uVar21 = 0;
          if ((ulong)puVar19[5] != 0) {
            uVar21 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar19[5]);
          }
          if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) goto LAB_015fef00;
          uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
        }
        if (uVar21 < *(ushort *)((long)local_438 - (long)*local_438)) {
          uVar13 = (ulong)*(ushort *)(((long)local_438 - (long)*local_438) + (ulong)uVar21);
          if (uVar13 != 0) {
            uVar16 = *(undefined4 *)((long)local_438 + uVar13);
          }
        }
      }
    }
LAB_015fd98c:
    uStack_4a4 = uVar16;
    if (local_430 == (int *)0x0) goto LAB_015ff404;
    if (*(ushort *)((long)local_430 - (long)*local_430) < 7) {
LAB_015fed74:
      uVar16 = 0;
    }
    else {
      uVar13 = (ulong)((ushort *)((long)local_430 - (long)*local_430))[3];
      uVar16 = 0;
      if (uVar13 != 0) {
        puVar15 = (uint *)((long)local_430 + uVar13);
        puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
        local_f0 = (undefined **)0x3c77497;
        puVar15 = bsearch(&local_f0,puVar15 + 1,(ulong)*puVar15,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar15 == (uint *)0x0) || (local_438 == (int *)0x0)) goto LAB_015fed74;
        piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
        puVar19 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar4 = *puVar19;
        if (uVar4 < 7) {
          piVar22 = (int *)0x0;
        }
        else {
          piVar22 = (int *)0x0;
          if ((ulong)puVar19[3] != 0) {
            puVar15 = (uint *)((long)piVar2 + (ulong)puVar19[3]);
            piVar22 = (int *)((long)puVar15 + (ulong)*puVar15);
          }
        }
        if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar13 == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = (long)*(char *)((long)piVar22 + uVar13) & 0xffffffff;
        }
        if (*(long *)(puVar24 + uVar13 * 8) != 4) {
          if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
          }
          puVar24 = PTR_DAT_047d5608;
          goto LAB_015fda98;
        }
        if (uVar4 < 0xb) {
          uVar21 = 0;
LAB_015fef18:
          uVar16 = 0;
        }
        else {
          uVar21 = 0;
          if ((ulong)puVar19[5] != 0) {
            uVar21 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar19[5]);
          }
          if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) goto LAB_015fef18;
          uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
        }
        if (uVar21 < *(ushort *)((long)local_438 - (long)*local_438)) {
          uVar13 = (ulong)*(ushort *)(((long)local_438 - (long)*local_438) + (ulong)uVar21);
          if (uVar13 != 0) {
            uVar16 = *(undefined4 *)((long)local_438 + uVar13);
          }
        }
      }
    }
LAB_015fda98:
    uStack_49c = uVar16;
    if ((local_430 == (int *)0x0) || (*(ushort *)((long)local_430 - (long)*local_430) < 7)) {
LAB_015fed64:
      uVar16 = 0;
    }
    else {
      uVar13 = (ulong)((ushort *)((long)local_430 - (long)*local_430))[3];
      uVar16 = 0;
      if (uVar13 != 0) {
        puVar15 = (uint *)((long)local_430 + uVar13);
        puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
        local_f0 = (undefined **)0x3c11bee;
        puVar15 = bsearch(&local_f0,puVar15 + 1,(ulong)*puVar15,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar15 == (uint *)0x0) || (local_438 == (int *)0x0)) goto LAB_015fed64;
        piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
        puVar19 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar4 = *puVar19;
        if (uVar4 < 7) {
          piVar22 = (int *)0x0;
        }
        else {
          piVar22 = (int *)0x0;
          if ((ulong)puVar19[3] != 0) {
            puVar15 = (uint *)((long)piVar2 + (ulong)puVar19[3]);
            piVar22 = (int *)((long)puVar15 + (ulong)*puVar15);
          }
        }
        if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar13 == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = (long)*(char *)((long)piVar22 + uVar13) & 0xffffffff;
        }
        if (*(long *)(puVar24 + uVar13 * 8) != 4) {
          if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
          }
          puVar24 = PTR_DAT_047d5608;
          goto LAB_015fdba4;
        }
        if (uVar4 < 0xb) {
          uVar21 = 0;
LAB_015fef24:
          uVar16 = 0;
        }
        else {
          uVar21 = 0;
          if ((ulong)puVar19[5] != 0) {
            uVar21 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar19[5]);
          }
          if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) goto LAB_015fef24;
          uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
        }
        if (uVar21 < *(ushort *)((long)local_438 - (long)*local_438)) {
          uVar13 = (ulong)*(ushort *)(((long)local_438 - (long)*local_438) + (ulong)uVar21);
          if (uVar13 != 0) {
            uVar16 = *(undefined4 *)((long)local_438 + uVar13);
          }
        }
      }
    }
  }
LAB_015fdba4:
  local_4a0 = uVar16;
  local_f0 = (undefined **)0x703b27abc351e89b;
  local_e8 = (code *)0x3c42710;
  local_e0 = 0xc;
  local_d8 = (long *)0x0;
  FUN_00d996a8(auStack_4c8,&local_438,&local_f0);
  FUN_01600514(&local_498,auStack_4c8);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  local_f0 = (undefined **)0xe15e08187a41d033;
  local_e8 = (code *)0x3c9f236;
  local_e0 = 0xc;
  local_d8 = (long *)0x0;
  FUN_00d996a8(auStack_4e0,&local_438,&local_f0);
  FUN_01600514(local_488,auStack_4e0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  local_f0 = (undefined **)0xf02ca29e6e1376b3;
  local_e8 = (code *)0x3ca6030;
  local_e0 = 0x13;
  local_d8 = (long *)0x0;
  FUN_00d996a8(auStack_4f8,&local_438,&local_f0);
  FUN_01600514(local_478,auStack_4f8);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  local_f0 = (undefined **)0x413b2359dbf9e56a;
  local_e8 = (code *)0x3c18c8e;
  local_e0 = 0x11;
  local_d8 = (long *)0x0;
  FUN_00d996a8(auStack_510,&local_438,&local_f0);
  FUN_01600514(local_468,auStack_510);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  local_f0 = (undefined **)0x73499ccb8b91472d;
  local_e8 = (code *)0x3c5cf1a;
  local_e0 = 0xd;
  local_d8 = (long *)0x0;
  FUN_00d996a8(auStack_528,&local_438,&local_f0);
  FUN_01600514(local_458,auStack_528);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  local_f0 = (undefined **)0xbad16821bc93c21e;
  local_e8 = (code *)0x3ca6044;
  local_e0 = 0x11;
  local_d8 = (long *)0x0;
  FUN_00d996a8(auStack_540,&local_438,&local_f0);
  FUN_01600514(local_448,auStack_540);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  local_720 = local_f8;
  FUN_01605338(lVar25,local_f8,&local_308,&local_4b0);
  local_f0 = (undefined **)0xd92a80e69aaa809a;
  local_e8 = (code *)0x3be255c;
  local_e0 = 0xd;
  local_d8 = (long *)0x0;
  FUN_00cee868(auStack_560,&local_438,&local_f0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (*local_558 != '\0') {
    if (*(long *)(lVar25 + 0x48) == 0) {
      uVar12 = 0xffffffffffffffff;
    }
    else {
      uVar12 = FUN_00cf8198();
    }
    memset(&local_f0,0,0x80);
    plVar11 = *(long **)(*(long *)(lVar25 + 0x200) + 0x60);
    iVar9 = (**(code **)(*plVar11 + 0xd0))(plVar11,local_558,uVar12,1,&LAB_01080c70,lVar25,0,0,0);
    if (iVar9 != 0) {
      FUN_0104f218(*(undefined8 *)(lVar25 + 0x220),auStack_560,iVar9,uVar12,0,&local_f0,0);
      pcVar20 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = 0;
        local_d8 = (long *)0x0;
        local_f0 = (undefined **)0x0;
        local_e8 = (code *)0x0;
        (*pcVar20)(&local_d0);
      }
    }
  }
  if ((local_430 == (int *)0x0) || (*(ushort *)((long)local_430 - (long)*local_430) < 7))
  goto LAB_015ff3a8;
  uVar13 = (ulong)((ushort *)((long)local_430 - (long)*local_430))[3];
  uVar16 = 0;
  if (uVar13 != 0) {
    puVar15 = (uint *)((long)local_430 + uVar13);
    puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
    local_f0 = (undefined **)0x3bd4169;
    puVar15 = bsearch(&local_f0,puVar15 + 1,(ulong)*puVar15,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar15 != (uint *)0x0) && (local_438 != (int *)0x0)) {
      piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
      puVar19 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar4 = *puVar19;
      if (uVar4 < 7) {
        piVar22 = (int *)0x0;
      }
      else {
        piVar22 = (int *)0x0;
        if ((ulong)puVar19[3] != 0) {
          puVar15 = (uint *)((long)piVar2 + (ulong)puVar19[3]);
          piVar22 = (int *)((long)puVar15 + (ulong)*puVar15);
        }
      }
      if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
         (uVar13 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar13 == 0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = (long)*(char *)((long)piVar22 + uVar13) & 0xffffffff;
      }
      if (*(long *)(puVar24 + uVar13 * 8) == 4) {
        if (uVar4 < 0xb) {
          uVar21 = 0;
LAB_015fef0c:
          uVar16 = 0;
        }
        else {
          uVar21 = 0;
          if ((ulong)puVar19[5] != 0) {
            uVar21 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar19[5]);
          }
          if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) goto LAB_015fef0c;
          uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
        }
        if ((uVar21 < *(ushort *)((long)local_438 - (long)*local_438)) &&
           (uVar13 = (ulong)*(ushort *)(((long)local_438 - (long)*local_438) + (ulong)uVar21),
           uVar13 != 0)) {
          uVar16 = *(undefined4 *)((long)local_438 + uVar13);
        }
        goto LAB_015fdef4;
      }
      if ((0xc < uVar4) && ((ulong)puVar19[6] != 0)) {
        uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
        goto LAB_015fdef4;
      }
    }
LAB_015ff3a8:
    uVar16 = 0;
  }
LAB_015fdef4:
  *(undefined4 *)(lVar25 + 0x1f8) = uVar16;
  local_f0 = (undefined **)0xab931995e08deb17;
  local_e8 = (code *)0x3c9f243;
  local_e0 = 0xe;
  local_d8 = (long *)0x0;
  FUN_00d996a8(local_578,&local_438,&local_f0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  iVar9 = 0;
  do {
    ppuVar17 = (undefined **)&DAT_cbf29ce484222645;
    snprintf(local_588,0x10,"bankName%d",iVar9);
    local_e0 = strlen(local_588);
    if (local_588[0] != (code)0x0) {
      pcVar20 = (code *)((ulong)local_588 | 1);
      cVar3 = local_588[0];
      do {
        ppuVar17 = (undefined **)(((ulong)ppuVar17 ^ (ulong)(byte)cVar3) * 0x100000001b3);
        cVar3 = *pcVar20;
        pcVar20 = pcVar20 + 1;
      } while (cVar3 != (code)0x0);
    }
    local_d8 = (long *)0x0;
    local_f0 = ppuVar17;
    local_e8 = (code *)local_588;
    FUN_00cee868(&local_5a8,local_578,&local_f0);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if ((char)*local_5a0 == '\0') {
      if (local_590 != (long *)0x0) {
        (**(code **)(*local_590 + 0x20))();
      }
      break;
    }
    memset(&local_f0,0,0x80);
    pMVar1 = (MutexType *)(*(long *)(lVar25 + 0x240) + 0x70);
    nn::os::LockMutex(pMVar1);
    lVar28 = FUN_01478f0c(*(undefined8 *)(lVar25 + 0x240),&local_5a8,1,&local_f0,0);
    iVar8 = *(int *)(lVar28 + 0xc);
    nn::os::UnlockMutex(pMVar1);
    if ((iVar8 < 2) &&
       (plVar11 = *(long **)(*(long *)(lVar25 + 0x200) + 0x60),
       iVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11,local_5a0,FUN_0157fa00,lVar25,lVar28 + 8),
       iVar8 != 1)) {
      FUN_01dacfd8(*(undefined8 *)(lVar25 + 0x240),&local_5a8);
    }
    pcVar20 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = (long *)0x0;
      local_f0 = (undefined **)0x0;
      local_e8 = (code *)0x0;
      (*pcVar20)(&local_d0);
    }
    if (local_590 != (long *)0x0) {
      (**(code **)(*local_590 + 0x20))();
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x10);
  if (local_548 != (long *)0x0) {
    (**(code **)(*local_548 + 0x20))();
  }
  FUN_00db239c(auStack_3c8);
  FUN_00db239c(&local_408);
  puVar24 = PTR_DAT_047d5608;
  pbVar18 = PTR_DAT_047d8280;
  puVar29 = (undefined8 *)PTR_DAT_047d8288;
LAB_015fe0cc:
  local_418 = "Wwise_Motion";
  local_408 = (long *)0x0;
  local_420 = (undefined **)0x65c18db3b5e006d9;
  local_410 = 0xc;
  uVar12 = FUN_015ff498(lVar25,&local_420,0x20,0,0);
  *(undefined8 *)(param_1 + 0x348) = uVar12;
  if (local_408 != (long *)0x0) {
    (**(code **)(*local_408 + 0x20))();
  }
  nn::audio::AcquireAudioDeviceNotificationForOutput((SystemEvent *)(param_1 + 0x350));
  FUN_016050d0();
  FUN_00db239c(&local_388);
  FUN_00db239c(&local_348);
  FUN_01604258(local_1f8);
  FUN_01604258(&local_2f8);
  if (local_300 != (undefined **)0x0) {
    (**(code **)(*local_300 + 0x20))();
  }
  if (local_308 != (undefined **)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  local_4b0 = (undefined **)0x3c0aaa2;
  local_3e8 = 0;
  local_3f0 = 0;
  local_3f8 = 0;
  local_400 = (long *)0x0;
  local_408 = (long *)0x0;
  local_410 = 0;
  local_418 = (char *)0x0;
  local_420 = &PTR_FUN_04540090;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = (long *)0x0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (long *)0x0;
  local_f0 = &PTR_FUN_04540090;
  local_e8 = (code *)0x0;
  FUN_00e52f24(&local_308,&local_4b0);
  uVar13 = FUN_00dc5c18(&local_420,0,&local_308,0,lVar23);
  if ((uVar13 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    local_348 = (undefined **)0x3c34e3f;
    FUN_00e52f24(&local_4b0,&local_348);
    uVar13 = FUN_00dc5c18(&local_f0,0,&local_4b0,0,lVar23);
    uVar13 = uVar13 & 0xffffffff;
    if (local_490 != (long *)0x0) {
      (**(code **)(*local_490 + 0x20))();
    }
    if (local_4b0 != (undefined **)0x0) {
      (**(code **)(*local_4b0 + 0x20))();
    }
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  if (local_308 != (undefined **)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if ((uVar13 & 1) == 0) {
  }
  else {
    FUN_00fb9e50(&local_308,&local_420,&local_f0);
    FUN_00fb4dd0(auStack_560,&local_308);
    if (((*pbVar18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    uVar12 = *puVar29;
    *(undefined8 *)PTR_DAT_047d8290 = uVar12;
    iVar9 = FUN_01557ecc(auStack_560);
    puVar5 = PTR_LAB_047d5600;
    if (iVar9 != 0) {
      iVar8 = 0;
      do {
        local_498 = 0;
        uStack_494 = 0;
        local_4b0 = (undefined **)&DAT_fbec41851566601b;
        local_4a8 = 0xd5;
        uStack_4a7 = 0x48;
        uStack_4a6 = 0x3c8;
        uStack_4a4 = 0;
        local_4a0 = 6;
        uStack_49c = 0;
        FUN_00e90ee0(&local_5a8,auStack_560,&local_4b0,iVar8);
        if ((long *)CONCAT44(uStack_494,local_498) != (long *)0x0) {
          (**(code **)(*(long *)CONCAT44(uStack_494,local_498) + 0x20))();
        }
        local_338 = 4;
        local_348 = (undefined **)&DAT_33adc5b6162705a6;
        local_340 = "name";
        local_330 = (long *)0x0;
        FUN_00cee868(&local_4b0,&local_5a8,&local_348);
        if (local_330 != (long *)0x0) {
          (**(code **)(*local_330 + 0x20))();
        }
        local_378 = 4;
        local_388 = (undefined **)0x72b64509739af096;
        local_380 = "path";
        local_370 = (long *)0x0;
        FUN_00cee868(&local_348,&local_5a8,&local_388);
        if (local_370 != (long *)0x0) {
          (**(code **)(*local_370 + 0x20))();
        }
        if (local_5a0 == (int *)0x0) {
          uVar16 = 0;
LAB_015ff0ec:
          uVar27 = 0;
          uVar30 = 0;
LAB_015fe838:
          uVar26 = 0;
        }
        else {
          if ((*(ushort *)((long)local_5a0 - (long)*local_5a0) < 7) ||
             (uVar13 = (ulong)((ushort *)((long)local_5a0 - (long)*local_5a0))[3], uVar13 == 0)) {
LAB_015fe840:
            uVar16 = 0;
          }
          else {
            puVar15 = (uint *)((long)local_5a0 + uVar13);
            puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
            local_388 = (undefined **)0x3bf5c1e;
            puVar15 = bsearch(&local_388,puVar15 + 1,(ulong)*puVar15,4,(__compar_fn_t)puVar5);
            if ((puVar15 == (uint *)0x0) || (local_5a8 == (int *)0x0)) goto LAB_015fe840;
            piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
            puVar19 = (ushort *)((long)piVar2 - (long)*piVar2);
            uVar4 = *puVar19;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar19[3] != 0) {
                puVar15 = (uint *)((long)piVar2 + (ulong)puVar19[3]);
                piVar22 = (int *)((long)puVar15 + (ulong)*puVar15);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar13 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar13 == 0)) {
              uVar13 = 0;
            }
            else {
              uVar13 = (long)*(char *)((long)piVar22 + uVar13) & 0xffffffff;
            }
            if (*(long *)(puVar24 + uVar13 * 8) == 4) {
              if (uVar4 < 0xb) {
                uVar21 = 0;
LAB_015fe90c:
                uVar16 = 0;
              }
              else {
                uVar21 = 0;
                if ((ulong)puVar19[5] != 0) {
                  uVar21 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar19[5]);
                }
                if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) goto LAB_015fe90c;
                uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
              }
              if (uVar21 < *(ushort *)((long)local_5a8 - (long)*local_5a8)) {
                uVar13 = (ulong)*(ushort *)(((long)local_5a8 - (long)*local_5a8) + (ulong)uVar21);
                if (uVar13 != 0) {
                  uVar16 = *(undefined4 *)((long)local_5a8 + uVar13);
                }
              }
            }
            else {
              if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) {
                uVar16 = 0;
              }
              else {
                uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
              }
              puVar24 = PTR_DAT_047d5608;
            }
          }
          if (local_5a0 == (int *)0x0) goto LAB_015ff0ec;
          if ((*(ushort *)((long)local_5a0 - (long)*local_5a0) < 7) ||
             (uVar13 = (ulong)((ushort *)((long)local_5a0 - (long)*local_5a0))[3], uVar13 == 0)) {
LAB_015fe848:
            uVar30 = 0;
          }
          else {
            puVar15 = (uint *)((long)local_5a0 + uVar13);
            puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
            local_388 = (undefined **)0x3c03788;
            puVar15 = bsearch(&local_388,puVar15 + 1,(ulong)*puVar15,4,(__compar_fn_t)puVar5);
            if ((puVar15 == (uint *)0x0) || (local_5a8 == (int *)0x0)) goto LAB_015fe848;
            piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
            puVar19 = (ushort *)((long)piVar2 - (long)*piVar2);
            uVar4 = *puVar19;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar19[3] != 0) {
                puVar15 = (uint *)((long)piVar2 + (ulong)puVar19[3]);
                piVar22 = (int *)((long)puVar15 + (ulong)*puVar15);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar13 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar13 == 0)) {
              uVar13 = 0;
            }
            else {
              uVar13 = (long)*(char *)((long)piVar22 + uVar13) & 0xffffffff;
            }
            if (*(long *)(puVar24 + uVar13 * 8) == 4) {
              if (uVar4 < 0xb) {
                uVar21 = 0;
LAB_015fe918:
                uVar30 = 0;
              }
              else {
                uVar21 = 0;
                if ((ulong)puVar19[5] != 0) {
                  uVar21 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar19[5]);
                }
                if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) goto LAB_015fe918;
                uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
              }
              if (uVar21 < *(ushort *)((long)local_5a8 - (long)*local_5a8)) {
                uVar13 = (ulong)*(ushort *)(((long)local_5a8 - (long)*local_5a8) + (ulong)uVar21);
                if (uVar13 != 0) {
                  uVar30 = *(undefined4 *)((long)local_5a8 + uVar13);
                }
              }
            }
            else {
              if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) {
                uVar30 = 0;
              }
              else {
                uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
              }
              puVar24 = PTR_DAT_047d5608;
            }
          }
          if (local_5a0 == (int *)0x0) {
            uVar27 = 0;
            goto LAB_015fe838;
          }
          if ((*(ushort *)((long)local_5a0 - (long)*local_5a0) < 7) ||
             (uVar13 = (ulong)((ushort *)((long)local_5a0 - (long)*local_5a0))[3], uVar13 == 0)) {
LAB_015fe850:
            uVar27 = 0;
          }
          else {
            puVar15 = (uint *)((long)local_5a0 + uVar13);
            puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
            local_388 = (undefined **)0x3c638ff;
            puVar15 = bsearch(&local_388,puVar15 + 1,(ulong)*puVar15,4,(__compar_fn_t)puVar5);
            if ((puVar15 == (uint *)0x0) || (local_5a8 == (int *)0x0)) goto LAB_015fe850;
            piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
            puVar19 = (ushort *)((long)piVar2 - (long)*piVar2);
            uVar4 = *puVar19;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar19[3] != 0) {
                puVar15 = (uint *)((long)piVar2 + (ulong)puVar19[3]);
                piVar22 = (int *)((long)puVar15 + (ulong)*puVar15);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar13 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar13 == 0)) {
              uVar13 = 0;
            }
            else {
              uVar13 = (long)*(char *)((long)piVar22 + uVar13) & 0xffffffff;
            }
            if (*(long *)(puVar24 + uVar13 * 8) == 4) {
              if (uVar4 < 0xb) {
                uVar21 = 0;
LAB_015fe924:
                uVar27 = 0;
              }
              else {
                uVar21 = 0;
                if ((ulong)puVar19[5] != 0) {
                  uVar21 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar19[5]);
                }
                if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) goto LAB_015fe924;
                uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
              }
              if (uVar21 < *(ushort *)((long)local_5a8 - (long)*local_5a8)) {
                uVar13 = (ulong)*(ushort *)(((long)local_5a8 - (long)*local_5a8) + (ulong)uVar21);
                if (uVar13 != 0) {
                  uVar27 = *(undefined4 *)((long)local_5a8 + uVar13);
                }
              }
            }
            else {
              if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) {
                uVar27 = 0;
              }
              else {
                uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
              }
              puVar24 = PTR_DAT_047d5608;
            }
          }
          if (((local_5a0 == (int *)0x0) || (*(ushort *)((long)local_5a0 - (long)*local_5a0) < 7))
             || (uVar13 = (ulong)((ushort *)((long)local_5a0 - (long)*local_5a0))[3], uVar13 == 0))
          goto LAB_015fe838;
          puVar15 = (uint *)((long)local_5a0 + uVar13);
          puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
          local_388 = (undefined **)0x3c7db49;
          puVar15 = bsearch(&local_388,puVar15 + 1,(ulong)*puVar15,4,(__compar_fn_t)puVar5);
          if ((puVar15 == (uint *)0x0) || (local_5a8 == (int *)0x0)) goto LAB_015fe838;
          piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
          puVar19 = (ushort *)((long)piVar2 - (long)*piVar2);
          uVar4 = *puVar19;
          if (uVar4 < 7) {
            piVar22 = (int *)0x0;
          }
          else {
            piVar22 = (int *)0x0;
            if ((ulong)puVar19[3] != 0) {
              puVar15 = (uint *)((long)piVar2 + (ulong)puVar19[3]);
              piVar22 = (int *)((long)puVar15 + (ulong)*puVar15);
            }
          }
          if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
             (uVar13 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar13 == 0)) {
            uVar13 = 0;
          }
          else {
            uVar13 = (long)*(char *)((long)piVar22 + uVar13) & 0xffffffff;
          }
          if (*(long *)(puVar24 + uVar13 * 8) == 4) {
            if (uVar4 < 0xb) {
              uVar21 = 0;
LAB_015fe930:
              uVar26 = 0;
            }
            else {
              uVar21 = 0;
              if ((ulong)puVar19[5] != 0) {
                uVar21 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar19[5]);
              }
              if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) goto LAB_015fe930;
              uVar26 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
            }
            if ((uVar21 < *(ushort *)((long)local_5a8 - (long)*local_5a8)) &&
               (uVar13 = (ulong)*(ushort *)(((long)local_5a8 - (long)*local_5a8) + (ulong)uVar21),
               uVar13 != 0)) {
              uVar26 = *(undefined4 *)((long)local_5a8 + uVar13);
            }
          }
          else {
            if ((uVar4 < 0xd) || ((ulong)puVar19[6] == 0)) goto LAB_015fe838;
            uVar26 = *(undefined4 *)((long)piVar2 + (ulong)puVar19[6]);
          }
        }
        local_370 = (long *)0x0;
        local_388 = (undefined **)0x94c72505f4bdbfa2;
        local_380 = "discardOldest";
        local_378 = 0xd;
        bVar7 = FUN_00cf7518(&local_5a8,&local_388);
        if (local_370 != (long *)0x0) {
          (**(code **)(*local_370 + 0x20))();
        }
        if ((*(char *)CONCAT44(uStack_4a4,CONCAT22(uStack_4a6,CONCAT11(uStack_4a7,local_4a8))) ==
             '\0') && (*local_340 == '\0')) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          local_5c8 = *(undefined8 *)PTR_DAT_047d3e30;
          uStack_5c0 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
          local_5b8 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
          local_5b0 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (local_5b0 != (long *)0x0) {
            (**(code **)(*local_5b0 + 0x18))();
          }
          lVar23 = FUN_0116d064(uVar12,&local_5c8);
          if (local_5b0 != (long *)0x0) {
            (**(code **)(*local_5b0 + 0x20))();
          }
          FUN_015ff4a0(lVar23,uVar30);
        }
        else {
          local_5e8 = local_348;
          local_5d8 = local_338;
          local_5d0 = local_330;
          pcStack_5e0 = local_340;
          if (local_330 != (long *)0x0) {
            (**(code **)(*local_330 + 0x18))();
          }
          lVar23 = FUN_015ff4dc(uVar12,&local_4b0,&local_5e8,uVar16,uVar30,uVar27,uVar26);
          if (local_5d0 != (long *)0x0) {
            (**(code **)(*local_5d0 + 0x20))();
          }
        }
        nn::os::LockMutex((MutexType *)(lVar23 + 0xe0));
        *(byte *)(lVar23 + 0x60) = bVar7 & 1;
        nn::os::UnlockMutex((MutexType *)(lVar23 + 0xe0));
        if (local_330 != (long *)0x0) {
          (**(code **)(*local_330 + 0x20))();
        }
        puVar24 = PTR_DAT_047d5608;
        if ((long *)CONCAT44(uStack_494,local_498) != (long *)0x0) {
          (**(code **)(*(long *)CONCAT44(uStack_494,local_498) + 0x20))();
        }
        iVar8 = iVar8 + 1;
      } while (iVar9 != iVar8);
    }
    FUN_00db239c(auStack_2b0);
    FUN_00db239c(auStack_2f0);
    local_720 = local_f8;
  }
  FUN_00db239c(&local_f0);
  FUN_00db239c(&local_420);
  FUN_01600aac(local_720);
  if (((*PTR_DAT_047d8a70 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar9 != 0))
  {
    FUN_00100190(&LAB_00a2dcb8,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a70);
  }
  lVar23 = local_f8;
  uVar12 = *(undefined8 *)PTR_DAT_047d8a78;
  *(undefined8 *)PTR_DAT_047d8a80 = uVar12;
  FUN_01601ba8(uVar12,local_f8);
  local_308 = (undefined **)0x3c63916;
  FUN_00e52f24(local_618,&local_308);
  FUN_01600920(uVar12,local_618);
  if (local_5f8 != (long *)0x0) {
    (**(code **)(*local_5f8 + 0x20))();
  }
  if (local_618[0] != (long *)0x0) {
    (**(code **)(*local_618[0] + 0x20))();
  }
  local_308 = (undefined **)0x3be88ac;
  FUN_00e52f24(local_648,&local_308);
  local_308 = (undefined **)0x3c848dc;
  FUN_00e52f24(local_678,&local_308);
  FUN_01600d04(uVar12,local_648,local_678);
  if (local_658 != (long *)0x0) {
    (**(code **)(*local_658 + 0x20))();
  }
  if (local_678[0] != (long *)0x0) {
    (**(code **)(*local_678[0] + 0x20))();
  }
  if (local_628 != (long *)0x0) {
    (**(code **)(*local_628 + 0x20))();
  }
  if (local_648[0] != (long *)0x0) {
    (**(code **)(*local_648[0] + 0x20))();
  }
  FUN_01600b74(lVar23);
  FUN_01600200(lVar23);
  FUN_0160a9c4(lVar23);
  FUN_01600c3c(lVar23);
  if (((*PTR_DAT_047d82a0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d82a0), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d8a98,PTR_DAT_047d82a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d82a0);
  }
  lVar23 = local_f8;
  uVar12 = *(undefined8 *)PTR_DAT_047d82a8;
  local_308 = (undefined **)0x3bef2e0;
  *(undefined8 *)PTR_DAT_047d82b0 = uVar12;
  FUN_00e52f24(local_6a8,&local_308);
  FUN_01609fe0(uVar12,lVar23,local_6a8);
  if (local_688 != (long *)0x0) {
    (**(code **)(*local_688 + 0x20))();
  }
  if (local_6a8[0] != (long *)0x0) {
    (**(code **)(*local_6a8[0] + 0x20))();
  }
  FUN_01600dd0(lVar23,&local_f8);
  if (((*PTR_DAT_047d82d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d82d8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d8aa0,PTR_DAT_047d82e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d82d8);
  }
  uVar12 = *(undefined8 *)PTR_DAT_047d82e0;
  local_308 = (undefined **)0x3c18ca0;
  *(undefined8 *)PTR_DAT_047d82e8 = uVar12;
  FUN_00e52f24(local_6d8,&local_308);
  FUN_01613f24(uVar12,local_6d8);
  if (local_6b8 != (long *)0x0) {
    (**(code **)(*local_6b8 + 0x20))();
  }
  if (local_6d8[0] != (long *)0x0) {
    (**(code **)(*local_6d8[0] + 0x20))();
  }
  FUN_01600ea4(local_f8,&local_f8);
  uVar12 = FUN_016003a0();
  local_308 = (undefined **)0x3bd4184;
  FUN_00e52f24(local_708,&local_308);
  FUN_0160d5f4(uVar12,local_708);
  if (local_6e8 != (long *)0x0) {
    (**(code **)(*local_6e8 + 0x20))();
  }
  if (local_708[0] != (long *)0x0) {
    (**(code **)(*local_708[0] + 0x20))();
  }
  return;
}


