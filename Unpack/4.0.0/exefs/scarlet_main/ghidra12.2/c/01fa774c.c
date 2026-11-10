/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa774c; name: FUN_01fa774c
 */


void FUN_01fa774c(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_28;
  
  puVar11 = (undefined8 *)param_1[0x2d3];
  *param_1 = &PTR_FUN_045691b8;
  param_1[4] = &PTR_LAB_045691f0;
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
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
      piVar2 = (int *)((long)puVar11 + 0x1c);
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
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_01fa7af8;
  }
  puVar11 = (undefined8 *)param_1[0x2d1];
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
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
      piVar2 = (int *)((long)puVar11 + 0x1c);
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
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_01fa7af8;
  }
  puVar11 = (undefined8 *)param_1[0x2cf];
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
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
      piVar2 = (int *)((long)puVar11 + 0x1c);
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
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_01fa7af8;
  }
  puVar11 = (undefined8 *)param_1[0x2cd];
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
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
      piVar2 = (int *)((long)puVar11 + 0x1c);
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
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_01fa7af8;
  }
  plVar7 = (long *)param_1[0x2cb];
  if (plVar7 != (long *)0x0) {
    lVar12 = plVar7[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_01fa7b94;
  }
  plVar7 = (long *)param_1[0x2ca];
  if (plVar7 != (long *)0x0) {
    lVar12 = plVar7[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_01fa7b94;
  }
  plVar7 = (long *)param_1[0x2c9];
  if (plVar7 != (long *)0x0) {
    lVar12 = plVar7[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_01fa7b94:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_01fa7f2c(param_1 + 700);
  FUN_01fa7f2c(param_1 + 0x2af);
  FUN_01fa7f2c(param_1 + 0x2a2);
  FUN_01fa7f2c(param_1 + 0x295);
  FUN_01fa7f2c(param_1 + 0x288);
  FUN_01fa7f2c(param_1 + 0x27b);
  FUN_01fa7f2c(param_1 + 0x26e);
  FUN_01fa7f2c(param_1 + 0x261);
  FUN_01fa7f2c(param_1 + 0x254);
  FUN_01fa7f2c(param_1 + 0x247);
  FUN_01fa7f2c(param_1 + 0x23a);
  FUN_01fa7f2c(param_1 + 0x22d);
  FUN_01fa7f2c(param_1 + 0x220);
  FUN_01fa7f2c(param_1 + 0x213);
  FUN_01fa7f2c(param_1 + 0x206);
  FUN_01fa7f2c(param_1 + 0x1f9);
  FUN_01fa7f2c(param_1 + 0x1ec);
  FUN_01fa7f2c(param_1 + 0x1df);
  FUN_01fa7f2c(param_1 + 0x1d2);
  FUN_01fa7f2c(param_1 + 0x1c5);
  FUN_01fa7f2c(param_1 + 0x1b8);
  FUN_01fa7f2c(param_1 + 0x1ab);
  FUN_01fa7f2c(param_1 + 0x19e);
  FUN_01fa804c(param_1 + 0x197);
  FUN_01fa804c(param_1 + 400);
  FUN_01fa804c(param_1 + 0x189);
  FUN_01fa804c(param_1 + 0x182);
  FUN_01fa804c(param_1 + 0x17b);
  FUN_01fa804c(param_1 + 0x174);
  FUN_01fa804c(param_1 + 0x16d);
  FUN_01fa804c(param_1 + 0x166);
  FUN_01fa804c(param_1 + 0x15f);
  FUN_01fa804c(param_1 + 0x158);
  FUN_01fa804c(param_1 + 0x151);
  FUN_01fa804c(param_1 + 0x14a);
  FUN_01fa804c(param_1 + 0x143);
  FUN_01fa804c(param_1 + 0x13c);
  FUN_01fa804c(param_1 + 0x135);
  FUN_01fa804c(param_1 + 0x12e);
  FUN_01fa804c(param_1 + 0x127);
  FUN_01fa804c(param_1 + 0x120);
  FUN_01fa804c(param_1 + 0x119);
  FUN_01fa804c(param_1 + 0x112);
  FUN_01fa804c(param_1 + 0x10b);
  FUN_01fa804c(param_1 + 0x104);
  FUN_01fa804c(param_1 + 0xfd);
  FUN_01fa81b0(param_1 + 0xfc);
  plVar7 = (long *)param_1[0xf4];
  while (plVar7 != (long *)0x0) {
    plVar13 = (long *)param_1[0xf5];
    plVar14 = (long *)*plVar7;
    uVar8 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar8 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar7,0x28,4);
      plVar7 = plVar14;
    }
    else {
      FUN_00c48fe8(plVar13,plVar7,0x28,4);
      plVar7 = plVar14;
    }
  }
  lVar12 = param_1[0xee];
  param_1[0xee] = 0;
  if (lVar12 != 0) {
    lVar10 = param_1[0xef];
    plVar7 = (long *)param_1[0xf0];
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar12,lVar10 << 3,4);
    }
    else {
      FUN_00c48fe8(plVar7,lVar12,lVar10 << 3,4);
    }
  }
  puVar11 = (undefined8 *)param_1[0xec];
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
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
      piVar2 = (int *)((long)puVar11 + 0x1c);
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
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) {
LAB_01fa7af8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


