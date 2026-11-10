/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a6ab18; name: FUN_00a6ab18
 */


void FUN_00a6ab18(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_8;
  
  *param_1 = &PTR_FUN_045413c8;
  param_1[4] = &PTR_LAB_04541400;
  pcVar8 = (code *)param_1[0x345];
  if (pcVar8 != (code *)0x0) {
    param_1[0x347] = 0;
    param_1[0x346] = 0;
    param_1[0x345] = 0;
    param_1[0x344] = 0;
    (*pcVar8)(param_1 + 0x348);
  }
  pcVar8 = (code *)param_1[0x335];
  if (pcVar8 != (code *)0x0) {
    param_1[0x337] = 0;
    param_1[0x336] = 0;
    param_1[0x335] = 0;
    param_1[0x334] = 0;
    (*pcVar8)(param_1 + 0x338);
  }
  pcVar8 = (code *)param_1[0x325];
  if (pcVar8 != (code *)0x0) {
    param_1[0x327] = 0;
    param_1[0x326] = 0;
    param_1[0x325] = 0;
    param_1[0x324] = 0;
    (*pcVar8)(param_1 + 0x328);
  }
  pcVar8 = (code *)param_1[0x315];
  if (pcVar8 != (code *)0x0) {
    param_1[0x317] = 0;
    param_1[0x316] = 0;
    param_1[0x315] = 0;
    param_1[0x314] = 0;
    (*pcVar8)(param_1 + 0x318);
  }
  pcVar8 = (code *)param_1[0x305];
  if (pcVar8 != (code *)0x0) {
    param_1[0x307] = 0;
    param_1[0x306] = 0;
    param_1[0x305] = 0;
    param_1[0x304] = 0;
    (*pcVar8)(param_1 + 0x308);
  }
  pcVar8 = (code *)param_1[0x2f5];
  if (pcVar8 != (code *)0x0) {
    param_1[0x2f7] = 0;
    param_1[0x2f6] = 0;
    param_1[0x2f5] = 0;
    param_1[0x2f4] = 0;
    (*pcVar8)(param_1 + 0x2f8);
  }
  pcVar8 = (code *)param_1[0x2e5];
  if (pcVar8 != (code *)0x0) {
    param_1[0x2e7] = 0;
    param_1[0x2e6] = 0;
    param_1[0x2e5] = 0;
    param_1[0x2e4] = 0;
    (*pcVar8)(param_1 + 0x2e8);
  }
  plVar7 = (long *)param_1[0x4e];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_00a6bb6c;
  }
  if ((long *)param_1[0x49] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x49] + 0x20))();
  }
  if ((long *)param_1[0x43] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x43] + 0x20))();
  }
  FUN_01993214(param_1 + 0x39);
  plVar7 = (long *)param_1[0x38];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_00a6bb6c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_0149c3a0(param_1 + 0x37);
  FUN_014a2480(param_1 + 0x36);
  FUN_0149c2b0(param_1 + 0x35);
  FUN_0149c1c0(param_1 + 0x34);
  FUN_014a233c(param_1 + 0x2d);
  FUN_014a2414(param_1 + 0x2c);
  FUN_014a23a8(param_1 + 0x2b);
  if ((long *)param_1[0x2a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2a] + 0x60))();
  }
  puVar10 = (undefined8 *)param_1[0x28];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0x26];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0x24];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0x22];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0x1f];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0x1d];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0x1b];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0x19];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0x17];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0x15];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0x13];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0x11];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0xf];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0xd];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[0xb];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[9];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_00a6b67c;
  }
  puVar10 = (undefined8 *)param_1[7];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) {
LAB_00a6b67c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if ((long *)param_1[6] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a6afc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[6] + 0x60))();
  return;
}


