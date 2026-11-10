/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011cd434; name: FUN_011cd434
 */


undefined8 FUN_011cd434(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  long lVar21;
  short sVar22;
  long *plVar23;
  long *local_100;
  long *local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  long *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98 [6];
  undefined2 uStack_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined1 local_6c;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  long local_58;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    local_c0 = (long *)0x0;
    local_b0 = 0xffffffffffffffff;
    uStack_a8 = 0x3ffffffff;
    local_8c = 0x1ffffff;
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_a0 = 0xffffffffffffffff;
    local_6c = 0;
    uStack_6a = 0x100;
    uStack_68 = 0x1000100;
    local_88 = 0xffffffffffffffff;
    local_80 = 0xffffffff;
    local_7c = 0;
    local_74 = 0xffff00000000;
    local_90 = (undefined2)*(undefined4 *)(param_1 + 0x128);
    local_8e = (undefined2)*(undefined4 *)(param_1 + 300);
    _local_98 = CONCAT26((short)*(undefined4 *)(param_1 + 0x130),
                         CONCAT24(0,CONCAT22((short)*(undefined4 *)(param_1 + 0x124),
                                             (short)*(undefined4 *)(param_1 + 0x120))));
    lVar12 = FUN_00eebe4c(&local_d0,*(undefined8 *)(param_1 + 8),&local_c0);
    if (lVar12 != 0) {
      piVar3 = (int *)(lVar12 + 0x28);
      do {
        iVar11 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar23 = *(long **)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (plVar23 == (long *)0x0) {
LAB_011cde7c:
      *(long *)(param_1 + 0x138) = lVar12;
      goto LAB_011cd45c;
    }
    plVar14 = plVar23 + 5;
    do {
      lVar13 = *plVar14;
      iVar11 = (int)lVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar23 + 0x10))();
      goto LAB_011cde7c;
    }
    if ((int)lVar13 != 0) goto LAB_011cde7c;
LAB_011ceac4:
    pcVar17 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar18 = "DecrementReferenceInternal";
    pcVar19 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
    ;
    pcVar20 = "Reference counter underflows.";
LAB_011ce7b0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar17,pcVar18,pcVar19,0x58,pcVar20);
  }
LAB_011cd45c:
  plVar23 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_011ce76c;
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar23;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  lVar13 = (**(code **)(*plVar23 + 0x10))(plVar23,0x15f0,0x10);
  if (lVar13 == 0) {
    lVar12 = *plVar23;
    goto LAB_011cea9c;
  }
  FUN_011d1890();
  *(undefined4 *)(lVar13 + 0x18) = 0x1015f0;
  *(long **)(lVar13 + 8) = plVar23;
  *(long *)(lVar13 + 0x10) = lVar13;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  lVar12 = *(long *)(lVar13 + 0x30);
  if (*(long *)(lVar12 + 0x10) == 0) goto LAB_011ce770;
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar22 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar22 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar22 != 0) {
    if (sVar22 != -1) goto LAB_011cd50c;
LAB_011ce790:
    pcVar17 = "count != 0";
    pcVar18 = "AddReference";
    pcVar19 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
    ;
    pcVar20 = "Reference counter overflows.";
    goto LAB_011ce7b0;
  }
  uVar16 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
  *(undefined8 *)(lVar12 + 8) = uVar16;
  *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
LAB_011cd50c:
  plVar23 = *(long **)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  if (plVar23 != (long *)0x0) {
    lVar12 = plVar23[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar22 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar22 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar23 + 0x50))();
    }
    else if (sVar22 == 0) goto LAB_011cdbcc;
  }
  *(long *)(param_1 + 0x1e8) = lVar13;
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar8 = *(uint *)(param_1 + 0x120);
LAB_011ce46c:
    uVar9 = *(uint *)(param_1 + 0x124);
LAB_011ce470:
    uVar10 = *(uint *)(param_1 + 0x128);
  }
  else {
    uVar8 = FUN_00cf44f4(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70));
    uVar8 = uVar8 & 0xffff;
    if (*(long *)(param_1 + 0x138) == 0) goto LAB_011ce46c;
    uVar9 = FUN_00cf41a8(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70));
    uVar9 = uVar9 & 0xffff;
    if (*(long *)(param_1 + 0x138) == 0) goto LAB_011ce470;
    uVar10 = FUN_00cec030(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70));
    uVar10 = uVar10 & 0xff;
  }
  FUN_011d1028(lVar13,uVar8,uVar9,uVar10);
  lVar12 = param_1 + 0xe8;
  FUN_00c9e664(&local_d0,lVar12);
  if (local_c8 == (long *)0x0) {
    plVar23 = (long *)0x0;
  }
  else {
    plVar23 = (long *)local_c8[9];
  }
  plVar14 = (long *)(**(code **)plVar23[5])(plVar23 + 5);
  if (((*PTR_DAT_047d6520 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar11 != 0)) {
    uVar16 = FUN_0151c130();
    *(undefined8 *)PTR_DAT_047d6528 = uVar16;
    __cxa_guard_release(PTR_DAT_047d6520);
  }
  for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
    if (plVar14 == (long *)PTR_DAT_047d6528) goto LAB_011cd5f4;
  }
  plVar23 = (long *)0x0;
LAB_011cd5f4:
  (**(code **)(*plVar23 + 0x18))(&local_c0,plVar23);
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  plVar14 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    plVar14 = plVar23 + 5;
  }
  if ((long *)local_c0[2] == plVar14) {
    FUN_00cbc6dc(&local_e0,&local_c0);
  }
  plVar23 = local_c0;
  if (local_c0 != (long *)0x0) {
    plVar14 = local_c0 + 3;
    do {
      sVar22 = (short)*plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(short *)plVar14 = sVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar22 == 1) {
      piVar3 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_f0 = (long *)*plVar23;
        FUN_00c44438(lVar13 + 0x8040,&local_f0);
      }
    }
    else if (sVar22 == 0) goto LAB_011cdda0;
  }
  if (local_c8 != (long *)0x0) {
    plVar23 = local_c8 + 5;
    do {
      lVar13 = *plVar23;
      iVar11 = (int)lVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    else if ((int)lVar13 == 0) goto LAB_011ceac4;
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x60))();
  }
  plVar23 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_011ce76c;
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar23;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  lVar15 = (**(code **)(*plVar23 + 0x10))(plVar23,0x1a8,8);
  if (lVar15 != 0) {
    local_c0 = (long *)0x0;
    local_b8 = 0;
    FUN_00ca1a48(&local_c0,&local_e0);
    FUN_011cf9c0(lVar15,&local_c0);
    plVar14 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar2 = local_c0 + 3;
      do {
        sVar22 = (short)*plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(short *)plVar2 = sVar22 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar22 == 1) {
        piVar3 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar11 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_d0 = (long *)*plVar14;
          FUN_00c44438(lVar21 + 0x8040,&local_d0);
        }
      }
      else if (sVar22 == 0) goto LAB_011cdda0;
    }
    *(undefined4 *)(lVar15 + 0x18) = 0x801a8;
    *(long **)(lVar15 + 8) = plVar23;
    *(long *)(lVar15 + 0x10) = lVar15;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    lVar13 = *(long *)(lVar15 + 0x30);
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_011ce770;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar22 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar22 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar22 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar16;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar22 == -1) goto LAB_011ce790;
    plVar23 = *(long **)(param_1 + 0x1f0);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    if (plVar23 != (long *)0x0) {
      lVar13 = plVar23[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar22 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar22 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar22 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar23 + 0x50))();
      }
      else if (sVar22 == 0) goto LAB_011cdbcc;
    }
    *(long *)(param_1 + 0x1f0) = lVar15;
    plVar23 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_011ce76c;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar23;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    lVar15 = (**(code **)(*plVar23 + 0x10))(plVar23,0x3e0,0x10);
    if (lVar15 != 0) {
      FUN_011d0004();
      *(undefined4 *)(lVar15 + 0x18) = 0x1003e0;
      *(long **)(lVar15 + 8) = plVar23;
      *(long *)(lVar15 + 0x10) = lVar15;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      lVar13 = *(long *)(lVar15 + 0x30);
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_011ce770;
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar22 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar22 == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar16;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar22 == -1) goto LAB_011ce790;
      plVar23 = *(long **)(param_1 + 0x1f8);
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      if (plVar23 != (long *)0x0) {
        lVar13 = plVar23[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar22 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar22 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar23 + 0x50))();
        }
        else if (sVar22 == 0) goto LAB_011cdbcc;
      }
      *(long *)(param_1 + 0x1f8) = lVar15;
      local_d0 = (long *)0x0;
      local_c8 = (long *)0x0;
      FUN_00c9e664(&local_100,lVar12);
      if (local_f8 == (long *)0x0) {
        plVar23 = (long *)0x0;
      }
      else {
        plVar23 = (long *)local_f8[9];
      }
      (**(code **)(*plVar23 + 0x18))(&local_c0,plVar23);
      local_f0 = (long *)0x0;
      uStack_e8 = 0;
      plVar14 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        plVar14 = plVar23 + 5;
      }
      if ((long *)local_c0[2] == plVar14) {
        FUN_00c9ea00(&local_f0,&local_c0);
      }
      plVar23 = local_c0;
      if (local_c0 != (long *)0x0) {
        plVar14 = local_c0 + 3;
        do {
          sVar22 = (short)*plVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(short *)plVar14 = sVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar22 == 1) {
          piVar3 = (int *)((long)local_c0 + 0x1c);
          do {
            iVar11 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_58 = *plVar23;
            FUN_00c44438(lVar13 + 0x8040,&local_58);
          }
        }
        else if (sVar22 == 0) goto LAB_011cdda0;
      }
      FUN_00d0a34c(&local_d0,&local_f0);
      plVar23 = local_f0;
      if (local_f0 != (long *)0x0) {
        plVar14 = local_f0 + 3;
        do {
          sVar22 = (short)*plVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(short *)plVar14 = sVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar22 == 1) {
          piVar3 = (int *)((long)local_f0 + 0x1c);
          do {
            iVar11 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_c0 = (long *)*plVar23;
            FUN_00c44438(lVar13 + 0x8040,&local_c0);
          }
        }
        else if (sVar22 == 0) goto LAB_011cdda0;
      }
      if (local_f8 != (long *)0x0) {
        plVar23 = local_f8 + 5;
        do {
          lVar13 = *plVar23;
          iVar11 = (int)lVar13 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *(int *)plVar23 = iVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*local_f8 + 0x10))();
        }
        else if ((int)lVar13 == 0) goto LAB_011ceac4;
      }
      if (local_100 != (long *)0x0) {
        (**(code **)(*local_100 + 0x60))();
      }
      FUN_011d0ac4(*(undefined8 *)(param_1 + 0x1f8),&local_d0);
      plVar23 = local_d0;
      if (local_d0 != (long *)0x0) {
        plVar14 = local_d0 + 3;
        do {
          sVar22 = (short)*plVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(short *)plVar14 = sVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar22 == 1) {
          piVar3 = (int *)((long)local_d0 + 0x1c);
          do {
            iVar11 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_c0 = (long *)*plVar23;
            FUN_00c44438(lVar13 + 0x8040,&local_c0);
          }
        }
        else if (sVar22 == 0) goto LAB_011cdda0;
      }
      plVar23 = *(long **)(param_1 + 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_011ce76c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar23;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      lVar15 = (**(code **)(*plVar23 + 0x10))(plVar23,0x80,8);
      if (lVar15 != 0) {
        FUN_011ceb1c();
        *(undefined4 *)(lVar15 + 0x18) = 0x80080;
        *(long **)(lVar15 + 8) = plVar23;
        *(long *)(lVar15 + 0x10) = lVar15;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        lVar13 = *(long *)(lVar15 + 0x30);
        if (*(long *)(lVar13 + 0x10) == 0) {
LAB_011ce770:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar22 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar22 == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
          *(undefined8 *)(lVar13 + 8) = uVar16;
          *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
        }
        else if (sVar22 == -1) goto LAB_011ce790;
        plVar23 = *(long **)(param_1 + 0x200);
        *(undefined8 *)(param_1 + 0x200) = 0;
        if (plVar23 != (long *)0x0) {
          lVar13 = plVar23[6];
          psVar1 = (short *)(lVar13 + 0x1a);
          do {
            sVar22 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar22 == 1) {
            *(undefined8 *)(lVar13 + 0x10) = 0;
            (**(code **)(*plVar23 + 0x50))();
          }
          else if (sVar22 == 0) {
LAB_011cdbcc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        *(long *)(param_1 + 0x200) = lVar15;
        local_a0 = 0;
        _local_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = (long *)0x0;
        local_b8 = 0;
        FUN_00c9e664(&local_100,lVar12);
        if (local_f8 == (long *)0x0) {
          plVar23 = (long *)0x0;
        }
        else {
          plVar23 = (long *)local_f8[9];
        }
        (**(code **)(*plVar23 + 0x18))(&local_d0,plVar23);
        local_f0 = (long *)0x0;
        uStack_e8 = 0;
        plVar14 = (long *)0x0;
        if (plVar23 != (long *)0x0) {
          plVar14 = plVar23 + 5;
        }
        if ((long *)local_d0[2] == plVar14) {
          FUN_00c9ea00(&local_f0,&local_d0);
        }
        plVar23 = local_d0;
        if (local_d0 != (long *)0x0) {
          plVar14 = local_d0 + 3;
          do {
            sVar22 = (short)*plVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *(short *)plVar14 = sVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar22 == 1) {
            piVar3 = (int *)((long)local_d0 + 0x1c);
            do {
              iVar11 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_58 = *plVar23;
              FUN_00c44438(lVar12 + 0x8040,&local_58);
            }
          }
          else if (sVar22 == 0) goto LAB_011cdda0;
        }
        FUN_00d0a34c(&local_c0,&local_f0);
        plVar23 = local_f0;
        if (local_f0 != (long *)0x0) {
          plVar14 = local_f0 + 3;
          do {
            sVar22 = (short)*plVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *(short *)plVar14 = sVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar22 == 1) {
            piVar3 = (int *)((long)local_f0 + 0x1c);
            do {
              iVar11 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_d0 = (long *)*plVar23;
              FUN_00c44438(lVar12 + 0x8040,&local_d0);
            }
          }
          else if (sVar22 == 0) goto LAB_011cdda0;
        }
        if (local_f8 != (long *)0x0) {
          plVar23 = local_f8 + 5;
          do {
            lVar12 = *plVar23;
            iVar11 = (int)lVar12 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar6) {
              *(int *)plVar23 = iVar11;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 == 0) {
            (**(code **)(*local_f8 + 0x10))();
          }
          else if ((int)lVar12 == 0) goto LAB_011ceac4;
        }
        if (local_100 != (long *)0x0) {
          (**(code **)(*local_100 + 0x60))();
        }
        plVar14 = *(long **)(param_1 + 0x1e8);
        (**(code **)(*plVar14 + 0x18))(&local_d0,plVar14);
        local_f0 = (long *)0x0;
        uStack_e8 = 0;
        plVar23 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          plVar23 = plVar14 + 5;
        }
        if ((long *)local_d0[2] == plVar23) {
          FUN_011d06f4(&local_f0,&local_d0);
        }
        plVar23 = local_d0;
        if (local_d0 != (long *)0x0) {
          plVar14 = local_d0 + 3;
          do {
            sVar22 = (short)*plVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *(short *)plVar14 = sVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar22 == 1) {
            piVar3 = (int *)((long)local_d0 + 0x1c);
            do {
              iVar11 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_100 = (long *)*plVar23;
              FUN_00c44438(lVar12 + 0x8040,&local_100);
            }
          }
          else if (sVar22 == 0) goto LAB_011cdda0;
        }
        FUN_011d0324(&local_b0,&local_f0);
        plVar23 = local_f0;
        if (local_f0 != (long *)0x0) {
          plVar14 = local_f0 + 3;
          do {
            sVar22 = (short)*plVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *(short *)plVar14 = sVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar22 == 1) {
            piVar3 = (int *)((long)local_f0 + 0x1c);
            do {
              iVar11 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_d0 = (long *)*plVar23;
              FUN_00c44438(lVar12 + 0x8040,&local_d0);
            }
          }
          else if (sVar22 == 0) goto LAB_011cdda0;
        }
        plVar14 = *(long **)(param_1 + 0x1f8);
        (**(code **)(*plVar14 + 0x18))(&local_d0,plVar14);
        local_f0 = (long *)0x0;
        uStack_e8 = 0;
        plVar23 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          plVar23 = plVar14 + 5;
        }
        if ((long *)local_d0[2] == plVar23) {
          FUN_00e3369c(&local_f0,&local_d0);
        }
        plVar23 = local_d0;
        if (local_d0 != (long *)0x0) {
          plVar14 = local_d0 + 3;
          do {
            sVar22 = (short)*plVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *(short *)plVar14 = sVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar22 == 1) {
            piVar3 = (int *)((long)local_d0 + 0x1c);
            do {
              iVar11 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_100 = (long *)*plVar23;
              FUN_00c44438(lVar12 + 0x8040,&local_100);
            }
          }
          else if (sVar22 == 0) goto LAB_011cdda0;
        }
        FUN_011cfc34(&local_a0,&local_f0);
        plVar23 = local_f0;
        if (local_f0 != (long *)0x0) {
          plVar14 = local_f0 + 3;
          do {
            sVar22 = (short)*plVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *(short *)plVar14 = sVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar22 == 1) {
            piVar3 = (int *)((long)local_f0 + 0x1c);
            do {
              iVar11 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_d0 = (long *)*plVar23;
              FUN_00c44438(lVar12 + 0x8040,&local_d0);
            }
          }
          else if (sVar22 == 0) goto LAB_011cdda0;
        }
        FUN_011cec40(*(undefined8 *)(param_1 + 0x200),&local_c0);
        FUN_011cf4d8(&local_c0);
        if (((*PTR_DAT_047d91f8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d91f8), iVar11 != 0)) {
          FUN_00100190(&LAB_00aa89a4,PTR_DAT_047d9200,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d91f8);
        }
        lVar12 = *(long *)PTR_DAT_047d9200;
        *(long *)PTR_DAT_047d9208 = lVar12;
        lVar12 = *(long *)(lVar12 + 0x50);
        if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
          psVar1 = (short *)(lVar12 + 0x1a);
          sVar22 = *(short *)(lVar12 + 0x1a);
LAB_011ce64c:
          sVar4 = *psVar1;
          if (sVar4 == sVar22) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar22 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_011ce670;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_011ce670:
            bVar6 = false;
          }
          if (!bVar6) goto code_r0x011ce678;
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 != 0) {
            plVar23 = (long *)(lVar12 + -0x28);
            if (*(long *)(param_1 + 0x138) == 0) {
              uVar8 = *(uint *)(param_1 + 0x120);
LAB_011ceb10:
              uVar9 = *(uint *)(param_1 + 0x124);
LAB_011ceb14:
              uVar10 = *(uint *)(param_1 + 0x128);
            }
            else {
              uVar8 = FUN_00cf44f4(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70));
              uVar8 = uVar8 & 0xffff;
              if (*(long *)(param_1 + 0x138) == 0) goto LAB_011ceb10;
              uVar9 = FUN_00cf41a8(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70));
              uVar9 = uVar9 & 0xffff;
              if (*(long *)(param_1 + 0x138) == 0) goto LAB_011ceb14;
              uVar10 = FUN_00cec030(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70));
              uVar10 = uVar10 & 0xff;
            }
            FUN_01acb394(&local_c0,plVar23,uVar8,uVar9,uVar10);
            *(undefined8 *)(param_1 + 0x268) = _local_98;
            *(undefined8 *)(param_1 + 0x260) = local_a0;
            FUN_01acb394(&local_c0,plVar23,uVar8,uVar9,uVar10);
            *(uint *)(param_1 + 0x270) = CONCAT22(uStack_6a,CONCAT11(uStack_6b,local_6c));
            FUN_01acb394(&local_c0,plVar23,uVar8,uVar9,uVar10);
            *(float *)(param_1 + 0x274) =
                 local_c0._4_4_ + *(float *)(param_1 + 0x270) + *(float *)(param_1 + 0x270);
            lVar12 = *(long *)(lVar12 + 8);
            psVar1 = (short *)(lVar12 + 0x1a);
            do {
              sVar22 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar22 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar22 == 1) {
              *(undefined8 *)(lVar12 + 0x10) = 0;
              (**(code **)(*plVar23 + 0x50))(plVar23);
            }
            else if (sVar22 == 0) goto LAB_011cdbcc;
          }
        }
LAB_011cdb80:
        puVar7 = local_e0;
        if (local_e0 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_e0 + 3);
          do {
            sVar22 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar22 == 1) {
            piVar3 = (int *)((long)local_e0 + 0x1c);
            do {
              iVar11 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_c0 = (long *)*puVar7;
              FUN_00c44438(lVar12 + 0x8040,&local_c0);
            }
          }
          else if (sVar22 == 0) {
LAB_011cdda0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        return 1;
      }
    }
  }
  lVar12 = *plVar23;
LAB_011cea9c:
  (**(code **)(lVar12 + 0xe8))(plVar23);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("ptr","Create",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
             ,0x40);
code_r0x011ce678:
  sVar22 = sVar4;
  if (sVar4 == 0) goto LAB_011cdb80;
  goto LAB_011ce64c;
}


