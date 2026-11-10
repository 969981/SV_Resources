/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010289bc; name: FUN_010289bc
 */


/* WARNING: Removing unreachable block (ram,0x01029418) */
/* WARNING: Removing unreachable block (ram,0x0102941c) */
/* WARNING: Removing unreachable block (ram,0x01029424) */
/* WARNING: Removing unreachable block (ram,0x0102942c) */
/* WARNING: Removing unreachable block (ram,0x010297bc) */
/* WARNING: Removing unreachable block (ram,0x01029430) */
/* WARNING: Removing unreachable block (ram,0x01029434) */

void FUN_010289bc(long param_1,undefined8 param_2,ulong *param_3,byte param_4,long *param_5,
                 long *param_6,undefined8 *param_7)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  ulong uVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  float fVar31;
  long *local_150;
  undefined8 uStack_148;
  long local_140;
  undefined1 local_138;
  byte local_137;
  undefined1 local_136;
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  long local_110 [12];
  long *local_b0;
  long *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  param_4 = param_4 & 1;
  FUN_0102acf4(param_1,param_3);
  local_88 = (long *)0x0;
  local_a8 = (long *)0x0;
  local_a0 = &DAT_cbf29ce484222645;
  local_98 = &DAT_03c886bc;
  local_90 = 0;
  local_138 = *(undefined1 *)(param_1 + 0x330);
  local_136 = *(undefined1 *)(param_1 + 0x331);
  plVar23 = (long *)*param_6;
  local_130 = &LAB_02bd0124;
  local_128 = FUN_02bd0208;
  local_120 = &LAB_02bd020c;
  puStack_118 = &LAB_02bd0218;
  local_140 = param_1;
  local_137 = param_4;
  local_110[0] = param_1;
  local_b0 = param_5;
  if (plVar23 != (long *)0x0) {
    plVar12 = plVar23 + 5;
    do {
      lVar10 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar10 == -1) goto LAB_01029b64;
  }
  local_a0 = (undefined1 *)*param_7;
  local_98 = (undefined1 *)param_7[1];
  local_90 = param_7[2];
  plVar12 = (long *)param_7[3];
  local_a8 = plVar23;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if (local_88 != (long *)0x0) {
    lVar10 = *local_88;
    local_88 = plVar12;
    (**(code **)(lVar10 + 0x20))();
    plVar12 = local_88;
  }
  local_88 = plVar12;
  plVar23 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_01029b6c;
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar23;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar11 = (**(code **)(*plVar23 + 0x10))(plVar23,0x170,0x10);
  if (lVar11 == 0) {
    lVar10 = *plVar23;
    goto LAB_01029c68;
  }
  FUN_0102a018(lVar11,&local_140);
  *(undefined4 *)(lVar11 + 0x18) = 0x100170;
  *(long **)(lVar11 + 8) = plVar23;
  *(long *)(lVar11 + 0x10) = lVar11;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  lVar10 = *(long *)(lVar11 + 0x30);
  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar4 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 == 0) {
    uVar27 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    *(undefined8 *)(lVar10 + 8) = uVar27;
    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
  }
  else if (sVar4 == -1) {
    pcVar18 = "count != 0";
    pcVar20 = "AddReference";
    pcVar21 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar22 = "Reference counter overflows.";
    goto LAB_01029230;
  }
  lVar10 = *(long *)(param_1 + 0x1c0);
  if (lVar10 == 0) {
    plVar23 = (long *)FUN_01029d2c(&local_80,*(undefined8 *)(param_1 + 8),&DAT_0485a0a0);
    if (plVar23 != (long *)0x0) {
      plVar12 = plVar23 + 5;
      do {
        lVar10 = *plVar12;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *(int *)plVar12 = (int)lVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar10 == -1) goto LAB_01029b64;
      do {
        lVar10 = *plVar12;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *(int *)plVar12 = (int)lVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar10 == -1) goto LAB_01029b64;
    }
    plVar12 = *(long **)(lVar11 + 0x78);
    *(long **)(lVar11 + 0x78) = plVar23;
    if (plVar12 != (long *)0x0) {
      plVar14 = plVar12 + 5;
      do {
        lVar10 = *plVar14;
        iVar9 = (int)lVar10 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar10 == 0) {
LAB_010298a4:
        pcVar18 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar20 = "DecrementReferenceInternal";
        pcVar21 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar22 = "Reference counter underflows.";
        goto LAB_01029230;
      }
    }
    if (plVar23 == (long *)0x0) goto LAB_01028c0c;
    plVar12 = plVar23 + 5;
    do {
      lVar10 = *plVar12;
      iVar9 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      goto LAB_01028c0c;
    }
    if ((int)lVar10 != 0) goto LAB_01028c0c;
LAB_01029210:
    pcVar18 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar20 = "DecrementReferenceInternal";
    pcVar21 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
    ;
    pcVar22 = "Reference counter underflows.";
LAB_01029230:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar18,pcVar20,pcVar21,0x58,pcVar22);
  }
  piVar3 = (int *)(lVar10 + 0x28);
  do {
    iVar9 = *piVar3;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar6) {
      *piVar3 = iVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar9 == -1) goto LAB_01029b64;
  plVar23 = *(long **)(lVar11 + 0x78);
  *(long *)(lVar11 + 0x78) = lVar10;
  if (plVar23 != (long *)0x0) {
    plVar12 = plVar23 + 5;
    do {
      lVar10 = *plVar12;
      iVar9 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_010298a4;
  }
LAB_01028c0c:
  plVar23 = param_5;
  if (param_5 == (long *)0x0) {
    plVar23 = *(long **)(param_1 + 8);
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_00c43ef0(&local_80,param_1 + 0x98);
  local_150 = (long *)0x0;
  uStack_148 = 0;
  if (local_80[2] == param_1 + 0x28) {
    FUN_00c953a8(&local_150,&local_80);
  }
  plVar12 = local_80;
  if (local_80 != (long *)0x0) {
    plVar14 = local_80 + 3;
    do {
      sVar4 = (short)*plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(short *)plVar14 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_80 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_70[0] = *plVar12;
        FUN_00c44438(lVar10 + 0x8040,local_70);
      }
    }
    else if (sVar4 == 0) goto LAB_010292c4;
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_01029b6c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar23;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  plVar12 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x130,0x10);
  puVar7 = PTR_DAT_047d66f8;
  if (plVar12 != (long *)0x0) {
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 0;
    *plVar12 = (long)(puVar7 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar13 == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = 0;
      if (*(long *)(lVar13 + 0x80) != 0) {
        lVar24 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8);
      }
    }
    plVar29 = plVar12 + 5;
    *(int *)plVar29 = 0;
    *plVar12 = (long)&PTR_LAB_045de310;
    plVar12[1] = lVar24;
    plVar12[4] = (long)&PTR_LAB_045de348;
    plVar12[6] = 0;
    plVar12[7] = 0;
    plVar12[0xb] = 0;
    plVar12[8] = 0;
    plVar12[9] = 0;
    plVar12[10] = 0;
    FUN_00cacc64(plVar12 + 10,&local_150);
    plVar14 = local_150;
    plVar12[6] = (long)&LAB_02768ea8;
    plVar12[7] = (long)&LAB_02768ff0;
    plVar12[8] = (long)&LAB_02769100;
    plVar12[9] = (long)&LAB_02769114;
    *(undefined4 *)(plVar12 + 3) = 0x100130;
    plVar12[0x16] = 0;
    plVar12[0x17] = 0;
    plVar12[0x18] = 0;
    plVar12[0x19] = 0;
    plVar12[1] = (long)plVar23;
    plVar12[2] = (long)plVar12;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    do {
      lVar10 = *plVar29;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar6) {
        *(int *)plVar29 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar10 == -1) goto LAB_01029b64;
    if (local_150 != (long *)0x0) {
      plVar16 = local_150 + 3;
      do {
        sVar4 = (short)*plVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(short *)plVar16 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_150 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_80 = (long *)*plVar14;
          FUN_00c44438(lVar10 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_010292c4;
    }
    local_80 = (long *)0x0;
    uStack_78 = 0;
    FUN_00c43ef0(&local_80,param_1 + 0x98);
    local_150 = (long *)0x0;
    uStack_148 = 0;
    if (local_80[2] == param_1 + 0x28) {
      FUN_00c953a8(&local_150,&local_80);
    }
    plVar14 = local_80;
    if (local_80 != (long *)0x0) {
      plVar16 = local_80 + 3;
      do {
        sVar4 = (short)*plVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(short *)plVar16 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_80 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_70[0] = *plVar14;
          FUN_00c44438(lVar10 + 0x8040,local_70);
        }
      }
      else if (sVar4 == 0) goto LAB_010292c4;
    }
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_01029b6c;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar23;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar14 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x130,0x10);
    puVar7 = PTR_DAT_047d66f8;
    if (plVar14 != (long *)0x0) {
      plVar14[2] = 0;
      *(undefined4 *)(plVar14 + 3) = 0;
      *plVar14 = (long)(puVar7 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar13 == 0) {
        lVar24 = 0;
      }
      else {
        lVar24 = 0;
        if (*(long *)(lVar13 + 0x80) != 0) {
          lVar24 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8);
        }
      }
      *plVar14 = (long)&PTR_LAB_045de310;
      plVar14[1] = lVar24;
      plVar30 = plVar14 + 5;
      *(int *)plVar30 = 0;
      plVar14[4] = (long)&PTR_LAB_045de348;
      plVar14[0xb] = 0;
      plVar14[6] = 0;
      plVar14[7] = 0;
      plVar14[8] = 0;
      plVar14[9] = 0;
      plVar14[10] = 0;
      FUN_00cacc64(plVar14 + 10,&local_150);
      plVar16 = local_150;
      plVar14[6] = (long)&LAB_02769128;
      plVar14[7] = (long)&LAB_02769270;
      plVar14[8] = (long)&LAB_02769380;
      plVar14[9] = (long)&LAB_02769394;
      *(undefined4 *)(plVar14 + 3) = 0x100130;
      plVar14[0x16] = 0;
      plVar14[0x17] = 0;
      plVar14[0x18] = 0;
      plVar14[0x19] = 0;
      plVar14[1] = (long)plVar23;
      plVar14[2] = (long)plVar14;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      do {
        lVar10 = *plVar30;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar6) {
          *(int *)plVar30 = (int)lVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar10 == -1) goto LAB_01029b64;
      if (local_150 != (long *)0x0) {
        plVar23 = local_150 + 3;
        do {
          sVar4 = (short)*plVar23;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *(short *)plVar23 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_150 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_80 = (long *)*plVar16;
            FUN_00c44438(lVar10 + 0x8040,&local_80);
          }
        }
        else if (sVar4 == 0) {
LAB_010292c4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      do {
        lVar10 = *plVar29;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar6) {
          *(int *)plVar29 = (int)lVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar10 == -1) goto LAB_01029b64;
      plVar23 = *(long **)(lVar11 + 0x158);
      *(long **)(lVar11 + 0x158) = plVar12;
      if (plVar23 != (long *)0x0) {
        plVar16 = plVar23 + 5;
        do {
          lVar10 = *plVar16;
          iVar9 = (int)lVar10 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *(int *)plVar16 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar23 + 0x10))();
        }
        else if ((int)lVar10 == 0) goto LAB_01029210;
      }
      do {
        lVar10 = *plVar30;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar6) {
          *(int *)plVar30 = (int)lVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar10 == -1) {
LAB_01029b64:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar23 = *(long **)(lVar11 + 0x160);
      *(long **)(lVar11 + 0x160) = plVar14;
      if (plVar23 == (long *)0x0) {
LAB_01028f2c:
        FUN_0102a258(lVar11,param_2);
        puVar2 = (ulong *)(param_1 + 0x140);
        uVar15 = nn::os::GetCurrentThread();
LAB_01028f44:
        if (*puVar2 == 0) goto code_r0x01028f4c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        do {
          if (*puVar2 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
              while (*puVar2 == 0) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                  *puVar2 = uVar15;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_01028f54;
              }
            } while( true );
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar15;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_01028f54:
        plVar23 = (long *)(param_1 + 0x158);
        uVar28 = *(ulong *)(param_1 + 0x160);
        uVar26 = *param_3;
        if (uVar28 == 0) {
LAB_01028f6c:
          plVar16 = (long *)(**(code **)(**(long **)(param_1 + 400) + 0x10))
                                      (*(long **)(param_1 + 400),0x38,8);
          if (plVar16 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 400) + 0xe8))();
          }
          uVar27 = *(undefined8 *)(param_1 + 400);
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar10 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar10 != 0) {
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_01029b6c;
            *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar27;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          }
          plVar16[2] = *param_3;
          plVar16[3] = param_3[1];
          plVar16[4] = param_3[2];
          plVar17 = (long *)param_3[3];
          plVar16[5] = (long)plVar17;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x18))();
          }
          plVar16[6] = 0;
          if (lVar10 != 0) {
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          }
          *plVar16 = 0;
          plVar16[1] = uVar26;
          fVar31 = (float)(*(long *)(param_1 + 0x1b0) + 1);
          if ((uVar28 == 0) || (*(float *)(param_1 + 0x1b8) * (float)uVar28 < fVar31)) {
            uVar15 = (ulong)(uVar28 < 3 || (uVar28 & uVar28 - 1) != 0) | uVar28 << 1;
            uVar28 = (ulong)(fVar31 / *(float *)(param_1 + 0x1b8));
            if (uVar28 <= uVar15) {
              uVar28 = uVar15;
            }
            if (uVar28 - 1 == 0) {
              uVar28 = 2;
            }
            else if ((uVar28 & uVar28 - 1) != 0) {
              uVar28 = std::__next_prime(uVar28);
            }
            uVar15 = *(ulong *)(param_1 + 0x160);
            if (uVar15 < uVar28) {
              uVar19 = uVar28;
LAB_0102909c:
              FUN_0102a9c8(plVar23,uVar19);
            }
            else if (uVar28 < uVar15) {
              uVar19 = (ulong)((float)*(ulong *)(param_1 + 0x1b0) / *(float *)(param_1 + 0x1b8));
              if ((uVar15 < 3) ||
                 (uVar25 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
                 uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333),
                 1 < (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                uVar19 = std::__next_prime(uVar19);
              }
              else if (1 < uVar19) {
                uVar19 = 1L << (-LZCOUNT(uVar19 - 1) & 0x3fU);
              }
              if (uVar19 <= uVar28) {
                uVar19 = uVar28;
              }
              if (uVar19 < uVar15) goto LAB_0102909c;
            }
            uVar28 = *(ulong *)(param_1 + 0x160);
            if ((uVar28 & uVar28 - 1) == 0) {
              uVar15 = uVar28 - 1 & uVar26;
            }
            else if (uVar26 < uVar28) {
              uVar15 = uVar26;
            }
            else {
              uVar15 = 0;
              if (uVar28 != 0) {
                uVar15 = uVar26 / uVar28;
              }
              uVar15 = uVar26 - uVar15 * uVar28;
            }
          }
          plVar17 = *(long **)(*plVar23 + uVar15 * 8);
          if (plVar17 == (long *)0x0) {
            *plVar16 = *(long *)(param_1 + 0x188);
            *(long **)(param_1 + 0x188) = plVar16;
            *(long *)(*(long *)(param_1 + 0x158) + uVar15 * 8) = param_1 + 0x188;
            if (*plVar16 != 0) {
              uVar15 = *(ulong *)(*plVar16 + 8);
              if ((uVar28 & uVar28 - 1) == 0) {
                uVar15 = uVar15 & uVar28 - 1;
              }
              else if (uVar28 <= uVar15) {
                uVar26 = 0;
                if (uVar28 != 0) {
                  uVar26 = uVar15 / uVar28;
                }
                uVar15 = uVar15 - uVar26 * uVar28;
              }
              plVar17 = (long *)(*plVar23 + uVar15 * 8);
              goto LAB_010294bc;
            }
          }
          else {
            *plVar16 = *plVar17;
LAB_010294bc:
            *plVar17 = (long)plVar16;
          }
          *(long *)(param_1 + 0x1b0) = *(long *)(param_1 + 0x1b0) + 1;
        }
        else {
          uVar19 = uVar28 - 1;
          if ((uVar28 & uVar19) != 0) {
            uVar15 = uVar26;
            if (uVar28 <= uVar26) {
              uVar15 = 0;
              if (uVar28 != 0) {
                uVar15 = uVar26 / uVar28;
              }
              uVar15 = uVar26 - uVar15 * uVar28;
            }
            plVar16 = *(long **)(*plVar23 + uVar15 * 8);
            if (plVar16 != (long *)0x0) {
              while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
                uVar19 = plVar16[1];
                if (uVar19 != uVar26) {
                  if (uVar28 <= uVar19) {
                    uVar25 = 0;
                    if (uVar28 != 0) {
                      uVar25 = uVar19 / uVar28;
                    }
                    uVar19 = uVar19 - uVar25 * uVar28;
                  }
                  if (uVar19 != uVar15) break;
                }
                if (plVar16[2] == uVar26) goto LAB_010290ec;
              }
            }
            goto LAB_01028f6c;
          }
          uVar15 = uVar19 & uVar26;
          plVar16 = *(long **)(*plVar23 + uVar15 * 8);
          if (plVar16 == (long *)0x0) goto LAB_01028f6c;
          do {
            plVar16 = (long *)*plVar16;
            if ((plVar16 == (long *)0x0) ||
               (plVar16[1] != uVar26 && (plVar16[1] & uVar19) != uVar15)) goto LAB_01028f6c;
          } while (plVar16[2] != uVar26);
        }
LAB_010290ec:
        plVar23 = (long *)plVar16[6];
        plVar16[6] = 0;
        if (plVar23 != (long *)0x0) {
          lVar10 = plVar23[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar23 + 0x50))();
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        plVar16[6] = lVar11;
        *(undefined4 *)(param_1 + 0x130) = 1;
        if (*param_6 != 0) {
          pcVar18 = *(char **)(*param_6 + 0x38);
          if ((pcVar18 == (char *)0x0) || (*pcVar18 == '\0')) {
            plVar23 = (long *)FUN_00d44228();
            if (plVar23 != (long *)0x0) {
              (**(code **)(*plVar23 + 0x18))(plVar23);
            }
          }
          else {
            if (((*PTR_DAT_047d4240 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d4240);
            }
            uVar27 = *(undefined8 *)PTR_DAT_047d4248;
            *(undefined8 *)PTR_DAT_047d4250 = uVar27;
            FUN_00cf9884(&local_80,uVar27,pcVar18);
            plVar23 = local_80;
          }
          plVar16 = *(long **)(param_1 + 0x2f0);
          *(undefined8 *)(param_1 + 0x2f0) = 0;
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x20))();
          }
          *(long **)(param_1 + 0x2f0) = plVar23;
        }
        *(undefined8 *)(param_1 + 0x140) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
        do {
          lVar10 = *plVar30;
          iVar9 = (int)lVar10 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar6) {
            *(int *)plVar30 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
LAB_01029140:
          do {
            lVar10 = *plVar29;
            iVar9 = (int)lVar10 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar6) {
              *(int *)plVar29 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
          else if ((int)lVar10 == 0) goto LAB_01029210;
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          if (local_a8 == (long *)0x0) {
LAB_01029168:
            pcVar8 = local_128;
            if (local_128 != (code *)0x0) {
              local_120 = (undefined1 *)0x0;
              puStack_118 = (undefined1 *)0x0;
              local_130 = (undefined1 *)0x0;
              local_128 = (code *)0x0;
              (*pcVar8)(local_110);
            }
            return;
          }
          plVar23 = local_a8 + 5;
          do {
            lVar10 = *plVar23;
            iVar9 = (int)lVar10 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar6) {
              *(int *)plVar23 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*local_a8 + 0x10))();
            goto LAB_01029168;
          }
          if ((int)lVar10 != 0) goto LAB_01029168;
        }
        else if ((int)lVar10 != 0) goto LAB_01029140;
        goto LAB_01029210;
      }
      plVar16 = plVar23 + 5;
      do {
        lVar10 = *plVar16;
        iVar9 = (int)lVar10 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(int *)plVar16 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar23 + 0x10))();
        goto LAB_01028f2c;
      }
      if ((int)lVar10 != 0) goto LAB_01028f2c;
      goto LAB_01029210;
    }
  }
  lVar10 = *plVar23;
LAB_01029c68:
  (**(code **)(lVar10 + 0xe8))(plVar23);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("ptr","Create",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
             ,0x40);
code_r0x01028f4c:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar6) {
    *puVar2 = uVar15;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01028f54;
  goto LAB_01028f44;
}


