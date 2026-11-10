/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0132b848; name: FUN_0132b848
 */


/* WARNING: Removing unreachable block (ram,0x0132baa4) */
/* WARNING: Removing unreachable block (ram,0x0132baac) */
/* WARNING: Removing unreachable block (ram,0x0132bab4) */
/* WARNING: Removing unreachable block (ram,0x0132babc) */
/* WARNING: Removing unreachable block (ram,0x0132bc78) */
/* WARNING: Removing unreachable block (ram,0x0132bac4) */

void FUN_0132b848(long *param_1)

{
  short *psVar1;
  undefined **ppuVar2;
  long *plVar3;
  int *piVar4;
  undefined **ppuVar5;
  char *__s1;
  short sVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  long *local_e8;
  undefined1 local_dc [4];
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined2 local_bc [2];
  undefined **local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78 [2];
  long local_68;
  
  lVar17 = param_1[8];
  plVar18 = *(long **)(lVar17 + 0x90);
  if (plVar18 != (long *)0x0) {
    do {
      local_88 = 0;
      uStack_80 = 0;
      local_d8 = (undefined8 *)CONCAT62(local_d8._2_6_,(short)plVar18[2]);
      local_98 = (long *)0x0;
      local_90 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_b8 = &PTR_FUN_04544fd0;
      uVar11 = FUN_0120bf7c(param_1 + 0x11,&local_d8);
      FUN_0118779c(uVar11,&local_b8);
      plVar12 = (long *)FUN_0120a430(param_1 + 0x1e,&local_d8);
      plVar13 = (long *)*plVar12;
      *plVar12 = 0;
      if (plVar13 != (long *)0x0) {
        lVar17 = plVar13[6];
        psVar1 = (short *)(lVar17 + 0x1a);
        do {
          sVar6 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          *(undefined8 *)(lVar17 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))();
        }
        else if (sVar6 == 0) goto LAB_0132c47c;
      }
      plVar12 = (long *)FUN_01209d1c(param_1 + 0x2b,&local_d8);
      plVar13 = (long *)*plVar12;
      *plVar12 = 0;
      if (plVar13 != (long *)0x0) {
        lVar17 = plVar13[6];
        psVar1 = (short *)(lVar17 + 0x1a);
        do {
          sVar6 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          *(undefined8 *)(lVar17 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))();
        }
        else if (sVar6 == 0) goto LAB_0132c47c;
      }
      FUN_01185de0(&local_b8);
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
    lVar17 = param_1[8];
    plVar18 = *(long **)(lVar17 + 0x90);
    if (plVar18 != (long *)0x0) {
      do {
        FUN_0105016c(&local_b8,plVar18 + 3);
        local_bc[0] = (undefined2)plVar18[2];
        lVar17 = FUN_0120bf7c(param_1 + 0x11,local_bc);
        uVar14 = FUN_01200570(lVar17,1,&local_b8,0,0);
        if ((uVar14 & 1) == 0) {
          plVar12 = (long *)0x0;
        }
        else {
          plVar12 = *(long **)(lVar17 + 0x20);
          if (plVar12 != (long *)0x0) {
            lVar17 = plVar12[6];
            if (*(long *)(lVar17 + 0x10) == 0) goto LAB_0132c65c;
            psVar1 = (short *)(lVar17 + 0x1a);
            do {
              sVar6 = *psVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar6 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar6 == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
              *(undefined8 *)(lVar17 + 8) = uVar11;
              *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
            }
            else if (sVar6 == -1) goto LAB_0132c67c;
          }
        }
        (**(code **)(*param_1 + 0x18))(local_78,param_1);
        local_d8 = (undefined8 *)0x0;
        uStack_d0 = 0;
        if ((long *)local_78[0][2] == param_1 + 5) {
          FUN_01e24d3c(&local_d8,local_78);
        }
        plVar13 = local_78[0];
        if (local_78[0] != (long *)0x0) {
          plVar15 = local_78[0] + 3;
          do {
            sVar6 = (short)*plVar15;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar8) {
              *(short *)plVar15 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            piVar4 = (int *)((long)local_78[0] + 0x1c);
            do {
              iVar10 = *piVar4;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar8) {
                *piVar4 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar17 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar17;
              local_68 = *plVar13;
              FUN_00c44438(lVar17 + 0x8040,&local_68);
            }
          }
          else if (sVar6 == 0) goto LAB_0132c634;
        }
        local_c8 = local_bc[0];
        FUN_01272a6c(&local_68,&local_d8,plVar12);
        plVar13 = (long *)FUN_01209d1c(param_1 + 0x2b,local_bc);
        plVar15 = (long *)*plVar13;
        *plVar13 = 0;
        if (plVar15 != (long *)0x0) {
          lVar17 = plVar15[6];
          psVar1 = (short *)(lVar17 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar17 + 0x10) = 0;
            (**(code **)(*plVar15 + 0x50))();
          }
          else if (sVar6 == 0) goto LAB_0132c47c;
        }
        puVar9 = local_d8;
        *plVar13 = local_68;
        local_68 = 0;
        if (local_d8 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_d8 + 3);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            piVar4 = (int *)((long)local_d8 + 0x1c);
            do {
              iVar10 = *piVar4;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar8) {
                *piVar4 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar17 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar17;
              local_78[0] = (long *)*puVar9;
              FUN_00c44438(lVar17 + 0x8040,local_78);
            }
          }
          else if (sVar6 == 0) goto LAB_0132c634;
        }
        if (plVar12 != (long *)0x0) {
          lVar17 = plVar12[6];
          psVar1 = (short *)(lVar17 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar17 + 0x10) = 0;
            (**(code **)(*plVar12 + 0x50))(plVar12);
          }
          else if (sVar6 == 0) goto LAB_0132c47c;
        }
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        if (local_b8 != (undefined **)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      lVar17 = param_1[8];
    }
  }
  FUN_0105016c(&local_b8,lVar17 + 0x40);
  uVar14 = FUN_00dc5c18(param_1 + 9,1,&local_b8,0,0);
  if (((uVar14 & 1) != 0) && (plVar18 = (long *)param_1[0xd], plVar18 != (long *)0x0)) {
    lVar17 = plVar18[6];
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_0132c65c;
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar11;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar6 == -1) goto LAB_0132c67c;
    lVar17 = plVar18[6];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar18 + 0x50))(plVar18);
    }
    else if (sVar6 == 0) goto LAB_0132c47c;
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_b8 != (undefined **)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  lVar17 = param_1[8];
  if (**(char **)(lVar17 + 0x28) != '\0') {
    FUN_0105016c(&local_b8,lVar17 + 0x20);
    ppuVar5 = (undefined **)PTR_PTR_047d4508;
    if (local_b8 != (undefined **)0x0) {
      ppuVar5 = local_b8 + 7;
    }
    pcVar16 = strrchr(*ppuVar5,0x2f);
    __s1 = (char *)0x0;
    if (pcVar16 != (char *)0x0) {
      __s1 = pcVar16 + 1;
    }
    iVar10 = strcmp(__s1,"pm0000_00_00.trmmt");
    if ((((iVar10 != 0) && (iVar10 = strcmp(__s1,"pm9999_00_00.trmmt"), iVar10 != 0)) &&
        (uVar14 = FUN_011ac0c0(param_1 + 0x4a,1,&local_b8,0,0), (uVar14 & 1) != 0)) &&
       (plVar18 = (long *)param_1[0x4e], plVar18 != (long *)0x0)) {
      lVar17 = plVar18[6];
      if (*(long *)(lVar17 + 0x10) == 0) goto LAB_0132c65c;
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar6 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar6 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        *(undefined8 *)(lVar17 + 8) = uVar11;
        *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
      }
      else if (sVar6 == -1) goto LAB_0132c67c;
      lVar17 = plVar18[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar6 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar18 + 0x50))(plVar18);
      }
      else if (sVar6 == 0) goto LAB_0132c47c;
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (local_b8 != (undefined **)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    lVar17 = param_1[8];
  }
  FUN_0105016c(&local_b8,lVar17);
  plVar18 = (long *)param_1[0x53];
  param_1[0x53] = 0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  ppuVar5 = local_b8;
  local_b8 = (undefined **)0x0;
  param_1[0x53] = (long)ppuVar5;
  param_1[0x54] = local_b0;
  param_1[0x55] = local_a8;
  param_1[0x56] = local_a0;
  plVar18 = (long *)param_1[0x57];
  param_1[0x57] = 0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  plVar18 = local_98;
  local_98 = (long *)0x0;
  param_1[0x57] = (long)plVar18;
  *(undefined4 *)(param_1 + 0x58) = (undefined4)local_90;
  if (local_b8 != (undefined **)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  uVar14 = FUN_0102bf9c(param_1 + 0x59,1,param_1 + 0x53,0,0);
  if ((uVar14 & 1) == 0) {
    plVar18 = (long *)0x0;
  }
  else {
    plVar18 = (long *)param_1[0x5d];
    if (plVar18 != (long *)0x0) {
      lVar17 = plVar18[6];
      if (*(long *)(lVar17 + 0x10) == 0) {
LAB_0132c65c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar6 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar6 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        *(undefined8 *)(lVar17 + 8) = uVar11;
        *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
      }
      else if (sVar6 == -1) {
LAB_0132c67c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  (**(code **)(*param_1 + 0x18))(&local_b8,param_1);
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  if ((long *)local_b8[2] == param_1 + 5) {
    FUN_01e24d3c(&local_d8,&local_b8);
  }
  ppuVar5 = local_b8;
  if (local_b8 != (undefined **)0x0) {
    ppuVar2 = local_b8 + 3;
    do {
      sVar6 = *(short *)ppuVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar8) {
        *(short *)ppuVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar4 = (int *)((long)local_b8 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_78[0] = (long *)*ppuVar5;
        FUN_00c44438(lVar17 + 0x8040,local_78);
      }
    }
    else if (sVar6 == 0) goto LAB_0132c634;
  }
  FUN_0126dbc4(local_78,&local_d8,plVar18);
  plVar12 = (long *)param_1[0x61];
  param_1[0x61] = 0;
  if (plVar12 != (long *)0x0) {
    lVar17 = plVar12[6];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar6 == 0) goto LAB_0132c47c;
  }
  plVar12 = local_78[0];
  puVar9 = local_d8;
  local_78[0] = (long *)0x0;
  param_1[0x61] = (long)plVar12;
  if (local_d8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d8 + 3);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar4 = (int *)((long)local_d8 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_b8 = (undefined **)*puVar9;
        FUN_00c44438(lVar17 + 0x8040,&local_b8);
      }
    }
    else if (sVar6 == 0) {
LAB_0132c634:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (plVar18 != (long *)0x0) {
    lVar17 = plVar18[6];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar18 + 0x50))(plVar18);
    }
    else if (sVar6 == 0) {
LAB_0132c47c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar18 = *(long **)(param_1[8] + 0xf8);
  if (plVar18 != (long *)0x0) {
    do {
      for (plVar12 = (long *)plVar18[9]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        FUN_0105016c(&local_b8,plVar12 + 3);
        local_bc[0] = (undefined2)plVar18[2];
        local_dc[0] = *(undefined1 *)(plVar12 + 2);
        uVar11 = FUN_011c1df8(param_1 + 0x69,local_bc);
        lVar17 = FUN_012092b8(uVar11,local_dc);
        uVar14 = FUN_00ecde28(lVar17,1,&local_b8,0,0);
        if ((uVar14 & 1) == 0) {
          plVar13 = (long *)0x0;
        }
        else {
          plVar13 = *(long **)(lVar17 + 0x20);
          if (plVar13 != (long *)0x0) {
            lVar17 = plVar13[6];
            if (*(long *)(lVar17 + 0x10) == 0) goto LAB_0132c65c;
            psVar1 = (short *)(lVar17 + 0x1a);
            do {
              sVar6 = *psVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar6 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar6 == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
              *(undefined8 *)(lVar17 + 8) = uVar11;
              *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
            }
            else if (sVar6 == -1) goto LAB_0132c67c;
          }
        }
        (**(code **)(*param_1 + 0x18))(local_78,param_1);
        local_d8 = (undefined8 *)0x0;
        uStack_d0 = 0;
        if ((long *)local_78[0][2] == param_1 + 5) {
          FUN_01e24d3c(&local_d8,local_78);
        }
        plVar15 = local_78[0];
        if (local_78[0] != (long *)0x0) {
          plVar3 = local_78[0] + 3;
          do {
            sVar6 = (short)*plVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar8) {
              *(short *)plVar3 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            piVar4 = (int *)((long)local_78[0] + 0x1c);
            do {
              iVar10 = *piVar4;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar8) {
                *piVar4 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar17 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar17;
              local_68 = *plVar15;
              FUN_00c44438(lVar17 + 0x8040,&local_68);
            }
          }
          else if (sVar6 == 0) goto LAB_0132c634;
        }
        local_c8 = local_bc[0];
        local_c6 = local_dc[0];
        FUN_011a84b8(&local_e8,&local_d8,plVar13);
        if (local_e8 != (long *)0x0) {
          lVar17 = local_e8[6];
          psVar1 = (short *)(lVar17 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar17 + 0x10) = 0;
            (**(code **)(*local_e8 + 0x50))();
          }
          else if (sVar6 == 0) goto LAB_0132c47c;
        }
        puVar9 = local_d8;
        if (local_d8 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_d8 + 3);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            piVar4 = (int *)((long)local_d8 + 0x1c);
            do {
              iVar10 = *piVar4;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar8) {
                *piVar4 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar17 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar17;
              local_78[0] = (long *)*puVar9;
              FUN_00c44438(lVar17 + 0x8040,local_78);
            }
          }
          else if (sVar6 == 0) goto LAB_0132c634;
        }
        if (plVar13 != (long *)0x0) {
          lVar17 = plVar13[6];
          psVar1 = (short *)(lVar17 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar17 + 0x10) = 0;
            (**(code **)(*plVar13 + 0x50))(plVar13);
          }
          else if (sVar6 == 0) goto LAB_0132c47c;
        }
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        if (local_b8 != (undefined **)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
      }
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  return;
}


