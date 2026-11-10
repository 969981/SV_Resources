/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0d730; name: FUN_01e0d730
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0d730(long param_1,undefined2 param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  long *plVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  short sVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  float fVar20;
  undefined1 *local_360;
  code *local_358;
  undefined1 *local_350;
  undefined1 *puStack_348;
  undefined1 auStack_340 [96];
  undefined8 *local_2e0 [2];
  undefined1 *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  undefined1 *puStack_2b8;
  undefined1 auStack_2b0 [96];
  undefined8 *local_250 [2];
  undefined1 *local_240;
  code *local_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [96];
  undefined8 *local_1c0 [2];
  undefined1 *local_1b0;
  code *local_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 auStack_190 [96];
  undefined8 *local_130 [2];
  undefined8 *local_120;
  char *pcStack_118;
  undefined8 local_110;
  long *local_108;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [104];
  undefined8 *local_78 [3];
  
  FUN_00d6bcfc(&local_120);
  puVar8 = local_120;
  if (local_120 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_120 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_120 + 0x1a);
    sVar16 = *(short *)((long)local_120 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar16) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e0d7bc;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e0d7bc:
        bVar5 = false;
      }
      if (bVar5) {
        plVar18 = (long *)0x0;
        if (local_120[2] != 0) {
          plVar18 = (long *)(local_120[2] + -0x28);
        }
        goto LAB_01e0d7e4;
      }
      sVar16 = sVar3;
    } while (sVar3 != 0);
  }
  plVar18 = (long *)0x0;
LAB_01e0d7e4:
  psVar1 = (short *)(local_120 + 3);
  do {
    sVar16 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar16 == 1) {
    piVar2 = (int *)((long)local_120 + 0x1c);
    do {
      iVar9 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar12 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar12;
      local_2e0[0] = (undefined8 *)*puVar8;
      FUN_00c44438(lVar12 + 0x8040,local_2e0);
    }
  }
  else if (sVar16 == 0) goto LAB_01e0de20;
  if (plVar18 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)FUN_00d63f6c(param_1);
  lVar12 = *plVar10;
  if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar16 = *(short *)(lVar12 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar16) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e0d910;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e0d910:
        bVar5 = false;
      }
      if (bVar5) {
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 != 0) {
          lVar13 = *(long *)(param_1 + 0x80);
          plVar10 = (long *)(lVar12 + -0x28);
          if ((lVar13 == 0) || (*(short *)(lVar13 + 0x1a) == 0)) goto LAB_01e0d938;
          psVar1 = (short *)(lVar13 + 0x1a);
          sVar16 = *(short *)(lVar13 + 0x1a);
          goto LAB_01e0d9c4;
        }
        break;
      }
      sVar16 = sVar3;
    } while (sVar3 != 0);
  }
  goto LAB_01e0d818;
  while (sVar16 = sVar3, sVar3 != 0) {
LAB_01e0d9c4:
    sVar3 = *psVar1;
    if (sVar3 == sVar16) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e0d9e8;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e0d9e8:
      bVar5 = false;
    }
    if (bVar5) {
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 != 0) {
        FUN_00e92dbc(&local_120,plVar10);
        puVar8 = local_120;
        if (local_120 == (undefined8 *)0x0) goto LAB_01e0e22c;
        if (*(short *)((long)local_120 + 0x1a) == 0) goto LAB_01e0da60;
        psVar1 = (short *)((long)local_120 + 0x1a);
        sVar16 = *(short *)((long)local_120 + 0x1a);
        goto LAB_01e0da2c;
      }
      break;
    }
  }
  goto LAB_01e0d938;
  while (sVar16 = sVar3, sVar3 != 0) {
LAB_01e0da2c:
    sVar3 = *psVar1;
    if (sVar3 == sVar16) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e0da50;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e0da50:
      bVar5 = false;
    }
    if (bVar5) {
      plVar17 = (long *)0x0;
      if (local_120[2] != 0) {
        plVar17 = (long *)(local_120[2] + -0x28);
      }
      goto LAB_01e0da78;
    }
  }
LAB_01e0da60:
  plVar17 = (long *)0x0;
LAB_01e0da78:
  psVar1 = (short *)(local_120 + 3);
  do {
    sVar16 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar16 == 1) {
    piVar2 = (int *)((long)local_120 + 0x1c);
    do {
      iVar9 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar15 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar15;
      local_2e0[0] = (undefined8 *)*puVar8;
      FUN_00c44438(lVar15 + 0x8040,local_2e0);
    }
  }
  else if (sVar16 == 0) goto LAB_01e0de20;
  if (plVar17 != (long *)0x0) {
    auVar6 = FUN_01e0e244(plVar10);
    uVar7 = _DAT_03d305a0;
    uVar19 = auVar6._0_8_;
    switch(param_2) {
    case 1:
      FUN_01e16214(plVar17);
      local_110 = 0xc;
      local_108 = (long *)0x0;
      local_100 = &LAB_00a95e34;
      local_f8 = FUN_00a95eb8;
      local_f0 = &LAB_00a95ebc;
      puStack_e8 = &LAB_00a95ec0;
      local_120 = (undefined8 *)0x1e54371f13c1e20b;
      pcStack_118 = "eff_center01";
      FUN_01e16218(local_78,0,uVar7,uVar19,plVar18,0x1a,&local_100,&local_120);
      if (local_78[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_78[0] + 3);
        do {
          sVar16 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar16 == 1) {
          piVar2 = (int *)((long)local_78[0] + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_2e0[0] = (undefined8 *)*local_78[0];
            FUN_00c44438(lVar15 + 0x8040,local_2e0);
          }
        }
        else if (sVar16 == 0) {
LAB_01e0de20:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      pcVar14 = local_f8;
      if (local_f8 != (code *)0x0) {
        puVar11 = auStack_e0;
        local_f0 = (undefined1 *)0x0;
        puStack_e8 = (undefined1 *)0x0;
        local_100 = (undefined1 *)0x0;
        local_f8 = (code *)0x0;
LAB_01e0e154:
        (*pcVar14)(puVar11);
      }
      break;
    case 2:
      local_1b0 = &LAB_00a95e34;
      local_1a8 = FUN_00a95eb8;
      fVar20 = auVar6._4_4_ * 0.0;
      local_1a0 = &LAB_00a95ebc;
      puStack_198 = &LAB_00a95ec0;
      local_120 = (undefined8 *)0x49a7bcfacb27321d;
      pcStack_118 = "eff_headcenter01";
      local_110 = 0x10;
      local_108 = (long *)0x0;
      FUN_01e0e440(local_130,CONCAT44(fVar20,auVar6._0_4_ * 0.0),_DAT_03d305a0,uVar19,fVar20,
                   auVar6._8_4_ * 0.25,plVar18,0x16,&local_1b0,&local_120);
      if (local_130[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_130[0] + 3);
        do {
          sVar16 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar16 == 1) {
          piVar2 = (int *)((long)local_130[0] + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_2e0[0] = (undefined8 *)*local_130[0];
            FUN_00c44438(lVar15 + 0x8040,local_2e0);
          }
        }
        else if (sVar16 == 0) goto LAB_01e0de20;
      }
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      pcVar14 = local_1a8;
      if (local_1a8 != (code *)0x0) {
        puVar11 = auStack_190;
        local_1a0 = (undefined1 *)0x0;
        puStack_198 = (undefined1 *)0x0;
        local_1b0 = (undefined1 *)0x0;
        local_1a8 = (code *)0x0;
        goto LAB_01e0e154;
      }
      break;
    case 3:
      local_110 = 0xc;
      local_108 = (long *)0x0;
      fVar20 = auVar6._4_4_ * -0.5;
      local_240 = &LAB_00a95e34;
      local_238 = FUN_00a95eb8;
      local_230 = &LAB_00a95ebc;
      puStack_228 = &LAB_00a95ec0;
      local_120 = (undefined8 *)0x1e54371f13c1e20b;
      pcStack_118 = "eff_center01";
      FUN_01e16218(local_1c0,CONCAT44(fVar20,auVar6._0_4_ * 0.0),_DAT_03d305a0,uVar19,fVar20,
                   auVar6._8_4_ * 0.0,plVar18,0x19,&local_240,&local_120);
      if (local_1c0[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_1c0[0] + 3);
        do {
          sVar16 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar16 == 1) {
          piVar2 = (int *)((long)local_1c0[0] + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_2e0[0] = (undefined8 *)*local_1c0[0];
            FUN_00c44438(lVar15 + 0x8040,local_2e0);
          }
        }
        else if (sVar16 == 0) goto LAB_01e0de20;
      }
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      pcVar14 = local_238;
      if (local_238 != (code *)0x0) {
        puVar11 = auStack_220;
        local_230 = (undefined1 *)0x0;
        puStack_228 = (undefined1 *)0x0;
        local_240 = (undefined1 *)0x0;
        local_238 = (code *)0x0;
        goto LAB_01e0e154;
      }
      break;
    case 4:
      local_110 = 0xc;
      local_108 = (long *)0x0;
      local_2d0 = &LAB_00a95e34;
      local_2c8 = FUN_00a95eb8;
      local_2c0 = &LAB_00a95ebc;
      puStack_2b8 = &LAB_00a95ec0;
      local_120 = (undefined8 *)0x1e54371f13c1e20b;
      pcStack_118 = "eff_center01";
      FUN_01e16218(local_250,0,_DAT_03d305a0,uVar19,plVar18,0x18,&local_2d0,&local_120);
      if (local_250[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_250[0] + 3);
        do {
          sVar16 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar16 == 1) {
          piVar2 = (int *)((long)local_250[0] + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_2e0[0] = (undefined8 *)*local_250[0];
            FUN_00c44438(lVar15 + 0x8040,local_2e0);
          }
        }
        else if (sVar16 == 0) goto LAB_01e0de20;
      }
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      pcVar14 = local_2c8;
      if (local_2c8 != (code *)0x0) {
        puVar11 = auStack_2b0;
        local_2c0 = (undefined1 *)0x0;
        puStack_2b8 = (undefined1 *)0x0;
        local_2d0 = (undefined1 *)0x0;
        local_2c8 = (code *)0x0;
        goto LAB_01e0e154;
      }
      break;
    case 5:
      local_110 = 0xc;
      local_108 = (long *)0x0;
      local_360 = &LAB_00a95e34;
      local_358 = FUN_00a95eb8;
      local_350 = &LAB_00a95ebc;
      puStack_348 = &LAB_00a95ec0;
      local_120 = (undefined8 *)0x1e54371f13c1e20b;
      pcStack_118 = "eff_center01";
      FUN_01e16218(local_2e0,0,_DAT_03d305a0,uVar19,plVar18,0x17,&local_360,&local_120);
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      pcVar14 = local_358;
      if (local_358 != (code *)0x0) {
        local_350 = (undefined1 *)0x0;
        puStack_348 = (undefined1 *)0x0;
        local_360 = (undefined1 *)0x0;
        local_358 = (code *)0x0;
        (*pcVar14)(auStack_340);
      }
      puVar8 = local_2e0[0];
      if (local_2e0[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_2e0[0] + 3);
        do {
          sVar16 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar16 == 1) {
          piVar2 = (int *)((long)local_2e0[0] + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_120 = (undefined8 *)*puVar8;
            FUN_00c44438(lVar15 + 0x8040,&local_120);
          }
        }
        else if (sVar16 == 0) goto LAB_01e0de20;
      }
    }
    lVar15 = plVar17[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar16 == 0) goto LAB_01e0d83c;
  }
LAB_01e0e22c:
  (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))();
LAB_01e0d938:
  lVar12 = *(long *)(lVar12 + 0x70);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar16 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar16 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*plVar10 + 0x50))(plVar10);
  }
  else if (sVar16 == 0) goto LAB_01e0d83c;
LAB_01e0d818:
  lVar12 = plVar18[6];
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar16 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar16 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*plVar18 + 0x50))(plVar18);
  }
  else if (sVar16 == 0) {
LAB_01e0d83c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


