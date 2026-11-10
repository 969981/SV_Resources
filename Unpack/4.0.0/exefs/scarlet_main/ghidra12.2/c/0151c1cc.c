/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151c1cc; name: FUN_0151c1cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0151c1cc(long param_1)

{
  LightEventType *pLVar1;
  short *psVar2;
  int *piVar3;
  undefined2 uVar4;
  short sVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  bool bVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  FUN_00ca1a48(&local_e8,param_1 + 0x120);
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  FUN_00ca1a48(&local_c8,&local_e8);
  local_90 = (long *)0xe7d5621586e83d61;
  local_88 = (long *)0x3c850c2;
  local_80 = 6;
  local_78 = (long *)0x0;
  if ((local_c8 != (undefined8 *)0x0) && (*(short *)((long)local_c8 + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_c8 + 0x1a);
    sVar12 = *(short *)((long)local_c8 + 0x1a);
LAB_0151d044:
    sVar5 = *psVar2;
    if (sVar5 == sVar12) {
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_0151d068;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0151d068:
      bVar15 = false;
    }
    if (!bVar15) goto code_r0x0151d070;
    lVar10 = local_c8[2];
    if (lVar10 != 0) {
      local_d8 = *(undefined8 **)(lVar10 + 0x438);
      plVar13 = (long *)(lVar10 + -0x28);
      if (local_d8 != (undefined8 *)0x0) {
        FUN_00d2bee4(&local_70,plVar13);
        FUN_00de1c30(&local_a8,local_70,&local_90,&local_d8);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x18))();
        }
        lVar16 = CONCAT44(uStack_a4,local_a8);
        if (lVar16 != 0) {
          if ((local_c8 == (undefined8 *)0x0) || (*(short *)((long)local_c8 + 0x1a) == 0))
          goto LAB_0151d120;
          psVar2 = (short *)((long)local_c8 + 0x1a);
          sVar12 = *(short *)((long)local_c8 + 0x1a);
          goto LAB_0151d5bc;
        }
      }
      lVar10 = *(long *)(lVar10 + 8);
      psVar2 = (short *)(lVar10 + 0x1a);
      do {
        sVar12 = *psVar2;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar15) {
          *psVar2 = sVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar12 == 0) goto LAB_0151cbe8;
    }
  }
LAB_0151c240:
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  goto LAB_0151c244;
code_r0x0151d070:
  sVar12 = sVar5;
  if (sVar5 == 0) goto LAB_0151c240;
  goto LAB_0151d044;
LAB_0151d5bc:
  sVar5 = *psVar2;
  if (sVar5 == sVar12) {
    cVar6 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar15) {
      *psVar2 = sVar12 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_0151d5e0;
    bVar15 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0151d5e0:
    bVar15 = false;
  }
  if (!bVar15) goto code_r0x0151d5e8;
  lVar17 = local_c8[2];
  if (lVar17 != 0) {
    plVar14 = (long *)(lVar17 + -0x28);
    FUN_00dfba48(lVar16,plVar14);
    lVar16 = *(long *)(lVar17 + 8);
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar12 == 0) goto LAB_0151cbe8;
    goto LAB_0151d128;
  }
  goto LAB_0151d120;
code_r0x0151d5e8:
  sVar12 = sVar5;
  if (sVar5 == 0) goto LAB_0151d120;
  goto LAB_0151d5bc;
code_r0x0151d0b8:
  sVar12 = sVar5;
  if (sVar5 == 0) goto LAB_0151c25c;
  goto LAB_0151d08c;
code_r0x0151c3d4:
  cVar6 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar15) {
    *plVar18 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0151c3dc;
  goto LAB_0151c3cc;
code_r0x0151c484:
  cVar6 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar15) {
    *plVar14 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0151c48c;
  goto LAB_0151c47c;
LAB_0151d120:
  FUN_00dfba48(lVar16,0);
LAB_0151d128:
  if ((local_c8 == (undefined8 *)0x0) || (*(short *)((long)local_c8 + 0x1a) == 0)) {
    plVar14 = (long *)0x0;
  }
  else {
    psVar2 = (short *)((long)local_c8 + 0x1a);
    sVar12 = *(short *)((long)local_c8 + 0x1a);
    do {
      sVar5 = *psVar2;
      if (sVar5 == sVar12) {
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar15) {
          *psVar2 = sVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_0151d628;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0151d628:
        bVar15 = false;
      }
      if (bVar15) {
        plVar14 = (long *)0x0;
        if (local_c8[2] != 0) {
          plVar14 = (long *)(local_c8[2] + -0x28);
        }
        break;
      }
      plVar14 = (long *)0x0;
      sVar12 = sVar5;
    } while (sVar5 != 0);
  }
  plVar11 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar11 = plVar14 + 0x1f;
  }
  FUN_00df6ee8(CONCAT44(uStack_a4,local_a8),plVar11);
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar12 == 0) goto LAB_0151cbe8;
  }
  plVar11 = (long *)CONCAT44(uStack_a4,local_a8);
  (**(code **)(*plVar11 + 0x18))(&local_70,plVar11);
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  plVar14 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar14 = plVar11 + 5;
  }
  if ((long *)local_70[2] == plVar14) {
    FUN_00cbc6dc(&local_b8,&local_70);
  }
  plVar14 = local_70;
  if (local_70 != (long *)0x0) {
    plVar11 = local_70 + 3;
    do {
      sVar12 = (short)*plVar11;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar15) {
        *(short *)plVar11 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_70 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar15) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_a0 = (undefined8 *)*plVar14;
        FUN_00c44438(lVar16 + 0x8040,&local_a0);
      }
    }
    else if (sVar12 == 0) goto LAB_0151cb90;
  }
  plVar14 = (long *)CONCAT44(uStack_a4,local_a8);
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar12 == 0) goto LAB_0151cbe8;
  }
  lVar10 = *(long *)(lVar10 + 8);
  psVar2 = (short *)(lVar10 + 0x1a);
  do {
    sVar12 = *psVar2;
    cVar6 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar15) {
      *psVar2 = sVar12 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar13 + 0x50))(plVar13);
  }
  else if (sVar12 == 0) goto LAB_0151cbe8;
LAB_0151c244:
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  puVar8 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_c8 + 3);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar15) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_90 = (long *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_90);
      }
    }
    else if (sVar12 == 0) goto LAB_0151cb90;
  }
  if ((local_b8 != (undefined8 *)0x0) && (*(short *)((long)local_b8 + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_b8 + 0x1a);
    sVar12 = *(short *)((long)local_b8 + 0x1a);
LAB_0151d08c:
    sVar5 = *psVar2;
    if (sVar5 == sVar12) {
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_0151d0b0;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0151d0b0:
      bVar15 = false;
    }
    uVar7 = _DAT_03caa8e0;
    if (!bVar15) goto code_r0x0151d0b8;
    lVar10 = local_b8[2];
    if (lVar10 != 0) {
      plVar13 = (long *)(lVar10 + -0x28);
      *(undefined8 *)(lVar10 + 0xa0) = _UNK_03caa8e8;
      *(undefined8 *)(lVar10 + 0x98) = uVar7;
      if (*(char *)(lVar10 + 0xcc) == '\0') {
        *(undefined1 *)(lVar10 + 0xcc) = 1;
        (**(code **)(*plVar13 + 0x78))(plVar13);
      }
      lVar10 = *(long *)(lVar10 + 8);
      psVar2 = (short *)(lVar10 + 0x1a);
      do {
        sVar12 = *psVar2;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar15) {
          *psVar2 = sVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar12 == 0) goto LAB_0151cbe8;
    }
  }
LAB_0151c25c:
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  FUN_00ca1a48(&local_d8,&local_b8);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_00ca1a48(&local_a0,&local_d8);
  FUN_0151d6e4(&local_70,&local_a0);
  puVar8 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a0 + 3);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar15) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_90 = (long *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_90);
      }
    }
    else if (sVar12 == 0) goto LAB_0151cb90;
  }
  plVar13 = local_68;
  if ((char)local_70 != '\0') {
    plVar14 = (long *)local_68[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar14;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar11 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x400,0x10);
    if (plVar11 == (long *)0x0) {
      (**(code **)(*plVar14 + 0xe8))(plVar14);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    local_90 = (long *)0x962e6af4450a1d9d;
    local_88 = (long *)0x3be29d9;
    local_80 = 0xe;
    local_78 = (long *)0x0;
    FUN_0151e130(plVar11,&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    *(undefined4 *)(plVar11 + 3) = 0x100400;
    plVar11[1] = (long)plVar14;
    plVar11[2] = (long)plVar11;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    (**(code **)(*plVar11 + 0x58))(plVar11);
    plVar14 = plVar11 + 4;
    (**(code **)(*plVar14 + 0xe8))(plVar14,plVar13);
    (**(code **)(*plVar14 + 0x68))(plVar14);
    local_90 = plVar11;
    FUN_00df8c30(plVar13 + 0x21,&local_90);
    if (local_90 != (long *)0x0) {
      lVar10 = local_90[0x13];
      psVar2 = (short *)(lVar10 + 0x1a);
      do {
        sVar12 = *psVar2;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar15) {
          *psVar2 = sVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_0151cbe8;
    }
    (**(code **)(*plVar13 + 0x100))(plVar13,plVar14);
    plVar18 = plVar13 + 0x88;
    lVar16 = *plVar18;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar16) {
      lVar10 = nn::os::GetCurrentThread();
LAB_0151c3cc:
      if (*plVar18 == 0) goto code_r0x0151c3d4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x89));
      do {
        if (*plVar18 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x89));
            while (*plVar18 == 0) {
              cVar6 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar15) {
                *plVar18 = lVar10;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_0151c3dc;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar15) {
          *plVar18 = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_0151c3dc:
      bVar15 = false;
      goto LAB_0151c3e0;
    }
    plVar18 = (long *)0x0;
    bVar15 = true;
LAB_0151c3e0:
    if ((*(byte *)(plVar13 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(plVar13,0,0);
    }
    else {
      (**(code **)(*plVar14 + 0xf8))(plVar14);
    }
    if (!bVar15) {
      *plVar18 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
    }
    plVar14 = (long *)plVar11[0x21];
    plVar11[0x1e] = -0x69d1950bbaf5e263;
    plVar11[0x1f] = (long)"DecalComponent";
    plVar11[0x20] = 0xe;
    plVar11[0x21] = 0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    local_a8 = 0;
    local_90 = (long *)0xbf953734fb31f4b1;
    local_88 = (long *)0x3c98e48;
    local_80 = 0x41;
    local_78 = (long *)0x0;
    FUN_014171c4(plVar11,&local_a8,&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    local_90 = (long *)((ulong)local_90 & 0xffffffff00000000);
    FUN_01367258(plVar11,&local_90,0);
    plVar14 = plVar11 + 0x30;
    lVar10 = nn::os::GetCurrentThread();
LAB_0151c47c:
    if (*plVar14 == 0) goto code_r0x0151c484;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x31));
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x31));
          while (*plVar14 == 0) {
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar15) {
              *plVar14 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0151c48c;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0151c48c:
    lVar10 = _DAT_03caaaa0;
    pLVar1 = (LightEventType *)(plVar11 + 0x31);
    plVar11[0x3f] = _UNK_03caaaa8;
    plVar11[0x3e] = lVar10;
    plVar11[0x30] = 0;
    nn::os::SignalLightEvent(pLVar1);
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar14 == 0) {
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_0151c4c4;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar14 == 0) {
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar15) {
              *plVar14 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0151c4c4;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0151c4c4:
    auVar19 = NEON_fmov(0x3f800000,4);
    plVar11[0x6f] = auVar19._8_8_;
    plVar11[0x6e] = auVar19._0_8_;
    plVar11[0x30] = 0;
    nn::os::SignalLightEvent(pLVar1);
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar14 == 0) {
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_0151c4f4;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar14 == 0) {
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar15) {
              *plVar14 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0151c4f4;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0151c4f4:
    FUN_00eacd1c(plVar11[0x25],0,1,4);
    plVar11[0x30] = 0;
    nn::os::SignalLightEvent(pLVar1);
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar14 == 0) {
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_0151c530;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar14 == 0) {
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar15) {
              *plVar14 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0151c530;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0151c530:
    *(undefined1 *)(plVar11 + 0x2f) = 0;
    plVar11[0x30] = 0;
    nn::os::SignalLightEvent(pLVar1);
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar14 == 0) {
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_0151c55c;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar14 == 0) {
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar15) {
              *plVar14 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0151c55c;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0151c55c:
    plVar11[0x79] = SUB168(*(undefined1 (*) [16])(plVar11 + 0x78),8);
    plVar11[0x78] = SUB168(*(undefined1 (*) [16])(plVar11 + 0x78),4) << 0x20;
    plVar11[0x30] = 0;
    nn::os::SignalLightEvent(pLVar1);
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar14 == 0) {
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_0151c594;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar14 == 0) {
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar15) {
              *plVar14 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0151c594;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0151c594:
    *(int *)(plVar11 + 0x79) = (int)plVar11[0x79];
    *(undefined4 *)((long)plVar11 + 0x3cc) = *(undefined4 *)((long)plVar11 + 0x3cc);
    plVar11[0x78] = (ulong)*(uint *)(plVar11 + 0x78);
    plVar11[0x30] = 0;
    nn::os::SignalLightEvent(pLVar1);
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar14 == 0) {
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_0151c5cc;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar14 == 0) {
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar15) {
              *plVar14 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0151c5cc;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0151c5cc:
    *(undefined4 *)(plVar11 + 0x79) = 0;
    *(undefined4 *)((long)plVar11 + 0x3cc) = *(undefined4 *)((long)plVar11 + 0x3cc);
    *(int *)(plVar11 + 0x78) = (int)plVar11[0x78];
    *(undefined4 *)((long)plVar11 + 0x3c4) = *(undefined4 *)((long)plVar11 + 0x3c4);
    plVar11[0x30] = 0;
    nn::os::SignalLightEvent(pLVar1);
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar14 == 0) {
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_0151c604;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar14 == 0) {
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar15) {
              *plVar14 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0151c604;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0151c604:
    plVar11[0x79] = (ulong)*(uint *)(plVar11 + 0x79);
    *(int *)(plVar11 + 0x78) = (int)plVar11[0x78];
    *(undefined4 *)((long)plVar11 + 0x3c4) = *(undefined4 *)((long)plVar11 + 0x3c4);
    plVar11[0x30] = 0;
    nn::os::SignalLightEvent(pLVar1);
    FUN_0151d930(plVar11,1);
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar14 == 0) {
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_0151c648;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar14 == 0) {
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar15) {
              *plVar14 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0151c648;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0151c648:
    *(undefined4 *)(plVar11 + 0x7c) = 0;
    plVar11[0x30] = 0;
    nn::os::SignalLightEvent(pLVar1);
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar14 == 0) {
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_0151c674;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar14 == 0) {
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar15) {
              *plVar14 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0151c674;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0151c674:
    lVar10 = _DAT_03caa5e0;
    plVar11[0x7b] = _UNK_03caa5e8;
    plVar11[0x7a] = lVar10;
    plVar11[0x30] = 0;
    nn::os::SignalLightEvent(pLVar1);
  }
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[6];
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar12 == 0) goto LAB_0151cbe8;
  }
  puVar8 = local_d8;
  if (local_d8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_d8 + 3);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_d8 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar15) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_90 = (long *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_90);
      }
    }
    else if (sVar12 == 0) goto LAB_0151cb90;
  }
  puVar8 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_b8 + 3);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_b8 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar15) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_90 = (long *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_90);
      }
    }
    else if (sVar12 == 0) goto LAB_0151cb90;
  }
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_00ca1a48(&local_a0,&local_e8);
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  FUN_00ca1a48(&local_70,&local_a0);
  FUN_0151d6e4(&local_90,&local_70);
  plVar13 = local_70;
  if (local_70 != (long *)0x0) {
    plVar14 = local_70 + 3;
    do {
      sVar12 = (short)*plVar14;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(short *)plVar14 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_70 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar15) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_b8 = (undefined8 *)*plVar13;
        FUN_00c44438(lVar10 + 0x8040,&local_b8);
      }
    }
    else if (sVar12 == 0) goto LAB_0151cb90;
  }
  plVar13 = local_88;
  if ((char)local_90 == '\0') {
    if (local_88 != (long *)0x0) goto LAB_0151c6f0;
  }
  else {
    FUN_010f5c50(local_88,local_88[1]);
LAB_0151c6f0:
    lVar10 = plVar13[6];
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar12 == 0) {
LAB_0151cbe8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar8 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a0 + 3);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar15) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_90 = (long *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_90);
      }
    }
    else if (sVar12 == 0) goto LAB_0151cb90;
  }
  puVar8 = local_e8;
  if (local_e8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_e8 + 3);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_e8 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar15) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_90 = (long *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_90);
      }
    }
    else if (sVar12 == 0) goto LAB_0151cb90;
  }
  if ((*(char *)(param_1 + 0x58) != -0x7e) || (*(char *)(param_1 + 0x59) != -0x7e)) {
    uVar4 = *(undefined2 *)(param_1 + 0x58);
    plVar13 = (long *)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0x58) = 0x8282;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(param_1 + 0x48),plVar13);
    }
    (**(code **)(*plVar13 + 0x20))(plVar13,uVar4);
  }
  local_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  FUN_00ca1a48(&local_f8,param_1 + 0x120);
  FUN_0151db38(&local_f8);
  puVar8 = local_f8;
  if (local_f8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_f8 + 3);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_f8 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar15) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_90 = (long *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_90);
      }
    }
    else if (sVar12 == 0) {
LAB_0151cb90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return 1;
}


