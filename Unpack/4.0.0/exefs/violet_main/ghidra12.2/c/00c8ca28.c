/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c8ca28; name: FUN_00c8ca28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c8ca28(long param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  ulong uVar15;
  ushort uVar16;
  ulong uVar17;
  ushort *puVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_68;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x70);
  if (lVar9 == 0) {
    FUN_00c8dd24(&local_150,*(undefined8 *)(param_1 + 0x58));
    lVar9 = CONCAT44(uStack_14c,local_150);
    if (lVar9 != 0) {
      if (((*PTR_DAT_047daf58 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047daf58);
      }
      lVar9 = *(long *)(lVar9 + 0xc0);
      plVar10 = (long *)PTR_DAT_047daf60;
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0x70);
      }
      lVar9 = *plVar10;
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 0x28);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar10 = *(long **)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = lVar9;
      if (plVar10 != (long *)0x0) {
        plVar13 = plVar10 + 5;
        do {
          lVar9 = *plVar13;
          iVar8 = (int)lVar9 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *(int *)plVar13 = iVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_00c8d858;
      }
      plVar10 = (long *)CONCAT44(uStack_14c,local_150);
      if (plVar10 != (long *)0x0) {
        plVar13 = plVar10 + 5;
        do {
          lVar9 = *plVar13;
          iVar8 = (int)lVar9 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *(int *)plVar13 = iVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        else if ((int)lVar9 == 0) {
LAB_00c8d858:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    lVar9 = *(long *)(param_1 + 0x70);
    if (lVar9 == 0) {
      return;
    }
  }
  local_150 = 0x737159ef;
  uStack_14c = 0x94aeaab4;
  local_148 = 0x3ca6e3d;
  local_144 = 0;
  local_140 = 6;
  local_138 = (long *)0x0;
  uVar7 = FUN_00c8ea20(lVar9,&local_150);
  *(undefined2 *)(param_1 + 0x78) = uVar7;
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if ((4 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar15 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar15 != 0)) {
    puVar20 = (uint *)((long)param_2 + uVar15);
    FUN_00c8e440(param_1,param_1 + 0x80,(long)puVar20 + (ulong)*puVar20);
  }
  if (*(short *)(param_1 + 0x80) < 0) {
    return;
  }
  if (*(short *)(param_1 + 0x82) < 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x150);
  uVar4 = _UNK_03cabe58;
  uVar11 = _DAT_03cabe50;
  puVar18 = (ushort *)((long)param_2 - (long)*param_2);
  uVar16 = *puVar18;
  if (6 < uVar16) {
    uVar15 = (ulong)puVar18[3];
    lVar9 = -(long)*param_2;
    if (uVar15 != 0) {
      puVar20 = (uint *)((long)param_2 + uVar15);
      puVar20 = (uint *)((long)puVar20 + (ulong)*puVar20);
      lVar21 = (ulong)*puVar20 << 2;
      if ((ulong)*puVar20 != 0) {
        do {
          puVar20 = puVar20 + 1;
          local_150 = 0xffffffff;
          uStack_14c = 0x41f00000;
          local_148 = 0x41700000;
          local_144 = 0x3f000000;
          local_130 = 0;
          uStack_128 = 0;
          local_120 = 0;
          uStack_118 = 0;
          local_140 = 0;
          local_138 = (long *)0x0;
          local_110 = 0x3f0000003f000000;
          uStack_108 = 0x3f80000040000000;
          local_100 = 0xbe8000003e800000;
          uStack_f8 = 0x3e800000be800000;
          local_e0 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          uStack_98 = uVar4;
          local_a0 = uVar11;
          uVar15 = FUN_00c8e440(param_1,&local_150,(long)puVar20 + (ulong)*puVar20);
          if ((uVar15 & 1) != 0) {
            FUN_00c8d8b8(param_1 + 0x150,&local_150);
          }
          lVar21 = lVar21 + -4;
        } while (lVar21 != 0);
        lVar9 = -(long)*param_2;
        uVar16 = *(ushort *)((long)param_2 - (long)*param_2);
      }
    }
    if ((8 < uVar16) && (uVar15 = (ulong)*(ushort *)((long)param_2 + lVar9 + 8), uVar15 != 0)) {
      uVar14 = *(undefined4 *)((long)param_2 + uVar15);
      goto LAB_00c8cca0;
    }
  }
  uVar14 = 2;
LAB_00c8cca0:
  plVar10 = *(long **)(param_1 + 400);
  *(undefined4 *)(param_1 + 0x188) = uVar14;
  if (*(long **)(param_1 + 0x198) != plVar10) {
    plVar13 = *(long **)(param_1 + 0x198) + -2;
    if ((long *)*plVar13 != (long *)0x0) {
      (**(code **)(*(long *)*plVar13 + 0x20))();
    }
    while (plVar13 != plVar10) {
      plVar13 = plVar13 + -2;
      if ((long *)*plVar13 != (long *)0x0) {
        (**(code **)(*(long *)*plVar13 + 0x20))();
      }
    }
  }
  *(long **)(param_1 + 0x198) = plVar10;
  puVar20 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  FUN_00c8dff4(param_1 + 400,*(undefined4 *)((long)puVar20 + (ulong)*puVar20));
  puVar6 = PTR_DAT_047d8c30;
  puVar5 = PTR_DAT_047d8c28;
  uVar15 = (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2));
  puVar20 = (uint *)((long)param_2 + uVar15);
  uVar17 = (ulong)*puVar20;
  uVar19 = (ulong)*(uint *)((long)puVar20 + uVar17);
  if (uVar19 != 0) {
    lVar21 = uVar17 + uVar15;
    lVar9 = 0;
    do {
      uVar15 = (ulong)*(uint *)((long)param_2 + lVar9 + lVar21 + 4);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar11 = FUN_00d44228();
        local_150 = (undefined4)uVar11;
        uStack_14c = (undefined4)((ulong)uVar11 >> 0x20);
        FUN_00d1e764(puVar6,&local_150);
        FUN_00100190(PTR_LAB_047d9240,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar5);
      }
      plVar10 = *(long **)puVar6;
      local_150 = SUB84(plVar10,0);
      uStack_14c = (undefined4)((ulong)plVar10 >> 0x20);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      local_148 = 0;
      lVar12 = lVar9 + uVar15 + lVar21;
      lVar23 = lVar9 + (uVar15 - (long)*(int *)((long)param_2 + lVar12 + 4)) + lVar21;
      if ((*(ushort *)((long)param_2 + lVar23 + 4) < 5) ||
         (uVar17 = (ulong)*(ushort *)((long)param_2 + lVar23 + 8), uVar17 == 0)) {
        lVar23 = 0;
      }
      else {
        lVar23 = uVar15 + uVar17;
        lVar23 = (long)param_2 +
                 lVar9 + lVar23 + (ulong)*(uint *)((long)param_2 + lVar9 + lVar23 + lVar21 + 4) +
                 lVar21 + 4;
      }
      if (*(char *)(lVar23 + 4) == '\0') {
        plVar13 = (long *)FUN_00d44228();
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar11 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar11;
        FUN_00cf9884(&local_68,uVar11,(char *)(lVar23 + 4));
        plVar10 = (long *)CONCAT44(uStack_14c,local_150);
        plVar13 = local_68;
      }
      local_150 = 0;
      uStack_14c = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      local_150 = SUB84(plVar13,0);
      uStack_14c = (undefined4)((ulong)plVar13 >> 0x20);
      lVar12 = lVar9 + (uVar15 - (long)*(int *)((long)param_2 + lVar12 + 4)) + lVar21;
      local_148 = 0;
      if (6 < *(ushort *)((long)param_2 + lVar12 + 4)) {
        uVar17 = (ulong)*(ushort *)((long)param_2 + lVar12 + 10);
        local_148 = 0;
        if (uVar17 != 0) {
          local_148 = *(undefined4 *)((long)param_2 + lVar9 + uVar15 + uVar17 + lVar21 + 4);
        }
      }
      plVar10 = *(long **)(param_1 + 0x198);
      if (plVar10 < *(long **)(param_1 + 0x1a0)) {
        uVar11 = *(undefined8 *)(param_1 + 0x1a8);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00c8d854;
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar11;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          plVar13 = (long *)CONCAT44(uStack_14c,local_150);
        }
        *plVar10 = (long)plVar13;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))();
        }
        *(undefined4 *)(plVar10 + 1) = local_148;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        *(long **)(param_1 + 0x198) = plVar10 + 2;
      }
      else {
        FUN_029b3ec4(param_1 + 400,&local_150);
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      lVar9 = lVar9 + 4;
    } while (uVar19 * 4 != lVar9);
  }
  plVar10 = *(long **)(param_1 + 0x1c8);
  if (*(long **)(param_1 + 0x1d0) != plVar10) {
    plVar13 = *(long **)(param_1 + 0x1d0) + -2;
    if ((long *)*plVar13 != (long *)0x0) {
      (**(code **)(*(long *)*plVar13 + 0x20))();
    }
    while (plVar13 != plVar10) {
      plVar13 = plVar13 + -2;
      if ((long *)*plVar13 != (long *)0x0) {
        (**(code **)(*(long *)*plVar13 + 0x20))();
      }
    }
  }
  *(long **)(param_1 + 0x1d0) = plVar10;
  puVar20 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (0xc - (long)*param_2)));
  FUN_00c8dff4(param_1 + 0x1c8,*(undefined4 *)((long)puVar20 + (ulong)*puVar20));
  uVar15 = (ulong)*(ushort *)((long)param_2 + (0xc - (long)*param_2));
  puVar20 = (uint *)((long)param_2 + uVar15);
  uVar17 = (ulong)*puVar20;
  uVar19 = (ulong)*(uint *)((long)puVar20 + uVar17);
  if (uVar19 != 0) {
    lVar21 = uVar17 + uVar15;
    lVar9 = 0;
    do {
      uVar15 = (ulong)*(uint *)((long)param_2 + lVar9 + lVar21 + 4);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar11 = FUN_00d44228();
        local_150 = (undefined4)uVar11;
        uStack_14c = (undefined4)((ulong)uVar11 >> 0x20);
        FUN_00d1e764(puVar6,&local_150);
        FUN_00100190(PTR_LAB_047d9240,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar5);
      }
      plVar10 = *(long **)puVar6;
      local_150 = SUB84(plVar10,0);
      uStack_14c = (undefined4)((ulong)plVar10 >> 0x20);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      local_148 = 0;
      lVar12 = lVar9 + uVar15 + lVar21;
      lVar23 = lVar9 + (uVar15 - (long)*(int *)((long)param_2 + lVar12 + 4)) + lVar21;
      if ((*(ushort *)((long)param_2 + lVar23 + 4) < 5) ||
         (uVar17 = (ulong)*(ushort *)((long)param_2 + lVar23 + 8), uVar17 == 0)) {
        lVar23 = 0;
      }
      else {
        lVar23 = uVar15 + uVar17;
        lVar23 = (long)param_2 +
                 lVar9 + lVar23 + (ulong)*(uint *)((long)param_2 + lVar9 + lVar23 + lVar21 + 4) +
                 lVar21 + 4;
      }
      if (*(char *)(lVar23 + 4) == '\0') {
        plVar13 = (long *)FUN_00d44228();
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar11 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar11;
        FUN_00cf9884(&local_68,uVar11,(char *)(lVar23 + 4));
        plVar10 = (long *)CONCAT44(uStack_14c,local_150);
        plVar13 = local_68;
      }
      local_150 = 0;
      uStack_14c = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      local_150 = SUB84(plVar13,0);
      uStack_14c = (undefined4)((ulong)plVar13 >> 0x20);
      lVar12 = lVar9 + (uVar15 - (long)*(int *)((long)param_2 + lVar12 + 4)) + lVar21;
      local_148 = 0;
      if (6 < *(ushort *)((long)param_2 + lVar12 + 4)) {
        uVar17 = (ulong)*(ushort *)((long)param_2 + lVar12 + 10);
        local_148 = 0;
        if (uVar17 != 0) {
          local_148 = *(undefined4 *)((long)param_2 + lVar9 + uVar15 + uVar17 + lVar21 + 4);
        }
      }
      plVar10 = *(long **)(param_1 + 0x1d0);
      if (plVar10 < *(long **)(param_1 + 0x1d8)) {
        uVar11 = *(undefined8 *)(param_1 + 0x1e0);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00c8d854;
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar11;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          plVar13 = (long *)CONCAT44(uStack_14c,local_150);
        }
        *plVar10 = (long)plVar13;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))();
        }
        *(undefined4 *)(plVar10 + 1) = local_148;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        *(long **)(param_1 + 0x1d0) = plVar10 + 2;
      }
      else {
        FUN_029b3ec4(param_1 + 0x1c8,&local_150);
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      lVar9 = lVar9 + 4;
    } while (uVar19 * 4 != lVar9);
  }
  plVar10 = *(long **)(param_1 + 0x200);
  if (*(long **)(param_1 + 0x208) != plVar10) {
    plVar13 = *(long **)(param_1 + 0x208) + -2;
    if ((long *)*plVar13 != (long *)0x0) {
      (**(code **)(*(long *)*plVar13 + 0x20))();
    }
    while (plVar13 != plVar10) {
      plVar13 = plVar13 + -2;
      if ((long *)*plVar13 != (long *)0x0) {
        (**(code **)(*(long *)*plVar13 + 0x20))();
      }
    }
  }
  *(long **)(param_1 + 0x208) = plVar10;
  puVar20 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (0xe - (long)*param_2)));
  FUN_00c8dff4(param_1 + 0x200,*(undefined4 *)((long)puVar20 + (ulong)*puVar20));
  uVar15 = (ulong)*(ushort *)((long)param_2 + (0xe - (long)*param_2));
  puVar20 = (uint *)((long)param_2 + uVar15);
  uVar17 = (ulong)*puVar20;
  uVar19 = (ulong)*(uint *)((long)puVar20 + uVar17);
  if (uVar19 != 0) {
    lVar21 = uVar17 + uVar15;
    lVar9 = 0;
    do {
      uVar15 = (ulong)*(uint *)((long)param_2 + lVar9 + lVar21 + 4);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar11 = FUN_00d44228();
        local_150 = (undefined4)uVar11;
        uStack_14c = (undefined4)((ulong)uVar11 >> 0x20);
        FUN_00d1e764(puVar6,&local_150);
        FUN_00100190(PTR_LAB_047d9240,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar5);
      }
      plVar10 = *(long **)puVar6;
      local_150 = SUB84(plVar10,0);
      uStack_14c = (undefined4)((ulong)plVar10 >> 0x20);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      local_148 = 0;
      lVar23 = lVar9 + uVar15 + lVar21;
      lVar12 = uVar15 + *(ushort *)
                         ((long)param_2 +
                         lVar9 + (uVar15 - (long)*(int *)((long)param_2 + lVar23 + 4)) + lVar21 + 8)
      ;
      lVar12 = lVar12 + (ulong)*(uint *)((long)param_2 + lVar9 + lVar12 + lVar21 + 4);
      if (*(char *)((long)param_2 + lVar9 + lVar12 + lVar21 + 8) == '\0') {
        plVar13 = (long *)FUN_00d44228();
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar11 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar11;
        FUN_00cf9884(&local_68,uVar11,(long)param_2 + lVar9 + lVar12 + lVar21 + 8);
        plVar10 = (long *)CONCAT44(uStack_14c,local_150);
        plVar13 = local_68;
      }
      local_150 = 0;
      uStack_14c = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      local_150 = SUB84(plVar13,0);
      uStack_14c = (undefined4)((ulong)plVar13 >> 0x20);
      lVar12 = lVar9 + (uVar15 - (long)*(int *)((long)param_2 + lVar23 + 4)) + lVar21;
      local_148 = 0;
      if (6 < *(ushort *)((long)param_2 + lVar12 + 4)) {
        uVar17 = (ulong)*(ushort *)((long)param_2 + lVar12 + 10);
        local_148 = 0;
        if (uVar17 != 0) {
          local_148 = *(undefined4 *)((long)param_2 + lVar9 + uVar15 + uVar17 + lVar21 + 4);
        }
      }
      puVar22 = *(undefined8 **)(param_1 + 0x208);
      if (puVar22 < *(undefined8 **)(param_1 + 0x210)) {
        uVar11 = *(undefined8 *)(param_1 + 0x218);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00c8d854:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar11;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          plVar13 = (long *)CONCAT44(uStack_14c,local_150);
        }
        *puVar22 = plVar13;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        *(undefined4 *)(puVar22 + 1) = local_148;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        *(undefined8 **)(param_1 + 0x208) = puVar22 + 2;
      }
      else {
        FUN_029b3ec4(param_1 + 0x200,&local_150);
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
      lVar9 = lVar9 + 4;
    } while (uVar19 * 4 != lVar9);
  }
  *(undefined1 *)(param_1 + 0x65) = 1;
  return;
}


