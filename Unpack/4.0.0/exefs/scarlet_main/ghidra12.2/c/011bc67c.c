/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011bc67c; name: FUN_011bc67c
 */


undefined1  [16] FUN_011bc67c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined4 uVar16;
  long lVar17;
  ulong uVar18;
  code *pcVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  uint *puVar26;
  long *plVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  long local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  long *local_68;
  
  puVar26 = (uint *)*param_3;
  plVar21 = (long *)*param_2;
  plVar20 = (long *)param_2[2];
  uVar5 = *puVar26;
  plVar24 = (long *)*param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_011bd784:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar24;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  plVar14 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0xc0,8);
  if (plVar14 == (long *)0x0) {
    (**(code **)(*plVar24 + 0xe8))(plVar24);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(plVar14 + 1,0,0xb8);
  puVar8 = PTR_DAT_047d66f8;
  plVar14[2] = 0;
  *(undefined4 *)(plVar14 + 3) = 0;
  *plVar14 = (long)(puVar8 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  piVar2 = (int *)((long)puVar26 + (ulong)uVar5);
  lVar15 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar15 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = 0;
    if (*(long *)(lVar15 + 0x80) != 0) {
      lVar17 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8);
    }
  }
  plVar14[1] = lVar17;
  plVar27 = plVar14 + 5;
  *(int *)plVar27 = 0;
  *plVar14 = (long)&PTR_FUN_045a2868;
  plVar14[4] = (long)&PTR_LAB_045a28a0;
  plVar23 = plVar14 + 0x10;
  plVar14[6] = 0;
  plVar14[7] = (long)&DAT_cbf29ce484222645;
  plVar14[8] = (long)&DAT_03c886bc;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  plVar14[0xd] = 0;
  plVar14[0xe] = 0;
  plVar14[0xf] = 0;
  FUN_011bd8e0(plVar23);
  *(undefined4 *)(plVar14 + 3) = 0x800c0;
  plVar14[1] = (long)plVar24;
  plVar14[2] = (long)plVar14;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  do {
    lVar13 = *plVar27;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar11) {
      *(int *)plVar27 = (int)lVar13 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((int)lVar13 == -1) {
LAB_011bd5a0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
    local_b0 = (long *)0x0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    local_b0 = (long *)0x0;
    if (uVar18 != 0) {
      puVar3 = (uint *)((long)piVar2 + uVar18);
      local_b0 = (long *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  FUN_00ea0a7c(&local_90,&local_b0);
  plVar24 = (long *)plVar14[6];
  plVar14[6] = 0;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))();
  }
  plVar14[6] = (long)local_90;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
    local_b0 = (long *)0x0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
    local_b0 = (long *)0x0;
    if (uVar18 != 0) {
      puVar3 = (uint *)((long)piVar2 + uVar18);
      local_b0 = (long *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  FUN_00ea0a7c(&local_90,&local_b0);
  plVar25 = local_90;
  plVar24 = (long *)PTR_DAT_047d8b70;
  if (local_90 != (long *)0x0) {
    plVar24 = local_90 + 6;
  }
  lVar13 = *plVar24;
  plVar24 = (long *)PTR_PTR_047d4508;
  if (local_90 != (long *)0x0) {
    plVar24 = local_90 + 7;
  }
  lVar15 = *plVar24;
  if (local_90 == (long *)0x0) {
    lVar17 = 0;
  }
  else {
    lVar17 = local_90[8];
    (**(code **)(*local_90 + 0x18))(local_90);
  }
  plVar24 = (long *)plVar14[10];
  plVar14[7] = lVar13;
  plVar14[8] = lVar15;
  plVar14[9] = lVar17;
  plVar14[10] = 0;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))();
  }
  plVar14[10] = (long)plVar25;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (*(char *)plVar14[8] == '\0') {
    (**(code **)(*plVar20 + 0x18))(&local_90,plVar20);
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    plVar24 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      plVar24 = plVar20 + 5;
    }
    if ((long *)local_90[2] == plVar24) {
      FUN_00cbc6dc(&local_b0,&local_90);
    }
    plVar24 = local_90;
    if (local_90 != (long *)0x0) {
      plVar25 = local_90 + 3;
      do {
        sVar4 = (short)*plVar25;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar11) {
          *(short *)plVar25 = sVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 1) {
        piVar1 = (int *)((long)local_90 + 0x1c);
        do {
          iVar12 = *piVar1;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_d0 = *plVar24;
          FUN_00c44438(lVar13 + 0x8040,&local_d0);
        }
      }
      else if (sVar4 == 0) goto LAB_011bce88;
    }
    FUN_00ca1ea4(plVar14 + 0xd,&local_b0);
    plVar24 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar25 = local_b0 + 3;
      do {
        sVar4 = (short)*plVar25;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar11) {
          *(short *)plVar25 = sVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 1) {
        piVar1 = (int *)((long)local_b0 + 0x1c);
        do {
          iVar12 = *piVar1;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_90 = (long *)*plVar24;
          FUN_00c44438(lVar13 + 0x8040,&local_90);
        }
      }
      else if (sVar4 == 0) goto LAB_011bce88;
    }
  }
  (**(code **)(*plVar21 + 0x40))(&local_68,plVar21);
  plVar24 = local_68;
  local_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  FUN_00c43ef0(&local_90,local_68 + 6);
  local_b0 = (long *)0x0;
  local_a8 = (long *)0x0;
  plVar21 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    plVar21 = plVar24 + 5;
  }
  if ((long *)local_90[2] == plVar21) {
    FUN_00e29918(&local_b0,&local_90);
  }
  plVar21 = local_90;
  if (local_90 != (long *)0x0) {
    plVar24 = local_90 + 3;
    do {
      sVar4 = (short)*plVar24;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *(short *)plVar24 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar1 = (int *)((long)local_90 + 0x1c);
      do {
        iVar12 = *piVar1;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_d0 = *plVar21;
        FUN_00c44438(lVar13 + 0x8040,&local_d0);
      }
    }
    else if (sVar4 == 0) goto LAB_011bce88;
  }
  FUN_00dbd160(plVar14 + 0xb,&local_b0);
  plVar21 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar24 = local_b0 + 3;
    do {
      sVar4 = (short)*plVar24;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *(short *)plVar24 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar1 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar12 = *piVar1;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_90 = (long *)*plVar21;
        FUN_00c44438(lVar13 + 0x8040,&local_90);
      }
    }
    else if (sVar4 == 0) {
LAB_011bce88:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x60))();
  }
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) {
    local_b0 = (long *)0x0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
    local_b0 = (long *)0x0;
    if (uVar18 != 0) {
      puVar3 = (uint *)((long)piVar2 + uVar18);
      local_b0 = (long *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  FUN_00ea0a7c(&local_90,&local_b0);
  plVar21 = (long *)plVar14[0xf];
  plVar14[0xf] = 0;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x20))();
  }
  plVar14[0xf] = (long)local_90;
  lVar13 = *param_1;
  plVar21 = (long *)plVar14[0x10];
  if (plVar21 != (long *)0x0) {
    plVar24 = (long *)plVar14[0x11];
    if (plVar24 == plVar21) {
      plVar24 = plVar21;
    }
    else {
      do {
        plVar24 = plVar24 + -1;
        if ((long *)*plVar24 != (long *)0x0) {
          (**(code **)(*(long *)*plVar24 + 0x20))();
        }
      } while (plVar21 != plVar24);
      plVar24 = (long *)*plVar23;
    }
    plVar14[0x11] = (long)plVar21;
    lVar15 = plVar14[0x12];
    plVar21 = (long *)plVar14[0x13];
    uVar18 = (**(code **)(*plVar21 + 0xf8))(plVar21);
    if (((uVar18 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar21 + 0x18))(plVar21,plVar24,lVar15 - (long)plVar24,8);
    }
    else {
      FUN_00c48fe8(plVar21,plVar24,lVar15 - (long)plVar24,8);
    }
    plVar14[0x11] = 0;
    plVar14[0x12] = 0;
    *plVar23 = 0;
  }
  plVar14[0x13] = lVar13;
  plVar14[0x14] = 0x1fffffffffffffff;
  plVar14[0x15] = 0;
  *(undefined4 *)(plVar14 + 0x16) = 0;
  *plVar23 = 0;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
    uVar16 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
    uVar16 = 0;
    if (uVar18 != 0) {
      uVar16 = *(undefined4 *)((long)piVar2 + uVar18);
    }
  }
  *(undefined4 *)(plVar14 + 0x17) = uVar16;
  if ((((8 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar18 != 0)) &&
      (iVar12 = *(int *)((long)piVar2 + uVar18), iVar12 != 0)) && (iVar12 != 2)) {
    if (iVar12 == 3) {
      *(undefined4 *)(plVar14 + 0x17) = 2;
    }
    else {
      *(undefined4 *)(plVar14 + 0x17) = 0;
    }
  }
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) {
    uVar16 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5];
    uVar16 = 0;
    if (uVar18 != 0) {
      uVar16 = *(undefined4 *)((long)piVar2 + uVar18);
    }
  }
  *(undefined4 *)((long)plVar14 + 0xbc) = uVar16;
  if ((0xe < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7], uVar18 != 0)) {
    puVar3 = (uint *)((long)piVar2 + uVar18);
    uVar22 = (ulong)*puVar3;
    FUN_011bda1c(plVar23,*(undefined4 *)((long)puVar3 + uVar22));
    if (*(int *)((long)puVar3 + uVar22) != 0) {
      lVar13 = 0;
      uVar28 = 0;
      lVar15 = uVar5 + uVar22 + uVar18 + 4;
      do {
        local_90 = (long *)((long)puVar26 +
                           lVar13 + (ulong)*(uint *)((long)puVar26 + uVar28 * 4 + lVar15) + lVar15);
        FUN_011bdcc4(plVar23,&local_90);
        uVar28 = uVar28 + 1;
        lVar13 = lVar13 + 4;
      } while (uVar28 < *(uint *)((long)puVar3 + uVar22));
    }
  }
  plVar24 = (long *)plVar14[6];
  plVar21 = (long *)PTR_DAT_047d8b70;
  if (plVar24 != (long *)0x0) {
    plVar21 = plVar24 + 6;
  }
  local_d0 = *plVar21;
  plVar21 = (long *)PTR_PTR_047d4508;
  if (plVar24 != (long *)0x0) {
    plVar21 = plVar24 + 7;
  }
  lStack_c8 = *plVar21;
  if (plVar24 == (long *)0x0) {
    local_c0 = 0;
  }
  else {
    local_c0 = plVar24[8];
  }
  local_b8 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x18))(plVar24);
  }
  do {
    lVar13 = *plVar27;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar11) {
      *(int *)plVar27 = (int)lVar13 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  local_b8 = plVar24;
  if ((int)lVar13 == -1) goto LAB_011bd5a0;
  do {
    lVar13 = *plVar27;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar11) {
      *(int *)plVar27 = (int)lVar13 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((int)lVar13 == -1) goto LAB_011bd5a0;
  do {
    lVar13 = *plVar27;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar11) {
      *(int *)plVar27 = (int)lVar13 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((int)lVar13 == -1) goto LAB_011bd5a0;
  plVar21 = (long *)(**(code **)(*plVar20 + 0x138))(plVar20);
  plVar24 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x300,0x10);
  if (plVar24 == (long *)0x0) {
    local_80 = 0;
    uStack_78 = 0;
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_011bd784;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar21;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    FUN_00e76b9c(plVar24,&local_d0);
    puVar8 = PTR_DAT_047db030;
    plVar24[0x40] = 0;
    plVar24[0x10] = 0;
    plVar24[0x11] = 0;
    plVar24[0x12] = 0;
    plVar24[0x13] = 0;
    *plVar24 = (long)(puVar8 + 0x10);
    plVar24[0x41] = 0;
    plVar24[0x42] = 0;
    plVar24[0x43] = 0;
    plVar24[0x53] = 0;
    plVar24[0x52] = 0;
    plVar24[0x51] = 0;
    plVar24[0x50] = 0;
    plVar24[0x20] = 0;
    plVar24[0x21] = 0;
    plVar24[0x22] = 0;
    plVar24[0x23] = 0;
    plVar24[0x30] = 0;
    plVar24[0x31] = 0;
    plVar24[0x32] = 0;
    plVar24[0x33] = 0;
    local_80 = 0x300;
    uStack_78 = 0x10;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    local_90 = plVar24;
    plStack_88 = plVar21;
  }
  do {
    lVar13 = *plVar27;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar11) {
      *(int *)plVar27 = (int)lVar13 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((int)lVar13 == -1) goto LAB_011bd5a0;
  pcVar19 = (code *)plVar24[0x11];
  if (pcVar19 != (code *)0x0) {
    plVar24[0x12] = 0;
    plVar24[0x13] = 0;
    plVar24[0x10] = 0;
    plVar24[0x11] = 0;
    (*pcVar19)(plVar24 + 0x14);
  }
  plVar21 = local_90;
  plVar24[0x10] = (long)&LAB_013d13fc;
  plVar24[0x11] = (long)&LAB_02b59c30;
  plVar24[0x12] = (long)&LAB_02b59c9c;
  plVar24[0x13] = (long)&LAB_02b59cfc;
  plVar24[0x14] = (long)plVar14;
  do {
    lVar13 = *plVar27;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar11) {
      *(int *)plVar27 = (int)lVar13 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((int)lVar13 == -1) goto LAB_011bd5a0;
  pcVar19 = (code *)local_90[0x21];
  if (pcVar19 != (code *)0x0) {
    local_90[0x22] = 0;
    local_90[0x23] = 0;
    local_90[0x20] = 0;
    local_90[0x21] = 0;
    (*pcVar19)(local_90 + 0x24);
  }
  plVar24 = local_90;
  plVar21[0x20] = (long)&LAB_01a88284;
  plVar21[0x21] = (long)&LAB_02b59d0c;
  plVar21[0x22] = (long)&LAB_02b59d78;
  plVar21[0x23] = (long)&LAB_02b59dd8;
  plVar21[0x24] = (long)plVar14;
  pcVar19 = (code *)local_90[0x31];
  if (pcVar19 != (code *)0x0) {
    local_90[0x32] = 0;
    local_90[0x33] = 0;
    local_90[0x30] = 0;
    local_90[0x31] = 0;
    (*pcVar19)(local_90 + 0x34);
  }
  pcVar19 = (code *)plVar24[0x41];
  if (pcVar19 != (code *)0x0) {
    plVar24[0x43] = 0;
    plVar24[0x42] = 0;
    plVar24[0x41] = 0;
    plVar24[0x40] = 0;
    (*pcVar19)(plVar24 + 0x44);
  }
  do {
    lVar13 = *plVar27;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar11) {
      *(int *)plVar27 = (int)lVar13 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((int)lVar13 == -1) goto LAB_011bd5a0;
  pcVar19 = (code *)plVar24[0x51];
  if (pcVar19 != (code *)0x0) {
    plVar24[0x52] = 0;
    plVar24[0x53] = 0;
    plVar24[0x50] = 0;
    plVar24[0x51] = 0;
    (*pcVar19)(plVar24 + 0x54);
  }
  local_b0 = local_90;
  plVar24[0x50] = (long)&LAB_021b7634;
  plVar24[0x51] = (long)&LAB_02b59de8;
  plVar24[0x52] = (long)&LAB_02b59e54;
  plVar24[0x54] = (long)plVar14;
  plVar24[0x53] = (long)&LAB_02b59eb4;
  local_90 = (long *)0x0;
  local_a8 = plStack_88;
  local_a0 = local_80;
  local_98 = uStack_78;
  FUN_00e767a8(plVar20,&local_b0);
  plVar21 = local_b0;
  local_b0 = (long *)0x0;
  if (plVar21 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar13 = FUN_00c4e600();
    iVar6 = *(int *)(lVar13 + 0x12c8);
    iVar12 = iVar6 + 1;
    *(int *)(lVar13 + 0x12c8) = iVar12;
    if (*(int *)(lVar13 + 0x12cc) <= iVar6) {
      *(int *)(lVar13 + 0x12cc) = iVar12;
    }
    (**(code **)*plVar21)(plVar21);
    uVar10 = local_98;
    uVar9 = local_a0;
    plVar24 = local_a8;
    uVar18 = (**(code **)(*local_a8 + 0xf8))(local_a8);
    if (((uVar18 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar24 + 0x18))(plVar24,plVar21,uVar9,uVar10);
    }
    else {
      FUN_00c48fe8(plVar24,plVar21,uVar9,uVar10);
    }
    lVar13 = FUN_00c4e600();
    iVar12 = *(int *)(lVar13 + 0x12c8) + -1;
    *(int *)(lVar13 + 0x12c8) = iVar12;
    if (iVar12 == 0) {
      plVar21 = (long *)FUN_00c4e600();
      if (plVar21[600] != 0) {
        local_70 = plVar21 + plVar21[600] * 3;
        local_68 = plVar21;
        FUN_00c4ea30(&local_68,&local_70);
        plVar23 = (long *)*plVar21;
        plVar24 = plVar21;
        if (plVar21[600] != 0) {
          plVar24 = plVar21 + plVar21[600] * 3;
        }
        if (plVar24 == plVar21) {
          uVar22 = 0;
          uVar18 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar21 + 0xd0))();
          if ((long *)*plVar21 != plVar23) {
            (**(code **)(*plVar23 + 0x100))(plVar23,plVar21,plVar21);
            plVar23 = (long *)*plVar21;
          }
          plVar25 = plVar21 + 3;
          if (plVar24 == plVar25) {
            uVar22 = 0;
            uVar18 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar25 + 0xd0))();
            bVar11 = (long *)*plVar25 != plVar23;
            if (bVar11) {
              (**(code **)(*plVar23 + 0x100))(plVar23,plVar21,plVar21 + 3);
              plVar23 = (long *)plVar21[3];
            }
            uVar22 = (ulong)bVar11;
            plVar25 = plVar21 + 6;
            if (plVar24 == plVar25) {
              uVar18 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar25 + 0xd0))();
              if ((long *)*plVar25 != plVar23) {
                (**(code **)(*plVar23 + 0x100))(plVar23,plVar21 + uVar22 * 3,plVar21 + 6);
                plVar23 = (long *)plVar21[6];
                uVar22 = 2;
              }
              plVar25 = plVar21 + 9;
              if (plVar24 == plVar25) {
                uVar18 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar25 + 0xd0))();
                if ((long *)*plVar25 != plVar23) {
                  (**(code **)(*plVar23 + 0x100))(plVar23,plVar21 + uVar22 * 3,plVar21 + 9);
                  plVar23 = (long *)plVar21[9];
                  uVar22 = 3;
                }
                plVar25 = plVar21 + 0xc;
                if (plVar24 == plVar25) {
                  uVar18 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar25 + 0xd0))();
                  if ((long *)*plVar25 != plVar23) {
                    (**(code **)(*plVar23 + 0x100))(plVar23,plVar21 + uVar22 * 3,plVar21 + 0xc);
                    plVar23 = (long *)plVar21[0xc];
                    uVar22 = 4;
                  }
                  plVar25 = plVar21 + 0xf;
                  if (plVar24 == plVar25) {
                    uVar18 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar25 + 0xd0))();
                    if ((long *)*plVar25 != plVar23) {
                      (**(code **)(*plVar23 + 0x100))(plVar23,plVar21 + uVar22 * 3,plVar21 + 0xf);
                      plVar23 = (long *)plVar21[0xf];
                      uVar22 = 5;
                    }
                    uVar18 = 6;
                    for (plVar25 = plVar21 + 0x12; plVar24 != plVar25; plVar25 = plVar25 + 3) {
                      (**(code **)(*(long *)*plVar25 + 0xd0))();
                      if ((long *)*plVar25 != plVar23) {
                        (**(code **)(*plVar23 + 0x100))(plVar23,plVar21 + uVar22 * 3,plVar25);
                        plVar23 = (long *)*plVar25;
                        uVar22 = uVar18;
                      }
                      uVar18 = uVar18 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar23 + 0x100))(plVar23,plVar21 + uVar22 * 3,plVar21 + uVar18 * 3);
        plVar21[600] = 0;
      }
      *(undefined4 *)(lVar13 + 0x12cc) = 0;
    }
    plVar21 = local_90;
    local_90 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      FUN_01e2e474(&plStack_88);
    }
  }
  do {
    lVar13 = *plVar27;
    iVar12 = (int)lVar13 + -1;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar11) {
      *(int *)plVar27 = iVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  else if ((int)lVar13 == 0) goto LAB_011bd618;
  do {
    lVar13 = *plVar27;
    iVar12 = (int)lVar13 + -1;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar11) {
      *(int *)plVar27 = iVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  else if ((int)lVar13 == 0) goto LAB_011bd618;
  do {
    lVar13 = *plVar27;
    iVar12 = (int)lVar13 + -1;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar11) {
      *(int *)plVar27 = iVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  else if ((int)lVar13 == 0) goto LAB_011bd618;
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  do {
    lVar13 = *plVar27;
    iVar12 = (int)lVar13 + -1;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar11) {
      *(int *)plVar27 = iVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  else if ((int)lVar13 == 0) {
LAB_011bd618:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  auVar29._8_8_ = plVar20;
  auVar29._0_8_ = 2;
  return auVar29;
}


